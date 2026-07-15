#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827CA0C0"))) PPC_WEAK_FUNC(sub_827CA0C0);
PPC_FUNC_IMPL(__imp__sub_827CA0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822efa88
	sub_822EFA88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827ca110
	if (!cr6.eq) goto loc_827CA110;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CA110:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8250c758
	sub_8250C758(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ca134
	if (cr6.eq) goto loc_827CA134;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CA134:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,8200
	ctx.r4.s64 = 8200;
	// bl 0x82491978
	sub_82491978(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x822ef9a8
	sub_822EF9A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,8195
	ctx.r4.s64 = 8195;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824919b0
	sub_824919B0(ctx, base);
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

__attribute__((alias("__imp__sub_827CA180"))) PPC_WEAK_FUNC(sub_827CA180);
PPC_FUNC_IMPL(__imp__sub_827CA180) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x827c8220
	sub_827C8220(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r11,16244
	ctx.r9.s64 = r11.s64 + 16244;
	// addi r10,r10,16224
	ctx.r10.s64 = ctx.r10.s64 + 16224;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// stb r11,288(r31)
	PPC_STORE_U8(r31.u32 + 288, r11.u8);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,28740(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28740);
	// lwz r5,28732(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28732);
	// lwz r4,28720(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28720);
	// bl 0x822f9e48
	sub_822F9E48(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r6,28764(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28764);
	// lwz r5,28744(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28744);
	// lwz r4,28724(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28724);
	// bl 0x822f9e48
	sub_822F9E48(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8248eaf0
	sub_8248EAF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82491af8
	sub_82491AF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CA250"))) PPC_WEAK_FUNC(sub_827CA250);
PPC_FUNC_IMPL(__imp__sub_827CA250) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x827ca2b8
	sub_827CA2B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CA258"))) PPC_WEAK_FUNC(sub_827CA258);
PPC_FUNC_IMPL(__imp__sub_827CA258) {
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
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ca28c
	if (cr6.eq) goto loc_827CA28C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CA28C:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ca29c
	if (cr6.eq) goto loc_827CA29C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CA29C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827c8330
	sub_827C8330(ctx, base);
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

__attribute__((alias("__imp__sub_827CA2B8"))) PPC_WEAK_FUNC(sub_827CA2B8);
PPC_FUNC_IMPL(__imp__sub_827CA2B8) {
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
	// bl 0x827ca258
	sub_827CA258(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ca2e8
	if (cr0.eq) goto loc_827CA2E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827CA2E8:
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

__attribute__((alias("__imp__sub_827CA308"))) PPC_WEAK_FUNC(sub_827CA308);
PPC_FUNC_IMPL(__imp__sub_827CA308) {
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
	// beq 0x827ca360
	if (cr0.eq) goto loc_827CA360;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,16320
	ctx.r9.s64 = r11.s64 + 16320;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827ca364
	goto loc_827CA364;
loc_827CA360:
	// li r11,0
	r11.s64 = 0;
loc_827CA364:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ca3b0
	if (!cr6.eq) goto loc_827CA3B0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ca390
	if (cr6.eq) goto loc_827CA390;
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
loc_827CA390:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-22084(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22084);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827CA3B0:
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

__attribute__((alias("__imp__sub_827CA3D0"))) PPC_WEAK_FUNC(sub_827CA3D0);
PPC_FUNC_IMPL(__imp__sub_827CA3D0) {
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
	// beq 0x827ca428
	if (cr0.eq) goto loc_827CA428;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,16340
	ctx.r9.s64 = r11.s64 + 16340;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827ca42c
	goto loc_827CA42C;
loc_827CA428:
	// li r11,0
	r11.s64 = 0;
loc_827CA42C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ca478
	if (!cr6.eq) goto loc_827CA478;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ca458
	if (cr6.eq) goto loc_827CA458;
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
loc_827CA458:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-22084(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22084);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827CA478:
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

__attribute__((alias("__imp__sub_827CA498"))) PPC_WEAK_FUNC(sub_827CA498);
PPC_FUNC_IMPL(__imp__sub_827CA498) {
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
	// beq 0x827ca4f0
	if (cr0.eq) goto loc_827CA4F0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,16360
	ctx.r9.s64 = r11.s64 + 16360;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827ca4f4
	goto loc_827CA4F4;
loc_827CA4F0:
	// li r11,0
	r11.s64 = 0;
loc_827CA4F4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ca540
	if (!cr6.eq) goto loc_827CA540;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ca520
	if (cr6.eq) goto loc_827CA520;
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
loc_827CA520:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-22084(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22084);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827CA540:
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

__attribute__((alias("__imp__sub_827CA560"))) PPC_WEAK_FUNC(sub_827CA560);
PPC_FUNC_IMPL(__imp__sub_827CA560) {
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
	// beq 0x827ca5b8
	if (cr0.eq) goto loc_827CA5B8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,16380
	ctx.r9.s64 = r11.s64 + 16380;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827ca5bc
	goto loc_827CA5BC;
loc_827CA5B8:
	// li r11,0
	r11.s64 = 0;
loc_827CA5BC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ca608
	if (!cr6.eq) goto loc_827CA608;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ca5e8
	if (cr6.eq) goto loc_827CA5E8;
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
loc_827CA5E8:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-22084(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -22084);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827CA608:
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

__attribute__((alias("__imp__sub_827CA628"))) PPC_WEAK_FUNC(sub_827CA628);
PPC_FUNC_IMPL(__imp__sub_827CA628) {
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
	// bl 0x827c9120
	sub_827C9120(ctx, base);
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
	// beq cr6,0x827ca680
	if (cr6.eq) goto loc_827CA680;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CA680:
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

__attribute__((alias("__imp__sub_827CA698"))) PPC_WEAK_FUNC(sub_827CA698);
PPC_FUNC_IMPL(__imp__sub_827CA698) {
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
	// bl 0x827ca308
	sub_827CA308(ctx, base);
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
	// beq cr6,0x827ca6f0
	if (cr6.eq) goto loc_827CA6F0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CA6F0:
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

__attribute__((alias("__imp__sub_827CA708"))) PPC_WEAK_FUNC(sub_827CA708);
PPC_FUNC_IMPL(__imp__sub_827CA708) {
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
	// bl 0x827ca3d0
	sub_827CA3D0(ctx, base);
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
	// beq cr6,0x827ca760
	if (cr6.eq) goto loc_827CA760;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CA760:
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

__attribute__((alias("__imp__sub_827CA778"))) PPC_WEAK_FUNC(sub_827CA778);
PPC_FUNC_IMPL(__imp__sub_827CA778) {
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
	// bl 0x827ca498
	sub_827CA498(ctx, base);
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
	// beq cr6,0x827ca7d0
	if (cr6.eq) goto loc_827CA7D0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CA7D0:
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

__attribute__((alias("__imp__sub_827CA7E8"))) PPC_WEAK_FUNC(sub_827CA7E8);
PPC_FUNC_IMPL(__imp__sub_827CA7E8) {
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
	// bl 0x827ca560
	sub_827CA560(ctx, base);
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
	// beq cr6,0x827ca840
	if (cr6.eq) goto loc_827CA840;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CA840:
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

__attribute__((alias("__imp__sub_827CA858"))) PPC_WEAK_FUNC(sub_827CA858);
PPC_FUNC_IMPL(__imp__sub_827CA858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lbz r11,455(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 455);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827ca93c
	if (cr0.eq) goto loc_827CA93C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,16400
	ctx.r4.s64 = r11.s64 + 16400;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827ca8f4
	if (cr0.eq) goto loc_827CA8F4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827c5fc8
	sub_827C5FC8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x827c96f0
	sub_827C96F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827ca8f8
	goto loc_827CA8F8;
loc_827CA8F4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_827CA8F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ca628
	sub_827CA628(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stw r3,4(r24)
	PPC_STORE_U32(r24.u32 + 4, ctx.r3.u32);
	// beq cr6,0x827cb000
	if (cr6.eq) goto loc_827CB000;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_827CA91C:
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
	// bne 0x827ca91c
	if (!cr0.eq) goto loc_827CA91C;
	// b 0x827caffc
	goto loc_827CAFFC;
loc_827CA93C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827c5f88
	sub_827C5F88(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x827caec8
	if (cr6.lt) goto loc_827CAEC8;
	// beq cr6,0x827cae78
	if (cr6.eq) goto loc_827CAE78;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x827cac98
	if (cr6.lt) goto loc_827CAC98;
	// beq cr6,0x827ca970
	if (cr6.eq) goto loc_827CA970;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// blt cr6,0x827caa50
	if (cr6.lt) goto loc_827CAA50;
	// beq cr6,0x827ca9e8
	if (cr6.eq) goto loc_827CA9E8;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// bge cr6,0x827caf1c
	if (!cr6.lt) goto loc_827CAF1C;
loc_827CA970:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827c5f80
	sub_827C5F80(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// fmuls f30,f1,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827c5f78
	sub_827C5F78(ctx, base);
	// fadds f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,16400
	ctx.r4.s64 = ctx.r10.s64 + 16400;
	// li r5,91
	ctx.r5.s64 = 91;
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// li r3,320
	ctx.r3.s64 = 320;
	// fnmsubs f31,f31,f0,f13
	f31.f64 = double(float(-(f31.f64 * f0.f64 - ctx.f13.f64)));
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827caa98
	if (cr0.eq) goto loc_827CAA98;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827c89b0
	sub_827C89B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827caa9c
	goto loc_827CAA9C;
loc_827CA9E8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,16400
	ctx.r4.s64 = r11.s64 + 16400;
	// li r5,61
	ctx.r5.s64 = 61;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827caa1c
	if (cr0.eq) goto loc_827CAA1C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827c9000
	sub_827C9000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827caa20
	goto loc_827CAA20;
loc_827CAA1C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_827CAA20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ca698
	sub_827CA698(ctx, base);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822efb08
	sub_822EFB08(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827caf1c
	goto loc_827CAF1C;
loc_827CAA50:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,16400
	ctx.r4.s64 = r11.s64 + 16400;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827caa84
	if (cr0.eq) goto loc_827CAA84;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827ca180
	sub_827CA180(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827caa88
	goto loc_827CAA88;
loc_827CAA84:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_827CAA88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ca7e8
	sub_827CA7E8(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// b 0x827caebc
	goto loc_827CAEBC;
loc_827CAA98:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_827CAA9C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ca778
	sub_827CA778(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827c5f88
	sub_827C5F88(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x827caacc
	if (!cr6.eq) goto loc_827CAACC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827CAACC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827c6058
	sub_827C6058(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827caf1c
	if (!cr0.eq) goto loc_827CAF1C;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,28492(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28492);
	// bl 0x827c7b08
	sub_827C7B08(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r29,r11,29232
	r29.s64 = r11.s64 + 29232;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lfs f31,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f31.f64 = double(temp.f32);
	// lfs f30,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f30.f64 = double(temp.f32);
	// fnmsubs f0,f1,f31,f30
	f0.f64 = double(float(-(ctx.f1.f64 * f31.f64 - f30.f64)));
	// lfs f29,27976(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 27976);
	f29.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fnmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(-(ctx.f1.f64 * f31.f64 - f30.f64)));
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fnmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(-(ctx.f1.f64 * f31.f64 - f30.f64)));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r31,r31,204
	r31.s64 = r31.s64 + 204;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cabb8
	if (cr6.eq) goto loc_827CABB8;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_827CAB9C:
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
	// bne 0x827cab9c
	if (!cr0.eq) goto loc_827CAB9C;
loc_827CABB8:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822eeee0
	sub_822EEEE0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cabd0
	if (cr6.eq) goto loc_827CABD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CABD0:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fnmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(-(ctx.f1.f64 * f31.f64 - f30.f64)));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f29,-21220(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21220);
	f29.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fnmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(-(ctx.f1.f64 * f31.f64 - f30.f64)));
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fnmsubs f0,f1,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(-(ctx.f1.f64 * f31.f64 - f30.f64)));
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cac80
	if (cr6.eq) goto loc_827CAC80;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_827CAC64:
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
	// bne 0x827cac64
	if (!cr0.eq) goto loc_827CAC64;
loc_827CAC80:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x822ef248
	sub_822EF248(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827caf1c
	if (cr6.eq) goto loc_827CAF1C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x827cae70
	goto loc_827CAE70;
loc_827CAC98:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r27,r11,16400
	r27.s64 = r11.s64 + 16400;
	// li r5,70
	ctx.r5.s64 = 70;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827cace8
	if (cr0.eq) goto loc_827CACE8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827c5f38
	sub_827C5F38(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x82bba108
	sub_82BBA108(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827cacec
	goto loc_827CACEC;
loc_827CACE8:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_827CACEC:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8235bc10
	sub_8235BC10(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r26.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r26,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, r26.u8);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lfs f13,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r7,-23007
	r11.s64 = ctx.r7.s64 + -23007;
	// addi r8,r8,16112
	ctx.r8.s64 = ctx.r8.s64 + 16112;
	// lfs f12,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-24780(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24780);
	f0.f64 = double(temp.f32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82e06d28
	sub_82E06D28(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827c5f50
	sub_827C5F50(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, r11.u64);
	// bl 0x8246c628
	sub_8246C628(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// bl 0x82bbbac0
	sub_82BBBAC0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x827caddc
	if (cr6.eq) goto loc_827CADDC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CADC0:
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
	// bne 0x827cadc0
	if (!cr0.eq) goto loc_827CADC0;
loc_827CADDC:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82e1df80
	sub_82E1DF80(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cadf8
	if (cr6.eq) goto loc_827CADF8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CADF8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827cae48
	if (cr0.eq) goto loc_827CAE48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r26,1
	r26.s64 = 1;
	// bl 0x827c5fd0
	sub_827C5FD0(ctx, base);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827c9bb0
	sub_827C9BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827cae4c
	goto loc_827CAE4C;
loc_827CAE48:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_827CAE4C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ca708
	sub_827CA708(ctx, base);
	// clrlwi. r11,r26,31
	r11.u64 = r26.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cae64
	if (cr0.eq) goto loc_827CAE64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_827CAE64:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827caf1c
	if (cr6.eq) goto loc_827CAF1C;
loc_827CAE70:
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x827caf1c
	goto loc_827CAF1C;
loc_827CAE78:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,16400
	ctx.r4.s64 = r11.s64 + 16400;
	// li r5,54
	ctx.r5.s64 = 54;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827caeac
	if (cr0.eq) goto loc_827CAEAC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827c9000
	sub_827C9000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827caeb0
	goto loc_827CAEB0;
loc_827CAEAC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_827CAEB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ca698
	sub_827CA698(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_827CAEBC:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x822efb08
	sub_822EFB08(ctx, base);
	// b 0x827caf1c
	goto loc_827CAF1C;
loc_827CAEC8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,16400
	ctx.r4.s64 = r11.s64 + 16400;
	// li r5,47
	ctx.r5.s64 = 47;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827caf10
	if (cr0.eq) goto loc_827CAF10;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827c5fc8
	sub_827C5FC8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x827c96f0
	sub_827C96F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827caf14
	goto loc_827CAF14;
loc_827CAF10:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_827CAF14:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ca628
	sub_827CA628(ctx, base);
loc_827CAF1C:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cafc4
	if (cr6.eq) goto loc_827CAFC4;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827caf78
	if (cr0.eq) goto loc_827CAF78;
	// bl 0x82b27c50
	sub_82B27C50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r30,0(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x822e6ad8
	sub_822E6AD8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,28956(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28956);
	// bl 0x822e6b48
	sub_822E6B48(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x8248ebd8
	sub_8248EBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82491af8
	sub_82491AF8(ctx, base);
loc_827CAF78:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x82b27c50
	sub_82B27C50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,0(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822e6ad8
	sub_822E6AD8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,28848(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28848);
	// bl 0x822e6b48
	sub_822E6B48(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x8248ebd8
	sub_8248EBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82491af8
	sub_82491AF8(ctx, base);
loc_827CAFC4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stw r3,4(r24)
	PPC_STORE_U32(r24.u32 + 4, ctx.r3.u32);
	// beq cr6,0x827cb000
	if (cr6.eq) goto loc_827CB000;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_827CAFE0:
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
	// bne 0x827cafe0
	if (!cr0.eq) goto loc_827CAFE0;
loc_827CAFFC:
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CB000:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_827CB018"))) PPC_WEAK_FUNC(sub_827CB018);
PPC_FUNC_IMPL(__imp__sub_827CB018) {
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
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,-5808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5808);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c338
	sub_8250C338(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bne cr6,0x827cb06c
	if (!cr6.eq) goto loc_827CB06C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827CB06C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
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

__attribute__((alias("__imp__sub_827CB090"))) PPC_WEAK_FUNC(sub_827CB090);
PPC_FUNC_IMPL(__imp__sub_827CB090) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827cb0d0
	if (cr0.eq) goto loc_827CB0D0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_827CB0D0:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cb0dc
	if (cr0.eq) goto loc_827CB0DC;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
loc_827CB0DC:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cb104
	if (cr0.eq) goto loc_827CB104;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_827CB104:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CB110"))) PPC_WEAK_FUNC(sub_827CB110);
PPC_FUNC_IMPL(__imp__sub_827CB110) {
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
	// beq 0x827cb168
	if (cr0.eq) goto loc_827CB168;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,16480
	ctx.r9.s64 = r11.s64 + 16480;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827cb16c
	goto loc_827CB16C;
loc_827CB168:
	// li r11,0
	r11.s64 = 0;
loc_827CB16C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cb1b8
	if (!cr6.eq) goto loc_827CB1B8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827cb198
	if (cr6.eq) goto loc_827CB198;
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
loc_827CB198:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-21728(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21728);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827CB1B8:
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

__attribute__((alias("__imp__sub_827CB1D8"))) PPC_WEAK_FUNC(sub_827CB1D8);
PPC_FUNC_IMPL(__imp__sub_827CB1D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827cb208
	if (!cr6.eq) goto loc_827CB208;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CB208:
	// bl 0x8250c610
	sub_8250C610(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x827cb45c
	if (!cr0.eq) goto loc_827CB45C;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823205d8
	sub_823205D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// beq cr6,0x827cb270
	if (cr6.eq) goto loc_827CB270;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CB254:
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
	// bne 0x827cb254
	if (!cr0.eq) goto loc_827CB254;
loc_827CB270:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827cb290
	if (!cr6.eq) goto loc_827CB290;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CB290:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r25,40
	r26.s64 = r25.s64 + 40;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r28,r11,16504
	r28.s64 = r11.s64 + 16504;
	// li r5,99
	ctx.r5.s64 = 99;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cb2d8
	if (cr6.eq) goto loc_827CB2D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CB2D8:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cb2e8
	if (cr6.eq) goto loc_827CB2E8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CB2E8:
	// lwz r10,196(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 196);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,16496(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16496);
	f0.f64 = double(temp.f32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827cb45c
	if (cr6.eq) goto loc_827CB45C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_827CB310:
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x827cb35c
	if (!cr6.lt) goto loc_827CB35C;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_827CB35C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827cb310
	if (!cr6.eq) goto loc_827CB310;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x827cb45c
	if (cr6.eq) goto loc_827CB45C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,115
	ctx.r5.s64 = 115;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827cb39c
	if (cr0.eq) goto loc_827CB39C;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82b5c7f8
	sub_82B5C7F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827cb3a0
	goto loc_827CB3A0;
loc_827CB39C:
	// li r31,0
	r31.s64 = 0;
loc_827CB3A0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827cb110
	sub_827CB110(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// beq cr6,0x827cb3f8
	if (cr6.eq) goto loc_827CB3F8;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_827CB3DC:
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
	// bne 0x827cb3dc
	if (!cr0.eq) goto loc_827CB3DC;
loc_827CB3F8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r5,116
	ctx.r5.s64 = 116;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cb428
	if (cr6.eq) goto loc_827CB428;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CB428:
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cb43c
	if (cr0.eq) goto loc_827CB43C;
	// lbz r11,28(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827cb44c
	if (cr0.eq) goto loc_827CB44C;
loc_827CB43C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r25,192
	ctx.r4.s64 = r25.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824692c8
	sub_824692C8(ctx, base);
loc_827CB44C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827cb45c
	if (cr6.eq) goto loc_827CB45C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CB45C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_827CB468"))) PPC_WEAK_FUNC(sub_827CB468);
PPC_FUNC_IMPL(__imp__sub_827CB468) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,4095
	r11.s64 = 268369920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x827cb4e0
	if (!cr6.lt) goto loc_827CB4E0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24448
	ctx.r4.s64 = r11.s64 + -24448;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c7380
	sub_822C7380(ctx, base);
	// bl 0x822c1ca8
	sub_822C1CA8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-24916
	r11.s64 = r11.s64 + -24916;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c2978
	sub_822C2978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
loc_827CB4E0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_827CB508"))) PPC_WEAK_FUNC(sub_827CB508);
PPC_FUNC_IMPL(__imp__sub_827CB508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	f0.f64 = double(temp.f32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r31,r31,192
	r31.s64 = r31.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x827cb090
	sub_827CB090(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cb468
	sub_827CB468(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CB598"))) PPC_WEAK_FUNC(sub_827CB598);
PPC_FUNC_IMPL(__imp__sub_827CB598) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cb5ec
	if (cr0.eq) goto loc_827CB5EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-21640
	ctx.r3.s64 = r11.s64 + -21640;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cb5ec
	if (cr0.eq) goto loc_827CB5EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,-40
	ctx.r3.s64 = r29.s64 + -40;
	// bl 0x827cb508
	sub_827CB508(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827cb5fc
	goto loc_827CB5FC;
loc_827CB5EC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82514ef8
	sub_82514EF8(ctx, base);
loc_827CB5FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CB608"))) PPC_WEAK_FUNC(sub_827CB608);
PPC_FUNC_IMPL(__imp__sub_827CB608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,16
	r11.s64 = 16;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CB620"))) PPC_WEAK_FUNC(sub_827CB620);
PPC_FUNC_IMPL(__imp__sub_827CB620) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r11,-204
	ctx.r3.s64 = r11.s64 + -204;
	// bne cr6,0x827cb664
	if (!cr6.eq) goto loc_827CB664;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cb654
	if (!cr6.eq) goto loc_827CB654;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CB654:
	// addi r6,r31,40
	ctx.r6.s64 = r31.s64 + 40;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x827cb708
	goto loc_827CB708;
loc_827CB664:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cb670
	if (!cr6.eq) goto loc_827CB670;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CB670:
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x822c9398
	sub_822C9398(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cb6d8
	if (cr0.eq) goto loc_827CB6D8;
	// li r29,0
	r29.s64 = 0;
loc_827CB698:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-204
	ctx.r3.s64 = r11.s64 + -204;
	// bne cr6,0x827cb6ac
	if (!cr6.eq) goto loc_827CB6AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CB6AC:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// bl 0x822c9398
	sub_822C9398(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x827cb698
	if (cr6.lt) goto loc_827CB698;
loc_827CB6D8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-204
	ctx.r3.s64 = r11.s64 + -204;
	// bne cr6,0x827cb6ec
	if (!cr6.eq) goto loc_827CB6EC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CB6EC:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
loc_827CB708:
	// bl 0x822c9398
	sub_822C9398(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827CB718"))) PPC_WEAK_FUNC(sub_827CB718);
PPC_FUNC_IMPL(__imp__sub_827CB718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cb858
	if (cr6.eq) goto loc_827CB858;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// li r29,0
	r29.s64 = 0;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// beq cr6,0x827cb858
	if (cr6.eq) goto loc_827CB858;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// fdivs f30,f0,f13
	f30.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f31,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f31.f64 = double(temp.f32);
loc_827CB77C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// lvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrldi r9,r11,32
	ctx.r9.u64 = r11.u64 & 0xFFFFFFFF;
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r29,r11
	r29.u64 = r11.u64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v62,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmaddfp v0,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v63,v0,v63
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r30,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x827cb77c
	if (cr6.lt) goto loc_827CB77C;
loc_827CB858:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827CB868"))) PPC_WEAK_FUNC(sub_827CB868);
PPC_FUNC_IMPL(__imp__sub_827CB868) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cb89c
	if (cr6.eq) goto loc_827CB89C;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_827CB89C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cb8d4
	if (cr6.eq) goto loc_827CB8D4;
	// lis r11,4095
	r11.s64 = 268369920;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x827cb8bc
	if (!cr6.gt) goto loc_827CB8BC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827CB8BC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,16592
	ctx.r4.s64 = r11.s64 + 16592;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
loc_827CB8D4:
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cb718
	sub_827CB718(ctx, base);
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

__attribute__((alias("__imp__sub_827CB8F8"))) PPC_WEAK_FUNC(sub_827CB8F8);
PPC_FUNC_IMPL(__imp__sub_827CB8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// bl 0x827cb868
	sub_827CB868(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-21588(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21588);
	// stfs f31,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CB980"))) PPC_WEAK_FUNC(sub_827CB980);
PPC_FUNC_IMPL(__imp__sub_827CB980) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x827cb868
	sub_827CB868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CB988"))) PPC_WEAK_FUNC(sub_827CB988);
PPC_FUNC_IMPL(__imp__sub_827CB988) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// b 0x829f8840
	sub_829F8840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CB990"))) PPC_WEAK_FUNC(sub_827CB990);
PPC_FUNC_IMPL(__imp__sub_827CB990) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// b 0x82afaf88
	sub_82AFAF88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CB998"))) PPC_WEAK_FUNC(sub_827CB998);
PPC_FUNC_IMPL(__imp__sub_827CB998) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,196(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cb9bc
	if (!cr6.eq) goto loc_827CB9BC;
	// li r27,0
	r27.s64 = 0;
	// b 0x827cb9c8
	goto loc_827CB9C8;
loc_827CB9BC:
	// lwz r10,200(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 200);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r27,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r27.s64 = r11.s32 >> 3;
loc_827CB9C8:
	// addi r26,r28,220
	r26.s64 = r28.s64 + 220;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825cf338
	sub_825CF338(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827cba64
	if (cr6.eq) goto loc_827CBA64;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_827CB9E4:
	// lwz r11,196(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 196);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x82e5f598
	sub_82E5F598(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827cba4c
	if (!cr0.eq) goto loc_827CBA4C;
	// lwz r11,196(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 196);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,40
	r31.s64 = r11.s64 + 40;
	// bne cr6,0x827cba14
	if (!cr6.eq) goto loc_827CBA14;
	// li r31,0
	r31.s64 = 0;
loc_827CBA14:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827cba34
	if (!cr6.eq) goto loc_827CBA34;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CBA34:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x827cba50
	goto loc_827CBA50;
loc_827CBA4C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827CBA50:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827ad260
	sub_827AD260(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x827cb9e4
	if (!cr0.eq) goto loc_827CB9E4;
loc_827CBA64:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827cbb0c
	if (cr6.eq) goto loc_827CBB0C;
	// li r29,0
	r29.s64 = 0;
loc_827CBA88:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82493860
	sub_82493860(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cbafc
	if (cr0.eq) goto loc_827CBAFC;
	// lwz r11,196(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 196);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,40
	r31.s64 = r11.s64 + 40;
	// bne cr6,0x827cbacc
	if (!cr6.eq) goto loc_827CBACC;
	// li r31,0
	r31.s64 = 0;
loc_827CBACC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827cbaec
	if (!cr6.eq) goto loc_827CBAEC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CBAEC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250c688
	sub_8250C688(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_827CBAFC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x827cba88
	if (cr6.lt) goto loc_827CBA88;
loc_827CBB0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_827CBB18"))) PPC_WEAK_FUNC(sub_827CBB18);
PPC_FUNC_IMPL(__imp__sub_827CBB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x827cbb80
	if (cr6.eq) goto loc_827CBB80;
	// addi r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 + 28;
	// addi r11,r4,28
	r11.s64 = ctx.r4.s64 + 28;
loc_827CBB28:
	// addi r4,r4,-32
	ctx.r4.s64 = ctx.r4.s64 + -32;
	// addi r5,r5,-32
	ctx.r5.s64 = ctx.r5.s64 + -32;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,-24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24);
	f0.f64 = double(temp.f32);
	// stfs f0,-24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// lfs f0,-20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20);
	f0.f64 = double(temp.f32);
	// stfs f0,-20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// lfs f0,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// lfs f0,-12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12);
	f0.f64 = double(temp.f32);
	// stfs f0,-12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// lfs f0,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	f0.f64 = double(temp.f32);
	// stfs f0,-4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// bne cr6,0x827cbb28
	if (!cr6.eq) goto loc_827CBB28;
loc_827CBB80:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CBB88"))) PPC_WEAK_FUNC(sub_827CBB88);
PPC_FUNC_IMPL(__imp__sub_827CBB88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r5,20
	ctx.r10.s64 = ctx.r5.s64 + 20;
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
loc_827CBB98:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,-24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -24, temp.u32);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,-20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -20, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -16, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,-12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -12, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne cr6,0x827cbb98
	if (!cr6.eq) goto loc_827CBB98;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CBBF0"))) PPC_WEAK_FUNC(sub_827CBBF0);
PPC_FUNC_IMPL(__imp__sub_827CBBF0) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cbc2c
	if (cr6.eq) goto loc_827CBC2C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x827cbc30
	if (cr6.gt) goto loc_827CBC30;
loc_827CBC2C:
	// bl 0x8248d668
	sub_8248D668(ctx, base);
loc_827CBC30:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r30,5,0,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_827CBC58"))) PPC_WEAK_FUNC(sub_827CBC58);
PPC_FUNC_IMPL(__imp__sub_827CBC58) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827cbc94
	if (!cr6.eq) goto loc_827CBC94;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x827cbca0
	goto loc_827CBCA0;
loc_827CBC94:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r8,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = r11.s32 >> 5;
loc_827CBCA0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x827cbf60
	if (cr6.eq) goto loc_827CBF60;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827cbcb8
	if (!cr6.eq) goto loc_827CBCB8;
	// li r11,0
	r11.s64 = 0;
	// b 0x827cbcc4
	goto loc_827CBCC4;
loc_827CBCB8:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
loc_827CBCC4:
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x827cbce0
	if (!cr6.lt) goto loc_827CBCE0;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x827cbf60
	goto loc_827CBF60;
loc_827CBCE0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827cbcf0
	if (!cr6.eq) goto loc_827CBCF0;
	// li r11,0
	r11.s64 = 0;
	// b 0x827cbcfc
	goto loc_827CBCFC;
loc_827CBCF0:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
loc_827CBCFC:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x827cbe64
	if (!cr6.lt) goto loc_827CBE64;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x827cbd20
	if (!cr6.lt) goto loc_827CBD20;
	// li r11,0
	r11.s64 = 0;
	// b 0x827cbd24
	goto loc_827CBD24;
loc_827CBD20:
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_827CBD24:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827cbd34
	if (!cr6.eq) goto loc_827CBD34;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x827cbd40
	goto loc_827CBD40;
loc_827CBD34:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
loc_827CBD40:
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827cbd6c
	if (!cr6.lt) goto loc_827CBD6C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827cbd5c
	if (!cr6.eq) goto loc_827CBD5C;
	// li r11,0
	r11.s64 = 0;
	// b 0x827cbd68
	goto loc_827CBD68;
loc_827CBD5C:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
loc_827CBD68:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
loc_827CBD6C:
	// rlwinm r24,r11,5,0,26
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r26,-31946
	r26.s64 = -2093613056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r31,4(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x827cbdbc
	goto loc_827CBDBC;
loc_827CBD9C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cbdb4
	if (cr6.eq) goto loc_827CBDB4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_827CBDB4:
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
loc_827CBDBC:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// bne cr6,0x827cbd9c
	if (!cr6.eq) goto loc_827CBD9C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822f4150
	sub_822F4150(ctx, base);
	// lwz r30,8(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(r25.u32, r30.u32, xer);
	// beq cr6,0x827cbe14
	if (cr6.eq) goto loc_827CBE14;
	// subf r29,r31,r25
	r29.s64 = r25.s64 - r31.s64;
loc_827CBDEC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827cbe04
	if (cr6.eq) goto loc_827CBE04;
	// add r4,r29,r31
	ctx.r4.u64 = r29.u64 + r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_827CBE04:
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// add r11,r29,r31
	r11.u64 = r29.u64 + r31.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x827cbdec
	if (!cr6.eq) goto loc_827CBDEC;
loc_827CBE14:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827cbe28
	if (!cr6.eq) goto loc_827CBE28;
	// li r11,0
	r11.s64 = 0;
	// b 0x827cbe34
	goto loc_827CBE34;
loc_827CBE28:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
loc_827CBE34:
	// add r31,r11,r23
	r31.u64 = r11.u64 + r23.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827cbe48
	if (cr6.eq) goto loc_827CBE48;
	// lwz r3,6512(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_827CBE48:
	// rlwinm r11,r31,5,0,26
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// add r10,r24,r27
	ctx.r10.u64 = r24.u64 + r27.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r10,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r10.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// b 0x827cbf60
	goto loc_827CBF60;
loc_827CBE64:
	// lwz r31,8(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r25,r31
	r11.s64 = r31.s64 - r25.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x827cbee4
	if (!cr6.lt) goto loc_827CBEE4;
	// rlwinm r30,r23,5,0,26
	r30.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(r25.u32, r31.u32, xer);
	// add r29,r30,r25
	r29.u64 = r30.u64 + r25.u64;
	// beq cr6,0x827cbeb4
	if (cr6.eq) goto loc_827CBEB4;
	// subf r27,r30,r29
	r27.s64 = r29.s64 - r30.s64;
loc_827CBE8C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827cbea4
	if (cr6.eq) goto loc_827CBEA4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_827CBEA4:
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// bne cr6,0x827cbe8c
	if (!cr6.eq) goto loc_827CBE8C;
loc_827CBEB4:
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subf r11,r25,r4
	r11.s64 = ctx.r4.s64 - r25.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// subf r5,r11,r23
	ctx.r5.s64 = r23.s64 - r11.s64;
	// bl 0x822f4150
	sub_822F4150(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// subf r4,r30,r11
	ctx.r4.s64 = r11.s64 - r30.s64;
	// b 0x827cbf54
	goto loc_827CBF54;
loc_827CBEE4:
	// rlwinm r26,r23,5,0,26
	r26.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r30,r31
	r30.u64 = r31.u64;
	// subf r29,r26,r31
	r29.s64 = r31.s64 - r26.s64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// beq cr6,0x827cbf24
	if (cr6.eq) goto loc_827CBF24;
loc_827CBEFC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cbf14
	if (cr6.eq) goto loc_827CBF14;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_827CBF14:
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// bne cr6,0x827cbefc
	if (!cr6.eq) goto loc_827CBEFC;
loc_827CBF24:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r30,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r30.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x827cbb18
	sub_827CBB18(ctx, base);
	// add r4,r26,r25
	ctx.r4.u64 = r26.u64 + r25.u64;
loc_827CBF54:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827cbb88
	sub_827CBB88(ctx, base);
loc_827CBF60:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_827CBF68"))) PPC_WEAK_FUNC(sub_827CBF68);
PPC_FUNC_IMPL(__imp__sub_827CBF68) {
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
	// lis r28,-31945
	r28.s64 = -2093547520;
	// lis r11,-31945
	r11.s64 = -2093547520;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r30,r11,-28716
	r30.s64 = r11.s64 + -28716;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,-28712(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -28712);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x827cbfb0
	if (!cr0.eq) goto loc_827CBFB0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,-28712(r28)
	PPC_STORE_U32(r28.u32 + -28712, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,-25016
	ctx.r4.s64 = ctx.r10.s64 + -25016;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_827CBFB0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x827cc294
	if (!cr6.eq) goto loc_827CC294;
	// lwz r11,272(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 272);
	// addi r30,r24,272
	r30.s64 = r24.s64 + 272;
	// li r29,0
	r29.s64 = 0;
	// li r23,3
	r23.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cc068
	if (!cr6.eq) goto loc_827CC068;
	// li r9,12
	ctx.r9.s64 = 12;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// lis r11,42
	r11.s64 = 2752512;
	// sth r29,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r29.u16);
	// lis r10,44
	ctx.r10.s64 = 2883584;
	// sth r9,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r9.u16);
	// ori r11,r11,9145
	r11.u64 = r11.u64 | 9145;
	// stb r29,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r29.u8);
	// ori r10,r10,9125
	ctx.r10.u64 = ctx.r10.u64 | 9125;
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r29.u8);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r29.u8);
	// li r6,255
	ctx.r6.s64 = 255;
	// sth r29,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, r29.u16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r29.u8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r8,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r8.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, r29.u8);
	// sth r29,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, r29.u16);
	// sth r7,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r7.u16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r29.u8);
	// stb r23,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, r23.u8);
	// stb r29,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, r29.u8);
	// sth r6,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r6.u16);
	// sth r29,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, r29.u16);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stb r29,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, r29.u8);
	// stb r29,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, r29.u8);
	// stb r29,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, r29.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e17760
	sub_82E17760(ctx, base);
loc_827CC068:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x827cc088
	if (cr6.eq) goto loc_827CC088;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82be02e0
	sub_82BE02E0(ctx, base);
loc_827CC088:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,29088
	ctx.r4.s64 = r11.s64 + 29088;
	// bl 0x82e17af0
	sub_82E17AF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x822c6518
	sub_822C6518(ctx, base);
	// addi r4,r24,232
	ctx.r4.s64 = r24.s64 + 232;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e16f70
	sub_82E16F70(ctx, base);
	// addi r27,r24,240
	r27.s64 = r24.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e17068
	sub_82E17068(ctx, base);
	// lwz r11,240(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cc168
	if (cr6.eq) goto loc_827CC168;
	// lwz r11,256(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cc11c
	if (cr6.eq) goto loc_827CC11C;
	// lwz r11,-28712(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -28712);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r30,r10,-28720
	r30.s64 = ctx.r10.s64 + -28720;
	// bne 0x827cc108
	if (!cr0.eq) goto loc_827CC108;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,-28712(r28)
	PPC_STORE_U32(r28.u32 + -28712, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,-18512
	ctx.r4.s64 = ctx.r10.s64 + -18512;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_827CC108:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,256(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 256);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82e19960
	sub_82E19960(ctx, base);
loc_827CC11C:
	// lwz r11,264(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cc168
	if (cr6.eq) goto loc_827CC168;
	// lwz r11,-28712(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -28712);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r30,r10,-28724
	r30.s64 = ctx.r10.s64 + -28724;
	// bne 0x827cc154
	if (!cr0.eq) goto loc_827CC154;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,-28712(r28)
	PPC_STORE_U32(r28.u32 + -28712, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,14124
	ctx.r4.s64 = ctx.r10.s64 + 14124;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_827CC154:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,264(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 264);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82e19960
	sub_82E19960(ctx, base);
loc_827CC168:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,38(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 38);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x827cc188
	if (!cr0.eq) goto loc_827CC188;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x827cc1ac
	goto loc_827CC1AC;
loc_827CC188:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r4,204
	ctx.r4.s64 = 204;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_827CC1AC:
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82e16c78
	sub_82E16C78(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82e16c78
	sub_82E16C78(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x82e16c78
	sub_82E16C78(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x82e16c78
	sub_82E16C78(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e16c78
	sub_82E16C78(ctx, base);
	// lwz r11,204(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 204);
	// addi r3,r24,200
	ctx.r3.s64 = r24.s64 + 200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cc230
	if (cr6.eq) goto loc_827CC230;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r29,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r29.s64 = r11.s32 >> 5;
loc_827CC230:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827cbbf0
	sub_827CBBF0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// divwu r10,r29,r23
	ctx.r10.u32 = r29.u32 / r23.u32;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,32
	ctx.r7.s64 = 32;
	// mulli r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 * 3;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82be52f8
	sub_82BE52F8(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e16d50
	sub_82E16D50(ctx, base);
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82e16d50
	sub_82E16D50(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e16d50
	sub_82E16D50(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e16d50
	sub_82E16D50(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e16d50
	sub_82E16D50(ctx, base);
loc_827CC294:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_827CC2A0"))) PPC_WEAK_FUNC(sub_827CC2A0);
PPC_FUNC_IMPL(__imp__sub_827CC2A0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cc2d4
	if (cr6.eq) goto loc_827CC2D4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x827cc2dc
	if (!cr0.eq) goto loc_827CC2DC;
loc_827CC2D4:
	// li r29,0
	r29.s64 = 0;
	// b 0x827cc2e4
	goto loc_827CC2E4;
loc_827CC2DC:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r29,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r29.s64 = r11.s32 >> 5;
loc_827CC2E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cbc58
	sub_827CBC58(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CC310"))) PPC_WEAK_FUNC(sub_827CC310);
PPC_FUNC_IMPL(__imp__sub_827CC310) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cc33c
	if (!cr6.eq) goto loc_827CC33C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x827cc348
	goto loc_827CC348;
loc_827CC33C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
loc_827CC348:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cc388
	if (cr6.eq) goto loc_827CC388;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x827cc388
	if (!cr6.lt) goto loc_827CC388;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cc37c
	if (cr6.eq) goto loc_827CC37C;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_827CC37C:
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x827cc39c
	goto loc_827CC39C;
loc_827CC388:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827cc2a0
	sub_827CC2A0(ctx, base);
loc_827CC39C:
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

__attribute__((alias("__imp__sub_827CC3B8"))) PPC_WEAK_FUNC(sub_827CC3B8);
PPC_FUNC_IMPL(__imp__sub_827CC3B8) {
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
	// bl 0x82e1a4d0
	sub_82E1A4D0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,17096
	r11.s64 = r11.s64 + 17096;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r10,r10,17052
	ctx.r10.s64 = ctx.r10.s64 + 17052;
	// addi r9,r9,17032
	ctx.r9.s64 = ctx.r9.s64 + 17032;
	// li r11,0
	r11.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r11.u32);
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
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

__attribute__((alias("__imp__sub_827CC460"))) PPC_WEAK_FUNC(sub_827CC460);
PPC_FUNC_IMPL(__imp__sub_827CC460) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x827cc520
	sub_827CC520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CC468"))) PPC_WEAK_FUNC(sub_827CC468);
PPC_FUNC_IMPL(__imp__sub_827CC468) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x827cc520
	sub_827CC520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CC470"))) PPC_WEAK_FUNC(sub_827CC470);
PPC_FUNC_IMPL(__imp__sub_827CC470) {
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
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x82e1bc68
	sub_82E1BC68(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cc49c
	if (cr6.eq) goto loc_827CC49C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CC49C:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cc4ac
	if (cr6.eq) goto loc_827CC4AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CC4AC:
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cc4bc
	if (cr6.eq) goto loc_827CC4BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CC4BC:
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cc4cc
	if (cr6.eq) goto loc_827CC4CC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CC4CC:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cc4dc
	if (cr6.eq) goto loc_827CC4DC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CC4DC:
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bne cr6,0x827cc4fc
	if (!cr6.eq) goto loc_827CC4FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CC4FC:
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e1a4e8
	sub_82E1A4E8(ctx, base);
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

__attribute__((alias("__imp__sub_827CC520"))) PPC_WEAK_FUNC(sub_827CC520);
PPC_FUNC_IMPL(__imp__sub_827CC520) {
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
	// bl 0x827cc470
	sub_827CC470(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cc550
	if (cr0.eq) goto loc_827CC550;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827CC550:
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

__attribute__((alias("__imp__sub_827CC570"))) PPC_WEAK_FUNC(sub_827CC570);
PPC_FUNC_IMPL(__imp__sub_827CC570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831b1400
	// li r12,-256
	r12.s64 = -256;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-240
	r12.s64 = -240;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-1104(r1)
	ea = -1104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827cc5cc
	if (!cr6.eq) goto loc_827CC5CC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_827CC5CC:
	// bl 0x8250c0b8
	sub_8250C0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e345c0
	sub_82E345C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cc6e4
	if (cr6.eq) goto loc_827CC6E4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-9928
	ctx.r4.s64 = ctx.r10.s64 + -9928;
	// mr r26,r11
	r26.u64 = r11.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r30,r11,-8772
	r30.s64 = r11.s64 + -8772;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e20bc8
	sub_82E20BC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,232
	ctx.r10.s64 = r31.s64 + 232;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,596(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cc690
	if (cr6.eq) goto loc_827CC690;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CC690:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r30,128(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e20ac8
	sub_82E20AC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,240
	ctx.r10.s64 = r31.s64 + 240;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,540(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cc6e4
	if (cr6.eq) goto loc_827CC6E4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CC6E4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x82e34550
	sub_82E34550(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,256
	ctx.r10.s64 = r31.s64 + 256;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,572(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cc730
	if (cr6.eq) goto loc_827CC730;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CC730:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82e34550
	sub_82E34550(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,264
	ctx.r10.s64 = r31.s64 + 264;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,564(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cc784
	if (cr6.eq) goto loc_827CC784;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CC784:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r24.u32);
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r24.u32);
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r24.u32);
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d1f30
	sub_822D1F30(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x822d1f10
	sub_822D1F10(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// blt cr6,0x827cc840
	if (cr6.lt) goto loc_827CC840;
	// lis r30,-32249
	r30.s64 = -2113470464;
loc_827CC7C4:
	// addi r6,r1,752
	ctx.r6.s64 = ctx.r1.s64 + 752;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// bl 0x822d2058
	sub_822D2058(ctx, base);
	// lfs f0,496(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	f0.f64 = double(temp.f32);
	// lfs f13,500(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,504(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8270b0c0
	sub_8270B0C0(ctx, base);
	// lfs f1,17024(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 17024);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x822d1f00
	sub_822D1F00(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cc820
	if (cr0.eq) goto loc_827CC820;
	// lfs f0,17024(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 17024);
	f0.f64 = double(temp.f32);
	// fsubs f30,f30,f0
	f30.f64 = double(float(f30.f64 - f0.f64));
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// bge cr6,0x827cc7c4
	if (!cr6.lt) goto loc_827CC7C4;
loc_827CC820:
	// lwz r30,180(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cc840
	if (cr6.eq) goto loc_827CC840;
	// lwz r25,184(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r11,12
	r11.s64 = 12;
	// subf r10,r30,r25
	ctx.r10.s64 = r25.s64 - r30.s64;
	// divw. r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827cc888
	if (!cr0.eq) goto loc_827CC888;
loc_827CC840:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cc858
	if (cr6.eq) goto loc_827CC858;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CC858:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_827CC85C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,1104
	ctx.r1.s64 = ctx.r1.s64 + 1104;
	// li r0,-256
	r0.s64 = -256;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-240
	r0.s64 = -240;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-72
	r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831b144c
	// b 0x831b0b68
	return;
loc_827CC888:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r24.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r24,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r24.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// stw r24,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r24.u32);
	// lis r28,-31956
	r28.s64 = -2094268416;
	// lis r27,-32238
	r27.s64 = -2112749568;
	// lfs f30,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f30.f64 = double(temp.f32);
	// lfs f15,-24788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24788);
	f15.f64 = double(temp.f32);
loc_827CC8B0:
	// clrldi r11,r29,32
	r11.u64 = r29.u64 & 0xFFFFFFFF;
	// lfs f0,-21416(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -21416);
	f0.f64 = double(temp.f32);
	// stfs f0,244(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfs f31,240(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// stfs f31,248(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lfs f0,-3780(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + -3780);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f15
	ctx.f13.f64 = double(float(ctx.f13.f64 * f15.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 * f30.f64));
	// bl 0x82e85790
	sub_82E85790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// lfs f0,544(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	f0.f64 = double(temp.f32);
	// lfs f13,548(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,552(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8270b0c0
	sub_8270B0C0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(r29.u32, 6, xer);
	// blt cr6,0x827cc8b0
	if (cr6.lt) goto loc_827CC8B0;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r27,r30,12
	r27.s64 = r30.s64 + 12;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r29,1
	r29.s64 = 1;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v126,r0,r11
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x827ccd1c
	if (cr6.eq) goto loc_827CCD1C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r26,196(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stfs f31,348(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// stfs f31,428(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f31,396(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// lfs f14,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f14.f64 = double(temp.f32);
	// stfs f14,268(r1)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f14,620(r1)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 620, temp.u32);
loc_827CC990:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r1,336
	r11.s64 = ctx.r1.s64 + 336;
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// stfs f0,336(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// stfs f13,340(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// stfs f12,344(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// stfs f31,304(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f14,308(r1)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f31,312(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f31,316(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f31,368(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f31,372(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f14,376(r1)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f31,380(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// lvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v127,v126
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v126.f32)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e85da8
	sub_82E85DA8(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cca20
	if (cr0.eq) goto loc_827CCA20;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_827CCA20:
	// lfs f21,360(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	f21.f64 = double(temp.f32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lfs f20,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	f20.f64 = double(temp.f32);
	// lfs f19,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	f19.f64 = double(temp.f32);
	// lfs f18,456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	f18.f64 = double(temp.f32);
	// lfs f17,452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	f17.f64 = double(temp.f32);
	// lfs f16,448(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	f16.f64 = double(temp.f32);
loc_827CCA3C:
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(r29.u32, 5, xer);
	// mr r28,r24
	r28.u64 = r24.u64;
	// beq cr6,0x827cca4c
	if (cr6.eq) goto loc_827CCA4C;
	// addi r28,r29,1
	r28.s64 = r29.s64 + 1;
loc_827CCA4C:
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// lfsx f0,r11,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r26.u32);
	f0.f64 = double(temp.f32);
	// add r31,r11,r26
	r31.u64 = r11.u64 + r26.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,224(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// addi r11,r1,672
	r11.s64 = ctx.r1.s64 + 672;
	// addi r10,r1,576
	ctx.r10.s64 = ctx.r1.s64 + 576;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// stfs f12,288(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v126
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v126.f32)));
	// stfs f13,292(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f0,296(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f31,300(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f28,584(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	f28.f64 = double(temp.f32);
	// lfs f30,576(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	f30.f64 = double(temp.f32);
	// lfs f29,580(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	f29.f64 = double(temp.f32);
	// stfs f29,420(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f30,416(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f28,424(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// addi r9,r1,464
	ctx.r9.s64 = ctx.r1.s64 + 464;
	// mulli r11,r28,12
	r11.s64 = r28.s64 * 12;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// lfsx f12,r11,r26
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r31,r11,r26
	r31.u64 = r11.u64 + r26.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,320(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f25,472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	f25.f64 = double(temp.f32);
	// lfs f27,464(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	f27.f64 = double(temp.f32);
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f0,328(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// lfs f26,468(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	f26.f64 = double(temp.f32);
	// stfs f26,260(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f27,256(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f25,264(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// addi r11,r1,736
	r11.s64 = ctx.r1.s64 + 736;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v126
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v126.f32)));
	// stfs f13,212(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f22,488(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	f22.f64 = double(temp.f32);
	// stfs f0,216(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lfs f23,484(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	f23.f64 = double(temp.f32);
	// lfs f24,480(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	f24.f64 = double(temp.f32);
	// stfs f23,388(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// stfs f24,384(r1)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f22,392(r1)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// bl 0x82e84be0
	sub_82E84BE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fsubs f0,f30,f19
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 - f19.f64));
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// addi r11,r1,720
	r11.s64 = ctx.r1.s64 + 720;
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// fsubs f13,f29,f20
	ctx.f13.f64 = double(float(f29.f64 - f20.f64));
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfs f0,436(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// vaddfp128 v63,v63,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// stfs f13,440(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// fsubs f11,f28,f21
	ctx.f11.f64 = double(float(f28.f64 - f21.f64));
	// stfs f11,444(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// fsubs f8,f26,f17
	ctx.f8.f64 = double(float(f26.f64 - f17.f64));
	// stfs f8,280(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fsubs f8,f25,f18
	ctx.f8.f64 = double(float(f25.f64 - f18.f64));
	// stfs f8,284(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fsubs f8,f24,f19
	ctx.f8.f64 = double(float(f24.f64 - f19.f64));
	// stfs f8,404(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// fsubs f11,f27,f16
	ctx.f11.f64 = double(float(f27.f64 - f16.f64));
	// stfs f11,276(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fsubs f8,f23,f20
	ctx.f8.f64 = double(float(f23.f64 - f20.f64));
	// stfs f8,408(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f8,f22,f21
	ctx.f8.f64 = double(float(f22.f64 - f21.f64));
	// fmuls f9,f12,f15
	ctx.f9.f64 = double(float(ctx.f12.f64 * f15.f64));
	// stfs f9,432(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f8,412(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// stfs f9,272(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,516(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,512(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	f0.f64 = double(temp.f32);
	// lfs f12,520(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f18
	ctx.f11.f64 = double(float(ctx.f12.f64 - f18.f64));
	// fmuls f10,f10,f15
	ctx.f10.f64 = double(float(ctx.f10.f64 * f15.f64));
	// stfs f10,400(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// fsubs f7,f13,f17
	ctx.f7.f64 = double(float(ctx.f13.f64 - f17.f64));
	// stfs f10,624(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 624, temp.u32);
	// fsubs f6,f0,f16
	ctx.f6.f64 = double(float(f0.f64 - f16.f64));
	// stfs f0,608(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// stfs f13,612(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 612, temp.u32);
	// stfs f12,616(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// stfs f6,628(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 628, temp.u32);
	// stfs f7,632(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// stfs f11,636(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 636, temp.u32);
	// bl 0x827cc310
	sub_827CC310(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827cc310
	sub_827CC310(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827cc310
	sub_827CC310(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827cc310
	sub_827CC310(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827cc310
	sub_827CC310(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827cc310
	sub_827CC310(ctx, base);
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(r29.u32, 6, xer);
	// blt cr6,0x827cca3c
	if (cr6.lt) goto loc_827CCA3C;
	// addi r11,r1,352
	r11.s64 = ctx.r1.s64 + 352;
	// vor128 v126,v127,v127
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stvx128 v126,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x827cc990
	if (!cr6.eq) goto loc_827CC990;
loc_827CCD1C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827ccd3c
	if (cr6.eq) goto loc_827CCD3C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CCD3C:
	// li r31,1
	r31.s64 = 1;
	// b 0x827cc85c
	goto loc_827CC85C;
}

__attribute__((alias("__imp__sub_827CCD48"))) PPC_WEAK_FUNC(sub_827CCD48);
PPC_FUNC_IMPL(__imp__sub_827CCD48) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x827ccd88
	if (!cr6.eq) goto loc_827CCD88;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827ccdb8
	if (cr6.eq) goto loc_827CCDB8;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x827ccdb8
	goto loc_827CCDB8;
loc_827CCD88:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x827ccdb8
	if (cr6.eq) goto loc_827CCDB8;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-21272
	ctx.r4.s64 = r11.s64 + -21272;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ccdb0
	if (cr0.eq) goto loc_827CCDB0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x827ccdb8
	goto loc_827CCDB8;
loc_827CCDB0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_827CCDB8:
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

__attribute__((alias("__imp__sub_827CCDD0"))) PPC_WEAK_FUNC(sub_827CCDD0);
PPC_FUNC_IMPL(__imp__sub_827CCDD0) {
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
	// beq 0x827cce28
	if (cr0.eq) goto loc_827CCE28;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,17116
	ctx.r9.s64 = r11.s64 + 17116;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827cce2c
	goto loc_827CCE2C;
loc_827CCE28:
	// li r11,0
	r11.s64 = 0;
loc_827CCE2C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cce78
	if (!cr6.eq) goto loc_827CCE78;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827cce58
	if (cr6.eq) goto loc_827CCE58;
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
loc_827CCE58:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-21364(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21364);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827CCE78:
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

__attribute__((alias("__imp__sub_827CCE98"))) PPC_WEAK_FUNC(sub_827CCE98);
PPC_FUNC_IMPL(__imp__sub_827CCE98) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// addi r10,r30,16
	ctx.r10.s64 = r30.s64 + 16;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
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

__attribute__((alias("__imp__sub_827CCF18"))) PPC_WEAK_FUNC(sub_827CCF18);
PPC_FUNC_IMPL(__imp__sub_827CCF18) {
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
	// beq cr6,0x827ccf44
	if (cr6.eq) goto loc_827CCF44;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x827ccd48
	sub_827CCD48(ctx, base);
	// b 0x827ccf50
	goto loc_827CCF50;
loc_827CCF44:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r11,r11,-21272
	r11.s64 = r11.s64 + -21272;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_827CCF50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CCF60"))) PPC_WEAK_FUNC(sub_827CCF60);
PPC_FUNC_IMPL(__imp__sub_827CCF60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// beq cr6,0x827ccfac
	if (cr6.eq) goto loc_827CCFAC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CCF90:
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
	// bne 0x827ccf90
	if (!cr0.eq) goto loc_827CCF90;
loc_827CCFAC:
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CCFCC:
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
	// bne 0x827ccfcc
	if (!cr0.eq) goto loc_827CCFCC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CCFF0"))) PPC_WEAK_FUNC(sub_827CCFF0);
PPC_FUNC_IMPL(__imp__sub_827CCFF0) {
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
	// beq 0x827cd034
	if (cr0.eq) goto loc_827CD034;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82b5c380
	sub_82B5C380(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827cd038
	goto loc_827CD038;
loc_827CD034:
	// li r31,0
	r31.s64 = 0;
loc_827CD038:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ccdd0
	sub_827CCDD0(ctx, base);
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

__attribute__((alias("__imp__sub_827CD068"))) PPC_WEAK_FUNC(sub_827CD068);
PPC_FUNC_IMPL(__imp__sub_827CD068) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mulli r29,r4,24
	r29.s64 = ctx.r4.s64 * 24;
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8239d058
	sub_8239D058(ctx, base);
	// lwz r27,4(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r23,0(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827cd0c4
	if (cr6.eq) goto loc_827CD0C4;
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
loc_827CD0A8:
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
	// bne 0x827cd0a8
	if (!cr0.eq) goto loc_827CD0A8;
loc_827CD0C4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cd0d4
	if (cr6.eq) goto loc_827CD0D4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CD0D4:
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x825af8e8
	sub_825AF8E8(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x827cd19c
	if (cr0.eq) goto loc_827CD19C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r24,r30,40
	r24.s64 = r30.s64 + 40;
	// addi r25,r11,17136
	r25.s64 = r11.s64 + 17136;
loc_827CD0FC:
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x825af910
	sub_825AF910(ctx, base);
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// add r28,r29,r11
	r28.u64 = r29.u64 + r11.u64;
	// beq cr6,0x827cd14c
	if (cr6.eq) goto loc_827CD14C;
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
loc_827CD130:
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
	// bne 0x827cd130
	if (!cr0.eq) goto loc_827CD130;
loc_827CD14C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82512d88
	sub_82512D88(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x827cd16c
	if (!cr6.eq) goto loc_827CD16C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CD16C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r5,175
	ctx.r5.s64 = 175;
	// bl 0x827b2ab0
	sub_827B2AB0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// blt cr6,0x827cd0fc
	if (cr6.lt) goto loc_827CD0FC;
loc_827CD19C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827cd1ac
	if (cr6.eq) goto loc_827CD1AC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CD1AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_827CD1B8"))) PPC_WEAK_FUNC(sub_827CD1B8);
PPC_FUNC_IMPL(__imp__sub_827CD1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cd1e8
	if (!cr6.eq) goto loc_827CD1E8;
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x827cd1f8
	goto loc_827CD1F8;
loc_827CD1E8:
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// li r9,24
	ctx.r9.s64 = 24;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
loc_827CD1F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cd384
	if (cr6.eq) goto loc_827CD384;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r23,r11
	r23.u64 = r11.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r29,r26
	r29.u64 = r26.u64;
	// li r25,255
	r25.s64 = 255;
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// addi r24,r11,17136
	r24.s64 = r11.s64 + 17136;
loc_827CD21C:
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x825af8e8
	sub_825AF8E8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// mr r31,r26
	r31.u64 = r26.u64;
	// beq 0x827cd378
	if (cr0.eq) goto loc_827CD378;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r27,r30,40
	r27.s64 = r30.s64 + 40;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_827CD244:
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// stfs f31,148(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x825af910
	sub_825AF910(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823205d8
	sub_823205D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// beq cr6,0x827cd2b0
	if (cr6.eq) goto loc_827CD2B0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CD294:
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
	// bne 0x827cd294
	if (!cr0.eq) goto loc_827CD294;
loc_827CD2B0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82512d88
	sub_82512D88(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x827cd2d0
	if (!cr6.eq) goto loc_827CD2D0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_827CD2D0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,187
	ctx.r5.s64 = 187;
	// bl 0x827b61c0
	sub_827B61C0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cd300
	if (cr6.eq) goto loc_827CD300;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CD300:
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r25.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r26,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r26.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r25,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r25.u8);
	// stb r26,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r26.u8);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x827cd330
	if (!cr6.eq) goto loc_827CD330;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_827CD330:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8250c568
	sub_8250C568(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-204
	ctx.r3.s64 = r11.s64 + -204;
	// bne cr6,0x827cd34c
	if (!cr6.eq) goto loc_827CD34C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_827CD34C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x822c9398
	sub_822C9398(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x827cd244
	if (cr6.lt) goto loc_827CD244;
loc_827CD378:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// bne 0x827cd21c
	if (!cr0.eq) goto loc_827CD21C;
loc_827CD384:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_827CD390"))) PPC_WEAK_FUNC(sub_827CD390);
PPC_FUNC_IMPL(__imp__sub_827CD390) {
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
	// lwz r11,196(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cd3b4
	if (!cr6.eq) goto loc_827CD3B4;
	// li r30,0
	r30.s64 = 0;
	// b 0x827cd3c4
	goto loc_827CD3C4;
loc_827CD3B4:
	// lwz r10,200(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 200);
	// li r9,24
	ctx.r9.s64 = 24;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r30,r11,r9
	r30.s32 = r11.s32 / ctx.r9.s32;
loc_827CD3C4:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cd3e8
	if (cr6.eq) goto loc_827CD3E8;
loc_827CD3D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827cd068
	sub_827CD068(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x827cd3d0
	if (cr6.lt) goto loc_827CD3D0;
loc_827CD3E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CD3F0"))) PPC_WEAK_FUNC(sub_827CD3F0);
PPC_FUNC_IMPL(__imp__sub_827CD3F0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x827cd42c
	if (cr6.eq) goto loc_827CD42C;
loc_827CD414:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82427050
	sub_82427050(ctx, base);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x827cd414
	if (!cr6.eq) goto loc_827CD414;
loc_827CD42C:
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

__attribute__((alias("__imp__sub_827CD448"))) PPC_WEAK_FUNC(sub_827CD448);
PPC_FUNC_IMPL(__imp__sub_827CD448) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827cd490
	if (cr6.eq) goto loc_827CD490;
loc_827CD470:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cd484
	if (cr6.eq) goto loc_827CD484;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ccf60
	sub_827CCF60(ctx, base);
loc_827CD484:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// bne 0x827cd470
	if (!cr0.eq) goto loc_827CD470;
loc_827CD490:
	// mulli r11,r31,24
	r11.s64 = r31.s64 * 24;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827CD4A0"))) PPC_WEAK_FUNC(sub_827CD4A0);
PPC_FUNC_IMPL(__imp__sub_827CD4A0) {
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
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r11,-31945
	r11.s64 = -2093547520;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-28708
	r31.s64 = r11.s64 + -28708;
	// lwz r11,-28700(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28700);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x827cd4e8
	if (!cr0.eq) goto loc_827CD4E8;
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// lis r8,-32131
	ctx.r8.s64 = -2105737216;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,24432
	ctx.r9.s64 = ctx.r9.s64 + 24432;
	// addi r8,r8,-12520
	ctx.r8.s64 = ctx.r8.s64 + -12520;
	// stw r11,-28700(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28700, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_827CD4E8:
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
	// beq 0x827cd514
	if (cr0.eq) goto loc_827CD514;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x827cd518
	goto loc_827CD518;
loc_827CD514:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_827CD518:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CD520"))) PPC_WEAK_FUNC(sub_827CD520);
PPC_FUNC_IMPL(__imp__sub_827CD520) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cd55c
	if (cr6.eq) goto loc_827CD55C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x827cd3f0
	sub_827CD3F0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_827CD55C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_827CD580"))) PPC_WEAK_FUNC(sub_827CD580);
PPC_FUNC_IMPL(__imp__sub_827CD580) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// bl 0x827ccf60
	sub_827CCF60(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r22,24
	r22.s64 = 24;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827cd5bc
	if (!cr6.eq) goto loc_827CD5BC;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x827cd5c8
	goto loc_827CD5C8;
loc_827CD5BC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r8,r11,r22
	ctx.r8.s32 = r11.s32 / r22.s32;
loc_827CD5C8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x827cd8c4
	if (cr6.eq) goto loc_827CD8C4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827cd5e0
	if (!cr6.eq) goto loc_827CD5E0;
	// li r11,0
	r11.s64 = 0;
	// b 0x827cd5ec
	goto loc_827CD5EC;
loc_827CD5E0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_827CD5EC:
	// lis r9,2730
	ctx.r9.s64 = 178913280;
	// ori r9,r9,43690
	ctx.r9.u64 = ctx.r9.u64 | 43690;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x827cd608
	if (!cr6.lt) goto loc_827CD608;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x827cd8c4
	goto loc_827CD8C4;
loc_827CD608:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827cd618
	if (!cr6.eq) goto loc_827CD618;
	// li r11,0
	r11.s64 = 0;
	// b 0x827cd624
	goto loc_827CD624;
loc_827CD618:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_827CD624:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x827cd794
	if (!cr6.lt) goto loc_827CD794;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x827cd648
	if (!cr6.lt) goto loc_827CD648;
	// li r11,0
	r11.s64 = 0;
	// b 0x827cd64c
	goto loc_827CD64C;
loc_827CD648:
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_827CD64C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827cd65c
	if (!cr6.eq) goto loc_827CD65C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x827cd668
	goto loc_827CD668;
loc_827CD65C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r9,r22
	ctx.r9.s32 = ctx.r9.s32 / r22.s32;
loc_827CD668:
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + r23.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x827cd694
	if (!cr6.lt) goto loc_827CD694;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827cd684
	if (!cr6.eq) goto loc_827CD684;
	// li r11,0
	r11.s64 = 0;
	// b 0x827cd690
	goto loc_827CD690;
loc_827CD684:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_827CD690:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
loc_827CD694:
	// mulli r24,r11,24
	r24.s64 = r11.s64 * 24;
	// lis r25,-31946
	r25.s64 = -2093613056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x827cd6e0
	goto loc_827CD6E0;
loc_827CD6C4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827cd6d8
	if (cr6.eq) goto loc_827CD6D8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827ccf60
	sub_827CCF60(ctx, base);
loc_827CD6D8:
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
loc_827CD6E0:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bne cr6,0x827cd6c4
	if (!cr6.eq) goto loc_827CD6C4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cd448
	sub_827CD448(ctx, base);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x827cd734
	if (cr6.eq) goto loc_827CD734;
	// subf r28,r30,r26
	r28.s64 = r26.s64 - r30.s64;
loc_827CD710:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cd724
	if (cr6.eq) goto loc_827CD724;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ccf60
	sub_827CCF60(ctx, base);
loc_827CD724:
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// add r11,r28,r30
	r11.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x827cd710
	if (!cr6.eq) goto loc_827CD710;
loc_827CD734:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827cd748
	if (!cr6.eq) goto loc_827CD748;
	// li r11,0
	r11.s64 = 0;
	// b 0x827cd754
	goto loc_827CD754;
loc_827CD748:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_827CD754:
	// add r30,r11,r23
	r30.u64 = r11.u64 + r23.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cd778
	if (cr6.eq) goto loc_827CD778;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x827cd3f0
	sub_827CD3F0(ctx, base);
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_827CD778:
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// add r10,r24,r27
	ctx.r10.u64 = r24.u64 + r27.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x827cd8c4
	goto loc_827CD8C4;
loc_827CD794:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r26,r30
	r11.s64 = r30.s64 - r26.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x827cd834
	if (!cr6.lt) goto loc_827CD834;
	// mulli r29,r23,24
	r29.s64 = r23.s64 * 24;
	// add r28,r29,r26
	r28.u64 = r29.u64 + r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x827cd7e0
	if (cr6.eq) goto loc_827CD7E0;
	// subf r27,r29,r28
	r27.s64 = r28.s64 - r29.s64;
loc_827CD7BC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827cd7d0
	if (cr6.eq) goto loc_827CD7D0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827ccf60
	sub_827CCF60(ctx, base);
loc_827CD7D0:
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x827cd7bc
	if (!cr6.eq) goto loc_827CD7BC;
loc_827CD7E0:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r26,r4
	r11.s64 = ctx.r4.s64 - r26.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// subf r5,r11,r23
	ctx.r5.s64 = r23.s64 - r11.s64;
	// bl 0x827cd448
	sub_827CD448(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r28,r26
	r28.u64 = r26.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// subf r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x827cd8c4
	if (cr6.eq) goto loc_827CD8C4;
loc_827CD818:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827cce98
	sub_827CCE98(ctx, base);
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x827cd818
	if (!cr6.eq) goto loc_827CD818;
	// b 0x827cd8c4
	goto loc_827CD8C4;
loc_827CD834:
	// mulli r25,r23,24
	r25.s64 = r23.s64 * 24;
	// subf r29,r25,r30
	r29.s64 = r30.s64 - r25.s64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// beq cr6,0x827cd870
	if (cr6.eq) goto loc_827CD870;
loc_827CD84C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827cd860
	if (cr6.eq) goto loc_827CD860;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827ccf60
	sub_827CCF60(ctx, base);
loc_827CD860:
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x827cd84c
	if (!cr6.eq) goto loc_827CD84C;
loc_827CD870:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x827cd89c
	if (cr6.eq) goto loc_827CD89C;
	// subf r30,r29,r30
	r30.s64 = r30.s64 - r29.s64;
loc_827CD884:
	// addi r31,r31,-24
	r31.s64 = r31.s64 + -24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// bl 0x827cce98
	sub_827CCE98(ctx, base);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x827cd884
	if (!cr6.eq) goto loc_827CD884;
loc_827CD89C:
	// add r30,r25,r26
	r30.u64 = r25.u64 + r26.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x827cd8c4
	if (cr6.eq) goto loc_827CD8C4;
loc_827CD8AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cce98
	sub_827CCE98(ctx, base);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x827cd8ac
	if (!cr6.eq) goto loc_827CD8AC;
loc_827CD8C4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cd8d4
	if (cr6.eq) goto loc_827CD8D4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CD8D4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cd8e4
	if (cr6.eq) goto loc_827CD8E4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CD8E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_827CD8F0"))) PPC_WEAK_FUNC(sub_827CD8F0);
PPC_FUNC_IMPL(__imp__sub_827CD8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// lwz r10,196(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 196);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x825b08b0
	sub_825B08B0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r11,20
	r11.s64 = 20;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_827CD928:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x827cd928
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_827CD928;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x825af8e8
	sub_825AF8E8(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// mr r27,r30
	r27.u64 = r30.u64;
	// addi r23,r11,-21560
	r23.s64 = r11.s64 + -21560;
	// beq 0x827cda8c
	if (cr0.eq) goto loc_827CDA8C;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r24,r25,40
	r24.s64 = r25.s64 + 40;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r26,r11,17136
	r26.s64 = r11.s64 + 17136;
loc_827CD964:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x825af910
	sub_825AF910(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827ccff0
	sub_827CCFF0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r28,116(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// beq cr6,0x827cd9c4
	if (cr6.eq) goto loc_827CD9C4;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
loc_827CD9A8:
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
	// bne 0x827cd9a8
	if (!cr0.eq) goto loc_827CD9A8;
loc_827CD9C4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82512d88
	sub_82512D88(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x827cd9e4
	if (!cr6.eq) goto loc_827CD9E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_827CD9E4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x827b61c0
	sub_827B61C0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,100(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x827cda68
	if (cr6.eq) goto loc_827CDA68;
loc_827CDA14:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r23
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r23.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x825b1058
	sub_825B1058(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bne cr6,0x827cda14
	if (!cr6.eq) goto loc_827CDA14;
loc_827CDA68:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827cda78
	if (cr6.eq) goto loc_827CDA78;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CDA78:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r22
	cr6.compare<uint32_t>(r27.u32, r22.u32, xer);
	// blt cr6,0x827cd964
	if (cr6.lt) goto loc_827CD964;
loc_827CDA8C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cdaa0
	if (!cr6.eq) goto loc_827CDAA0;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x825b0578
	sub_825B0578(ctx, base);
loc_827CDAA0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r28,r11,17208
	r28.s64 = r11.s64 + 17208;
loc_827CDAAC:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cdb08
	if (cr6.eq) goto loc_827CDB08;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// bge cr6,0x827cdb08
	if (!cr6.lt) goto loc_827CDB08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r31,r23
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r23.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb5d0
	sub_82DFB5D0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x825b05c0
	sub_825B05C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_827CDB08:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r31,80
	cr6.compare<uint32_t>(r31.u32, 80, xer);
	// blt cr6,0x827cdaac
	if (cr6.lt) goto loc_827CDAAC;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_827CDB20"))) PPC_WEAK_FUNC(sub_827CDB20);
PPC_FUNC_IMPL(__imp__sub_827CDB20) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cdb58
	if (cr6.eq) goto loc_827CDB58;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,24
	ctx.r10.s64 = 24;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw. r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x827cdb60
	if (!cr0.eq) goto loc_827CDB60;
loc_827CDB58:
	// li r30,0
	r30.s64 = 0;
	// b 0x827cdb68
	goto loc_827CDB68;
loc_827CDB60:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// divw r30,r11,r10
	r30.s32 = r11.s32 / ctx.r10.s32;
loc_827CDB68:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cd580
	sub_827CD580(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CDB90"))) PPC_WEAK_FUNC(sub_827CDB90);
PPC_FUNC_IMPL(__imp__sub_827CDB90) {
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
	// lwz r11,196(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 196);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cdbb4
	if (!cr6.eq) goto loc_827CDBB4;
	// li r29,0
	r29.s64 = 0;
	// b 0x827cdbc4
	goto loc_827CDBC4;
loc_827CDBB4:
	// lwz r10,200(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 200);
	// li r9,24
	ctx.r9.s64 = 24;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r29,r11,r9
	r29.s32 = r11.s32 / ctx.r9.s32;
loc_827CDBC4:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827cdc08
	if (cr6.eq) goto loc_827CDC08;
	// li r30,0
	r30.s64 = 0;
loc_827CDBD4:
	// lwz r11,196(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 196);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x825af8e8
	sub_825AF8E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827cdbf8
	if (cr0.eq) goto loc_827CDBF8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827cd8f0
	sub_827CD8F0(ctx, base);
loc_827CDBF8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x827cdbd4
	if (cr6.lt) goto loc_827CDBD4;
loc_827CDC08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827CDC10"))) PPC_WEAK_FUNC(sub_827CDC10);
PPC_FUNC_IMPL(__imp__sub_827CDC10) {
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
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cdc40
	if (!cr6.eq) goto loc_827CDC40;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x827cdc4c
	goto loc_827CDC4C;
loc_827CDC40:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
loc_827CDC4C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cdc88
	if (cr6.eq) goto loc_827CDC88;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x827cdc88
	if (!cr6.lt) goto loc_827CDC88;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cdc7c
	if (cr6.eq) goto loc_827CDC7C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ccf60
	sub_827CCF60(ctx, base);
loc_827CDC7C:
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x827cdc9c
	goto loc_827CDC9C;
loc_827CDC88:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827cdb20
	sub_827CDB20(ctx, base);
loc_827CDC9C:
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

__attribute__((alias("__imp__sub_827CDCB8"))) PPC_WEAK_FUNC(sub_827CDCB8);
PPC_FUNC_IMPL(__imp__sub_827CDCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,17276
	r11.s64 = r11.s64 + 17276;
	// addi r10,r10,17256
	ctx.r10.s64 = ctx.r10.s64 + 17256;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// addi r27,r31,224
	r27.s64 = r31.s64 + 224;
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// addi r29,r31,192
	r29.s64 = r31.s64 + 192;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// bl 0x8254e108
	sub_8254E108(ctx, base);
	// addi r4,r28,20
	ctx.r4.s64 = r28.s64 + 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8254e108
	sub_8254E108(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x827cdda0
	if (!cr6.gt) goto loc_827CDDA0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_827CDD4C:
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x827cdc10
	sub_827CDC10(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cdd80
	if (cr6.eq) goto loc_827CDD80;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CDD80:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cdd90
	if (cr6.eq) goto loc_827CDD90;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CDD90:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x827cdd4c
	if (cr6.lt) goto loc_827CDD4C;
loc_827CDDA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827CDDB0"))) PPC_WEAK_FUNC(sub_827CDDB0);
PPC_FUNC_IMPL(__imp__sub_827CDDB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x827cddb8
	sub_827CDDB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CDDB8"))) PPC_WEAK_FUNC(sub_827CDDB8);
PPC_FUNC_IMPL(__imp__sub_827CDDB8) {
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
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x823d54f0
	sub_823D54F0(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x823d54f0
	sub_823D54F0(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x827cd520
	sub_827CD520(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cde04
	if (cr0.eq) goto loc_827CDE04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827CDE04:
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

__attribute__((alias("__imp__sub_827CDE20"))) PPC_WEAK_FUNC(sub_827CDE20);
PPC_FUNC_IMPL(__imp__sub_827CDE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,17276
	r11.s64 = r11.s64 + 17276;
	// addi r10,r10,17256
	ctx.r10.s64 = ctx.r10.s64 + 17256;
	// li r31,0
	r31.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// addi r29,r30,192
	r29.s64 = r30.s64 + 192;
	// stw r31,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r31.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r31,200(r30)
	PPC_STORE_U32(r30.u32 + 200, r31.u32);
	// stw r31,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r31.u32);
	// stw r31,212(r30)
	PPC_STORE_U32(r30.u32 + 212, r31.u32);
	// stw r31,216(r30)
	PPC_STORE_U32(r30.u32 + 216, r31.u32);
	// stw r31,220(r30)
	PPC_STORE_U32(r30.u32 + 220, r31.u32);
	// stw r31,228(r30)
	PPC_STORE_U32(r30.u32 + 228, r31.u32);
	// stw r31,232(r30)
	PPC_STORE_U32(r30.u32 + 232, r31.u32);
	// stw r31,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r31.u32);
	// beq cr6,0x827cdedc
	if (cr6.eq) goto loc_827CDEDC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_827CDE90:
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x827cdc10
	sub_827CDC10(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cdec4
	if (cr6.eq) goto loc_827CDEC4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CDEC4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cded4
	if (cr6.eq) goto loc_827CDED4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CDED4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x827cde90
	if (!cr0.eq) goto loc_827CDE90;
loc_827CDEDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827CDEF0"))) PPC_WEAK_FUNC(sub_827CDEF0);
PPC_FUNC_IMPL(__imp__sub_827CDEF0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// rlwinm r10,r5,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x4;
	// addi r11,r11,-21372
	r11.s64 = r11.s64 + -21372;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// beq 0x827cdf90
	if (cr0.eq) goto loc_827CDF90;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// bl 0x825ab1f8
	sub_825AB1F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb960
	sub_82DFB960(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82dfb960
	sub_82DFB960(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// b 0x827cdfac
	goto loc_827CDFAC;
loc_827CDF90:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb960
	sub_82DFB960(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82dfb960
	sub_82DFB960(ctx, base);
loc_827CDFAC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827CDFC8"))) PPC_WEAK_FUNC(sub_827CDFC8);
PPC_FUNC_IMPL(__imp__sub_827CDFC8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ce03c
	if (cr0.eq) goto loc_827CE03C;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ab1f8
	sub_825AB1F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb960
	sub_82DFB960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// b 0x827ce04c
	goto loc_827CE04C;
loc_827CE03C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb960
	sub_82DFB960(ctx, base);
loc_827CE04C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827CE058"))) PPC_WEAK_FUNC(sub_827CE058);
PPC_FUNC_IMPL(__imp__sub_827CE058) {
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
	// lwz r11,228(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ce08c
	if (cr6.eq) goto loc_827CE08C;
	// lwz r10,232(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827ce0bc
	if (!cr0.eq) goto loc_827CE0BC;
loc_827CE08C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cdef0
	sub_827CDEF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// b 0x827ce0d8
	goto loc_827CE0D8;
loc_827CE0BC:
	// lwz r11,228(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cdef0
	sub_827CDEF0(ctx, base);
loc_827CE0D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CE0E8"))) PPC_WEAK_FUNC(sub_827CE0E8);
PPC_FUNC_IMPL(__imp__sub_827CE0E8) {
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
	// lwz r11,212(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ce11c
	if (cr6.eq) goto loc_827CE11C;
	// lwz r10,216(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827ce14c
	if (!cr0.eq) goto loc_827CE14C;
loc_827CE11C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cdfc8
	sub_827CDFC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// b 0x827ce168
	goto loc_827CE168;
loc_827CE14C:
	// lwz r11,212(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cdfc8
	sub_827CDFC8(ctx, base);
loc_827CE168:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CE178"))) PPC_WEAK_FUNC(sub_827CE178);
PPC_FUNC_IMPL(__imp__sub_827CE178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af8
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f29.u64);
	// stfd f30,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r16,0
	r16.s64 = 0;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r18,r16
	r18.u64 = r16.u64;
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ce1b8
	if (!cr6.eq) goto loc_827CE1B8;
	// mr r17,r16
	r17.u64 = r16.u64;
	// b 0x827ce1c8
	goto loc_827CE1C8;
loc_827CE1B8:
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// li r9,24
	ctx.r9.s64 = 24;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r17,r11,r9
	r17.s32 = r11.s32 / ctx.r9.s32;
loc_827CE1C8:
	// mr r31,r16
	r31.u64 = r16.u64;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x827ce4f4
	if (cr6.eq) goto loc_827CE4F4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lfs f29,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f29.f64 = double(temp.f32);
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfs f30,-5316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5316);
	f30.f64 = double(temp.f32);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lfs f31,2240(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r24,r16
	r24.u64 = r16.u64;
	// addi r23,r9,-10780
	r23.s64 = ctx.r9.s64 + -10780;
	// addi r22,r8,17332
	r22.s64 = ctx.r8.s64 + 17332;
	// addi r21,r7,25712
	r21.s64 = ctx.r7.s64 + 25712;
	// addi r20,r6,17316
	r20.s64 = ctx.r6.s64 + 17316;
	// addi r27,r5,17136
	r27.s64 = ctx.r5.s64 + 17136;
	// addi r26,r10,10612
	r26.s64 = ctx.r10.s64 + 10612;
	// addi r25,r11,-16520
	r25.s64 = r11.s64 + -16520;
loc_827CE228:
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// add r28,r11,r24
	r28.u64 = r11.u64 + r24.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827ce058
	sub_827CE058(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x827ce0e8
	sub_827CE0E8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x827ce2e4
	if (cr0.eq) goto loc_827CE2E4;
	// lis r11,-32131
	r11.s64 = -2105737216;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// addi r11,r11,-10000
	r11.s64 = r11.s64 + -10000;
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r16.u32);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r16,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r16.u32);
	// bl 0x827cd4a0
	sub_827CD4A0(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r18,r18,1
	r18.u64 = r18.u64 | 1;
	// bl 0x825afd88
	sub_825AFD88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827ce2e8
	goto loc_827CE2E8;
loc_827CE2E4:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_827CE2E8:
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8263a8d8
	sub_8263A8D8(ctx, base);
	// clrlwi. r11,r18,31
	r11.u64 = r18.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827ce308
	if (cr0.eq) goto loc_827CE308;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r18,r18,0,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
loc_827CE308:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// beq cr6,0x827ce340
	if (cr6.eq) goto loc_827CE340;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CE324:
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
	// bne 0x827ce324
	if (!cr0.eq) goto loc_827CE324;
loc_827CE340:
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825a74a8
	sub_825A74A8(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827ce058
	sub_827CE058(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x827ce0e8
	sub_827CE0E8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827ce3e4
	if (cr0.eq) goto loc_827CE3E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825b16a8
	sub_825B16A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827ce3e8
	goto loc_827CE3E8;
loc_827CE3E4:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_827CE3E8:
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// bl 0x825b7748
	sub_825B7748(ctx, base);
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// beq cr6,0x827ce428
	if (cr6.eq) goto loc_827CE428;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CE40C:
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
	// bne 0x827ce40c
	if (!cr0.eq) goto loc_827CE40C;
loc_827CE428:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825a74a8
	sub_825A74A8(ctx, base);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ce058
	sub_827CE058(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x827ce0e8
	sub_827CE0E8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r5,r28,4
	ctx.r5.s64 = r28.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825b2d50
	sub_825B2D50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825a69e8
	sub_825A69E8(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r24,r24,24
	r24.s64 = r24.s64 + 24;
	// cmplw cr6,r31,r17
	cr6.compare<uint32_t>(r31.u32, r17.u32, xer);
	// blt cr6,0x827ce228
	if (cr6.lt) goto loc_827CE228;
loc_827CE4F4:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_827CE508"))) PPC_WEAK_FUNC(sub_827CE508);
PPC_FUNC_IMPL(__imp__sub_827CE508) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,33(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ce554
	if (!cr6.eq) goto loc_827CE554;
	// lis r29,-31946
	r29.s64 = -2093613056;
loc_827CE52C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x827ce508
	sub_827CE508(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6512(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 6512);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lbz r11,33(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ce52c
	if (cr6.eq) goto loc_827CE52C;
loc_827CE554:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CE560"))) PPC_WEAK_FUNC(sub_827CE560);
PPC_FUNC_IMPL(__imp__sub_827CE560) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x827ce508
	sub_827CE508(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_827CE5B8"))) PPC_WEAK_FUNC(sub_827CE5B8);
PPC_FUNC_IMPL(__imp__sub_827CE5B8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r31.u32);
	// lbz r11,33(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ce624
	if (cr6.eq) goto loc_827CE624;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16264
	ctx.r4.s64 = r11.s64 + 16264;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c2ed0
	sub_822C2ED0(ctx, base);
	// bl 0x822c1ca8
	sub_822C1CA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,16244
	r11.s64 = r11.s64 + 16244;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c2978
	sub_822C2978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
loc_827CE624:
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// mr r26,r31
	r26.u64 = r31.u64;
	// bl 0x827beaf0
	sub_827BEAF0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,260(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// beq cr6,0x827ce64c
	if (cr6.eq) goto loc_827CE64C;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x827ce670
	goto loc_827CE670;
loc_827CE64C:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lbz r10,33(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827ce664
	if (cr6.eq) goto loc_827CE664;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x827ce670
	goto loc_827CE670;
loc_827CE664:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(r25.u32, r26.u32, xer);
	// bne cr6,0x827ce748
	if (!cr6.eq) goto loc_827CE748;
loc_827CE670:
	// lbz r11,33(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 33);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ce684
	if (!cr6.eq) goto loc_827CE684;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_827CE684:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x827ce69c
	if (!cr6.eq) goto loc_827CE69C;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x827ce6b4
	goto loc_827CE6B4;
loc_827CE69C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x827ce6b0
	if (!cr6.eq) goto loc_827CE6B0;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x827ce6b4
	goto loc_827CE6B4;
loc_827CE6B0:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_827CE6B4:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x827ce6fc
	if (!cr6.eq) goto loc_827CE6FC;
	// lbz r11,33(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ce6d8
	if (cr6.eq) goto loc_827CE6D8;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x827ce6f8
	goto loc_827CE6F8;
loc_827CE6D8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x827ce6ec
	goto loc_827CE6EC;
loc_827CE6E4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_827CE6EC:
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ce6e4
	if (cr6.eq) goto loc_827CE6E4;
loc_827CE6F8:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_827CE6FC:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x827ce7dc
	if (!cr6.eq) goto loc_827CE7DC;
	// lbz r11,33(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ce720
	if (cr6.eq) goto loc_827CE720;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x827ce740
	goto loc_827CE740;
loc_827CE720:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x827ce734
	goto loc_827CE734;
loc_827CE72C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_827CE734:
	// lbz r8,33(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827ce72c
	if (cr6.eq) goto loc_827CE72C;
loc_827CE740:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x827ce7dc
	goto loc_827CE7DC;
loc_827CE748:
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x827ce768
	if (!cr6.eq) goto loc_827CE768;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x827ce790
	goto loc_827CE790;
loc_827CE768:
	// lbz r11,33(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 33);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827ce77c
	if (!cr6.eq) goto loc_827CE77C;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_827CE77C:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
loc_827CE790:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x827ce7a8
	if (!cr6.eq) goto loc_827CE7A8;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x827ce7c4
	goto loc_827CE7C4;
loc_827CE7A8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x827ce7c0
	if (!cr6.eq) goto loc_827CE7C0;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x827ce7c4
	goto loc_827CE7C4;
loc_827CE7C0:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_827CE7C4:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lbz r11,32(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// lbz r10,32(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 32);
	// stb r11,32(r25)
	PPC_STORE_U8(r25.u32 + 32, r11.u8);
	// stb r10,32(r26)
	PPC_STORE_U8(r26.u32 + 32, ctx.r10.u8);
loc_827CE7DC:
	// lbz r11,32(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x827ce97c
	if (!cr6.eq) goto loc_827CE97C;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x827ce978
	if (cr6.eq) goto loc_827CE978;
	// li r29,0
	r29.s64 = 0;
loc_827CE800:
	// lbz r11,32(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x827ce978
	if (!cr6.eq) goto loc_827CE978;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x827ce8bc
	if (!cr6.eq) goto loc_827CE8BC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827ce840
	if (!cr6.eq) goto loc_827CE840;
	// stb r30,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822fb798
	sub_822FB798(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_827CE840:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827ce910
	if (!cr6.eq) goto loc_827CE910;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ce86c
	if (!cr6.eq) goto loc_827CE86C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x827ce90c
	if (cr6.eq) goto loc_827CE90C;
loc_827CE86C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ce898
	if (!cr6.eq) goto loc_827CE898;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r30,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, r30.u8);
	// stb r29,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r29.u8);
	// bl 0x822fb800
	sub_822FB800(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_827CE898:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(r11.u32 + 32, ctx.r10.u8);
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r30,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r30.u8);
	// bl 0x822fb798
	sub_822FB798(ctx, base);
	// b 0x827ce978
	goto loc_827CE978;
loc_827CE8BC:
	// lbz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827ce8e0
	if (!cr6.eq) goto loc_827CE8E0;
	// stb r30,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822fb800
	sub_822FB800(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_827CE8E0:
	// lbz r10,33(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 33);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827ce910
	if (!cr6.eq) goto loc_827CE910;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ce92c
	if (!cr6.eq) goto loc_827CE92C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ce92c
	if (!cr6.eq) goto loc_827CE92C;
loc_827CE90C:
	// stb r29,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r29.u8);
loc_827CE910:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x827ce800
	if (!cr6.eq) goto loc_827CE800;
	// b 0x827ce978
	goto loc_827CE978;
loc_827CE92C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827ce958
	if (!cr6.eq) goto loc_827CE958;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r30,32(r10)
	PPC_STORE_U8(ctx.r10.u32 + 32, r30.u8);
	// stb r29,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r29.u8);
	// bl 0x822fb798
	sub_822FB798(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_827CE958:
	// lbz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,32(r11)
	PPC_STORE_U8(r11.u32 + 32, ctx.r10.u8);
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r30,32(r11)
	PPC_STORE_U8(r11.u32 + 32, r30.u8);
	// bl 0x822fb800
	sub_822FB800(ctx, base);
loc_827CE978:
	// stb r30,32(r28)
	PPC_STORE_U8(r28.u32 + 32, r30.u8);
loc_827CE97C:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827ce9a0
	if (cr6.eq) goto loc_827CE9A0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_827CE9A0:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_827CE9B0"))) PPC_WEAK_FUNC(sub_827CE9B0);
PPC_FUNC_IMPL(__imp__sub_827CE9B0) {
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
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x827cea1c
	if (!cr6.eq) goto loc_827CEA1C;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x827cea1c
	if (!cr6.eq) goto loc_827CEA1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ce560
	sub_827CE560(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x827cea28
	goto loc_827CEA28;
loc_827CE9FC:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x827beaf0
	sub_827BEAF0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ce5b8
	sub_827CE5B8(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_827CEA1C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x827ce9fc
	if (!cr6.eq) goto loc_827CE9FC;
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
loc_827CEA28:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827CEA38"))) PPC_WEAK_FUNC(sub_827CEA38);
PPC_FUNC_IMPL(__imp__sub_827CEA38) {
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
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r11,-31945
	r11.s64 = -2093547520;
	// addi r31,r11,-28688
	r31.s64 = r11.s64 + -28688;
	// lwz r11,-28656(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28656);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x827cea94
	if (!cr0.eq) goto loc_827CEA94;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-28656(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28656, r11.u32);
	// bl 0x82927f18
	sub_82927F18(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82927f18
	sub_82927F18(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lis r11,-31963
	r11.s64 = -2094727168;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// addi r3,r11,-31800
	ctx.r3.s64 = r11.s64 + -31800;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
loc_827CEA94:
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

__attribute__((alias("__imp__sub_827CEAB0"))) PPC_WEAK_FUNC(sub_827CEAB0);
PPC_FUNC_IMPL(__imp__sub_827CEAB0) {
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
	// bl 0x827cea38
	sub_827CEA38(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_827CEAF8"))) PPC_WEAK_FUNC(sub_827CEAF8);
PPC_FUNC_IMPL(__imp__sub_827CEAF8) {
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
	// bl 0x827ceab0
	sub_827CEAB0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,13012
	r29.s64 = r11.s64 + 13012;
	// li r5,43
	ctx.r5.s64 = 43;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x827ceb44
	if (cr0.eq) goto loc_827CEB44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827bcbe0
	sub_827BCBE0(ctx, base);
	// lis r11,-31945
	r11.s64 = -2093547520;
	// stw r31,-28692(r11)
	PPC_STORE_U32(r11.u32 + -28692, r31.u32);
	// b 0x827ceb50
	goto loc_827CEB50;
loc_827CEB44:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,-28692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28692, r11.u32);
loc_827CEB50:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// lis r11,-31945
	r11.s64 = -2093547520;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r11,-28696
	r31.s64 = r11.s64 + -28696;
	// beq 0x827ceb88
	if (cr0.eq) goto loc_827CEB88;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r3,-28696(r11)
	PPC_STORE_U32(r11.u32 + -28696, ctx.r3.u32);
	// b 0x827ceb8c
	goto loc_827CEB8C;
loc_827CEB88:
	// stw r30,-28696(r11)
	PPC_STORE_U32(r11.u32 + -28696, r30.u32);
loc_827CEB8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827bf288
	sub_827BF288(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82302968
	sub_82302968(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CEBB0"))) PPC_WEAK_FUNC(sub_827CEBB0);
PPC_FUNC_IMPL(__imp__sub_827CEBB0) {
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
	// lis r11,-31945
	r11.s64 = -2093547520;
	// lwz r31,-28692(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -28692);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827cebe0
	if (cr6.eq) goto loc_827CEBE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827bf188
	sub_827BF188(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827CEBE0:
	// lis r31,-31945
	r31.s64 = -2093547520;
	// lwz r3,-28696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -28696);
	// bl 0x827bed60
	sub_827BED60(ctx, base);
	// lwz r31,-28696(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + -28696);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827cec08
	if (cr6.eq) goto loc_827CEC08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827CEC08:
	// bl 0x827cea38
	sub_827CEA38(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
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

__attribute__((alias("__imp__sub_827CEC38"))) PPC_WEAK_FUNC(sub_827CEC38);
PPC_FUNC_IMPL(__imp__sub_827CEC38) {
	PPC_FUNC_PROLOGUE();
	// b 0x827ceaf8
	sub_827CEAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CEC40"))) PPC_WEAK_FUNC(sub_827CEC40);
PPC_FUNC_IMPL(__imp__sub_827CEC40) {
	PPC_FUNC_PROLOGUE();
	// b 0x827cebb0
	sub_827CEBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827CEC48"))) PPC_WEAK_FUNC(sub_827CEC48);
PPC_FUNC_IMPL(__imp__sub_827CEC48) {
	PPC_FUNC_PROLOGUE();
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
	// fcmpu cr6,f3,f0
	cr6.compare(ctx.f3.f64, f0.f64);
	// bge cr6,0x827cec60
	if (!cr6.lt) goto loc_827CEC60;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f3,2440(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2440);
	ctx.f3.f64 = double(temp.f32);
loc_827CEC60:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x827cec70
	if (!cr6.lt) goto loc_827CEC70;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f1,27976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27976);
	ctx.f1.f64 = double(temp.f32);
loc_827CEC70:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f2.f64, f0.f64);
	// bgt cr6,0x827cec80
	if (cr6.gt) goto loc_827CEC80;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f2,-13856(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -13856);
	ctx.f2.f64 = double(temp.f32);
loc_827CEC80:
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// ble cr6,0x827cec8c
	if (!cr6.gt) goto loc_827CEC8C;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
loc_827CEC8C:
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stfs f2,4(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CECA0"))) PPC_WEAK_FUNC(sub_827CECA0);
PPC_FUNC_IMPL(__imp__sub_827CECA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,-15508(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15508);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x827cecc4
	if (!cr6.gt) goto loc_827CECC4;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f1,f0
	f0.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - f0.f64)));
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
loc_827CECC4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x827cecf8
	if (cr6.gt) goto loc_827CECF8;
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 28);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827cecf8
	if (!cr6.eq) goto loc_827CECF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stb r10,28(r11)
	PPC_STORE_U8(r11.u32 + 28, ctx.r10.u8);
	// blr 
	return;
loc_827CECF8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x827ced04
	if (!cr6.lt) goto loc_827CED04;
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
loc_827CED04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CED10"))) PPC_WEAK_FUNC(sub_827CED10);
PPC_FUNC_IMPL(__imp__sub_827CED10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f1,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + f0.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x827ced34
	if (cr6.lt) goto loc_827CED34;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_827CED34:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x827ced60
	if (!cr6.gt) goto loc_827CED60;
	// lbz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 28);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x827ced60
	if (!cr0.eq) goto loc_827CED60;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,28(r11)
	PPC_STORE_U8(r11.u32 + 28, ctx.r10.u8);
	// blr 
	return;
loc_827CED60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CED68"))) PPC_WEAK_FUNC(sub_827CED68);
PPC_FUNC_IMPL(__imp__sub_827CED68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 + 172;
loc_827CED70:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x827ced94
	if (cr0.eq) goto loc_827CED94;
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_827CED94:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x827ced70
	if (cr6.lt) goto loc_827CED70;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// addi r11,r3,148
	r11.s64 = ctx.r3.s64 + 148;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// lfs f13,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,172(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CEDD0"))) PPC_WEAK_FUNC(sub_827CEDD0);
PPC_FUNC_IMPL(__imp__sub_827CEDD0) {
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
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// fmr f11,f3
	ctx.f11.f64 = ctx.f3.f64;
loc_827CEDF0:
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cee14
	if (cr0.eq) goto loc_827CEE14;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// fmr f3,f11
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f11.f64;
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// bl 0x827cec48
	sub_827CEC48(ctx, base);
loc_827CEE14:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x827cedf0
	if (cr6.lt) goto loc_827CEDF0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CEE38"))) PPC_WEAK_FUNC(sub_827CEE38);
PPC_FUNC_IMPL(__imp__sub_827CEE38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 + 172;
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
loc_827CEE48:
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x827cee5c
	if (cr0.eq) goto loc_827CEE5C;
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_827CEE5C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x827cee48
	if (cr6.lt) goto loc_827CEE48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CEE70"))) PPC_WEAK_FUNC(sub_827CEE70);
PPC_FUNC_IMPL(__imp__sub_827CEE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// fabs f13,f0
	ctx.f13.u64 = f0.u64 & ~0x8000000000000000;
	// lfs f0,-3776(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3776);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x827cee90
	if (cr6.lt) goto loc_827CEE90;
	// li r11,0
	r11.s64 = 0;
loc_827CEE90:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827ceebc
	if (!cr0.eq) goto loc_827CEEBC;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x827ceeb0
	if (cr6.lt) goto loc_827CEEB0;
	// li r11,0
	r11.s64 = 0;
loc_827CEEB0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr 
	if (cr0.eq) return;
loc_827CEEBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CEEC8"))) PPC_WEAK_FUNC(sub_827CEEC8);
PPC_FUNC_IMPL(__imp__sub_827CEEC8) {
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
	// beq 0x827cef20
	if (cr0.eq) goto loc_827CEF20;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,17356
	ctx.r9.s64 = r11.s64 + 17356;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827cef24
	goto loc_827CEF24;
loc_827CEF20:
	// li r11,0
	r11.s64 = 0;
loc_827CEF24:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cef70
	if (!cr6.eq) goto loc_827CEF70;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827cef50
	if (cr6.eq) goto loc_827CEF50;
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
loc_827CEF50:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-21076(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21076);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827CEF70:
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

__attribute__((alias("__imp__sub_827CEF90"))) PPC_WEAK_FUNC(sub_827CEF90);
PPC_FUNC_IMPL(__imp__sub_827CEF90) {
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
	// beq 0x827cefe8
	if (cr0.eq) goto loc_827CEFE8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,17376
	ctx.r9.s64 = r11.s64 + 17376;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827cefec
	goto loc_827CEFEC;
loc_827CEFE8:
	// li r11,0
	r11.s64 = 0;
loc_827CEFEC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cf038
	if (!cr6.eq) goto loc_827CF038;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827cf018
	if (cr6.eq) goto loc_827CF018;
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
loc_827CF018:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-21076(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21076);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827CF038:
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

__attribute__((alias("__imp__sub_827CF058"))) PPC_WEAK_FUNC(sub_827CF058);
PPC_FUNC_IMPL(__imp__sub_827CF058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x827cee70
	sub_827CEE70(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827cf07c
	if (!cr0.eq) goto loc_827CF07C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827cf104
	goto loc_827CF104;
loc_827CF07C:
	// lbz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x827cf0a8
	if (!cr0.eq) goto loc_827CF0A8;
	// lfs f0,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x827cf0a8
	if (cr6.lt) goto loc_827CF0A8;
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
loc_827CF0A0:
	// stb r11,28(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28, r11.u8);
	// b 0x827cf104
	goto loc_827CF104;
loc_827CF0A8:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x827cf0d4
	if (!cr6.eq) goto loc_827CF0D4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x827cf0d4
	if (cr6.gt) goto loc_827CF0D4;
	// stfs f0,24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x827cf0a0
	goto loc_827CF0A0;
loc_827CF0D4:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x827cf114
	if (cr6.lt) goto loc_827CF114;
	// bne cr6,0x827cf104
	if (!cr6.eq) goto loc_827CF104;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827cf120
	if (cr6.eq) goto loc_827CF120;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827cf120
	if (!cr6.eq) goto loc_827CF120;
loc_827CF0FC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x827ced10
	sub_827CED10(ctx, base);
loc_827CF104:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_827CF114:
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827cf0fc
	if (!cr6.eq) goto loc_827CF0FC;
loc_827CF120:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x827ceca0
	sub_827CECA0(ctx, base);
	// b 0x827cf104
	goto loc_827CF104;
}

__attribute__((alias("__imp__sub_827CF130"))) PPC_WEAK_FUNC(sub_827CF130);
PPC_FUNC_IMPL(__imp__sub_827CF130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x827cf170
	goto loc_827CF170;
loc_827CF160:
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x827cf178
	if (cr6.eq) goto loc_827CF178;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_827CF170:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x827cf160
	if (!cr6.eq) goto loc_827CF160;
loc_827CF178:
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x827cf1e8
	if (cr6.eq) goto loc_827CF1E8;
	// addi r4,r31,280
	ctx.r4.s64 = r31.s64 + 280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824692c8
	sub_824692C8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,168
	r11.s64 = r31.s64 + 168;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
loc_827CF1A0:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x827cf1d8
	if (cr0.eq) goto loc_827CF1D8;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lfs f13,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r10.u32);
	// bne 0x827cf1d8
	if (!cr0.eq) goto loc_827CF1D8;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
loc_827CF1D8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// blt cr6,0x827cf1a0
	if (cr6.lt) goto loc_827CF1A0;
loc_827CF1E8:
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

__attribute__((alias("__imp__sub_827CF200"))) PPC_WEAK_FUNC(sub_827CF200);
PPC_FUNC_IMPL(__imp__sub_827CF200) {
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
	// beq 0x827cf244
	if (cr0.eq) goto loc_827CF244;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827d0668
	sub_827D0668(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827cf248
	goto loc_827CF248;
loc_827CF244:
	// li r31,0
	r31.s64 = 0;
loc_827CF248:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827ceec8
	sub_827CEEC8(ctx, base);
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

__attribute__((alias("__imp__sub_827CF278"))) PPC_WEAK_FUNC(sub_827CF278);
PPC_FUNC_IMPL(__imp__sub_827CF278) {
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
	// beq 0x827cf2bc
	if (cr0.eq) goto loc_827CF2BC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827d0618
	sub_827D0618(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827cf2c0
	goto loc_827CF2C0;
loc_827CF2BC:
	// li r31,0
	r31.s64 = 0;
loc_827CF2C0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827cef90
	sub_827CEF90(ctx, base);
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

__attribute__((alias("__imp__sub_827CF2F0"))) PPC_WEAK_FUNC(sub_827CF2F0);
PPC_FUNC_IMPL(__imp__sub_827CF2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r29,r11,17392
	r29.s64 = r11.s64 + 17392;
	// lfs f31,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_827CF324:
	// rlwinm r11,r30,5,0,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,148
	ctx.r3.s64 = r11.s64 + 148;
	// bl 0x827cf058
	sub_827CF058(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x827cf3c0
	if (cr6.eq) goto loc_827CF3C0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x827cf440
	if (!cr6.eq) goto loc_827CF440;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x827cf278
	sub_827CF278(ctx, base);
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
	// beq cr6,0x827cf38c
	if (cr6.eq) goto loc_827CF38C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CF370:
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
	// bne 0x827cf370
	if (!cr0.eq) goto loc_827CF370;
loc_827CF38C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,276(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,263
	ctx.r5.s64 = 263;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cf3b8
	if (cr6.eq) goto loc_827CF3B8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CF3B8:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x827cf434
	goto loc_827CF434;
loc_827CF3C0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827cf200
	sub_827CF200(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// beq cr6,0x827cf404
	if (cr6.eq) goto loc_827CF404;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CF3E8:
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
	// bne 0x827cf3e8
	if (!cr0.eq) goto loc_827CF3E8;
loc_827CF404:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,276(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,259
	ctx.r5.s64 = 259;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cf430
	if (cr6.eq) goto loc_827CF430;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CF430:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_827CF434:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cf440
	if (cr6.eq) goto loc_827CF440;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CF440:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x827cf324
	if (cr6.lt) goto loc_827CF324;
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

__attribute__((alias("__imp__sub_827CF460"))) PPC_WEAK_FUNC(sub_827CF460);
PPC_FUNC_IMPL(__imp__sub_827CF460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82e61f28
	sub_82E61F28(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r31,148
	r11.s64 = r31.s64 + 148;
	// addi r9,r10,17508
	ctx.r9.s64 = ctx.r10.s64 + 17508;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
loc_827CF49C:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stb r30,28(r11)
	PPC_STORE_U8(r11.u32 + 28, r30.u8);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bge 0x827cf49c
	if (!cr0.lt) goto loc_827CF49C;
	// stw r28,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r28.u32);
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// bl 0x8255e2b8
	sub_8255E2B8(ctx, base);
	// stw r3,284(r31)
	PPC_STORE_U32(r31.u32 + 284, ctx.r3.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827CF4F8"))) PPC_WEAK_FUNC(sub_827CF4F8);
PPC_FUNC_IMPL(__imp__sub_827CF4F8) {
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
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// bl 0x82b67888
	sub_82B67888(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// bl 0x82e61da0
	sub_82E61DA0(ctx, base);
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

__attribute__((alias("__imp__sub_827CF548"))) PPC_WEAK_FUNC(sub_827CF548);
PPC_FUNC_IMPL(__imp__sub_827CF548) {
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
	// bl 0x827cf4f8
	sub_827CF4F8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827cf578
	if (cr0.eq) goto loc_827CF578;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827CF578:
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

__attribute__((alias("__imp__sub_827CF598"))) PPC_WEAK_FUNC(sub_827CF598);
PPC_FUNC_IMPL(__imp__sub_827CF598) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x827cf5d0
	goto loc_827CF5D0;
loc_827CF5C0:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x827cf5d8
	if (cr6.eq) goto loc_827CF5D8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_827CF5D0:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827cf5c0
	if (!cr6.eq) goto loc_827CF5C0;
loc_827CF5D8:
	// lwz r10,284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827cf670
	if (!cr6.eq) goto loc_827CF670;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r28,284(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// addi r30,r31,280
	r30.s64 = r31.s64 + 280;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x8255e308
	sub_8255E308(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251fd78
	sub_8251FD78(ctx, base);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,168
	r11.s64 = r31.s64 + 168;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r27.u32);
loc_827CF630:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x827cf660
	if (cr0.eq) goto loc_827CF660;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
loc_827CF660:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x827cf630
	if (cr6.lt) goto loc_827CF630;
loc_827CF670:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827CF678"))) PPC_WEAK_FUNC(sub_827CF678);
PPC_FUNC_IMPL(__imp__sub_827CF678) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,280(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 280);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CF680"))) PPC_WEAK_FUNC(sub_827CF680);
PPC_FUNC_IMPL(__imp__sub_827CF680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,260(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CF688"))) PPC_WEAK_FUNC(sub_827CF688);
PPC_FUNC_IMPL(__imp__sub_827CF688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f30,28(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,17528
	r11.s64 = r11.s64 + 17528;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827CF6E8"))) PPC_WEAK_FUNC(sub_827CF6E8);
PPC_FUNC_IMPL(__imp__sub_827CF6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cf74c
	if (cr6.eq) goto loc_827CF74C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x827cf754
	goto loc_827CF754;
loc_827CF74C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82515448
	sub_82515448(ctx, base);
loc_827CF754:
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v62,r0,r29
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,260(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 260);
	f31.f64 = double(temp.f32);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CF7A8"))) PPC_WEAK_FUNC(sub_827CF7A8);
PPC_FUNC_IMPL(__imp__sub_827CF7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827cf6e8
	sub_827CF6E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82515448
	sub_82515448(ctx, base);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,280(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 280);
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// lwz r11,232(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 232);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// lfs f0,252(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 252);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f0,256(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 256);
	f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CF818"))) PPC_WEAK_FUNC(sub_827CF818);
PPC_FUNC_IMPL(__imp__sub_827CF818) {
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
	PPCRegister f0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,248(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,244(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cf860
	if (cr6.eq) goto loc_827CF860;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
loc_827CF844:
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
	// bne 0x827cf844
	if (!cr0.eq) goto loc_827CF844;
loc_827CF860:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cf8b0
	if (cr6.eq) goto loc_827CF8B0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827cf8c0
	goto loc_827CF8C0;
loc_827CF8B0:
	// bl 0x82515448
	sub_82515448(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827CF8C0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827cf8d0
	if (cr6.eq) goto loc_827CF8D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CF8D0:
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

__attribute__((alias("__imp__sub_827CF8E8"))) PPC_WEAK_FUNC(sub_827CF8E8);
PPC_FUNC_IMPL(__imp__sub_827CF8E8) {
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
	// beq 0x827cf940
	if (cr0.eq) goto loc_827CF940;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,17536
	ctx.r9.s64 = r11.s64 + 17536;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827cf944
	goto loc_827CF944;
loc_827CF940:
	// li r11,0
	r11.s64 = 0;
loc_827CF944:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827cf990
	if (!cr6.eq) goto loc_827CF990;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827cf970
	if (cr6.eq) goto loc_827CF970;
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
loc_827CF970:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-20820(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20820);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827CF990:
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

__attribute__((alias("__imp__sub_827CF9B0"))) PPC_WEAK_FUNC(sub_827CF9B0);
PPC_FUNC_IMPL(__imp__sub_827CF9B0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82515338
	sub_82515338(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bne cr6,0x827cf9e0
	if (!cr6.eq) goto loc_827CF9E0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827CF9E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825163a8
	sub_825163A8(ctx, base);
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827cfa7c
	if (!cr6.eq) goto loc_827CFA7C;
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x827cfa10
	if (cr6.eq) goto loc_827CFA10;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_827CFA10:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,17552
	ctx.r4.s64 = r11.s64 + 17552;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,248(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x827cfa58
	if (cr6.eq) goto loc_827CFA58;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CFA3C:
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
	// bne 0x827cfa3c
	if (!cr0.eq) goto loc_827CFA3C;
loc_827CFA58:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,28868(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28868);
	// bl 0x82516970
	sub_82516970(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x827cfb00
	goto loc_827CFB00;
loc_827CFA7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82516418
	sub_82516418(ctx, base);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// beq cr6,0x827cfa98
	if (cr6.eq) goto loc_827CFA98;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_827CFA98:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,17552
	ctx.r4.s64 = r11.s64 + 17552;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,248(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x827cfae0
	if (cr6.eq) goto loc_827CFAE0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CFAC4:
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
	// bne 0x827cfac4
	if (!cr0.eq) goto loc_827CFAC4;
loc_827CFAE0:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,28868(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28868);
	// bl 0x82516970
	sub_82516970(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_827CFB00:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r3,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r3.u32);
	// beq cr6,0x827cfb14
	if (cr6.eq) goto loc_827CFB14;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_827CFB14:
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

__attribute__((alias("__imp__sub_827CFB30"))) PPC_WEAK_FUNC(sub_827CFB30);
PPC_FUNC_IMPL(__imp__sub_827CFB30) {
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
	// lwz r30,268(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x827cfbd8
	if (cr6.eq) goto loc_827CFBD8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// addi r29,r11,17576
	r29.s64 = r11.s64 + 17576;
	// lfs f31,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_827CFB68:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x827cfba0
	if (cr6.eq) goto loc_827CFBA0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CFB84:
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
	// bne 0x827cfb84
	if (!cr0.eq) goto loc_827CFB84;
loc_827CFBA0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,248
	ctx.r5.s64 = 248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cfbcc
	if (cr6.eq) goto loc_827CFBCC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CFBCC:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x827cfb68
	if (!cr6.eq) goto loc_827CFB68;
loc_827CFBD8:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cfbe8
	if (cr6.eq) goto loc_827CFBE8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CFBE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827CFBF8"))) PPC_WEAK_FUNC(sub_827CFBF8);
PPC_FUNC_IMPL(__imp__sub_827CFBF8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
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
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827cfc44
	if (cr0.eq) goto loc_827CFC44;
	// lfs f2,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827cf688
	sub_827CF688(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827cfc48
	goto loc_827CFC48;
loc_827CFC44:
	// li r31,0
	r31.s64 = 0;
loc_827CFC48:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827cf8e8
	sub_827CF8E8(ctx, base);
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

__attribute__((alias("__imp__sub_827CFC78"))) PPC_WEAK_FUNC(sub_827CFC78);
PPC_FUNC_IMPL(__imp__sub_827CFC78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827cfcac
	if (!cr6.eq) goto loc_827CFCAC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827CFCAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r29,r11,27,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x827cfd68
	if (cr0.eq) goto loc_827CFD68;
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x827cfd68
	if (!cr6.eq) goto loc_827CFD68;
	// addi r5,r31,252
	ctx.r5.s64 = r31.s64 + 252;
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827cfbf8
	sub_827CFBF8(ctx, base);
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
	// beq cr6,0x827cfd24
	if (cr6.eq) goto loc_827CFD24;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CFD08:
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
	// bne 0x827cfd08
	if (!cr0.eq) goto loc_827CFD08;
loc_827CFD24:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,17576
	ctx.r4.s64 = ctx.r10.s64 + 17576;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,123
	ctx.r5.s64 = 123;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cfd58
	if (cr6.eq) goto loc_827CFD58;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CFD58:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cfd68
	if (cr6.eq) goto loc_827CFD68;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CFD68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827CFD70"))) PPC_WEAK_FUNC(sub_827CFD70);
PPC_FUNC_IMPL(__imp__sub_827CFD70) {
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
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827cfe08
	if (cr6.eq) goto loc_827CFE08;
	// addi r5,r31,236
	ctx.r5.s64 = r31.s64 + 236;
	// addi r4,r31,232
	ctx.r4.s64 = r31.s64 + 232;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826e6490
	sub_826E6490(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x827cfdd8
	if (cr6.eq) goto loc_827CFDD8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CFDBC:
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
	// bne 0x827cfdbc
	if (!cr0.eq) goto loc_827CFDBC;
loc_827CFDD8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cfb30
	sub_827CFB30(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cfdf4
	if (cr6.eq) goto loc_827CFDF4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CFDF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// bl 0x82516418
	sub_82516418(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
loc_827CFE08:
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

__attribute__((alias("__imp__sub_827CFE20"))) PPC_WEAK_FUNC(sub_827CFE20);
PPC_FUNC_IMPL(__imp__sub_827CFE20) {
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
	// lbz r11,280(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 280);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x827cfeac
	if (!cr0.eq) goto loc_827CFEAC;
	// li r11,1
	r11.s64 = 1;
	// addi r5,r31,236
	ctx.r5.s64 = r31.s64 + 236;
	// stb r11,280(r31)
	PPC_STORE_U8(r31.u32 + 280, r11.u8);
	// addi r4,r31,232
	ctx.r4.s64 = r31.s64 + 232;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826e6410
	sub_826E6410(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x827cfe90
	if (cr6.eq) goto loc_827CFE90;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CFE74:
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
	// bne 0x827cfe74
	if (!cr0.eq) goto loc_827CFE74;
loc_827CFE90:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cfb30
	sub_827CFB30(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cfeac
	if (cr6.eq) goto loc_827CFEAC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CFEAC:
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

__attribute__((alias("__imp__sub_827CFEC0"))) PPC_WEAK_FUNC(sub_827CFEC0);
PPC_FUNC_IMPL(__imp__sub_827CFEC0) {
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
	// lbz r11,280(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 280);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x827cff4c
	if (!cr6.eq) goto loc_827CFF4C;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r31,236
	ctx.r5.s64 = r31.s64 + 236;
	// stb r11,280(r31)
	PPC_STORE_U8(r31.u32 + 280, r11.u8);
	// addi r4,r31,232
	ctx.r4.s64 = r31.s64 + 232;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826e6490
	sub_826E6490(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x827cff30
	if (cr6.eq) goto loc_827CFF30;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827CFF14:
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
	// bne 0x827cff14
	if (!cr0.eq) goto loc_827CFF14;
loc_827CFF30:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cfb30
	sub_827CFB30(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827cff4c
	if (cr6.eq) goto loc_827CFF4C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827CFF4C:
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

__attribute__((alias("__imp__sub_827CFF60"))) PPC_WEAK_FUNC(sub_827CFF60);
PPC_FUNC_IMPL(__imp__sub_827CFF60) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x827d0078
	if (cr6.eq) goto loc_827D0078;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x827cffb4
	goto loc_827CFFB4;
loc_827CFFA4:
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x827cffbc
	if (cr6.eq) goto loc_827CFFBC;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_827CFFB4:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x827cffa4
	if (!cr6.eq) goto loc_827CFFA4;
loc_827CFFBC:
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x827cffd4
	if (cr6.eq) goto loc_827CFFD4;
	// addi r4,r31,264
	ctx.r4.s64 = r31.s64 + 264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824692c8
	sub_824692C8(ctx, base);
loc_827CFFD4:
	// lbz r11,280(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 280);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827d0078
	if (cr0.eq) goto loc_827D0078;
	// addi r5,r31,236
	ctx.r5.s64 = r31.s64 + 236;
	// addi r4,r31,232
	ctx.r4.s64 = r31.s64 + 232;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826e6490
	sub_826E6490(ctx, base);
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
	// beq cr6,0x827d0028
	if (cr6.eq) goto loc_827D0028;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D000C:
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
	// bne 0x827d000c
	if (!cr0.eq) goto loc_827D000C;
loc_827D0028:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,17576
	ctx.r4.s64 = ctx.r10.s64 + 17576;
	// li r5,205
	ctx.r5.s64 = 205;
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
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d0068
	if (cr6.eq) goto loc_827D0068;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D0068:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d0078
	if (cr6.eq) goto loc_827D0078;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D0078:
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

__attribute__((alias("__imp__sub_827D0090"))) PPC_WEAK_FUNC(sub_827D0090);
PPC_FUNC_IMPL(__imp__sub_827D0090) {
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
	// lbz r11,280(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 280);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827d00c4
	if (cr0.eq) goto loc_827D00C4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cfc78
	sub_827CFC78(ctx, base);
loc_827D00C4:
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

__attribute__((alias("__imp__sub_827D00D8"))) PPC_WEAK_FUNC(sub_827D00D8);
PPC_FUNC_IMPL(__imp__sub_827D00D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x827cfd70
	sub_827CFD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D00E0"))) PPC_WEAK_FUNC(sub_827D00E0);
PPC_FUNC_IMPL(__imp__sub_827D00E0) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// fmr f30,f3
	f30.f64 = ctx.f3.f64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// bl 0x82515c40
	sub_82515C40(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f29,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r28,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r28.u32);
	// addi r11,r11,17716
	r11.s64 = r11.s64 + 17716;
	// stw r27,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r27.u32);
	// addi r10,r10,17692
	ctx.r10.s64 = ctx.r10.s64 + 17692;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r3.u32);
	// beq cr6,0x827d0154
	if (cr6.eq) goto loc_827D0154;
	// bl 0x822e9f20
	sub_822E9F20(ctx, base);
loc_827D0154:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r31,244
	r11.s64 = r31.s64 + 244;
	// stw r10,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// beq cr6,0x827d0190
	if (cr6.eq) goto loc_827D0190;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D0174:
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
	// bne 0x827d0174
	if (!cr0.eq) goto loc_827D0174;
loc_827D0190:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// stfs f30,256(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,260(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// bl 0x8255e2b8
	sub_8255E2B8(ctx, base);
	// stw r3,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// stb r10,280(r31)
	PPC_STORE_U8(r31.u32 + 280, ctx.r10.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d01d4
	if (cr6.eq) goto loc_827D01D4;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_827D01D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827D01F0"))) PPC_WEAK_FUNC(sub_827D01F0);
PPC_FUNC_IMPL(__imp__sub_827D01F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x827d0268
	sub_827D0268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D01F8"))) PPC_WEAK_FUNC(sub_827D01F8);
PPC_FUNC_IMPL(__imp__sub_827D01F8) {
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
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x82b67888
	sub_82B67888(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d023c
	if (cr6.eq) goto loc_827D023C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D023C:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d024c
	if (cr6.eq) goto loc_827D024C;
	// bl 0x822e9f40
	sub_822E9F40(ctx, base);
loc_827D024C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82351c98
	sub_82351C98(ctx, base);
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

__attribute__((alias("__imp__sub_827D0268"))) PPC_WEAK_FUNC(sub_827D0268);
PPC_FUNC_IMPL(__imp__sub_827D0268) {
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
	// bl 0x827d01f8
	sub_827D01F8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d0298
	if (cr0.eq) goto loc_827D0298;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827D0298:
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

__attribute__((alias("__imp__sub_827D02B8"))) PPC_WEAK_FUNC(sub_827D02B8);
PPC_FUNC_IMPL(__imp__sub_827D02B8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x827d03fc
	if (cr6.eq) goto loc_827D03FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x827d0304
	goto loc_827D0304;
loc_827D02F4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r3
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, xer);
	// beq cr6,0x827d030c
	if (cr6.eq) goto loc_827D030C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_827D0304:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827d02f4
	if (!cr6.eq) goto loc_827D02F4;
loc_827D030C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827d0358
	if (!cr6.eq) goto loc_827D0358;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r28,268(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// addi r30,r31,264
	r30.s64 = r31.s64 + 264;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x8255e308
	sub_8255E308(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251fd78
	sub_8251FD78(ctx, base);
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
loc_827D0358:
	// lbz r11,280(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 280);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827d03fc
	if (cr0.eq) goto loc_827D03FC;
	// addi r5,r31,236
	ctx.r5.s64 = r31.s64 + 236;
	// addi r4,r31,232
	ctx.r4.s64 = r31.s64 + 232;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826e6410
	sub_826E6410(ctx, base);
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
	// beq cr6,0x827d03ac
	if (cr6.eq) goto loc_827D03AC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D0390:
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
	// bne 0x827d0390
	if (!cr0.eq) goto loc_827D0390;
loc_827D03AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,17576
	ctx.r4.s64 = ctx.r10.s64 + 17576;
	// li r5,183
	ctx.r5.s64 = 183;
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
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d03ec
	if (cr6.eq) goto loc_827D03EC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D03EC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d03fc
	if (cr6.eq) goto loc_827D03FC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D03FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827D0408"))) PPC_WEAK_FUNC(sub_827D0408);
PPC_FUNC_IMPL(__imp__sub_827D0408) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x827d045c
	if (cr0.eq) goto loc_827D045C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,16268
	ctx.r3.s64 = r11.s64 + 16268;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d045c
	if (cr0.eq) goto loc_827D045C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827d0090
	sub_827D0090(ctx, base);
loc_827D0454:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d054c
	goto loc_827D054C;
loc_827D045C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827d053c
	if (cr6.eq) goto loc_827D053C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,14324
	ctx.r3.s64 = r11.s64 + 14324;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d0494
	if (cr0.eq) goto loc_827D0494;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827cf818
	sub_827CF818(ctx, base);
	// b 0x827d0454
	goto loc_827D0454;
loc_827D0494:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827d053c
	if (cr6.eq) goto loc_827D053C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,15452
	ctx.r3.s64 = r11.s64 + 15452;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d04cc
	if (cr0.eq) goto loc_827D04CC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827d02b8
	sub_827D02B8(ctx, base);
	// b 0x827d0454
	goto loc_827D0454;
loc_827D04CC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827d053c
	if (cr6.eq) goto loc_827D053C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31958
	r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,4744
	ctx.r3.s64 = r11.s64 + 4744;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d0504
	if (cr0.eq) goto loc_827D0504;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827cff60
	sub_827CFF60(ctx, base);
	// b 0x827d0454
	goto loc_827D0454;
loc_827D0504:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827d053c
	if (cr6.eq) goto loc_827D053C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31957
	r11.s64 = -2094333952;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-6652
	ctx.r3.s64 = r11.s64 + -6652;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d053c
	if (cr0.eq) goto loc_827D053C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x827cf7a8
	sub_827CF7A8(ctx, base);
	// b 0x827d0454
	goto loc_827D0454;
loc_827D053C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82515f28
	sub_82515F28(ctx, base);
loc_827D054C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827D0558"))) PPC_WEAK_FUNC(sub_827D0558);
PPC_FUNC_IMPL(__imp__sub_827D0558) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,17780
	r11.s64 = r11.s64 + 17780;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D05B8"))) PPC_WEAK_FUNC(sub_827D05B8);
PPC_FUNC_IMPL(__imp__sub_827D05B8) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,17788
	r11.s64 = r11.s64 + 17788;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D0618"))) PPC_WEAK_FUNC(sub_827D0618);
PPC_FUNC_IMPL(__imp__sub_827D0618) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,17796
	r11.s64 = r11.s64 + 17796;
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

__attribute__((alias("__imp__sub_827D0668"))) PPC_WEAK_FUNC(sub_827D0668);
PPC_FUNC_IMPL(__imp__sub_827D0668) {
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
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,17804
	r11.s64 = r11.s64 + 17804;
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

__attribute__((alias("__imp__sub_827D06B8"))) PPC_WEAK_FUNC(sub_827D06B8);
PPC_FUNC_IMPL(__imp__sub_827D06B8) {
	PPC_FUNC_PROLOGUE();
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,17812
	r11.s64 = r11.s64 + 17812;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D0718"))) PPC_WEAK_FUNC(sub_827D0718);
PPC_FUNC_IMPL(__imp__sub_827D0718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D0720"))) PPC_WEAK_FUNC(sub_827D0720);
PPC_FUNC_IMPL(__imp__sub_827D0720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	f0.f64 = double(temp.f32);
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x827d0758
	if (cr6.lt) goto loc_827D0758;
	// lbz r11,41(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 41);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827d0754
	if (cr0.eq) goto loc_827D0754;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// b 0x827d0758
	goto loc_827D0758;
loc_827D0754:
	// stfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
loc_827D0758:
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x82e46fa0
	sub_82E46FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D0770"))) PPC_WEAK_FUNC(sub_827D0770);
PPC_FUNC_IMPL(__imp__sub_827D0770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x827d07c8
	if (cr6.lt) goto loc_827D07C8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d07b8
	if (cr6.eq) goto loc_827D07B8;
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_827D07B8:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x827d07c8
	if (cr6.lt) goto loc_827D07C8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
loc_827D07C8:
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e46fa0
	sub_82E46FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D07E8"))) PPC_WEAK_FUNC(sub_827D07E8);
PPC_FUNC_IMPL(__imp__sub_827D07E8) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,17820
	r11.s64 = r11.s64 + 17820;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d0818
	if (cr6.eq) goto loc_827D0818;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D0818:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d0828
	if (cr6.eq) goto loc_827D0828;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D0828:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d0838
	if (cr6.eq) goto loc_827D0838;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D0838:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d0848
	if (cr6.eq) goto loc_827D0848;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D0848:
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

__attribute__((alias("__imp__sub_827D0860"))) PPC_WEAK_FUNC(sub_827D0860);
PPC_FUNC_IMPL(__imp__sub_827D0860) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,17820
	ctx.r9.s64 = ctx.r10.s64 + 17820;
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x827d08e8
	if (cr6.eq) goto loc_827D08E8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_827D08CC:
	// mfmsr r7
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
	// mtmsrd r7,1
	// bne 0x827d08cc
	if (!cr0.eq) goto loc_827D08CC;
loc_827D08E8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r8,41(r31)
	PPC_STORE_U8(r31.u32 + 41, ctx.r8.u8);
	// stb r11,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r11.u8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e36c48
	sub_82E36C48(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d095c
	if (cr6.eq) goto loc_827D095C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D095C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e491c8
	sub_82E491C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d09ac
	if (cr6.eq) goto loc_827D09AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D09AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_827D09C8"))) PPC_WEAK_FUNC(sub_827D09C8);
PPC_FUNC_IMPL(__imp__sub_827D09C8) {
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
	// bl 0x827d07e8
	sub_827D07E8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d09f8
	if (cr0.eq) goto loc_827D09F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827D09F8:
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

__attribute__((alias("__imp__sub_827D0A18"))) PPC_WEAK_FUNC(sub_827D0A18);
PPC_FUNC_IMPL(__imp__sub_827D0A18) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x827d0860
	sub_827D0860(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// addi r11,r11,17832
	r11.s64 = r11.s64 + 17832;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8230d190
	sub_8230D190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_827D0A88"))) PPC_WEAK_FUNC(sub_827D0A88);
PPC_FUNC_IMPL(__imp__sub_827D0A88) {
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
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d07e8
	sub_827D07E8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d0ac4
	if (cr0.eq) goto loc_827D0AC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827D0AC4:
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

__attribute__((alias("__imp__sub_827D0AE0"))) PPC_WEAK_FUNC(sub_827D0AE0);
PPC_FUNC_IMPL(__imp__sub_827D0AE0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,17840
	ctx.r4.s64 = r11.s64 + 17840;
	// li r5,81
	ctx.r5.s64 = 81;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d0b24
	if (cr0.eq) goto loc_827D0B24;
	// bl 0x82602560
	sub_82602560(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d0b28
	goto loc_827D0B28;
loc_827D0B24:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D0B28:
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82600d78
	sub_82600D78(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x82e1f7d0
	sub_82E1F7D0(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82e1feb8
	sub_82E1FEB8(ctx, base);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r11,-31945
	r11.s64 = -2093547520;
	// addi r30,r11,-28652
	r30.s64 = r11.s64 + -28652;
	// lwz r11,-28648(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28648);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x827d0b80
	if (!cr0.eq) goto loc_827D0B80;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,-28648(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28648, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r9,23808
	ctx.r4.s64 = ctx.r9.s64 + 23808;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_827D0B80:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e202a0
	sub_82E202A0(ctx, base);
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

__attribute__((alias("__imp__sub_827D0BA8"))) PPC_WEAK_FUNC(sub_827D0BA8);
PPC_FUNC_IMPL(__imp__sub_827D0BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lbz r11,40(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x827d0c00
	if (!cr0.eq) goto loc_827D0C00;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d0c18
	if (cr0.eq) goto loc_827D0C18;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d0c18
	if (cr0.eq) goto loc_827D0C18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d0ae0
	sub_827D0AE0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r11.u8);
loc_827D0C00:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827D0C18:
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

__attribute__((alias("__imp__sub_827D0C30"))) PPC_WEAK_FUNC(sub_827D0C30);
PPC_FUNC_IMPL(__imp__sub_827D0C30) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,17952
	ctx.r3.s64 = r11.s64 + 17952;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d0cc0
	if (!cr0.eq) goto loc_827D0CC0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,17944
	ctx.r3.s64 = r11.s64 + 17944;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d0c84
	if (cr0.eq) goto loc_827D0C84;
	// li r30,1
	r30.s64 = 1;
	// b 0x827d0cc0
	goto loc_827D0CC0;
loc_827D0C84:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,17932
	ctx.r3.s64 = r11.s64 + 17932;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d0ca4
	if (cr0.eq) goto loc_827D0CA4;
	// li r30,2
	r30.s64 = 2;
	// b 0x827d0cc0
	goto loc_827D0CC0;
loc_827D0CA4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,17924
	ctx.r3.s64 = r11.s64 + 17924;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d0cc0
	if (cr0.eq) goto loc_827D0CC0;
	// li r30,3
	r30.s64 = 3;
loc_827D0CC0:
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

__attribute__((alias("__imp__sub_827D0CE0"))) PPC_WEAK_FUNC(sub_827D0CE0);
PPC_FUNC_IMPL(__imp__sub_827D0CE0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,17964
	r11.s64 = r11.s64 + 17964;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x827d0d0c
	if (cr0.eq) goto loc_827D0D0C;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827D0D0C:
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

__attribute__((alias("__imp__sub_827D0D28"))) PPC_WEAK_FUNC(sub_827D0D28);
PPC_FUNC_IMPL(__imp__sub_827D0D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,17964
	r11.s64 = r11.s64 + 17964;
	// addi r10,r10,17972
	ctx.r10.s64 = ctx.r10.s64 + 17972;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D0D88"))) PPC_WEAK_FUNC(sub_827D0D88);
PPC_FUNC_IMPL(__imp__sub_827D0D88) {
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
	// b 0x827d0dc4
	goto loc_827D0DC4;
loc_827D0DA8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
loc_827D0DC4:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x827d0da8
	if (!cr6.eq) goto loc_827D0DA8;
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

__attribute__((alias("__imp__sub_827D0DE8"))) PPC_WEAK_FUNC(sub_827D0DE8);
PPC_FUNC_IMPL(__imp__sub_827D0DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x827d0e4c
	if (cr6.eq) goto loc_827D0E4C;
	// addi r11,r4,12
	r11.s64 = ctx.r4.s64 + 12;
	// subf r8,r5,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_827D0DF8:
	// addi r5,r5,-28
	ctx.r5.s64 = ctx.r5.s64 + -28;
	// addi r11,r11,-28
	r11.s64 = r11.s64 + -28;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// addi r7,r11,-12
	ctx.r7.s64 = r11.s64 + -12;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r3
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, xer);
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lfs f0,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// bne cr6,0x827d0df8
	if (!cr6.eq) goto loc_827D0DF8;
loc_827D0E4C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D0E58"))) PPC_WEAK_FUNC(sub_827D0E58);
PPC_FUNC_IMPL(__imp__sub_827D0E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_827D0E64:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x827d0e64
	if (!cr6.eq) goto loc_827D0E64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D0EB0"))) PPC_WEAK_FUNC(sub_827D0EB0);
PPC_FUNC_IMPL(__imp__sub_827D0EB0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r9,r9,17972
	ctx.r9.s64 = ctx.r9.s64 + 17972;
	// lfs f12,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f10,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r22,28
	r22.s64 = 28;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bne cr6,0x827d0f1c
	if (!cr6.eq) goto loc_827D0F1C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x827d0f28
	goto loc_827D0F28;
loc_827D0F1C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r8,r11,r22
	ctx.r8.s32 = r11.s32 / r22.s32;
loc_827D0F28:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827d11f8
	if (cr6.eq) goto loc_827D11F8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827d0f40
	if (!cr6.eq) goto loc_827D0F40;
	// li r11,0
	r11.s64 = 0;
	// b 0x827d0f4c
	goto loc_827D0F4C;
loc_827D0F40:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_827D0F4C:
	// lis r9,2340
	ctx.r9.s64 = 153354240;
	// ori r9,r9,37449
	ctx.r9.u64 = ctx.r9.u64 | 37449;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bge cr6,0x827d0f68
	if (!cr6.lt) goto loc_827D0F68;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x827d11f8
	goto loc_827D11F8;
loc_827D0F68:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827d0f78
	if (!cr6.eq) goto loc_827D0F78;
	// li r11,0
	r11.s64 = 0;
	// b 0x827d0f84
	goto loc_827D0F84;
loc_827D0F78:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_827D0F84:
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x827d1100
	if (!cr6.lt) goto loc_827D1100;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x827d0fa8
	if (!cr6.lt) goto loc_827D0FA8;
	// li r11,0
	r11.s64 = 0;
	// b 0x827d0fac
	goto loc_827D0FAC;
loc_827D0FA8:
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_827D0FAC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827d0fbc
	if (!cr6.eq) goto loc_827D0FBC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x827d0fc8
	goto loc_827D0FC8;
loc_827D0FBC:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r9,r22
	ctx.r9.s32 = ctx.r9.s32 / r22.s32;
loc_827D0FC8:
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + r24.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x827d0ff4
	if (!cr6.lt) goto loc_827D0FF4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827d0fe4
	if (!cr6.eq) goto loc_827D0FE4;
	// li r11,0
	r11.s64 = 0;
	// b 0x827d0ff0
	goto loc_827D0FF0;
loc_827D0FE4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_827D0FF0:
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
loc_827D0FF4:
	// mulli r23,r11,28
	r23.s64 = r11.s64 * 28;
	// lis r25,-31946
	r25.s64 = -2093613056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r29,r26
	r29.u64 = r26.u64;
	// b 0x827d1038
	goto loc_827D1038;
loc_827D1024:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827d0d28
	sub_827D0D28(ctx, base);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
loc_827D1038:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x827d1024
	if (!cr6.eq) goto loc_827D1024;
	// mr r31,r24
	r31.u64 = r24.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827d1068
	if (cr6.eq) goto loc_827D1068;
loc_827D1050:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827d0d28
	sub_827D0D28(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r27,r27,28
	r27.s64 = r27.s64 + 28;
	// bne 0x827d1050
	if (!cr0.eq) goto loc_827D1050;
loc_827D1068:
	// lwz r27,8(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mulli r11,r24,28
	r11.s64 = r24.s64 * 28;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// beq cr6,0x827d109c
	if (cr6.eq) goto loc_827D109C;
	// subf r29,r28,r11
	r29.s64 = r11.s64 - r28.s64;
loc_827D1084:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// bl 0x827d0d28
	sub_827D0D28(ctx, base);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bne cr6,0x827d1084
	if (!cr6.eq) goto loc_827D1084;
loc_827D109C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827d10b0
	if (!cr6.eq) goto loc_827D10B0;
	// li r11,0
	r11.s64 = 0;
	// b 0x827d10bc
	goto loc_827D10BC;
loc_827D10B0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_827D10BC:
	// add r31,r11,r24
	r31.u64 = r11.u64 + r24.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d10e4
	if (cr6.eq) goto loc_827D10E4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x827d0d88
	sub_827D0D88(ctx, base);
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_827D10E4:
	// mulli r11,r31,28
	r11.s64 = r31.s64 * 28;
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// add r10,r23,r26
	ctx.r10.u64 = r23.u64 + r26.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x827d11f8
	goto loc_827D11F8;
loc_827D1100:
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r28,r31
	r11.s64 = r31.s64 - r28.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bge cr6,0x827d1188
	if (!cr6.lt) goto loc_827D1188;
	// mulli r27,r24,28
	r27.s64 = r24.s64 * 28;
	// add r11,r27,r28
	r11.u64 = r27.u64 + r28.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(r28.u32, r31.u32, xer);
	// beq cr6,0x827d1144
	if (cr6.eq) goto loc_827D1144;
	// subf r26,r28,r11
	r26.s64 = r11.s64 - r28.s64;
loc_827D112C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r26,r29
	ctx.r3.u64 = r26.u64 + r29.u64;
	// bl 0x827d0d28
	sub_827D0D28(ctx, base);
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bne cr6,0x827d112c
	if (!cr6.eq) goto loc_827D112C;
loc_827D1144:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r10,r28,r11
	ctx.r10.s64 = r11.s64 - r28.s64;
	// mr r29,r11
	r29.u64 = r11.u64;
	// divw r11,r10,r22
	r11.s32 = ctx.r10.s32 / r22.s32;
	// subf. r31,r11,r24
	r31.s64 = r24.s64 - r11.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827d1174
	if (cr0.eq) goto loc_827D1174;
loc_827D115C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827d0d28
	sub_827D0D28(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// bne 0x827d115c
	if (!cr0.eq) goto loc_827D115C;
loc_827D1174:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// subf r4,r27,r11
	ctx.r4.s64 = r11.s64 - r27.s64;
	// b 0x827d11ec
	goto loc_827D11EC;
loc_827D1188:
	// mulli r25,r24,28
	r25.s64 = r24.s64 * 28;
	// subf r27,r25,r31
	r27.s64 = r31.s64 - r25.s64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// beq cr6,0x827d11bc
	if (cr6.eq) goto loc_827D11BC;
loc_827D11A0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827d0d28
	sub_827D0D28(ctx, base);
	// addi r26,r26,28
	r26.s64 = r26.s64 + 28;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// cmplw cr6,r26,r31
	cr6.compare<uint32_t>(r26.u32, r31.u32, xer);
	// bne cr6,0x827d11a0
	if (!cr6.eq) goto loc_827D11A0;
loc_827D11BC:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x827d0de8
	sub_827D0DE8(ctx, base);
	// add r4,r25,r28
	ctx.r4.u64 = r25.u64 + r28.u64;
loc_827D11EC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d0e58
	sub_827D0E58(ctx, base);
loc_827D11F8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_827D1200"))) PPC_WEAK_FUNC(sub_827D1200);
PPC_FUNC_IMPL(__imp__sub_827D1200) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d1238
	if (cr6.eq) goto loc_827D1238;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,28
	ctx.r10.s64 = 28;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw. r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x827d1240
	if (!cr0.eq) goto loc_827D1240;
loc_827D1238:
	// li r30,0
	r30.s64 = 0;
	// b 0x827d1248
	goto loc_827D1248;
loc_827D1240:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// divw r30,r11,r10
	r30.s32 = r11.s32 / ctx.r10.s32;
loc_827D1248:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d0eb0
	sub_827D0EB0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r30,28
	r11.s64 = r30.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827D1270"))) PPC_WEAK_FUNC(sub_827D1270);
PPC_FUNC_IMPL(__imp__sub_827D1270) {
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
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d12a0
	if (!cr6.eq) goto loc_827D12A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x827d12ac
	goto loc_827D12AC;
loc_827D12A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
loc_827D12AC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d12e0
	if (cr6.eq) goto loc_827D12E0;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x827d12e0
	if (!cr6.lt) goto loc_827D12E0;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d0d28
	sub_827D0D28(ctx, base);
	// addi r11,r30,28
	r11.s64 = r30.s64 + 28;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x827d12f4
	goto loc_827D12F4;
loc_827D12E0:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827d1200
	sub_827D1200(ctx, base);
loc_827D12F4:
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

__attribute__((alias("__imp__sub_827D1310"))) PPC_WEAK_FUNC(sub_827D1310);
PPC_FUNC_IMPL(__imp__sub_827D1310) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18064
	ctx.r4.s64 = r11.s64 + 18064;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r23)
	r30.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x827d0c30
	sub_827D0C30(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,18048
	ctx.r5.s64 = r11.s64 + 18048;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d13c4
	if (!cr6.eq) goto loc_827D13C4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,18036
	ctx.r5.s64 = r11.s64 + 18036;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825df298
	sub_825DF298(ctx, base);
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
	// beq cr6,0x827d13c4
	if (cr6.eq) goto loc_827D13C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D13C4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r5,r11,18024
	ctx.r5.s64 = r11.s64 + 18024;
	// bl 0x825df298
	sub_825DF298(ctx, base);
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
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d1400
	if (cr6.eq) goto loc_827D1400;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D1400:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d1540
	if (cr6.eq) goto loc_827D1540;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r24,r10,17964
	r24.s64 = ctx.r10.s64 + 17964;
	// addi r31,r9,17972
	r31.s64 = ctx.r9.s64 + 17972;
	// addi r30,r8,18016
	r30.s64 = ctx.r8.s64 + 18016;
	// addi r29,r7,18008
	r29.s64 = ctx.r7.s64 + 18008;
	// addi r28,r6,17992
	r28.s64 = ctx.r6.s64 + 17992;
	// addi r27,r5,17976
	r27.s64 = ctx.r5.s64 + 17976;
	// addi r26,r4,26984
	r26.s64 = ctx.r4.s64 + 26984;
	// addi r25,r11,-10756
	r25.s64 = r11.s64 + -10756;
loc_827D1454:
	// stfs f31,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x827d1270
	sub_827D1270(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825df180
	sub_825DF180(ctx, base);
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
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d1528
	if (cr6.eq) goto loc_827D1528;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D1528:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d1454
	if (!cr6.eq) goto loc_827D1454;
loc_827D1540:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d1550
	if (cr6.eq) goto loc_827D1550;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D1550:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_827D1570"))) PPC_WEAK_FUNC(sub_827D1570);
PPC_FUNC_IMPL(__imp__sub_827D1570) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827d15b4
	if (cr6.eq) goto loc_827D15B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d1310
	sub_827D1310(ctx, base);
loc_827D15B4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d15c4
	if (cr6.eq) goto loc_827D15C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D15C4:
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

__attribute__((alias("__imp__sub_827D15E0"))) PPC_WEAK_FUNC(sub_827D15E0);
PPC_FUNC_IMPL(__imp__sub_827D15E0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d1634
	if (cr0.eq) goto loc_827D1634;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31961
	r11.s64 = -2094596096;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13476
	ctx.r3.s64 = r11.s64 + 13476;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d1634
	if (cr0.eq) goto loc_827D1634;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,-40
	ctx.r3.s64 = r29.s64 + -40;
	// bl 0x82a62618
	sub_82A62618(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d1644
	goto loc_827D1644;
loc_827D1634:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82514ef8
	sub_82514EF8(ctx, base);
loc_827D1644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827D1650"))) PPC_WEAK_FUNC(sub_827D1650);
PPC_FUNC_IMPL(__imp__sub_827D1650) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r4,-5808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5808);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c338
	sub_8250C338(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// bne cr6,0x827d169c
	if (!cr6.eq) goto loc_827D169C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D169C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// bne cr6,0x827d16b4
	if (!cr6.eq) goto loc_827D16B4;
	// li r30,0
	r30.s64 = 0;
loc_827D16B4:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-10384(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -10384);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c3a8
	sub_8250C3A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// stfs f13,212(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 212, temp.u32);
	// stfs f0,216(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// stfs f13,220(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827D1708"))) PPC_WEAK_FUNC(sub_827D1708);
PPC_FUNC_IMPL(__imp__sub_827D1708) {
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
	// beq 0x827d1760
	if (cr0.eq) goto loc_827D1760;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,18276
	ctx.r9.s64 = r11.s64 + 18276;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d1764
	goto loc_827D1764;
loc_827D1760:
	// li r11,0
	r11.s64 = 0;
loc_827D1764:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d17b0
	if (!cr6.eq) goto loc_827D17B0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d1790
	if (cr6.eq) goto loc_827D1790;
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
loc_827D1790:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-20304(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20304);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D17B0:
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

__attribute__((alias("__imp__sub_827D17D0"))) PPC_WEAK_FUNC(sub_827D17D0);
PPC_FUNC_IMPL(__imp__sub_827D17D0) {
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
	// beq 0x827d1828
	if (cr0.eq) goto loc_827D1828;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,18296
	ctx.r9.s64 = r11.s64 + 18296;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d182c
	goto loc_827D182C;
loc_827D1828:
	// li r11,0
	r11.s64 = 0;
loc_827D182C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d1860
	if (!cr6.eq) goto loc_827D1860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,-20304(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20304);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D1860:
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

__attribute__((alias("__imp__sub_827D1880"))) PPC_WEAK_FUNC(sub_827D1880);
PPC_FUNC_IMPL(__imp__sub_827D1880) {
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
	// beq 0x827d18d8
	if (cr0.eq) goto loc_827D18D8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,18316
	ctx.r9.s64 = r11.s64 + 18316;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d18dc
	goto loc_827D18DC;
loc_827D18D8:
	// li r11,0
	r11.s64 = 0;
loc_827D18DC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d1928
	if (!cr6.eq) goto loc_827D1928;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d1908
	if (cr6.eq) goto loc_827D1908;
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
loc_827D1908:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-20304(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20304);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D1928:
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

__attribute__((alias("__imp__sub_827D1948"))) PPC_WEAK_FUNC(sub_827D1948);
PPC_FUNC_IMPL(__imp__sub_827D1948) {
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
	// beq 0x827d19a0
	if (cr0.eq) goto loc_827D19A0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,18336
	ctx.r9.s64 = r11.s64 + 18336;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d19a4
	goto loc_827D19A4;
loc_827D19A0:
	// li r11,0
	r11.s64 = 0;
loc_827D19A4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d19f0
	if (!cr6.eq) goto loc_827D19F0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d19d0
	if (cr6.eq) goto loc_827D19D0;
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
loc_827D19D0:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-20304(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20304);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D19F0:
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

__attribute__((alias("__imp__sub_827D1A10"))) PPC_WEAK_FUNC(sub_827D1A10);
PPC_FUNC_IMPL(__imp__sub_827D1A10) {
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
	// beq 0x827d1a68
	if (cr0.eq) goto loc_827D1A68;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,18356
	ctx.r9.s64 = r11.s64 + 18356;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d1a6c
	goto loc_827D1A6C;
loc_827D1A68:
	// li r11,0
	r11.s64 = 0;
loc_827D1A6C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d1ab8
	if (!cr6.eq) goto loc_827D1AB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d1a98
	if (cr6.eq) goto loc_827D1A98;
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
loc_827D1A98:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-20304(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20304);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D1AB8:
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

__attribute__((alias("__imp__sub_827D1AD8"))) PPC_WEAK_FUNC(sub_827D1AD8);
PPC_FUNC_IMPL(__imp__sub_827D1AD8) {
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
	// beq 0x827d1b30
	if (cr0.eq) goto loc_827D1B30;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,18376
	ctx.r9.s64 = r11.s64 + 18376;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d1b34
	goto loc_827D1B34;
loc_827D1B30:
	// li r11,0
	r11.s64 = 0;
loc_827D1B34:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d1b80
	if (!cr6.eq) goto loc_827D1B80;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d1b60
	if (cr6.eq) goto loc_827D1B60;
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
loc_827D1B60:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-20304(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -20304);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D1B80:
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

extern bool ParticleTestIndexBufferMidAsmHook(PPCRegister& r30);

__attribute__((alias("__imp__sub_827D1BA0"))) PPC_WEAK_FUNC(sub_827D1BA0);
PPC_FUNC_IMPL(__imp__sub_827D1BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b1438
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r4,-5808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5808);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c338
	sub_8250C338(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// lis r30,-31956
	r30.s64 = -2094268416;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,-20416(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -20416);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82e36e08
	sub_82E36E08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,332
	ctx.r10.s64 = r31.s64 + 332;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d1c44
	if (cr6.eq) goto loc_827D1C44;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D1C44:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20416(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -20416);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82e36cb8
	sub_82E36CB8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,340
	ctx.r10.s64 = r31.s64 + 340;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d1c98
	if (cr6.eq) goto loc_827D1C98;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D1C98:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r30,r31,204
	r30.s64 = r31.s64 + 204;
	// addi r29,r11,-20480
	r29.s64 = r11.s64 + -20480;
	// li r28,16
	r28.s64 = 16;
loc_827D1CB0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827d1d08
	if (cr6.eq) goto loc_827D1D08;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e34550
	sub_82E34550(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d1d00
	if (cr6.eq) goto loc_827D1D00;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D1D00:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_827D1D08:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x827d1cb0
	if (!cr0.eq) goto loc_827D1CB0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,18400
	ctx.r4.s64 = r11.s64 + 18400;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x827d1d54
	if (cr0.eq) goto loc_827D1D54;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1a4d0
	sub_82E1A4D0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// addi r11,r11,18260
	r11.s64 = r11.s64 + 18260;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x827d1d58
	goto loc_827D1D58;
loc_827D1D54:
	// li r30,0
	r30.s64 = 0;
loc_827D1D58:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827d1708
	sub_827D1708(ctx, base);
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
	// addi r30,r31,348
	r30.s64 = r31.s64 + 348;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d1da0
	if (cr6.eq) goto loc_827D1DA0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D1DA0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x827d1dd8
	if (cr6.eq) goto loc_827D1DD8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D1DBC:
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
	// bne 0x827d1dbc
	if (!cr0.eq) goto loc_827D1DBC;
loc_827D1DD8:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,31076(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 31076);
	// bl 0x82514360
	sub_82514360(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d1e00
	if (cr6.eq) goto loc_827D1E00;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D1E00:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stfs f31,388(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 388, temp.u32);
	// addi r30,r31,388
	r30.s64 = r31.s64 + 388;
	// stfs f31,392(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 392, temp.u32);
	// stfs f31,396(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 396, temp.u32);
	// lfs f0,-24784(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24784);
	f0.f64 = double(temp.f32);
	// lfs f30,-22120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	f30.f64 = double(temp.f32);
	// stfs f0,420(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 420, temp.u32);
	// stfs f30,424(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 424, temp.u32);
	// stfs f31,428(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 428, temp.u32);
	// stfs f30,452(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 452, temp.u32);
	// stfs f30,456(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 456, temp.u32);
	// stfs f31,460(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 460, temp.u32);
	// stfs f30,484(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 484, temp.u32);
	// stfs f0,488(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 488, temp.u32);
	// stfs f31,492(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 492, temp.u32);
	// lfs f29,2244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	f29.f64 = double(temp.f32);
	// stfs f0,516(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 516, temp.u32);
	// stfs f0,520(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 520, temp.u32);
	// stfs f31,524(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 524, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 548, temp.u32);
	// stfs f30,552(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 552, temp.u32);
	// stfs f31,556(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 556, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f29,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f31,184(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f28,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f28.f64 = double(temp.f32);
	// stfs f28,176(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// stfs f29,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f29,116(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// stfs f29,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f28,196(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// stfs f28,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f28,132(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// stfs f28,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// lfs f0,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	f0.f64 = double(temp.f32);
	// lfs f13,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,400(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 400, temp.u32);
	// stfs f13,404(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 404, temp.u32);
	// stfs f12,408(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 408, temp.u32);
	// stfs f11,432(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 432, temp.u32);
	// lfs f0,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	f0.f64 = double(temp.f32);
	// lfs f13,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,436(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 436, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f13,440(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 440, temp.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lfs f0,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	f0.f64 = double(temp.f32);
	// lfs f13,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,464(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 464, temp.u32);
	// stfs f13,468(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 468, temp.u32);
	// stfs f12,472(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 472, temp.u32);
	// lfs f0,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	f0.f64 = double(temp.f32);
	// lfs f13,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,496(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 496, temp.u32);
	// stfs f13,500(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 500, temp.u32);
	// stfs f12,504(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 504, temp.u32);
	// lfs f0,320(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	f0.f64 = double(temp.f32);
	// lfs f13,324(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,356(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,528(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 528, temp.u32);
	// stfs f13,532(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 532, temp.u32);
	// stfs f12,536(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 536, temp.u32);
	// stfs f11,560(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 560, temp.u32);
	// stfs f10,564(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 564, temp.u32);
	// stfs f9,568(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 568, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f30,216(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f30,224(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f30,232(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f30,236(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec550
	sub_824EC550(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r1,212
	r29.s64 = ctx.r1.s64 + 212;
	// addi r28,r31,356
	r28.s64 = r31.s64 + 356;
	// li r26,4
	r26.s64 = 4;
	// lfs f31,-28612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28612);
	f31.f64 = double(temp.f32);
loc_827D1FFC:
	// lfs f0,-4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + -4);
	f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f0,f31
	ctx.f10.f64 = double(float(f0.f64 + f31.f64));
	// stfs f10,412(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 412, temp.u32);
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(f0.f64 + f30.f64));
	// fadds f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f0,444(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 444, temp.u32);
	// fadds f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f10,416(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 416, temp.u32);
	// stfs f13,448(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 448, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f12,476(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 476, temp.u32);
	// li r3,192
	ctx.r3.s64 = 192;
	// stfs f13,480(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 480, temp.u32);
	// stfs f12,508(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 508, temp.u32);
	// stfs f11,512(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 512, temp.u32);
	// stfs f0,540(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 540, temp.u32);
	// stfs f11,544(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 544, temp.u32);
	// stfs f0,572(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 572, temp.u32);
	// stfs f13,576(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 576, temp.u32);
	// bl 0x82be6ad0
	sub_82BE6AD0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82be6b98
	sub_82BE6B98(ctx, base);
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82be6be8
	sub_82BE6BE8(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d208c
	if (cr6.eq) goto loc_827D208C;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_827D208C:
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x827d1ffc
	if (!cr0.eq) goto loc_827D1FFC;
	// li r6,0
	if (ParticleTestIndexBufferMidAsmHook(r30)) {
		goto loc_827D20EC;
	}
	else {
	}
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82be6bf8
	sub_82BE6BF8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82be6ca8
	sub_82BE6CA8(ctx, base);
	// li r11,0
	r11.s64 = 0;
loc_827D20CC:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// blt cr6,0x827d20cc
	if (cr6.lt) goto loc_827D20CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be6cf0
	sub_82BE6CF0(ctx, base);
loc_827D20EC:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d20fc
	if (cr6.eq) goto loc_827D20FC;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_827D20FC:
	// stw r30,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b1484
	// b 0x831b0b70
	return;
}

extern void ParticleTestDrawIndexedPrimitiveMidAsmHook(PPCRegister& r7);

__attribute__((alias("__imp__sub_827D2118"))) PPC_WEAK_FUNC(sub_827D2118);
PPC_FUNC_IMPL(__imp__sub_827D2118) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b00
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31945
	r31.s64 = -2093547520;
	// lis r11,-31945
	r11.s64 = -2093547520;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,-28632
	r28.s64 = r11.s64 + -28632;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,-28628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -28628);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x827d216c
	if (!cr0.eq) goto loc_827D216C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,-28628(r31)
	PPC_STORE_U32(r31.u32 + -28628, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r10,-25008
	ctx.r4.s64 = ctx.r10.s64 + -25008;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,-28628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -28628);
loc_827D216C:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r19,r10,-28636
	r19.s64 = ctx.r10.s64 + -28636;
	// bne 0x827d2198
	if (!cr0.eq) goto loc_827D2198;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r11,-28628(r31)
	PPC_STORE_U32(r31.u32 + -28628, r11.u32);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r4,r10,23988
	ctx.r4.s64 = ctx.r10.s64 + 23988;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,-28628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -28628);
loc_827D2198:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r20,r10,-28640
	r20.s64 = ctx.r10.s64 + -28640;
	// bne 0x827d21c4
	if (!cr0.eq) goto loc_827D21C4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,-28628(r31)
	PPC_STORE_U32(r31.u32 + -28628, r11.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r4,r10,12580
	ctx.r4.s64 = ctx.r10.s64 + 12580;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,-28628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -28628);
loc_827D21C4:
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r21,r10,-28644
	r21.s64 = ctx.r10.s64 + -28644;
	// bne 0x827d21ec
	if (!cr0.eq) goto loc_827D21EC;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,-28628(r31)
	PPC_STORE_U32(r31.u32 + -28628, r11.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r4,r10,18460
	ctx.r4.s64 = ctx.r10.s64 + 18460;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_827D21EC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x827d25f8
	if (!cr6.eq) goto loc_827D25F8;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r11,380
	ctx.r5.s64 = r11.s64 + 380;
	// lwz r11,380(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 380);
	// lwz r26,0(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d22a8
	if (!cr6.eq) goto loc_827D22A8;
	// lis r11,42
	r11.s64 = 2752512;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// li r9,12
	ctx.r9.s64 = 12;
	// sth r31,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r31.u16);
	// ori r11,r11,9145
	r11.u64 = r11.u64 | 9145;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r31.u8);
	// lis r10,44
	ctx.r10.s64 = 2883584;
	// sth r9,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// ori r10,r10,9125
	ctx.r10.u64 = ctx.r10.u64 | 9125;
	// stb r31,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r31.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, r31.u8);
	// li r9,255
	ctx.r9.s64 = 255;
	// sth r31,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, r31.u16);
	// li r11,-1
	r11.s64 = -1;
	// stb r31,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r31.u8);
	// stb r8,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r8.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r31,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, r31.u8);
	// sth r31,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r31.u16);
	// sth r7,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r7.u16);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r31.u8);
	// stb r6,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r6.u8);
	// stb r31,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, r31.u8);
	// sth r9,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r9.u16);
	// sth r31,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, r31.u16);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, r31.u8);
	// stb r31,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, r31.u8);
	// stb r31,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, r31.u8);
	// bl 0x82e17760
	sub_82E17760(ctx, base);
loc_827D22A8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,380(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x827d22cc
	if (cr6.eq) goto loc_827D22CC;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82be02e0
	sub_82BE02E0(ctx, base);
loc_827D22CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x822c6518
	sub_822C6518(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r11,332
	ctx.r4.s64 = r11.s64 + 332;
	// addi r28,r11,340
	r28.s64 = r11.s64 + 340;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e16f70
	sub_82E16F70(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e17068
	sub_82E17068(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x827d231c
	if (!cr6.eq) goto loc_827D231C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827D231C:
	// bl 0x8252bb90
	sub_8252BB90(ctx, base);
	// li r11,16
	r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lvlx128 v62,r11,r3
	temp.u32 = r11.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// lvlx128 v61,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stfs f31,224(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x82e84848
	sub_82E84848(ctx, base);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,38(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x827d23a0
	if (!cr0.eq) goto loc_827D23A0;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x827d23c4
	goto loc_827D23C4;
loc_827D23A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// li r4,204
	ctx.r4.s64 = 204;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827D23C4:
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x82e16c78
	sub_82E16C78(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x82e16c78
	sub_82E16C78(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x82e16c78
	sub_82E16C78(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x82e16c78
	sub_82E16C78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e16c78
	sub_82E16C78(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r9,r11,-20356
	ctx.r9.s64 = r11.s64 + -20356;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,2244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,-20356(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20356);
	f0.f64 = double(temp.f32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 340);
	// bl 0x82e1a228
	sub_82E1A228(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r28,196(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// beq cr6,0x827d25bc
	if (cr6.eq) goto loc_827D25BC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f30,-9716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9716);
	f30.f64 = double(temp.f32);
loc_827D248C:
	// lwz r21,8(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lfs f1,52(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r21.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x82e84cb8
	sub_82E84CB8(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82e84d20
	sub_82E84D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82e17af0
	sub_82E17AF0(ctx, base);
	// lfs f0,56(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r21.u32 + 56);
	f0.f64 = double(temp.f32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 * f30.f64));
	// bl 0x82e85790
	sub_82E85790(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lwz r3,332(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 332);
	// bl 0x82e23160
	sub_82E23160(ctx, base);
	// lfs f0,48(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r21.u32 + 48);
	f0.f64 = double(temp.f32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,340(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 340);
	// bl 0x82e1a228
	sub_82E1A228(ctx, base);
	// lwz r10,60(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 60);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82be9818
	sub_82BE9818(ctx, base);
	// lwz r11,64(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 64);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r11,r11,89
	r11.s64 = r11.s64 + 89;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82bdd0f8
	sub_82BDD0F8(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,372(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 372);
	// bl 0x82bdd218
	sub_82BDD218(ctx, base);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82be5cf0
	ParticleTestDrawIndexedPrimitiveMidAsmHook(ctx.r7);
	sub_82BE5CF0(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x827d248c
	if (!cr6.eq) goto loc_827D248C;
loc_827D25BC:
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e16d50
	sub_82E16D50(ctx, base);
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82e16d50
	sub_82E16D50(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82e16d50
	sub_82E16D50(ctx, base);
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82e16d50
	sub_82E16D50(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82e16d50
	sub_82E16D50(ctx, base);
loc_827D25F8:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_827D2608"))) PPC_WEAK_FUNC(sub_827D2608);
PPC_FUNC_IMPL(__imp__sub_827D2608) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,18500
	ctx.r8.s64 = r11.s64 + 18500;
	// addi r9,r9,18480
	ctx.r9.s64 = ctx.r9.s64 + 18480;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,240(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// stw r11,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// stw r11,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r11.u32);
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
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

__attribute__((alias("__imp__sub_827D2678"))) PPC_WEAK_FUNC(sub_827D2678);
PPC_FUNC_IMPL(__imp__sub_827D2678) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x827d26e8
	sub_827D26E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D2680"))) PPC_WEAK_FUNC(sub_827D2680);
PPC_FUNC_IMPL(__imp__sub_827D2680) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,18500
	r11.s64 = r11.s64 + 18500;
	// addi r10,r10,18480
	ctx.r10.s64 = ctx.r10.s64 + 18480;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r3,256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d26bc
	if (cr6.eq) goto loc_827D26BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D26BC:
	// lwz r3,248(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d26cc
	if (cr6.eq) goto loc_827D26CC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D26CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
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

__attribute__((alias("__imp__sub_827D26E8"))) PPC_WEAK_FUNC(sub_827D26E8);
PPC_FUNC_IMPL(__imp__sub_827D26E8) {
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
	// bl 0x827d2680
	sub_827D2680(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d2718
	if (cr0.eq) goto loc_827D2718;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827D2718:
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

__attribute__((alias("__imp__sub_827D2738"))) PPC_WEAK_FUNC(sub_827D2738);
PPC_FUNC_IMPL(__imp__sub_827D2738) {
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
	// bl 0x827d1a10
	sub_827D1A10(ctx, base);
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
	// beq cr6,0x827d2790
	if (cr6.eq) goto loc_827D2790;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2790:
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

__attribute__((alias("__imp__sub_827D27A8"))) PPC_WEAK_FUNC(sub_827D27A8);
PPC_FUNC_IMPL(__imp__sub_827D27A8) {
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
	// beq 0x827d27ec
	if (cr0.eq) goto loc_827D27EC;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82b5e548
	sub_82B5E548(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827d27f0
	goto loc_827D27F0;
loc_827D27EC:
	// li r31,0
	r31.s64 = 0;
loc_827D27F0:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d1ad8
	sub_827D1AD8(ctx, base);
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

__attribute__((alias("__imp__sub_827D2820"))) PPC_WEAK_FUNC(sub_827D2820);
PPC_FUNC_IMPL(__imp__sub_827D2820) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,18548
	ctx.r4.s64 = r11.s64 + 18548;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18540
	ctx.r4.s64 = r11.s64 + 18540;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,-20340
	ctx.r5.s64 = r11.s64 + -20340;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a83f0
	sub_825A83F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a7520
	sub_825A7520(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
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

__attribute__((alias("__imp__sub_827D28B0"))) PPC_WEAK_FUNC(sub_827D28B0);
PPC_FUNC_IMPL(__imp__sub_827D28B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
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
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823205d8
	sub_823205D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// beq cr6,0x827d2924
	if (cr6.eq) goto loc_827D2924;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D2908:
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
	// bne 0x827d2908
	if (!cr0.eq) goto loc_827D2908;
loc_827D2924:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d2944
	if (!cr6.eq) goto loc_827D2944;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D2944:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r25,40
	r26.s64 = r25.s64 + 40;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r28,r11,18400
	r28.s64 = r11.s64 + 18400;
	// li r5,526
	ctx.r5.s64 = 526;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d298c
	if (cr6.eq) goto loc_827D298C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D298C:
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d299c
	if (cr6.eq) goto loc_827D299C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D299C:
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823a1f18
	sub_823A1F18(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// beq cr6,0x827d29e8
	if (cr6.eq) goto loc_827D29E8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D29CC:
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
	// bne 0x827d29cc
	if (!cr0.eq) goto loc_827D29CC;
loc_827D29E8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d2a08
	if (!cr6.eq) goto loc_827D2A08;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D2A08:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r1,152
	r31.s64 = ctx.r1.s64 + 152;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,529
	ctx.r5.s64 = 529;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2a44
	if (cr6.eq) goto loc_827D2A44;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2A44:
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2a54
	if (cr6.eq) goto loc_827D2A54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2A54:
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x827d27a8
	sub_827D27A8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// beq cr6,0x827d2aa0
	if (cr6.eq) goto loc_827D2AA0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D2A84:
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
	// bne 0x827d2a84
	if (!cr0.eq) goto loc_827D2A84;
loc_827D2AA0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d2ac0
	if (!cr6.eq) goto loc_827D2AC0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D2AC0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,530
	ctx.r5.s64 = 530;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2afc
	if (cr6.eq) goto loc_827D2AFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2AFC:
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2b0c
	if (cr6.eq) goto loc_827D2B0C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2B0C:
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82657d88
	sub_82657D88(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// beq cr6,0x827d2b58
	if (cr6.eq) goto loc_827D2B58;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D2B3C:
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
	// bne 0x827d2b3c
	if (!cr0.eq) goto loc_827D2B3C;
loc_827D2B58:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d2b78
	if (!cr6.eq) goto loc_827D2B78;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D2B78:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,531
	ctx.r5.s64 = 531;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2bb4
	if (cr6.eq) goto loc_827D2BB4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2BB4:
	// lwz r3,364(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2bc4
	if (cr6.eq) goto loc_827D2BC4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2BC4:
	// addi r11,r1,384
	r11.s64 = ctx.r1.s64 + 384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82470028
	sub_82470028(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// beq cr6,0x827d2c10
	if (cr6.eq) goto loc_827D2C10;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D2BF4:
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
	// bne 0x827d2bf4
	if (!cr0.eq) goto loc_827D2BF4;
loc_827D2C10:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d2c30
	if (!cr6.eq) goto loc_827D2C30;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D2C30:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,532
	ctx.r5.s64 = 532;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2c6c
	if (cr6.eq) goto loc_827D2C6C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2C6C:
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2c7c
	if (cr6.eq) goto loc_827D2C7C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2C7C:
	// addi r11,r1,368
	r11.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x824700a0
	sub_824700A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// beq cr6,0x827d2cc8
	if (cr6.eq) goto loc_827D2CC8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D2CAC:
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
	// bne 0x827d2cac
	if (!cr0.eq) goto loc_827D2CAC;
loc_827D2CC8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d2ce8
	if (!cr6.eq) goto loc_827D2CE8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D2CE8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r1,168
	r31.s64 = ctx.r1.s64 + 168;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,533
	ctx.r5.s64 = 533;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2d24
	if (cr6.eq) goto loc_827D2D24;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2D24:
	// lwz r3,332(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2d34
	if (cr6.eq) goto loc_827D2D34;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2D34:
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
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
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// addi r11,r1,384
	r11.s64 = ctx.r1.s64 + 384;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v60,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v60.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vmsum3fp128 v63,v61,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x827d2dd0
	if (!cr6.gt) goto loc_827D2DD0;
	// vaddfp128 v63,v62,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)));
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827d2dd8
	goto loc_827D2DD8;
loc_827D2DD0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e860b8
	sub_82E860B8(ctx, base);
loc_827D2DD8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,546
	ctx.r5.s64 = 546;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d2e00
	if (cr0.eq) goto loc_827D2E00;
	// bl 0x82b5f268
	sub_82B5F268(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827d2e04
	goto loc_827D2E04;
loc_827D2E00:
	// li r31,0
	r31.s64 = 0;
loc_827D2E04:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82479e10
	sub_82479E10(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// beq cr6,0x827d2e5c
	if (cr6.eq) goto loc_827D2E5C;
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
loc_827D2E40:
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
	// bne 0x827d2e40
	if (!cr0.eq) goto loc_827D2E40;
loc_827D2E5C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d2e7c
	if (!cr6.eq) goto loc_827D2E7C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D2E7C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r1,120
	r31.s64 = ctx.r1.s64 + 120;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,547
	ctx.r5.s64 = 547;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2eb8
	if (cr6.eq) goto loc_827D2EB8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2EB8:
	// lbz r11,24(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 24);
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,550
	ctx.r5.s64 = 550;
	// li r3,64
	ctx.r3.s64 = 64;
	// stb r11,-28624(r10)
	PPC_STORE_U8(ctx.r10.u32 + -28624, r11.u8);
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827d2ef8
	if (cr0.eq) goto loc_827D2EF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e626d8
	sub_82E626D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-25392
	r11.s64 = r11.s64 + -25392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x827d2efc
	goto loc_827D2EFC;
loc_827D2EF8:
	// li r31,0
	r31.s64 = 0;
loc_827D2EFC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82474c70
	sub_82474C70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// beq cr6,0x827d2f54
	if (cr6.eq) goto loc_827D2F54;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_827D2F38:
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
	// bne 0x827d2f38
	if (!cr0.eq) goto loc_827D2F38;
loc_827D2F54:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d2f74
	if (!cr6.eq) goto loc_827D2F74;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D2F74:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r23,r1,136
	r23.s64 = ctx.r1.s64 + 136;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,551
	ctx.r5.s64 = 551;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d2fb0
	if (cr6.eq) goto loc_827D2FB0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D2FB0:
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827d3014
	if (cr0.eq) goto loc_827D3014;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r11,r25,208
	r11.s64 = r25.s64 + 208;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-31945
	ctx.r9.s64 = -2093547520;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// addi r9,r9,-28608
	ctx.r9.s64 = ctx.r9.s64 + -28608;
	// lvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsel f0,f0,f0,f31
	f0.f64 = f0.f64 >= 0.0 ? f0.f64 : f31.f64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v62,v61,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827d3028
	goto loc_827D3028;
loc_827D3014:
	// lis r11,-31945
	r11.s64 = -2093547520;
	// addi r3,r11,-28608
	ctx.r3.s64 = r11.s64 + -28608;
	// bl 0x82e860b8
	sub_82E860B8(ctx, base);
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827D3028:
	// vmsum3fp128 v62,v63,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lis r11,-31956
	r11.s64 = -2094268416;
	// vspltisw128 v61,1
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_set1_epi32(int(0x1)));
	// li r10,80
	ctx.r10.s64 = 80;
	// addi r31,r11,-20404
	r31.s64 = r11.s64 + -20404;
	// vspltisw128 v60,0
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_set1_epi32(int(0x0)));
	// li r11,84
	r11.s64 = 84;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// vcsxwfp128 v13,v61,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvlx128 v61,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// lvlx128 v59,r31,r11
	temp.u32 = r31.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v59.u32), 0xFF));
	// lvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r0,r7
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v10,v63,v61
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vrsqrtefp128 v0,v62
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v62.f32))));
	// vor128 v9,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vmulfp128 v8,v62,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v7,v62,v60
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v60.f32)));
	// vmaddfp v12,v11,v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v11,v0,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v12,v59,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(v59.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v13,v8,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// stvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,24(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v62,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v9,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f31,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bne 0x827d30dc
	if (!cr0.eq) goto loc_827D30DC;
	// lbz r11,25(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x827d30dc
	if (!cr0.eq) goto loc_827D30DC;
	// li r11,8
	r11.s64 = 8;
	// lvlx128 v62,r31,r11
	temp.u32 = r31.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v126,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v126.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// b 0x827d31bc
	goto loc_827D31BC;
loc_827D30DC:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// li r9,88
	ctx.r9.s64 = 88;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lvlx128 v62,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// lvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v60,r31,r9
	temp.u32 = r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r31,r8
	temp.u32 = r31.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v60,0
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), 0xFF));
	// vspltw128 v59,v59,0
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v59.u32), 0xFF));
	// vmulfp128 v62,v61,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v62.f32)));
	// vmulfp128 v127,v63,v59
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v59.f32)));
	// vmulfp128 v126,v62,v60
	simde_mm_store_ps(v126.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v60.f32)));
	// bl 0x82e86198
	sub_82E86198(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvlx128 v63,r0,r24
	temp.u32 = r24.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,304
	r11.s64 = ctx.r1.s64 + 304;
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,92
	ctx.r8.s64 = 92;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vsubfp128 v60,v127,v126
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v60.f32, simde_mm_sub_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v126.f32)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvlx128 v59,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// vspltw128 v59,v59,0
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v59.u32), 0xFF));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v62,v62,v63
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lvlx128 v58,r31,r8
	temp.u32 = r31.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v58,v58,0
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v58.u32), 0xFF));
	// addi r11,r1,416
	r11.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// vmulfp128 v63,v63,v59
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v59.f32)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v63,v58
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v58.f32)));
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmulfp128 v127,v63,v62
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// vmulfp128 v63,v127,v61
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v61.f32)));
	// vaddfp128 v126,v60,v127
	simde_mm_store_ps(v126.f32, simde_mm_add_ps(simde_mm_load_ps(v60.f32), simde_mm_load_ps(v127.f32)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e86270
	sub_82E86270(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 96);
	f0.f64 = double(temp.f32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp128 v12,v127,v63,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v63.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_827D31BC:
	// li r9,76
	ctx.r9.s64 = 76;
	// lwz r8,192(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 192);
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// li r10,208
	ctx.r10.s64 = 208;
	// li r11,224
	r11.s64 = 224;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lvlx128 v63,r31,r9
	temp.u32 = r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// vspltw128 v0,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,76
	ctx.r7.s64 = 76;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// lvlx128 v63,r31,r7
	temp.u32 = r31.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// stvx128 v0,r8,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,192(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 192);
	// stvx128 v126,r8,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,192(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 192);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// stfs f0,240(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 240, temp.u32);
	// lwz r8,196(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 196);
	// lvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v63,v61,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v63.f32)));
	// vsubfp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// stvx128 v63,r8,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,196(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 196);
	// stvx128 v126,r10,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,196(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 196);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// stfs f0,240(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 240, temp.u32);
	// beq cr6,0x827d3250
	if (cr6.eq) goto loc_827D3250;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D3250:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827d3260
	if (cr6.eq) goto loc_827D3260;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D3260:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
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

__attribute__((alias("__imp__sub_827D3280"))) PPC_WEAK_FUNC(sub_827D3280);
PPC_FUNC_IMPL(__imp__sub_827D3280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r24,196(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + 196);
	// lwz r27,0(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(r27.u32, r24.u32, xer);
	// beq cr6,0x827d340c
	if (cr6.eq) goto loc_827D340C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// lis r11,-31956
	r11.s64 = -2094268416;
	// vspltisw128 v126,0
	simde_mm_store_si128((simde__m128i*)v126.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r10,-31945
	ctx.r10.s64 = -2093547520;
	// lis r25,-31945
	r25.s64 = -2093547520;
	// vcsxwfp128 v127,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// addi r29,r11,-20400
	r29.s64 = r11.s64 + -20400;
	// lfs f31,2240(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f31.f64 = double(temp.f32);
	// addi r26,r10,-28608
	r26.s64 = ctx.r10.s64 + -28608;
loc_827D32E0:
	// lwz r31,8(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 56);
	f0.f64 = double(temp.f32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lvx128 v0,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// lvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)(base + ((r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,-12(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r29.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e86250
	sub_82E86250(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,-28624(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -28624);
	// lvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v0,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// lvlx128 v62,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), 0xFF));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lvx128 v12,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f11,52(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// vmaddfp v0,v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor128 v13,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// vmulfp128 v62,v63,v127
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vcmpeqfp128 v11,v63,v126
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v126.f32)));
	// stvx128 v0,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// lfs f12,0(r28)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// vmulfp128 v61,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v13,v62,v61,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// beq 0x827d33b0
	if (cr0.eq) goto loc_827D33B0;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f9,f0,f13
	f0.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f0,f12,f11
	f0.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,32(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// b 0x827d33d4
	goto loc_827D33D4;
loc_827D33B0:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f9,f0,f13
	f0.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f0,f12,f11
	f0.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
loc_827D33D4:
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f10
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f10.f64)));
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x827d3400
	if (cr6.gt) goto loc_827D3400;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r23,192
	ctx.r4.s64 = r23.s64 + 192;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82510018
	sub_82510018(ctx, base);
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x827d3404
	goto loc_827D3404;
loc_827D3400:
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_827D3404:
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(r27.u32, r24.u32, xer);
	// bne cr6,0x827d32e0
	if (!cr6.eq) goto loc_827D32E0;
loc_827D340C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_827D3428"))) PPC_WEAK_FUNC(sub_827D3428);
PPC_FUNC_IMPL(__imp__sub_827D3428) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,18584
	r11.s64 = r11.s64 + 18584;
	// addi r10,r10,18564
	ctx.r10.s64 = ctx.r10.s64 + 18564;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,380
	ctx.r3.s64 = r31.s64 + 380;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// bl 0x82e1bc68
	sub_82E1BC68(ctx, base);
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 376);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d3468
	if (cr6.eq) goto loc_827D3468;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_827D3468:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// addi r30,r31,372
	r30.s64 = r31.s64 + 372;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d347c
	if (cr6.eq) goto loc_827D347C;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_827D347C:
	// li r29,3
	r29.s64 = 3;
loc_827D3480:
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d3494
	if (cr6.eq) goto loc_827D3494;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_827D3494:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x827d3480
	if (!cr0.lt) goto loc_827D3480;
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d34ac
	if (cr6.eq) goto loc_827D34AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D34AC:
	// lwz r3,344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d34bc
	if (cr6.eq) goto loc_827D34BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D34BC:
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d34cc
	if (cr6.eq) goto loc_827D34CC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D34CC:
	// addi r11,r31,332
	r11.s64 = r31.s64 + 332;
	// li r29,15
	r29.s64 = 15;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_827D34D8:
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d34ec
	if (cr6.eq) goto loc_827D34EC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D34EC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x827d34d8
	if (!cr0.lt) goto loc_827D34D8;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82b74ea0
	sub_82B74EA0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827D3528"))) PPC_WEAK_FUNC(sub_827D3528);
PPC_FUNC_IMPL(__imp__sub_827D3528) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x827d35e8
	sub_827D35E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D3530"))) PPC_WEAK_FUNC(sub_827D3530);
PPC_FUNC_IMPL(__imp__sub_827D3530) {
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
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,18584
	r11.s64 = r11.s64 + 18584;
	// addi r10,r10,18564
	ctx.r10.s64 = ctx.r10.s64 + 18564;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// bl 0x822c0b50
	sub_822C0B50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// addi r10,r31,204
	ctx.r10.s64 = r31.s64 + 204;
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
loc_827D357C:
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
	// bge 0x827d357c
	if (!cr0.lt) goto loc_827D357C;
	// stw r11,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r11.u32);
	// addi r10,r31,356
	ctx.r10.s64 = r31.s64 + 356;
	// stw r11,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(r31.u32 + 352, r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r11.u32);
	// stw r11,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r11.u32);
	// stw r11,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r11.u32);
	// stw r11,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r11.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(r31.u32 + 380, r11.u32);
	// stw r11,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r11.u32);
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

__attribute__((alias("__imp__sub_827D35E8"))) PPC_WEAK_FUNC(sub_827D35E8);
PPC_FUNC_IMPL(__imp__sub_827D35E8) {
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
	// bl 0x827d3428
	sub_827D3428(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d3618
	if (cr0.eq) goto loc_827D3618;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827D3618:
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

__attribute__((alias("__imp__sub_827D3638"))) PPC_WEAK_FUNC(sub_827D3638);
PPC_FUNC_IMPL(__imp__sub_827D3638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831b1434
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r4,-5808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5808);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c338
	sub_8250C338(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// bne cr6,0x827d368c
	if (!cr6.eq) goto loc_827D368C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D368C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r30,r29,40
	r30.s64 = r29.s64 + 40;
	// bne cr6,0x827d36a4
	if (!cr6.eq) goto loc_827D36A4;
	// li r30,0
	r30.s64 = 0;
loc_827D36A4:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-10384(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -10384);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c3a8
	sub_8250C3A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-9464
	ctx.r4.s64 = r11.s64 + -9464;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250e090
	sub_8250E090(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r31,r29,244
	r31.s64 = r29.s64 + 244;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,244(r29)
	PPC_STORE_U32(r29.u32 + 244, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d371c
	if (cr6.eq) goto loc_827D371C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D371C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18964
	ctx.r4.s64 = r11.s64 + 18964;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r30,r11,-20344
	r30.s64 = r11.s64 + -20344;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// lfs f27,-21804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21804);
	f27.f64 = double(temp.f32);
	// addi r4,r30,-68
	ctx.r4.s64 = r30.s64 + -68;
	// lfs f28,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f28.f64 = double(temp.f32);
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// lfs f31,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,680
	ctx.r3.s64 = ctx.r1.s64 + 680;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,648
	ctx.r3.s64 = ctx.r1.s64 + 648;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18952
	ctx.r4.s64 = r11.s64 + 18952;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r30,-64
	ctx.r4.s64 = r30.s64 + -64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f30,-24792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24792);
	f30.f64 = double(temp.f32);
	// lfs f29,26548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26548);
	f29.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18932
	ctx.r4.s64 = r11.s64 + 18932;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-60
	ctx.r4.s64 = r30.s64 + -60;
	// addi r3,r1,1264
	ctx.r3.s64 = ctx.r1.s64 + 1264;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,1320
	ctx.r3.s64 = ctx.r1.s64 + 1320;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,1288
	ctx.r3.s64 = ctx.r1.s64 + 1288;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18916
	ctx.r4.s64 = r11.s64 + 18916;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-56
	ctx.r4.s64 = r30.s64 + -56;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18892
	ctx.r4.s64 = r11.s64 + 18892;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-24
	ctx.r4.s64 = r30.s64 + -24;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,936
	ctx.r3.s64 = ctx.r1.s64 + 936;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,904
	ctx.r3.s64 = ctx.r1.s64 + 904;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18872
	ctx.r4.s64 = r11.s64 + 18872;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-52
	ctx.r4.s64 = r30.s64 + -52;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18848
	ctx.r4.s64 = r11.s64 + 18848;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-48
	ctx.r4.s64 = r30.s64 + -48;
	// addi r3,r1,1136
	ctx.r3.s64 = ctx.r1.s64 + 1136;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,1192
	ctx.r3.s64 = ctx.r1.s64 + 1192;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,1160
	ctx.r3.s64 = ctx.r1.s64 + 1160;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,18836
	ctx.r4.s64 = r11.s64 + 18836;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r30,-44
	ctx.r4.s64 = r30.s64 + -44;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f29,27976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 27976);
	f29.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18824
	ctx.r4.s64 = r11.s64 + 18824;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-40
	ctx.r4.s64 = r30.s64 + -40;
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,1064
	ctx.r3.s64 = ctx.r1.s64 + 1064;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,1032
	ctx.r3.s64 = ctx.r1.s64 + 1032;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18796
	ctx.r4.s64 = r11.s64 + 18796;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-36
	ctx.r4.s64 = r30.s64 + -36;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,808
	ctx.r3.s64 = ctx.r1.s64 + 808;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18776
	ctx.r4.s64 = r11.s64 + 18776;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18740
	ctx.r4.s64 = r11.s64 + 18740;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18724
	ctx.r4.s64 = r11.s64 + 18724;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = r30.s64 + -20;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18708
	ctx.r4.s64 = r11.s64 + 18708;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-16
	ctx.r4.s64 = r30.s64 + -16;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18692
	ctx.r4.s64 = r11.s64 + 18692;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,-12
	ctx.r4.s64 = r30.s64 + -12;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,712
	ctx.r3.s64 = ctx.r1.s64 + 712;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18676
	ctx.r4.s64 = r11.s64 + 18676;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r11,r30,-12
	r11.s64 = r30.s64 + -12;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,872
	ctx.r3.s64 = ctx.r1.s64 + 872;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,840
	ctx.r3.s64 = ctx.r1.s64 + 840;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18660
	ctx.r4.s64 = r11.s64 + 18660;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r11,r30,-12
	r11.s64 = r30.s64 + -12;
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,1000
	ctx.r3.s64 = ctx.r1.s64 + 1000;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,968
	ctx.r3.s64 = ctx.r1.s64 + 968;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27704
	ctx.r4.s64 = r11.s64 + 27704;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8748
	sub_825A8748(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8148
	sub_825A8148(ctx, base);
	// addi r3,r1,1128
	ctx.r3.s64 = ctx.r1.s64 + 1128;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,1096
	ctx.r3.s64 = ctx.r1.s64 + 1096;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27640
	ctx.r4.s64 = r11.s64 + 27640;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// addi r3,r1,1200
	ctx.r3.s64 = ctx.r1.s64 + 1200;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f29,-5316(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5316);
	f29.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,1256
	ctx.r3.s64 = ctx.r1.s64 + 1256;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,1224
	ctx.r3.s64 = ctx.r1.s64 + 1224;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,18624
	ctx.r4.s64 = r11.s64 + 18624;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,1328
	ctx.r3.s64 = ctx.r1.s64 + 1328;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a8550
	sub_825A8550(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a8018
	sub_825A8018(ctx, base);
	// addi r3,r1,1384
	ctx.r3.s64 = ctx.r1.s64 + 1384;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,1352
	ctx.r3.s64 = ctx.r1.s64 + 1352;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,18400
	ctx.r4.s64 = r11.s64 + 18400;
	// li r5,386
	ctx.r5.s64 = 386;
	// li r3,580
	ctx.r3.s64 = 580;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d3e28
	if (cr0.eq) goto loc_827D3E28;
	// bl 0x827d3530
	sub_827D3530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d3e2c
	goto loc_827D3E2C;
loc_827D3E28:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D3E2C:
	// addi r3,r29,252
	ctx.r3.s64 = r29.s64 + 252;
	// bl 0x827d2738
	sub_827D2738(ctx, base);
	// lwz r11,256(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 256);
	// lwz r10,252(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x827d3e6c
	if (cr6.eq) goto loc_827D3E6C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D3E50:
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
	// bne 0x827d3e50
	if (!cr0.eq) goto loc_827D3E50;
loc_827D3E6C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x827d3e8c
	if (!cr6.eq) goto loc_827D3E8C;
	// li r31,0
	r31.s64 = 0;
loc_827D3E8C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82510d20
	sub_82510D20(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x831b1480
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827D3ED0"))) PPC_WEAK_FUNC(sub_827D3ED0);
PPC_FUNC_IMPL(__imp__sub_827D3ED0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827d17d0
	sub_827D17D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827d17d0
	sub_827D17D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,196(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82bb6c30
	sub_82BB6C30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830bde10
	sub_830BDE10(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq cr6,0x827d3f80
	if (cr6.eq) goto loc_827D3F80;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D3F80:
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// beq cr6,0x827d3f9c
	if (cr6.eq) goto loc_827D3F9C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D3F9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827D3FA8"))) PPC_WEAK_FUNC(sub_827D3FA8);
PPC_FUNC_IMPL(__imp__sub_827D3FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b04
	// addi r12,r1,-112
	r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831b1428
	// li r12,-192
	r12.s64 = -192;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r23,r11,-20388
	r23.s64 = r11.s64 + -20388;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lbz r11,48(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827d4734
	if (cr0.eq) goto loc_827D4734;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r27,r11,18400
	r27.s64 = r11.s64 + 18400;
	// li r5,404
	ctx.r5.s64 = 404;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827d401c
	if (cr0.eq) goto loc_827D401C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e626d8
	sub_82E626D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,-25392
	r11.s64 = r11.s64 + -25392;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x827d4020
	goto loc_827D4020;
loc_827D401C:
	// li r31,0
	r31.s64 = 0;
loc_827D4020:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82474c70
	sub_82474C70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r20,84(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r21,80(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// stw r20,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r20.u32);
	// stw r21,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// beq cr6,0x827d4078
	if (cr6.eq) goto loc_827D4078;
	// addi r11,r20,4
	r11.s64 = r20.s64 + 4;
loc_827D405C:
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
	// bne 0x827d405c
	if (!cr0.eq) goto loc_827D405C;
loc_827D4078:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d4098
	if (!cr6.eq) goto loc_827D4098;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D4098:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r28,40
	r26.s64 = r28.s64 + 40;
	// addi r31,r1,120
	r31.s64 = ctx.r1.s64 + 120;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,406
	ctx.r5.s64 = 406;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d40d8
	if (cr6.eq) goto loc_827D40D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D40D8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,407
	ctx.r5.s64 = 407;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d4100
	if (cr0.eq) goto loc_827D4100;
	// bl 0x82b5f2b8
	sub_82B5F2B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827d4104
	goto loc_827D4104;
loc_827D4100:
	// li r31,0
	r31.s64 = 0;
loc_827D4104:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827d1880
	sub_827D1880(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r24,84(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// beq cr6,0x827d415c
	if (cr6.eq) goto loc_827D415C;
	// addi r11,r24,4
	r11.s64 = r24.s64 + 4;
loc_827D4140:
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
	// bne 0x827d4140
	if (!cr0.eq) goto loc_827D4140;
loc_827D415C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d417c
	if (!cr6.eq) goto loc_827D417C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D417C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,408
	ctx.r5.s64 = 408;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d41b8
	if (cr6.eq) goto loc_827D41B8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D41B8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,409
	ctx.r5.s64 = 409;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827d41ec
	if (cr0.eq) goto loc_827D41EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e626d8
	sub_82E626D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,18396
	r11.s64 = r11.s64 + 18396;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x827d41f0
	goto loc_827D41F0;
loc_827D41EC:
	// li r31,0
	r31.s64 = 0;
loc_827D41F0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827d1948
	sub_827D1948(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r25,84(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// beq cr6,0x827d4248
	if (cr6.eq) goto loc_827D4248;
	// addi r11,r25,4
	r11.s64 = r25.s64 + 4;
loc_827D422C:
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
	// bne 0x827d422c
	if (!cr0.eq) goto loc_827D422C;
loc_827D4248:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
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
	// bne cr6,0x827d4268
	if (!cr6.eq) goto loc_827D4268;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D4268:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r1,104
	r29.s64 = ctx.r1.s64 + 104;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,410
	ctx.r5.s64 = 410;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d42a4
	if (cr6.eq) goto loc_827D42A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D42A4:
	// lbz r11,52(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827d4704
	if (cr0.eq) goto loc_827D4704;
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x827d4704
	if (!cr0.eq) goto loc_827D4704;
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x827d4704
	if (!cr0.eq) goto loc_827D4704;
	// lwz r11,56(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 56);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r10,r10,-20480
	ctx.r10.s64 = ctx.r10.s64 + -20480;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d4704
	if (cr6.eq) goto loc_827D4704;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,422
	ctx.r5.s64 = 422;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d430c
	if (cr0.eq) goto loc_827D430C;
	// bl 0x82b5f1d0
	sub_82B5F1D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827d4310
	goto loc_827D4310;
loc_827D430C:
	// li r31,0
	r31.s64 = 0;
loc_827D4310:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825a4de0
	sub_825A4DE0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// beq cr6,0x827d4368
	if (cr6.eq) goto loc_827D4368;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_827D434C:
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
	// bne 0x827d434c
	if (!cr0.eq) goto loc_827D434C;
loc_827D4368:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d4388
	if (!cr6.eq) goto loc_827D4388;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D4388:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,423
	ctx.r5.s64 = 423;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d43c4
	if (cr6.eq) goto loc_827D43C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D43C4:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827d43e8
	if (cr0.eq) goto loc_827D43E8;
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,192(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,240(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// stfs f0,192(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 192, temp.u32);
	// b 0x827d4520
	goto loc_827D4520;
loc_827D43E8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,430
	ctx.r5.s64 = 430;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d4410
	if (cr0.eq) goto loc_827D4410;
	// bl 0x82b5f268
	sub_82B5F268(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827d4414
	goto loc_827D4414;
loc_827D4410:
	// li r31,0
	r31.s64 = 0;
loc_827D4414:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82479e10
	sub_82479E10(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// beq cr6,0x827d446c
	if (cr6.eq) goto loc_827D446C;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_827D4450:
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
	// bne 0x827d4450
	if (!cr0.eq) goto loc_827D4450;
loc_827D446C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x827d448c
	if (!cr6.eq) goto loc_827D448C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D448C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r19,r1,128
	r19.s64 = ctx.r1.s64 + 128;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,431
	ctx.r5.s64 = 431;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d44c8
	if (cr6.eq) goto loc_827D44C8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D44C8:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x827d44f4
	if (!cr0.eq) goto loc_827D44F4;
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x827d44f4
	if (!cr0.eq) goto loc_827D44F4;
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,240(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,24(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 24);
	f0.f64 = double(temp.f32);
	// b 0x827d4504
	goto loc_827D4504;
loc_827D44F4:
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,240(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,28(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 28);
	f0.f64 = double(temp.f32);
loc_827D4504:
	// lfs f12,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f0,192(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 192, temp.u32);
	// beq cr6,0x827d4520
	if (cr6.eq) goto loc_827D4520;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D4520:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827d4530
	if (cr6.eq) goto loc_827D4530;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D4530:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827d4540
	if (cr6.eq) goto loc_827D4540;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D4540:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827d4550
	if (cr6.eq) goto loc_827D4550;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D4550:
	// lwz r11,56(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 56);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// beq cr6,0x827d4724
	if (cr6.eq) goto loc_827D4724;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 192);
	f0.f64 = double(temp.f32);
	// lfs f30,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x827d4724
	if (cr6.lt) goto loc_827D4724;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r30,r28,208
	r30.s64 = r28.s64 + 208;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lfs f28,18980(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18980);
	f28.f64 = double(temp.f32);
	// addi r29,r28,224
	r29.s64 = r28.s64 + 224;
	// lfs f29,-31000(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31000);
	f29.f64 = double(temp.f32);
	// addi r31,r11,29232
	r31.s64 = r11.s64 + 29232;
	// lfs f31,-22120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22120);
	f31.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_827D45A4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fsubs f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lfs f0,-20(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + -20);
	f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmuls f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fsubs f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lfs f0,-20(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + -20);
	f0.f64 = double(temp.f32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// fmuls f26,f13,f0
	f26.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fsubs f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - f31.f64));
	// lfs f0,-20(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + -20);
	f0.f64 = double(temp.f32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// fmuls f25,f13,f0
	f25.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fmsubs f13,f1,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * f29.f64 - f30.f64));
	// lfs f0,56(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 56);
	f0.f64 = double(temp.f32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// fmuls f24,f13,f0
	f24.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,252(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 252);
	// lvx128 v127,r0,r31
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x827d3ed0
	sub_827D3ED0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stfs f26,84(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f25,88(r1)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r27,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r27.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r27,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r27.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f30,48(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r27.u32 + 48, temp.u32);
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 52, temp.u32);
	// stfs f24,56(r27)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r27.u32 + 56, temp.u32);
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f28.f64));
	// li r11,64
	r11.s64 = 64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,r27,r11
	PPC_STORE_U32(r27.u32 + r11.u32, f0.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,56(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 56);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// stw r11,60(r27)
	PPC_STORE_U32(r27.u32 + 60, r11.u32);
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec488
	sub_824EC488(ctx, base);
	// lfs f0,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 192);
	f0.f64 = double(temp.f32);
	// fnmsubs f13,f1,f31,f30
	ctx.f13.f64 = double(float(-(ctx.f1.f64 * f31.f64 - f30.f64)));
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,192(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 192, temp.u32);
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lfs f0,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 192);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x827d45a4
	if (!cr6.lt) goto loc_827D45A4;
	// b 0x827d4724
	goto loc_827D4724;
loc_827D4704:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x827d4714
	if (cr6.eq) goto loc_827D4714;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D4714:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x827d4724
	if (cr6.eq) goto loc_827D4724;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D4724:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x827d4734
	if (cr6.eq) goto loc_827D4734;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D4734:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// li r0,-192
	r0.s64 = -192;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-112
	r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831b1474
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_827D4750"))) PPC_WEAK_FUNC(sub_827D4750);
PPC_FUNC_IMPL(__imp__sub_827D4750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x827d4788
	if (!cr6.eq) goto loc_827D4788;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D4788:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x827d47a4
	if (!cr6.eq) goto loc_827D47A4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D47A4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827d9a50
	sub_827D9A50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827D47D8"))) PPC_WEAK_FUNC(sub_827D47D8);
PPC_FUNC_IMPL(__imp__sub_827D47D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x827d4810
	if (!cr6.eq) goto loc_827D4810;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D4810:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x827d482c
	if (!cr6.eq) goto loc_827D482C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D482C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x827da400
	sub_827DA400(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827D4860"))) PPC_WEAK_FUNC(sub_827D4860);
PPC_FUNC_IMPL(__imp__sub_827D4860) {
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
	// beq 0x827d48b8
	if (cr0.eq) goto loc_827D48B8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,18988
	ctx.r9.s64 = r11.s64 + 18988;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d48bc
	goto loc_827D48BC;
loc_827D48B8:
	// li r11,0
	r11.s64 = 0;
loc_827D48BC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d4908
	if (!cr6.eq) goto loc_827D4908;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d48e8
	if (cr6.eq) goto loc_827D48E8;
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
loc_827D48E8:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-19684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19684);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D4908:
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

__attribute__((alias("__imp__sub_827D4928"))) PPC_WEAK_FUNC(sub_827D4928);
PPC_FUNC_IMPL(__imp__sub_827D4928) {
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
	// beq 0x827d4980
	if (cr0.eq) goto loc_827D4980;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,19008
	ctx.r9.s64 = r11.s64 + 19008;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d4984
	goto loc_827D4984;
loc_827D4980:
	// li r11,0
	r11.s64 = 0;
loc_827D4984:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d49d0
	if (!cr6.eq) goto loc_827D49D0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d49b0
	if (cr6.eq) goto loc_827D49B0;
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
loc_827D49B0:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-19684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19684);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D49D0:
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

__attribute__((alias("__imp__sub_827D49F0"))) PPC_WEAK_FUNC(sub_827D49F0);
PPC_FUNC_IMPL(__imp__sub_827D49F0) {
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
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x827d4a38
	goto loc_827D4A38;
loc_827D4A1C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82e8a358
	sub_82E8A358(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827D4A38:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827d4a1c
	if (!cr6.eq) goto loc_827D4A1C;
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

__attribute__((alias("__imp__sub_827D4A58"))) PPC_WEAK_FUNC(sub_827D4A58);
PPC_FUNC_IMPL(__imp__sub_827D4A58) {
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
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x827d4aa0
	goto loc_827D4AA0;
loc_827D4A7C:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_827D4AA0:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x827d4a7c
	if (!cr6.eq) goto loc_827D4A7C;
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

__attribute__((alias("__imp__sub_827D4AC0"))) PPC_WEAK_FUNC(sub_827D4AC0);
PPC_FUNC_IMPL(__imp__sub_827D4AC0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x827d4c68
	if (!cr6.gt) goto loc_827D4C68;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// addi r28,r11,19024
	r28.s64 = r11.s64 + 19024;
	// lfs f31,-9716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9716);
	f31.f64 = double(temp.f32);
loc_827D4B00:
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x82e85790
	sub_82E85790(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x82e85730
	sub_82E85730(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x82e856d0
	sub_82E856D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f3,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e84d60
	sub_82E84D60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,106
	ctx.r5.s64 = 106;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d4ba8
	if (cr0.eq) goto loc_827D4BA8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827d4bac
	goto loc_827D4BAC;
loc_827D4BA8:
	// li r31,0
	r31.s64 = 0;
loc_827D4BAC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822e2bb8
	sub_822E2BB8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d4bfc
	if (cr6.eq) goto loc_827D4BFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D4BFC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x827d4c10
	if (!cr6.eq) goto loc_827D4C10;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D4C10:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x827d4c2c
	if (!cr6.eq) goto loc_827D4C2C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_827D4C2C:
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	f0.f64 = double(temp.f32);
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 * f30.f64));
	// bl 0x827d9a50
	sub_827D9A50(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d4c60
	if (cr6.eq) goto loc_827D4C60;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D4C60:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x827d4b00
	if (!cr0.eq) goto loc_827D4B00;
loc_827D4C68:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d4c80
	if (cr6.eq) goto loc_827D4C80;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D4C80:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_827D4C90"))) PPC_WEAK_FUNC(sub_827D4C90);
PPC_FUNC_IMPL(__imp__sub_827D4C90) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827d4cdc
	if (cr6.eq) goto loc_827D4CDC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82e8a358
	sub_82E8A358(ctx, base);
loc_827D4CDC:
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

__attribute__((alias("__imp__sub_827D4CF8"))) PPC_WEAK_FUNC(sub_827D4CF8);
PPC_FUNC_IMPL(__imp__sub_827D4CF8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827d4d44
	if (cr6.eq) goto loc_827D4D44;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827D4D44:
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

__attribute__((alias("__imp__sub_827D4D58"))) PPC_WEAK_FUNC(sub_827D4D58);
PPC_FUNC_IMPL(__imp__sub_827D4D58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827d4da4
	if (cr6.eq) goto loc_827D4DA4;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82e8a108
	sub_82E8A108(ctx, base);
loc_827D4DA4:
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

__attribute__((alias("__imp__sub_827D4DC0"))) PPC_WEAK_FUNC(sub_827D4DC0);
PPC_FUNC_IMPL(__imp__sub_827D4DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b1438
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827d4e2c
	if (cr6.eq) goto loc_827D4E2C;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82e8a6c0
	sub_82E8A6C0(ctx, base);
loc_827D4E2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b1484
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D4E48"))) PPC_WEAK_FUNC(sub_827D4E48);
PPC_FUNC_IMPL(__imp__sub_827D4E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827d4e94
	if (cr6.eq) goto loc_827D4E94;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82e8a198
	sub_82E8A198(ctx, base);
loc_827D4E94:
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

__attribute__((alias("__imp__sub_827D4EB0"))) PPC_WEAK_FUNC(sub_827D4EB0);
PPC_FUNC_IMPL(__imp__sub_827D4EB0) {
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r4,r30,148
	ctx.r4.s64 = r30.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x827d4f2c
	if (cr6.eq) goto loc_827D4F2C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x827d4f38
	if (cr6.eq) goto loc_827D4F38;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D4F0C:
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
	// bne 0x827d4f0c
	if (!cr0.eq) goto loc_827D4F0C;
	// b 0x827d4f38
	goto loc_827D4F38;
loc_827D4F2C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_827D4F38:
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

__attribute__((alias("__imp__sub_827D4F58"))) PPC_WEAK_FUNC(sub_827D4F58);
PPC_FUNC_IMPL(__imp__sub_827D4F58) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,28
	ctx.r6.s64 = 28;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827d4fb8
	if (cr0.eq) goto loc_827D4FB8;
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
	// bl 0x82bafe00
	sub_82BAFE00(ctx, base);
loc_827D4FB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_827D4FC8"))) PPC_WEAK_FUNC(sub_827D4FC8);
PPC_FUNC_IMPL(__imp__sub_827D4FC8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d5024
	if (cr0.eq) goto loc_827D5024;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b60d30
	sub_82B60D30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827d5028
	goto loc_827D5028;
loc_827D5024:
	// li r31,0
	r31.s64 = 0;
loc_827D5028:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d4860
	sub_827D4860(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827D5058"))) PPC_WEAK_FUNC(sub_827D5058);
PPC_FUNC_IMPL(__imp__sub_827D5058) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-20020
	ctx.r4.s64 = r11.s64 + -20020;
	// li r5,137
	ctx.r5.s64 = 137;
	// li r3,112
	ctx.r3.s64 = 112;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d50b4
	if (cr0.eq) goto loc_827D50B4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82b60c48
	sub_82B60C48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827d50b8
	goto loc_827D50B8;
loc_827D50B4:
	// li r31,0
	r31.s64 = 0;
loc_827D50B8:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d4928
	sub_827D4928(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827D50E8"))) PPC_WEAK_FUNC(sub_827D50E8);
PPC_FUNC_IMPL(__imp__sub_827D50E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// stfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827d4fc8
	sub_827D4FC8(ctx, base);
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
	// beq cr6,0x827d514c
	if (cr6.eq) goto loc_827D514C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D5130:
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
	// bne 0x827d5130
	if (!cr0.eq) goto loc_827D5130;
loc_827D514C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r6,160(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,19024
	ctx.r4.s64 = ctx.r10.s64 + 19024;
	// li r5,126
	ctx.r5.s64 = 126;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5180
	if (cr6.eq) goto loc_827D5180;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5180:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5190
	if (cr6.eq) goto loc_827D5190;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5190:
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

__attribute__((alias("__imp__sub_827D51A8"))) PPC_WEAK_FUNC(sub_827D51A8);
PPC_FUNC_IMPL(__imp__sub_827D51A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// stfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827d5058
	sub_827D5058(ctx, base);
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
	// beq cr6,0x827d520c
	if (cr6.eq) goto loc_827D520C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D51F0:
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
	// bne 0x827d51f0
	if (!cr0.eq) goto loc_827D51F0;
loc_827D520C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r6,160(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,19024
	ctx.r4.s64 = ctx.r10.s64 + 19024;
	// li r5,137
	ctx.r5.s64 = 137;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5240
	if (cr6.eq) goto loc_827D5240;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5240:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5250
	if (cr6.eq) goto loc_827D5250;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5250:
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

__attribute__((alias("__imp__sub_827D5268"))) PPC_WEAK_FUNC(sub_827D5268);
PPC_FUNC_IMPL(__imp__sub_827D5268) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r31.u32);
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d52d4
	if (cr6.eq) goto loc_827D52D4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16264
	ctx.r4.s64 = r11.s64 + 16264;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c2ed0
	sub_822C2ED0(ctx, base);
	// bl 0x822c1ca8
	sub_822C1CA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,16244
	r11.s64 = r11.s64 + 16244;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c2978
	sub_822C2978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
loc_827D52D4:
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// mr r27,r31
	r27.u64 = r31.u64;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,260(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// beq cr6,0x827d52fc
	if (cr6.eq) goto loc_827D52FC;
	// lwz r28,8(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// b 0x827d5320
	goto loc_827D5320;
loc_827D52FC:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lbz r10,25(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827d5314
	if (cr6.eq) goto loc_827D5314;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x827d5320
	goto loc_827D5320;
loc_827D5314:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r27
	cr6.compare<uint32_t>(r25.u32, r27.u32, xer);
	// bne cr6,0x827d53f8
	if (!cr6.eq) goto loc_827D53F8;
loc_827D5320:
	// lbz r11,25(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 25);
	// lwz r31,4(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d5334
	if (!cr6.eq) goto loc_827D5334;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_827D5334:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x827d534c
	if (!cr6.eq) goto loc_827D534C;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x827d5364
	goto loc_827D5364;
loc_827D534C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x827d5360
	if (!cr6.eq) goto loc_827D5360;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x827d5364
	goto loc_827D5364;
loc_827D5360:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_827D5364:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x827d53ac
	if (!cr6.eq) goto loc_827D53AC;
	// lbz r11,25(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d5388
	if (cr6.eq) goto loc_827D5388;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x827d53a8
	goto loc_827D53A8;
loc_827D5388:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x827d539c
	goto loc_827D539C;
loc_827D5394:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_827D539C:
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827d5394
	if (cr6.eq) goto loc_827D5394;
loc_827D53A8:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_827D53AC:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x827d548c
	if (!cr6.eq) goto loc_827D548C;
	// lbz r11,25(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d53d0
	if (cr6.eq) goto loc_827D53D0;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x827d53f0
	goto loc_827D53F0;
loc_827D53D0:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x827d53e4
	goto loc_827D53E4;
loc_827D53DC:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_827D53E4:
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827d53dc
	if (cr6.eq) goto loc_827D53DC;
loc_827D53F0:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x827d548c
	goto loc_827D548C;
loc_827D53F8:
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x827d5418
	if (!cr6.eq) goto loc_827D5418;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x827d5440
	goto loc_827D5440;
loc_827D5418:
	// lbz r11,25(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 25);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d542c
	if (!cr6.eq) goto loc_827D542C;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_827D542C:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
loc_827D5440:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x827d5458
	if (!cr6.eq) goto loc_827D5458;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x827d5474
	goto loc_827D5474;
loc_827D5458:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x827d5470
	if (!cr6.eq) goto loc_827D5470;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x827d5474
	goto loc_827D5474;
loc_827D5470:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_827D5474:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lbz r11,24(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 24);
	// lbz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 24);
	// stb r11,24(r25)
	PPC_STORE_U8(r25.u32 + 24, r11.u8);
	// stb r10,24(r27)
	PPC_STORE_U8(r27.u32 + 24, ctx.r10.u8);
loc_827D548C:
	// lbz r11,24(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x827d562c
	if (!cr6.eq) goto loc_827D562C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x827d5628
	if (cr6.eq) goto loc_827D5628;
	// li r29,0
	r29.s64 = 0;
loc_827D54B0:
	// lbz r11,24(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x827d5628
	if (!cr6.eq) goto loc_827D5628;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x827d556c
	if (!cr6.eq) goto loc_827D556C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827d54f0
	if (!cr6.eq) goto loc_827D54F0;
	// stb r30,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827e1e60
	sub_827E1E60(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_827D54F0:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827d55c0
	if (!cr6.eq) goto loc_827D55C0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827d551c
	if (!cr6.eq) goto loc_827D551C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x827d55bc
	if (cr6.eq) goto loc_827D55BC;
loc_827D551C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827d5548
	if (!cr6.eq) goto loc_827D5548;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r30,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, r30.u8);
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// bl 0x827e1ec8
	sub_827E1EC8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_827D5548:
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r10,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r10.u8);
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r30,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r30.u8);
	// bl 0x827e1e60
	sub_827E1E60(ctx, base);
	// b 0x827d5628
	goto loc_827D5628;
loc_827D556C:
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827d5590
	if (!cr6.eq) goto loc_827D5590;
	// stb r30,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827e1ec8
	sub_827E1EC8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_827D5590:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827d55c0
	if (!cr6.eq) goto loc_827D55C0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827d55dc
	if (!cr6.eq) goto loc_827D55DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827d55dc
	if (!cr6.eq) goto loc_827D55DC;
loc_827D55BC:
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
loc_827D55C0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x827d54b0
	if (!cr6.eq) goto loc_827D54B0;
	// b 0x827d5628
	goto loc_827D5628;
loc_827D55DC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x827d5608
	if (!cr6.eq) goto loc_827D5608;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r30,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, r30.u8);
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// bl 0x827e1e60
	sub_827E1E60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_827D5608:
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r10,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r10.u8);
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r30,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r30.u8);
	// bl 0x827e1ec8
	sub_827E1EC8(ctx, base);
loc_827D5628:
	// stb r30,24(r28)
	PPC_STORE_U8(r28.u32 + 24, r30.u8);
loc_827D562C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82928d38
	sub_82928D38(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d565c
	if (cr6.eq) goto loc_827D565C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
loc_827D565C:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_827D5670"))) PPC_WEAK_FUNC(sub_827D5670);
PPC_FUNC_IMPL(__imp__sub_827D5670) {
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
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x827d56dc
	if (!cr6.eq) goto loc_827D56DC;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x827d56dc
	if (!cr6.eq) goto loc_827D56DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82635878
	sub_82635878(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x827d56e8
	goto loc_827D56E8;
loc_827D56BC:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827d5268
	sub_827D5268(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_827D56DC:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x827d56bc
	if (!cr6.eq) goto loc_827D56BC;
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
loc_827D56E8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827D56F8"))) PPC_WEAK_FUNC(sub_827D56F8);
PPC_FUNC_IMPL(__imp__sub_827D56F8) {
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
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r31,148
	r29.s64 = r31.s64 + 148;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827ace20
	sub_827ACE20(ctx, base);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x827d5790
	if (cr6.eq) goto loc_827D5790;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x827d5758
	if (!cr6.eq) goto loc_827D5758;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_827D5758:
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x827d92b8
	sub_827D92B8(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// beq cr6,0x827d5778
	if (cr6.eq) goto loc_827D5778;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5778:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827d5268
	sub_827D5268(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_827D5790:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827D5798"))) PPC_WEAK_FUNC(sub_827D5798);
PPC_FUNC_IMPL(__imp__sub_827D5798) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,152(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 152);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq cr6,0x827d5824
	if (cr6.eq) goto loc_827D5824;
	// li r30,0
	r30.s64 = 0;
loc_827D57C4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x827d57e4
	if (!cr6.eq) goto loc_827D57E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_827D57E4:
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x827d92b8
	sub_827D92B8(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// beq cr6,0x827d5804
	if (cr6.eq) goto loc_827D5804;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5804:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r11,152(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 152);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x827d57c4
	if (!cr6.eq) goto loc_827D57C4;
loc_827D5824:
	// addi r3,r29,148
	ctx.r3.s64 = r29.s64 + 148;
	// bl 0x82635878
	sub_82635878(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827D5838"))) PPC_WEAK_FUNC(sub_827D5838);
PPC_FUNC_IMPL(__imp__sub_827D5838) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x827d5890
	if (cr6.eq) goto loc_827D5890;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D5874:
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
	// bne 0x827d5874
	if (!cr0.eq) goto loc_827D5874;
loc_827D5890:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x827e26a8
	sub_827E26A8(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x827d58e0
	if (cr6.eq) goto loc_827D58E0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_827D58C4:
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
	// bne 0x827d58c4
	if (!cr0.eq) goto loc_827D58C4;
loc_827D58E0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,148
	ctx.r4.s64 = r31.s64 + 148;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82af3d70
	sub_82AF3D70(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5900
	if (cr6.eq) goto loc_827D5900;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5900:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5910
	if (cr6.eq) goto loc_827D5910;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5910:
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
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

__attribute__((alias("__imp__sub_827D5928"))) PPC_WEAK_FUNC(sub_827D5928);
PPC_FUNC_IMPL(__imp__sub_827D5928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x827d5b70
	if (!cr6.gt) goto loc_827D5B70;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// addi r23,r11,19024
	r23.s64 = r11.s64 + 19024;
	// lfs f31,-9716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9716);
	f31.f64 = double(temp.f32);
loc_827D5974:
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x82e85790
	sub_82E85790(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	f0.f64 = double(temp.f32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x82e85730
	sub_82E85730(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// bl 0x82e856d0
	sub_82E856D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f3,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e84d60
	sub_82E84D60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,158
	ctx.r5.s64 = 158;
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d5a1c
	if (cr0.eq) goto loc_827D5A1C;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// bl 0x82e1bac0
	sub_82E1BAC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827d5a20
	goto loc_827D5A20;
loc_827D5A1C:
	// li r31,0
	r31.s64 = 0;
loc_827D5A20:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822e2bb8
	sub_822E2BB8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82e1e040
	sub_82E1E040(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5a70
	if (cr6.eq) goto loc_827D5A70;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5A70:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x827d5a84
	if (!cr6.eq) goto loc_827D5A84;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D5A84:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// beq cr6,0x827d5ac0
	if (cr6.eq) goto loc_827D5AC0;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_827D5AA4:
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
	// bne 0x827d5aa4
	if (!cr0.eq) goto loc_827D5AA4;
loc_827D5AC0:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x827d5ad4
	if (!cr6.eq) goto loc_827D5AD4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D5AD4:
	// addi r6,r30,4
	ctx.r6.s64 = r30.s64 + 4;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5af8
	if (cr6.eq) goto loc_827D5AF8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5AF8:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5b3c
	if (cr6.eq) goto loc_827D5B3C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82e89dc0
	sub_82E89DC0(ctx, base);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	f0.f64 = double(temp.f32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(f0.f64 * f30.f64));
	// bl 0x82e8a108
	sub_82E8A108(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827d5838
	sub_827D5838(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827d5b38
	if (cr6.eq) goto loc_827D5B38;
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(r28.u32, ctx.r3.u32, xer);
	// blt cr6,0x827d5b3c
	if (cr6.lt) goto loc_827D5B3C;
loc_827D5B38:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_827D5B3C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5b4c
	if (cr6.eq) goto loc_827D5B4C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5B4C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827d5b68
	if (cr6.eq) goto loc_827D5B68;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5B68:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// bne 0x827d5974
	if (!cr0.eq) goto loc_827D5974;
loc_827D5B70:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5b88
	if (cr6.eq) goto loc_827D5B88;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5B88:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_827D5BA0"))) PPC_WEAK_FUNC(sub_827D5BA0);
PPC_FUNC_IMPL(__imp__sub_827D5BA0) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x827d5be0
	if (!cr6.eq) goto loc_827D5BE0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D5BE0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x827d5bfc
	if (!cr6.eq) goto loc_827D5BFC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D5BFC:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827da560
	sub_827DA560(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5c74
	if (cr6.eq) goto loc_827D5C74;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e89dc0
	sub_82E89DC0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82e8a108
	sub_82E8A108(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d5838
	sub_827D5838(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d5c54
	if (cr6.eq) goto loc_827D5C54;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5C54:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_827D5C74:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5c84
	if (cr6.eq) goto loc_827D5C84;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5C84:
	// li r31,0
	r31.s64 = 0;
	// b 0x827d5c54
	goto loc_827D5C54;
}

__attribute__((alias("__imp__sub_827D5C90"))) PPC_WEAK_FUNC(sub_827D5C90);
PPC_FUNC_IMPL(__imp__sub_827D5C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x827d5ccc
	if (!cr6.eq) goto loc_827D5CCC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D5CCC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250e538
	sub_8250E538(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-192
	ctx.r4.s64 = r11.s64 + -192;
	// bne cr6,0x827d5ce8
	if (!cr6.eq) goto loc_827D5CE8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D5CE8:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827da6c8
	sub_827DA6C8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5d54
	if (cr6.eq) goto loc_827D5D54;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82e8a108
	sub_82E8A108(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d5838
	sub_827D5838(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d5d34
	if (cr6.eq) goto loc_827D5D34;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5D34:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
loc_827D5D54:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5d64
	if (cr6.eq) goto loc_827D5D64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5D64:
	// li r31,0
	r31.s64 = 0;
	// b 0x827d5d34
	goto loc_827D5D34;
}

__attribute__((alias("__imp__sub_827D5D70"))) PPC_WEAK_FUNC(sub_827D5D70);
PPC_FUNC_IMPL(__imp__sub_827D5D70) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// addi r11,r11,19096
	r11.s64 = r11.s64 + 19096;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8294b538
	sub_8294B538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e61da0
	sub_82E61DA0(ctx, base);
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

__attribute__((alias("__imp__sub_827D5DB8"))) PPC_WEAK_FUNC(sub_827D5DB8);
PPC_FUNC_IMPL(__imp__sub_827D5DB8) {
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
	// bl 0x82e61f28
	sub_82E61F28(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// addi r11,r11,19096
	r11.s64 = r11.s64 + 19096;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x825533a8
	sub_825533A8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c210
	sub_8250C210(ctx, base);
	// stw r3,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_827D5E30"))) PPC_WEAK_FUNC(sub_827D5E30);
PPC_FUNC_IMPL(__imp__sub_827D5E30) {
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
	// bl 0x827d5d70
	sub_827D5D70(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d5e60
	if (cr0.eq) goto loc_827D5E60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827D5E60:
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

__attribute__((alias("__imp__sub_827D5E80"))) PPC_WEAK_FUNC(sub_827D5E80);
PPC_FUNC_IMPL(__imp__sub_827D5E80) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e8ad90
	sub_82E8AD90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e0ad88
	sub_82E0AD88(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
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

__attribute__((alias("__imp__sub_827D5EE8"))) PPC_WEAK_FUNC(sub_827D5EE8);
PPC_FUNC_IMPL(__imp__sub_827D5EE8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e8b078
	sub_82E8B078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e0ad88
	sub_82E0AD88(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
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

__attribute__((alias("__imp__sub_827D5F50"))) PPC_WEAK_FUNC(sub_827D5F50);
PPC_FUNC_IMPL(__imp__sub_827D5F50) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e8b010
	sub_82E8B010(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e06cc8
	sub_82E06CC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d5fb4
	if (!cr0.eq) goto loc_827D5FB4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827d5fb4
	if (cr6.eq) goto loc_827D5FB4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e8d200
	sub_82E8D200(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e06cb8
	sub_82E06CB8(ctx, base);
loc_827D5FB4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5fc4
	if (cr6.eq) goto loc_827D5FC4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5FC4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d5fd4
	if (cr6.eq) goto loc_827D5FD4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D5FD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

extern void GetDatabaseDataMidAsmHook(PPCRegister& r1, PPCRegister& r30);

__attribute__((alias("__imp__sub_827D5FE0"))) PPC_WEAK_FUNC(sub_827D5FE0);
PPC_FUNC_IMPL(__imp__sub_827D5FE0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e8b1f0
	sub_82E8B1F0(ctx, base);
	// lwz r3,88(r1)
	GetDatabaseDataMidAsmHook(ctx.r1, r30);
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e06cc8
	sub_82E06CC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d60f0
	if (!cr0.eq) goto loc_827D60F0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827d60f0
	if (cr6.eq) goto loc_827D60F0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825de468
	sub_825DE468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825de698
	sub_825DE698(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825ddd78
	sub_825DDD78(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82308030
	sub_82308030(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827d75f0
	sub_827D75F0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827d7600
	sub_827D7600(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82e87fa0
	sub_82E87FA0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e06cb8
	sub_82E06CB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827fd478
	sub_827FD478(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d60d8
	if (cr6.eq) goto loc_827D60D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D60D8:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d60e8
	if (cr6.eq) goto loc_827D60E8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D60E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825de520
	sub_825DE520(ctx, base);
loc_827D60F0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d6100
	if (cr6.eq) goto loc_827D6100;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D6100:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d6110
	if (cr6.eq) goto loc_827D6110;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D6110:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b78
	return;
}

extern void GetDatabaseDataMidAsmHook(PPCRegister& r1, PPCRegister& r29);

__attribute__((alias("__imp__sub_827D6118"))) PPC_WEAK_FUNC(sub_827D6118);
PPC_FUNC_IMPL(__imp__sub_827D6118) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e8b1f0
	sub_82E8B1F0(ctx, base);
	// lwz r3,88(r1)
	GetDatabaseDataMidAsmHook(ctx.r1, r29);
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e06cc8
	sub_82E06CC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d61b8
	if (!cr0.eq) goto loc_827D61B8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827d61b8
	if (cr6.eq) goto loc_827D61B8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82308030
	sub_82308030(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c120
	sub_82E8C120(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82e87fa0
	sub_82E87FA0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e06cb8
	sub_82E06CB8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_827D61B8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d61c8
	if (cr6.eq) goto loc_827D61C8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D61C8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d61d8
	if (cr6.eq) goto loc_827D61D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D61D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827D61E0"))) PPC_WEAK_FUNC(sub_827D61E0);
PPC_FUNC_IMPL(__imp__sub_827D61E0) {
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e8b010
	sub_82E8B010(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e06cc8
	sub_82E06CC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d62b4
	if (!cr0.eq) goto loc_827D62B4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827d62b4
	if (cr6.eq) goto loc_827D62B4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825de468
	sub_825DE468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825de698
	sub_825DE698(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825ddd78
	sub_825DDD78(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827d75f0
	sub_827D75F0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827d90e8
	sub_827D90E8(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e06cb8
	sub_82E06CB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827fd478
	sub_827FD478(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d629c
	if (cr6.eq) goto loc_827D629C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D629C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d62ac
	if (cr6.eq) goto loc_827D62AC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D62AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825de520
	sub_825DE520(ctx, base);
loc_827D62B4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d62c4
	if (cr6.eq) goto loc_827D62C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D62C4:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d62d4
	if (cr6.eq) goto loc_827D62D4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D62D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827D62E0"))) PPC_WEAK_FUNC(sub_827D62E0);
PPC_FUNC_IMPL(__imp__sub_827D62E0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31956
	r11.s64 = -2094268416;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19428
	ctx.r4.s64 = r11.s64 + -19428;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32131
	r11.s64 = -2105737216;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,24192
	ctx.r4.s64 = r11.s64 + 24192;
	// bl 0x822d4138
	sub_822D4138(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// lis r11,-32131
	r11.s64 = -2105737216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,24400
	ctx.r4.s64 = r11.s64 + 24400;
	// bl 0x8259f908
	sub_8259F908(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e0bbb8
	sub_82E0BBB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19416
	ctx.r4.s64 = r11.s64 + -19416;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// lis r11,-32131
	r11.s64 = -2105737216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,24296
	ctx.r4.s64 = r11.s64 + 24296;
	// bl 0x822d4138
	sub_822D4138(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32131
	r11.s64 = -2105737216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,24856
	ctx.r4.s64 = r11.s64 + 24856;
	// bl 0x8259f908
	sub_8259F908(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e0bbb8
	sub_82E0BBB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19452
	ctx.r4.s64 = r11.s64 + -19452;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// lis r11,-32131
	r11.s64 = -2105737216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,24192
	ctx.r4.s64 = r11.s64 + 24192;
	// bl 0x822d4138
	sub_822D4138(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// lis r11,-32131
	r11.s64 = -2105737216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,25056
	ctx.r4.s64 = r11.s64 + 25056;
	// bl 0x8259f908
	sub_8259F908(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e0bbb8
	sub_82E0BBB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-31956
	r11.s64 = -2094268416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19440
	ctx.r4.s64 = r11.s64 + -19440;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// lis r11,-32131
	r11.s64 = -2105737216;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,24296
	ctx.r4.s64 = r11.s64 + 24296;
	// bl 0x822d4138
	sub_822D4138(ctx, base);
	// lis r11,-32131
	r11.s64 = -2105737216;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,24544
	ctx.r4.s64 = r11.s64 + 24544;
	// bl 0x8259f908
	sub_8259F908(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e0bbb8
	sub_82E0BBB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D6478"))) PPC_WEAK_FUNC(sub_827D6478);
PPC_FUNC_IMPL(__imp__sub_827D6478) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,19148
	ctx.r3.s64 = r11.s64 + 19148;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d64a8
	if (cr0.eq) goto loc_827D64A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827d6528
	goto loc_827D6528;
loc_827D64A8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19140
	ctx.r3.s64 = r11.s64 + 19140;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d64c8
	if (cr0.eq) goto loc_827D64C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d6528
	goto loc_827D6528;
loc_827D64C8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19132
	ctx.r3.s64 = r11.s64 + 19132;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d64e8
	if (cr0.eq) goto loc_827D64E8;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x827d6528
	goto loc_827D6528;
loc_827D64E8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19124
	ctx.r3.s64 = r11.s64 + 19124;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6508
	if (cr0.eq) goto loc_827D6508;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x827d6528
	goto loc_827D6528;
loc_827D6508:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19112
	ctx.r3.s64 = r11.s64 + 19112;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r3,r11,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
loc_827D6528:
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

__attribute__((alias("__imp__sub_827D6540"))) PPC_WEAK_FUNC(sub_827D6540);
PPC_FUNC_IMPL(__imp__sub_827D6540) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,19184
	ctx.r3.s64 = r11.s64 + 19184;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6578
	if (cr0.eq) goto loc_827D6578;
	// li r30,2
	r30.s64 = 2;
	// b 0x827d65d4
	goto loc_827D65D4;
loc_827D6578:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19176
	ctx.r3.s64 = r11.s64 + 19176;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6598
	if (cr0.eq) goto loc_827D6598;
	// li r30,1
	r30.s64 = 1;
	// b 0x827d65d4
	goto loc_827D65D4;
loc_827D6598:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19168
	ctx.r3.s64 = r11.s64 + 19168;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d65b8
	if (cr0.eq) goto loc_827D65B8;
	// li r30,0
	r30.s64 = 0;
	// b 0x827d65d4
	goto loc_827D65D4;
loc_827D65B8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19156
	ctx.r3.s64 = r11.s64 + 19156;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d65d4
	if (cr0.eq) goto loc_827D65D4;
	// li r30,3
	r30.s64 = 3;
loc_827D65D4:
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

__attribute__((alias("__imp__sub_827D65F0"))) PPC_WEAK_FUNC(sub_827D65F0);
PPC_FUNC_IMPL(__imp__sub_827D65F0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,19260
	ctx.r3.s64 = r11.s64 + 19260;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6620
	if (cr0.eq) goto loc_827D6620;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827d6680
	goto loc_827D6680;
loc_827D6620:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19236
	ctx.r3.s64 = r11.s64 + 19236;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6640
	if (cr0.eq) goto loc_827D6640;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827d6680
	goto loc_827D6680;
loc_827D6640:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19212
	ctx.r3.s64 = r11.s64 + 19212;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6660
	if (cr0.eq) goto loc_827D6660;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x827d6680
	goto loc_827D6680;
loc_827D6660:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19188
	ctx.r3.s64 = r11.s64 + 19188;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
loc_827D6680:
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

__attribute__((alias("__imp__sub_827D6698"))) PPC_WEAK_FUNC(sub_827D6698);
PPC_FUNC_IMPL(__imp__sub_827D6698) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,19328
	ctx.r3.s64 = r11.s64 + 19328;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d66d0
	if (cr0.eq) goto loc_827D66D0;
	// li r30,1
	r30.s64 = 1;
	// b 0x827d670c
	goto loc_827D670C;
loc_827D66D0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19308
	ctx.r3.s64 = r11.s64 + 19308;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d66f0
	if (cr0.eq) goto loc_827D66F0;
	// li r30,2
	r30.s64 = 2;
	// b 0x827d670c
	goto loc_827D670C;
loc_827D66F0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19284
	ctx.r3.s64 = r11.s64 + 19284;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d670c
	if (cr0.eq) goto loc_827D670C;
	// li r30,0
	r30.s64 = 0;
loc_827D670C:
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

__attribute__((alias("__imp__sub_827D6728"))) PPC_WEAK_FUNC(sub_827D6728);
PPC_FUNC_IMPL(__imp__sub_827D6728) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,1020
	ctx.r3.s64 = r11.s64 + 1020;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d67b4
	if (!cr0.eq) goto loc_827D67B4;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,1000
	ctx.r3.s64 = r11.s64 + 1000;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6778
	if (cr0.eq) goto loc_827D6778;
	// li r30,1
	r30.s64 = 1;
	// b 0x827d67b4
	goto loc_827D67B4;
loc_827D6778:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19348
	ctx.r3.s64 = r11.s64 + 19348;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6798
	if (cr0.eq) goto loc_827D6798;
	// li r30,2
	r30.s64 = 2;
	// b 0x827d67b4
	goto loc_827D67B4;
loc_827D6798:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,1012
	ctx.r3.s64 = r11.s64 + 1012;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d67b4
	if (cr0.eq) goto loc_827D67B4;
	// li r30,3
	r30.s64 = 3;
loc_827D67B4:
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

__attribute__((alias("__imp__sub_827D67D0"))) PPC_WEAK_FUNC(sub_827D67D0);
PPC_FUNC_IMPL(__imp__sub_827D67D0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,19368
	ctx.r3.s64 = r11.s64 + 19368;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d681c
	if (!cr0.eq) goto loc_827D681C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19356
	ctx.r3.s64 = r11.s64 + 19356;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d681c
	if (cr0.eq) goto loc_827D681C;
	// li r30,1
	r30.s64 = 1;
loc_827D681C:
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

__attribute__((alias("__imp__sub_827D6838"))) PPC_WEAK_FUNC(sub_827D6838);
PPC_FUNC_IMPL(__imp__sub_827D6838) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,19400
	ctx.r3.s64 = r11.s64 + 19400;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6870
	if (cr0.eq) goto loc_827D6870;
	// li r30,0
	r30.s64 = 0;
	// b 0x827d68ac
	goto loc_827D68AC;
loc_827D6870:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19392
	ctx.r3.s64 = r11.s64 + 19392;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6890
	if (cr0.eq) goto loc_827D6890;
	// li r30,1
	r30.s64 = 1;
	// b 0x827d68ac
	goto loc_827D68AC;
loc_827D6890:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19380
	ctx.r3.s64 = r11.s64 + 19380;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d68ac
	if (cr0.eq) goto loc_827D68AC;
	// li r30,2
	r30.s64 = 2;
loc_827D68AC:
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

__attribute__((alias("__imp__sub_827D68C8"))) PPC_WEAK_FUNC(sub_827D68C8);
PPC_FUNC_IMPL(__imp__sub_827D68C8) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,19560
	ctx.r3.s64 = r11.s64 + 19560;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d6a10
	if (!cr0.eq) goto loc_827D6A10;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19548
	ctx.r3.s64 = r11.s64 + 19548;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6918
	if (cr0.eq) goto loc_827D6918;
	// li r30,1
	r30.s64 = 1;
	// b 0x827d6a14
	goto loc_827D6A14;
loc_827D6918:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19532
	ctx.r3.s64 = r11.s64 + 19532;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6938
	if (cr0.eq) goto loc_827D6938;
	// li r30,2
	r30.s64 = 2;
	// b 0x827d6a14
	goto loc_827D6A14;
loc_827D6938:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19520
	ctx.r3.s64 = r11.s64 + 19520;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6958
	if (cr0.eq) goto loc_827D6958;
	// li r30,3
	r30.s64 = 3;
	// b 0x827d6a14
	goto loc_827D6A14;
loc_827D6958:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19504
	ctx.r3.s64 = r11.s64 + 19504;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6978
	if (cr0.eq) goto loc_827D6978;
	// li r30,4
	r30.s64 = 4;
	// b 0x827d6a14
	goto loc_827D6A14;
loc_827D6978:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19488
	ctx.r3.s64 = r11.s64 + 19488;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6998
	if (cr0.eq) goto loc_827D6998;
	// li r30,5
	r30.s64 = 5;
	// b 0x827d6a14
	goto loc_827D6A14;
loc_827D6998:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19468
	ctx.r3.s64 = r11.s64 + 19468;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d69b8
	if (cr0.eq) goto loc_827D69B8;
	// li r30,6
	r30.s64 = 6;
	// b 0x827d6a14
	goto loc_827D6A14;
loc_827D69B8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19448
	ctx.r3.s64 = r11.s64 + 19448;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d69d8
	if (cr0.eq) goto loc_827D69D8;
	// li r30,7
	r30.s64 = 7;
	// b 0x827d6a14
	goto loc_827D6A14;
loc_827D69D8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19428
	ctx.r3.s64 = r11.s64 + 19428;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d69f8
	if (cr0.eq) goto loc_827D69F8;
	// li r30,8
	r30.s64 = 8;
	// b 0x827d6a14
	goto loc_827D6A14;
loc_827D69F8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19412
	ctx.r3.s64 = r11.s64 + 19412;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6a14
	if (cr0.eq) goto loc_827D6A14;
loc_827D6A10:
	// li r30,0
	r30.s64 = 0;
loc_827D6A14:
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

__attribute__((alias("__imp__sub_827D6A30"))) PPC_WEAK_FUNC(sub_827D6A30);
PPC_FUNC_IMPL(__imp__sub_827D6A30) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,19652
	ctx.r3.s64 = r11.s64 + 19652;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d6b1c
	if (!cr0.eq) goto loc_827D6B1C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19640
	ctx.r3.s64 = r11.s64 + 19640;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6a80
	if (cr0.eq) goto loc_827D6A80;
	// li r30,1
	r30.s64 = 1;
	// b 0x827d6b1c
	goto loc_827D6B1C;
loc_827D6A80:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19628
	ctx.r3.s64 = r11.s64 + 19628;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6aa0
	if (cr0.eq) goto loc_827D6AA0;
	// li r30,2
	r30.s64 = 2;
	// b 0x827d6b1c
	goto loc_827D6B1C;
loc_827D6AA0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19616
	ctx.r3.s64 = r11.s64 + 19616;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6ac0
	if (cr0.eq) goto loc_827D6AC0;
	// li r30,3
	r30.s64 = 3;
	// b 0x827d6b1c
	goto loc_827D6B1C;
loc_827D6AC0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19604
	ctx.r3.s64 = r11.s64 + 19604;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6ae0
	if (cr0.eq) goto loc_827D6AE0;
	// li r30,5
	r30.s64 = 5;
	// b 0x827d6b1c
	goto loc_827D6B1C;
loc_827D6AE0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19592
	ctx.r3.s64 = r11.s64 + 19592;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6b00
	if (cr0.eq) goto loc_827D6B00;
	// li r30,4
	r30.s64 = 4;
	// b 0x827d6b1c
	goto loc_827D6B1C;
loc_827D6B00:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19576
	ctx.r3.s64 = r11.s64 + 19576;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6b1c
	if (cr0.eq) goto loc_827D6B1C;
	// li r30,6
	r30.s64 = 6;
loc_827D6B1C:
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

__attribute__((alias("__imp__sub_827D6B38"))) PPC_WEAK_FUNC(sub_827D6B38);
PPC_FUNC_IMPL(__imp__sub_827D6B38) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,19724
	ctx.r3.s64 = r11.s64 + 19724;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d6c04
	if (!cr0.eq) goto loc_827D6C04;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19712
	ctx.r3.s64 = r11.s64 + 19712;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6b88
	if (cr0.eq) goto loc_827D6B88;
	// li r30,1
	r30.s64 = 1;
	// b 0x827d6c04
	goto loc_827D6C04;
loc_827D6B88:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19700
	ctx.r3.s64 = r11.s64 + 19700;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6ba8
	if (cr0.eq) goto loc_827D6BA8;
	// li r30,2
	r30.s64 = 2;
	// b 0x827d6c04
	goto loc_827D6C04;
loc_827D6BA8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19688
	ctx.r3.s64 = r11.s64 + 19688;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6bc8
	if (cr0.eq) goto loc_827D6BC8;
	// li r30,3
	r30.s64 = 3;
	// b 0x827d6c04
	goto loc_827D6C04;
loc_827D6BC8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19676
	ctx.r3.s64 = r11.s64 + 19676;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6be8
	if (cr0.eq) goto loc_827D6BE8;
	// li r30,4
	r30.s64 = 4;
	// b 0x827d6c04
	goto loc_827D6C04;
loc_827D6BE8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19664
	ctx.r3.s64 = r11.s64 + 19664;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6c04
	if (cr0.eq) goto loc_827D6C04;
	// li r30,5
	r30.s64 = 5;
loc_827D6C04:
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

__attribute__((alias("__imp__sub_827D6C20"))) PPC_WEAK_FUNC(sub_827D6C20);
PPC_FUNC_IMPL(__imp__sub_827D6C20) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,19804
	ctx.r3.s64 = r11.s64 + 19804;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d6cec
	if (!cr0.eq) goto loc_827D6CEC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19788
	ctx.r3.s64 = r11.s64 + 19788;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6c70
	if (cr0.eq) goto loc_827D6C70;
	// li r30,1
	r30.s64 = 1;
	// b 0x827d6cec
	goto loc_827D6CEC;
loc_827D6C70:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19776
	ctx.r3.s64 = r11.s64 + 19776;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6c90
	if (cr0.eq) goto loc_827D6C90;
	// li r30,2
	r30.s64 = 2;
	// b 0x827d6cec
	goto loc_827D6CEC;
loc_827D6C90:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19760
	ctx.r3.s64 = r11.s64 + 19760;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6cb0
	if (cr0.eq) goto loc_827D6CB0;
	// li r30,3
	r30.s64 = 3;
	// b 0x827d6cec
	goto loc_827D6CEC;
loc_827D6CB0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19744
	ctx.r3.s64 = r11.s64 + 19744;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6cd0
	if (cr0.eq) goto loc_827D6CD0;
	// li r30,4
	r30.s64 = 4;
	// b 0x827d6cec
	goto loc_827D6CEC;
loc_827D6CD0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19736
	ctx.r3.s64 = r11.s64 + 19736;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6cec
	if (cr0.eq) goto loc_827D6CEC;
	// li r30,5
	r30.s64 = 5;
loc_827D6CEC:
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

__attribute__((alias("__imp__sub_827D6D08"))) PPC_WEAK_FUNC(sub_827D6D08);
PPC_FUNC_IMPL(__imp__sub_827D6D08) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r11,19948
	ctx.r3.s64 = r11.s64 + 19948;
	// li r30,0
	r30.s64 = 0;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x827d6df4
	if (!cr0.eq) goto loc_827D6DF4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19924
	ctx.r3.s64 = r11.s64 + 19924;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6d58
	if (cr0.eq) goto loc_827D6D58;
	// li r30,1
	r30.s64 = 1;
	// b 0x827d6df4
	goto loc_827D6DF4;
loc_827D6D58:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19896
	ctx.r3.s64 = r11.s64 + 19896;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6d78
	if (cr0.eq) goto loc_827D6D78;
	// li r30,2
	r30.s64 = 2;
	// b 0x827d6df4
	goto loc_827D6DF4;
loc_827D6D78:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19876
	ctx.r3.s64 = r11.s64 + 19876;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6d98
	if (cr0.eq) goto loc_827D6D98;
	// li r30,3
	r30.s64 = 3;
	// b 0x827d6df4
	goto loc_827D6DF4;
loc_827D6D98:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19856
	ctx.r3.s64 = r11.s64 + 19856;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6db8
	if (cr0.eq) goto loc_827D6DB8;
	// li r30,4
	r30.s64 = 4;
	// b 0x827d6df4
	goto loc_827D6DF4;
loc_827D6DB8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19836
	ctx.r3.s64 = r11.s64 + 19836;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6dd8
	if (cr0.eq) goto loc_827D6DD8;
	// li r30,5
	r30.s64 = 5;
	// b 0x827d6df4
	goto loc_827D6DF4;
loc_827D6DD8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,19816
	ctx.r3.s64 = r11.s64 + 19816;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d6df4
	if (cr0.eq) goto loc_827D6DF4;
	// li r30,6
	r30.s64 = 6;
loc_827D6DF4:
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

__attribute__((alias("__imp__sub_827D6E10"))) PPC_WEAK_FUNC(sub_827D6E10);
PPC_FUNC_IMPL(__imp__sub_827D6E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v63{};
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r11,29232
	ctx.r8.s64 = r11.s64 + 29232;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// li r7,64
	ctx.r7.s64 = 64;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r5,-31949
	ctx.r5.s64 = -2093809664;
	// li r6,80
	ctx.r6.s64 = 80;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r5,-15648
	ctx.r9.s64 = ctx.r5.s64 + -15648;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stvx128 v63,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r10,-23007
	ctx.r4.s64 = ctx.r10.s64 + -23007;
	// stvx128 v63,r31,r6
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-15648(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -15648);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
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

__attribute__((alias("__imp__sub_827D6EE0"))) PPC_WEAK_FUNC(sub_827D6EE0);
PPC_FUNC_IMPL(__imp__sub_827D6EE0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d6fdc
	if (cr6.eq) goto loc_827D6FDC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827d6fdc
	if (cr6.eq) goto loc_827D6FDC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// addi r4,r11,20104
	ctx.r4.s64 = r11.s64 + 20104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r11,20092
	ctx.r4.s64 = r11.s64 + 20092;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r11,20068
	ctx.r4.s64 = r11.s64 + 20068;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// addi r4,r11,20056
	ctx.r4.s64 = r11.s64 + 20056;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,20044
	ctx.r4.s64 = r11.s64 + 20044;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20032
	ctx.r4.s64 = r11.s64 + 20032;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d6540
	sub_827D6540(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d6478
	sub_827D6478(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df490
	sub_825DF490(ctx, base);
loc_827D6FDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827D6FE8"))) PPC_WEAK_FUNC(sub_827D6FE8);
PPC_FUNC_IMPL(__imp__sub_827D6FE8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r11,20264
	ctx.r4.s64 = r11.s64 + 20264;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r11,20248
	ctx.r4.s64 = r11.s64 + 20248;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// addi r4,r11,-20468
	ctx.r4.s64 = r11.s64 + -20468;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4e8
	sub_825DF4E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// addi r4,r11,20236
	ctx.r4.s64 = r11.s64 + 20236;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// addi r4,r11,20216
	ctx.r4.s64 = r11.s64 + 20216;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,37
	ctx.r5.s64 = r31.s64 + 37;
	// addi r4,r11,20200
	ctx.r4.s64 = r11.s64 + 20200;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4e8
	sub_825DF4E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,40
	ctx.r5.s64 = r31.s64 + 40;
	// addi r4,r11,20184
	ctx.r4.s64 = r11.s64 + 20184;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r4,r11,20168
	ctx.r4.s64 = r11.s64 + 20168;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// addi r4,r11,20152
	ctx.r4.s64 = r11.s64 + 20152;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,28
	ctx.r5.s64 = r31.s64 + 28;
	// addi r4,r11,20136
	ctx.r4.s64 = r11.s64 + 20136;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20120
	ctx.r4.s64 = r11.s64 + 20120;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d65f0
	sub_827D65F0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x827d7130
	if (cr6.gt) goto loc_827D7130;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
loc_827D7130:
	// lfs f12,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bgt cr6,0x827d7140
	if (cr6.gt) goto loc_827D7140;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_827D7140:
	// li r11,0
	r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827D7160"))) PPC_WEAK_FUNC(sub_827D7160);
PPC_FUNC_IMPL(__imp__sub_827D7160) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d7184
	if (cr6.eq) goto loc_827D7184;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D7184:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d7194
	if (cr6.eq) goto loc_827D7194;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D7194:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d71a4
	if (cr6.eq) goto loc_827D71A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D71A4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d71b4
	if (cr6.eq) goto loc_827D71B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D71B4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d71c4
	if (cr6.eq) goto loc_827D71C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D71C4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d71d4
	if (cr6.eq) goto loc_827D71D4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D71D4:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d71e4
	if (cr6.eq) goto loc_827D71E4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D71E4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d71f4
	if (cr6.eq) goto loc_827D71F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D71F4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d7204
	if (cr6.eq) goto loc_827D7204;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D7204:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d7214
	if (cr6.eq) goto loc_827D7214;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D7214:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
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

__attribute__((alias("__imp__sub_827D7230"))) PPC_WEAK_FUNC(sub_827D7230);
PPC_FUNC_IMPL(__imp__sub_827D7230) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d72b4
	if (cr6.eq) goto loc_827D72B4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827d72b4
	if (cr6.eq) goto loc_827D72B4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,20304
	ctx.r5.s64 = r11.s64 + 20304;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d72a4
	if (cr6.eq) goto loc_827D72A4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r4,r11,20296
	ctx.r4.s64 = r11.s64 + 20296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df490
	sub_825DF490(ctx, base);
loc_827D72A4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d72b4
	if (cr6.eq) goto loc_827D72B4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D72B4:
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

__attribute__((alias("__imp__sub_827D72C8"))) PPC_WEAK_FUNC(sub_827D72C8);
PPC_FUNC_IMPL(__imp__sub_827D72C8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827d73fc
	if (cr6.eq) goto loc_827D73FC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827d73fc
	if (cr6.eq) goto loc_827D73FC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,20428
	ctx.r5.s64 = r11.s64 + 20428;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d73ec
	if (cr6.eq) goto loc_827D73EC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r31,r30,144
	r31.s64 = r30.s64 + 144;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,20412
	ctx.r4.s64 = r11.s64 + 20412;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4e8
	sub_825DF4E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,1
	ctx.r5.s64 = r31.s64 + 1;
	// addi r4,r11,20396
	ctx.r4.s64 = r11.s64 + 20396;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4e8
	sub_825DF4E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r4,r11,20388
	ctx.r4.s64 = r11.s64 + 20388;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// addi r4,r11,20376
	ctx.r4.s64 = r11.s64 + 20376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r11,20364
	ctx.r4.s64 = r11.s64 + 20364;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r11,20352
	ctx.r4.s64 = r11.s64 + 20352;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// addi r4,r11,20340
	ctx.r4.s64 = r11.s64 + 20340;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20316
	ctx.r4.s64 = r11.s64 + 20316;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827d6698
	sub_827D6698(ctx, base);
	// stw r3,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df490
	sub_825DF490(ctx, base);
loc_827D73EC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d73fc
	if (cr6.eq) goto loc_827D73FC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D73FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827D7408"))) PPC_WEAK_FUNC(sub_827D7408);
PPC_FUNC_IMPL(__imp__sub_827D7408) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d754c
	if (cr6.eq) goto loc_827D754C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827d754c
	if (cr6.eq) goto loc_827D754C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,20492
	ctx.r5.s64 = r11.s64 + 20492;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d7494
	if (cr6.eq) goto loc_827D7494;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,188
	ctx.r5.s64 = r31.s64 + 188;
	// addi r4,r11,20468
	ctx.r4.s64 = r11.s64 + 20468;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,184
	ctx.r5.s64 = r31.s64 + 184;
	// addi r4,r11,20444
	ctx.r4.s64 = r11.s64 + 20444;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df490
	sub_825DF490(ctx, base);
loc_827D7494:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d74a4
	if (cr6.eq) goto loc_827D74A4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D74A4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,20428
	ctx.r5.s64 = r11.s64 + 20428;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d753c
	if (cr6.eq) goto loc_827D753C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,176
	ctx.r5.s64 = r31.s64 + 176;
	// addi r4,r11,20396
	ctx.r4.s64 = r11.s64 + 20396;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4e8
	sub_825DF4E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,180
	ctx.r5.s64 = r31.s64 + 180;
	// addi r4,r11,20376
	ctx.r4.s64 = r11.s64 + 20376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20316
	ctx.r4.s64 = r11.s64 + 20316;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827d6698
	sub_827D6698(ctx, base);
	// stw r3,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df490
	sub_825DF490(ctx, base);
loc_827D753C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d754c
	if (cr6.eq) goto loc_827D754C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D754C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827D7558"))) PPC_WEAK_FUNC(sub_827D7558);
PPC_FUNC_IMPL(__imp__sub_827D7558) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d75dc
	if (cr6.eq) goto loc_827D75DC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827d75dc
	if (cr6.eq) goto loc_827D75DC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,20520
	ctx.r5.s64 = r11.s64 + 20520;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d75cc
	if (cr6.eq) goto loc_827D75CC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,172
	ctx.r5.s64 = r31.s64 + 172;
	// addi r4,r11,20508
	ctx.r4.s64 = r11.s64 + 20508;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df490
	sub_825DF490(ctx, base);
loc_827D75CC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d75dc
	if (cr6.eq) goto loc_827D75DC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D75DC:
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

__attribute__((alias("__imp__sub_827D75F0"))) PPC_WEAK_FUNC(sub_827D75F0);
PPC_FUNC_IMPL(__imp__sub_827D75F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D7600"))) PPC_WEAK_FUNC(sub_827D7600);
PPC_FUNC_IMPL(__imp__sub_827D7600) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d7650
	if (cr6.eq) goto loc_827D7650;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D7650:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x827d76e4
	if (cr6.eq) goto loc_827D76E4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r27,r11,20532
	r27.s64 = r11.s64 + 20532;
loc_827D7664:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d76a4
	if (cr0.eq) goto loc_827D76A4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827d6ee0
	sub_827D6EE0(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_827D76A4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d76d8
	if (cr6.eq) goto loc_827D76D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D76D8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x827d7664
	if (!cr6.eq) goto loc_827D7664;
loc_827D76E4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_827D76F0"))) PPC_WEAK_FUNC(sub_827D76F0);
PPC_FUNC_IMPL(__imp__sub_827D76F0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_827D7748"))) PPC_WEAK_FUNC(sub_827D7748);
PPC_FUNC_IMPL(__imp__sub_827D7748) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d795c
	if (cr6.eq) goto loc_827D795C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x827d795c
	if (cr6.eq) goto loc_827D795C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,20616
	ctx.r5.s64 = r11.s64 + 20616;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d794c
	if (cr6.eq) goto loc_827D794C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,20608
	ctx.r4.s64 = r11.s64 + 20608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20600
	ctx.r4.s64 = r11.s64 + 20600;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827d1570
	sub_827D1570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20592
	ctx.r4.s64 = r11.s64 + 20592;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r31,76
	ctx.r4.s64 = r31.s64 + 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827d1570
	sub_827D1570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20584
	ctx.r4.s64 = r11.s64 + 20584;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827d1570
	sub_827D1570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20576
	ctx.r4.s64 = r11.s64 + 20576;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827d1570
	sub_827D1570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20568
	ctx.r4.s64 = r11.s64 + 20568;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827d1570
	sub_827D1570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20560
	ctx.r4.s64 = r11.s64 + 20560;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827d1570
	sub_827D1570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20552
	ctx.r4.s64 = r11.s64 + 20552;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827d1570
	sub_827D1570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8340
	ctx.r4.s64 = r11.s64 + 8340;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827d1570
	sub_827D1570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8332
	ctx.r4.s64 = r11.s64 + 8332;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827d1570
	sub_827D1570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8324
	ctx.r4.s64 = r11.s64 + 8324;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x827d1570
	sub_827D1570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df490
	sub_825DF490(ctx, base);
loc_827D794C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d795c
	if (cr6.eq) goto loc_827D795C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D795C:
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

__attribute__((alias("__imp__sub_827D7970"))) PPC_WEAK_FUNC(sub_827D7970);
PPC_FUNC_IMPL(__imp__sub_827D7970) {
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
	// beq 0x827d79c8
	if (cr0.eq) goto loc_827D79C8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,20016
	ctx.r9.s64 = r11.s64 + 20016;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d79cc
	goto loc_827D79CC;
loc_827D79C8:
	// li r11,0
	r11.s64 = 0;
loc_827D79CC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d7a10
	if (!cr6.eq) goto loc_827D7A10;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d79f0
	if (cr6.eq) goto loc_827D79F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d7160
	sub_827D7160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827D79F0:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-19400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19400);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D7A10:
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

__attribute__((alias("__imp__sub_827D7A30"))) PPC_WEAK_FUNC(sub_827D7A30);
PPC_FUNC_IMPL(__imp__sub_827D7A30) {
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
	// beq cr6,0x827d7a5c
	if (cr6.eq) goto loc_827D7A5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d7160
	sub_827D7160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827D7A5C:
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

__attribute__((alias("__imp__sub_827D7A70"))) PPC_WEAK_FUNC(sub_827D7A70);
PPC_FUNC_IMPL(__imp__sub_827D7A70) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d7ab0
	if (cr6.eq) goto loc_827D7AB0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x827d0d88
	sub_827D0D88(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_827D7AB0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_827D7AD8"))) PPC_WEAK_FUNC(sub_827D7AD8);
PPC_FUNC_IMPL(__imp__sub_827D7AD8) {
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
	// bl 0x827d7970
	sub_827D7970(ctx, base);
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
	// beq cr6,0x827d7b30
	if (cr6.eq) goto loc_827D7B30;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D7B30:
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

__attribute__((alias("__imp__sub_827D7B48"))) PPC_WEAK_FUNC(sub_827D7B48);
PPC_FUNC_IMPL(__imp__sub_827D7B48) {
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
	// addi r30,r31,220
	r30.s64 = r31.s64 + 220;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d7b74
	if (cr6.eq) goto loc_827D7B74;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D7B74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
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

__attribute__((alias("__imp__sub_827D7BB8"))) PPC_WEAK_FUNC(sub_827D7BB8);
PPC_FUNC_IMPL(__imp__sub_827D7BB8) {
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
	// lis r11,5461
	r11.s64 = 357892096;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x827d7be0
	if (!cr6.gt) goto loc_827D7BE0;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x827d7cbc
	goto loc_827D7CBC;
loc_827D7BE0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r29,12
	r29.s64 = 12;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d7bfc
	if (cr6.eq) goto loc_827D7BFC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r29
	r11.s32 = r11.s32 / r29.s32;
loc_827D7BFC:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x827d7cbc
	if (!cr6.lt) goto loc_827D7CBC;
	// lis r28,-31946
	r28.s64 = -2093613056;
	// mulli r27,r4,12
	r27.s64 = ctx.r4.s64 * 12;
	// lwz r3,6512(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 6512);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x827d7c74
	if (cr6.eq) goto loc_827D7C74;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
loc_827D7C40:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d7c64
	if (cr6.eq) goto loc_827D7C64;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
loc_827D7C64:
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x827d7c40
	if (!cr6.eq) goto loc_827D7C40;
loc_827D7C74:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827d7c88
	if (!cr6.eq) goto loc_827D7C88;
	// li r29,0
	r29.s64 = 0;
	// b 0x827d7c94
	goto loc_827D7C94;
loc_827D7C88:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r29,r11,r29
	r29.s32 = r11.s32 / r29.s32;
loc_827D7C94:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827d7ca4
	if (cr6.eq) goto loc_827D7CA4;
	// lwz r3,6512(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_827D7CA4:
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// add r10,r27,r30
	ctx.r10.u64 = r27.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_827D7CBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_827D7CC8"))) PPC_WEAK_FUNC(sub_827D7CC8);
PPC_FUNC_IMPL(__imp__sub_827D7CC8) {
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
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d7cf4
	if (cr6.eq) goto loc_827D7CF4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D7CF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d7b48
	sub_827D7B48(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d7d0c
	if (cr0.eq) goto loc_827D7D0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827D7D0C:
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

__attribute__((alias("__imp__sub_827D7D28"))) PPC_WEAK_FUNC(sub_827D7D28);
PPC_FUNC_IMPL(__imp__sub_827D7D28) {
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
	// beq 0x827d7d80
	if (cr0.eq) goto loc_827D7D80;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,20280
	ctx.r9.s64 = r11.s64 + 20280;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d7d84
	goto loc_827D7D84;
loc_827D7D80:
	// li r11,0
	r11.s64 = 0;
loc_827D7D84:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d7dc8
	if (!cr6.eq) goto loc_827D7DC8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d7da8
	if (cr6.eq) goto loc_827D7DA8;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x827d7a70
	sub_827D7A70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827D7DA8:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-19400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19400);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D7DC8:
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

__attribute__((alias("__imp__sub_827D7DE8"))) PPC_WEAK_FUNC(sub_827D7DE8);
PPC_FUNC_IMPL(__imp__sub_827D7DE8) {
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
	// beq cr6,0x827d7e14
	if (cr6.eq) goto loc_827D7E14;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x827d7a70
	sub_827D7A70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_827D7E14:
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

__attribute__((alias("__imp__sub_827D7E28"))) PPC_WEAK_FUNC(sub_827D7E28);
PPC_FUNC_IMPL(__imp__sub_827D7E28) {
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
	// beq 0x827d7e80
	if (cr0.eq) goto loc_827D7E80;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,19976
	ctx.r9.s64 = r11.s64 + 19976;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d7e84
	goto loc_827D7E84;
loc_827D7E80:
	// li r11,0
	r11.s64 = 0;
loc_827D7E84:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d7ec4
	if (!cr6.eq) goto loc_827D7EC4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d7ea4
	if (cr6.eq) goto loc_827D7EA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d7cc8
	sub_827D7CC8(ctx, base);
loc_827D7EA4:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-19400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19400);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D7EC4:
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

__attribute__((alias("__imp__sub_827D7EE0"))) PPC_WEAK_FUNC(sub_827D7EE0);
PPC_FUNC_IMPL(__imp__sub_827D7EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x827d7cc8
	sub_827D7CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827D7EF4"))) PPC_WEAK_FUNC(sub_827D7EF4);
PPC_FUNC_IMPL(__imp__sub_827D7EF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827D7EF8"))) PPC_WEAK_FUNC(sub_827D7EF8);
PPC_FUNC_IMPL(__imp__sub_827D7EF8) {
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
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d7f24
	if (cr6.eq) goto loc_827D7F24;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D7F24:
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
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

__attribute__((alias("__imp__sub_827D7F48"))) PPC_WEAK_FUNC(sub_827D7F48);
PPC_FUNC_IMPL(__imp__sub_827D7F48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r10,29232
	r27.s64 = ctx.r10.s64 + 29232;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// li r30,0
	r30.s64 = 0;
	// li r29,16
	r29.s64 = 16;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,80
	ctx.r9.s64 = 80;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stvx128 v63,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r11,-23007
	r26.s64 = r11.s64 + -23007;
	// stvx128 v63,r10,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r31,112
	r28.s64 = r31.s64 + 112;
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// lfs f31,2240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// stfs f31,132(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f31,136(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f31,140(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// sth r30,144(r31)
	PPC_STORE_U16(r31.u32 + 144, r30.u16);
	// sth r30,146(r31)
	PPC_STORE_U16(r31.u32 + 146, r30.u16);
	// sth r30,148(r31)
	PPC_STORE_U16(r31.u32 + 148, r30.u16);
	// sth r30,150(r31)
	PPC_STORE_U16(r31.u32 + 150, r30.u16);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stfs f31,160(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// stfs f31,188(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// stfs f31,192(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// lwz r11,-22492(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22492);
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// bl 0x827d76f0
	sub_827D76F0(ctx, base);
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// addi r10,r31,272
	ctx.r10.s64 = r31.s64 + 272;
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r27
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// stfs f31,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 304, temp.u32);
	// stfs f31,308(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 308, temp.u32);
	// stfs f31,312(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 312, temp.u32);
	// bl 0x82529898
	sub_82529898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_827D80B0"))) PPC_WEAK_FUNC(sub_827D80B0);
PPC_FUNC_IMPL(__imp__sub_827D80B0) {
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
	// bl 0x827d6e10
	sub_827D6E10(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// stw r11,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r11.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
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

__attribute__((alias("__imp__sub_827D8100"))) PPC_WEAK_FUNC(sub_827D8100);
PPC_FUNC_IMPL(__imp__sub_827D8100) {
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
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82dfa088
	sub_82DFA088(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x827d8140
	if (cr0.eq) goto loc_827D8140;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x827d8144
	goto loc_827D8144;
loc_827D8140:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_827D8144:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d7d28
	sub_827D7D28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82dfa088
	sub_82DFA088(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d8194
	if (cr0.eq) goto loc_827D8194;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x827d8198
	goto loc_827D8198;
loc_827D8194:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_827D8198:
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d7d28
	sub_827D7D28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82dfa088
	sub_82DFA088(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d81e8
	if (cr0.eq) goto loc_827D81E8;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x827d81ec
	goto loc_827D81EC;
loc_827D81E8:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_827D81EC:
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// addi r11,r30,20
	r11.s64 = r30.s64 + 20;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d7d28
	sub_827D7D28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82dfa088
	sub_82DFA088(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d823c
	if (cr0.eq) goto loc_827D823C;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x827d8240
	goto loc_827D8240;
loc_827D823C:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_827D8240:
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// addi r11,r30,28
	r11.s64 = r30.s64 + 28;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d7d28
	sub_827D7D28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82dfa088
	sub_82DFA088(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d8290
	if (cr0.eq) goto loc_827D8290;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x827d8294
	goto loc_827D8294;
loc_827D8290:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_827D8294:
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// addi r11,r30,36
	r11.s64 = r30.s64 + 36;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d7d28
	sub_827D7D28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82dfa088
	sub_82DFA088(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d82e4
	if (cr0.eq) goto loc_827D82E4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x827d82e8
	goto loc_827D82E8;
loc_827D82E4:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_827D82E8:
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// addi r11,r30,44
	r11.s64 = r30.s64 + 44;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d7d28
	sub_827D7D28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82dfa088
	sub_82DFA088(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d8338
	if (cr0.eq) goto loc_827D8338;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x827d833c
	goto loc_827D833C;
loc_827D8338:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_827D833C:
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// addi r11,r30,52
	r11.s64 = r30.s64 + 52;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d7d28
	sub_827D7D28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82dfa088
	sub_82DFA088(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d838c
	if (cr0.eq) goto loc_827D838C;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x827d8390
	goto loc_827D8390;
loc_827D838C:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_827D8390:
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// addi r11,r30,60
	r11.s64 = r30.s64 + 60;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d7d28
	sub_827D7D28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82dfa088
	sub_82DFA088(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d83e0
	if (cr0.eq) goto loc_827D83E0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x827d83e4
	goto loc_827D83E4;
loc_827D83E0:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_827D83E4:
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// addi r11,r30,68
	r11.s64 = r30.s64 + 68;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d7d28
	sub_827D7D28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82dfa088
	sub_82DFA088(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d8434
	if (cr0.eq) goto loc_827D8434;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x827d8438
	goto loc_827D8438;
loc_827D8434:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_827D8438:
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// addi r11,r30,76
	r11.s64 = r30.s64 + 76;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d7d28
	sub_827D7D28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827D8470"))) PPC_WEAK_FUNC(sub_827D8470);
PPC_FUNC_IMPL(__imp__sub_827D8470) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d867c
	if (cr6.eq) goto loc_827D867C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x827d867c
	if (cr6.eq) goto loc_827D867C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// addi r4,r11,20888
	ctx.r4.s64 = r11.s64 + 20888;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,20868
	ctx.r4.s64 = r11.s64 + 20868;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r4,r11,20852
	ctx.r4.s64 = r11.s64 + 20852;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r11,20840
	ctx.r4.s64 = r11.s64 + 20840;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4e8
	sub_825DF4E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r11,20820
	ctx.r4.s64 = r11.s64 + 20820;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// addi r4,r11,20168
	ctx.r4.s64 = r11.s64 + 20168;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r11,20152
	ctx.r4.s64 = r11.s64 + 20152;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df540
	sub_825DF540(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r11,20800
	ctx.r4.s64 = r11.s64 + 20800;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r4,r11,20788
	ctx.r4.s64 = r11.s64 + 20788;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r4,r11,20772
	ctx.r4.s64 = r11.s64 + 20772;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// addi r4,r11,20748
	ctx.r4.s64 = r11.s64 + 20748;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,24
	ctx.r5.s64 = r31.s64 + 24;
	// addi r4,r11,20732
	ctx.r4.s64 = r11.s64 + 20732;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// addi r4,r11,20712
	ctx.r4.s64 = r11.s64 + 20712;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,20700
	ctx.r4.s64 = r11.s64 + 20700;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df570
	sub_825DF570(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827d6728
	sub_827D6728(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827d7230
	sub_827D7230(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827d72c8
	sub_827D72C8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827d7558
	sub_827D7558(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827d7408
	sub_827D7408(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,20632
	ctx.r4.s64 = r11.s64 + 20632;
	// li r5,437
	ctx.r5.s64 = 437;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d8650
	if (cr0.eq) goto loc_827D8650;
	// bl 0x827d8100
	sub_827D8100(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d8654
	goto loc_827D8654;
loc_827D8650:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D8654:
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x827d7ad8
	sub_827D7AD8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,208(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// bl 0x827d7748
	sub_827D7748(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df490
	sub_825DF490(ctx, base);
loc_827D867C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_827D8688"))) PPC_WEAK_FUNC(sub_827D8688);
PPC_FUNC_IMPL(__imp__sub_827D8688) {
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
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d8c50
	if (cr6.eq) goto loc_827D8C50;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827d8c50
	if (cr6.eq) goto loc_827D8C50;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,216
	ctx.r5.s64 = r31.s64 + 216;
	// addi r4,r11,21548
	ctx.r4.s64 = r11.s64 + 21548;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,188
	ctx.r5.s64 = r31.s64 + 188;
	// addi r4,r11,21536
	ctx.r4.s64 = r11.s64 + 21536;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,192
	ctx.r5.s64 = r31.s64 + 192;
	// addi r4,r11,21520
	ctx.r4.s64 = r11.s64 + 21520;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// addi r4,r11,21508
	ctx.r4.s64 = r11.s64 + 21508;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df520
	sub_825DF520(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,146
	ctx.r5.s64 = r31.s64 + 146;
	// addi r4,r11,21492
	ctx.r4.s64 = r11.s64 + 21492;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df520
	sub_825DF520(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,148
	ctx.r5.s64 = r31.s64 + 148;
	// addi r4,r11,21472
	ctx.r4.s64 = r11.s64 + 21472;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df520
	sub_825DF520(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,150
	ctx.r5.s64 = r31.s64 + 150;
	// addi r4,r11,21448
	ctx.r4.s64 = r11.s64 + 21448;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df520
	sub_825DF520(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r4,r11,21432
	ctx.r4.s64 = r11.s64 + 21432;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,132
	ctx.r5.s64 = r31.s64 + 132;
	// addi r4,r11,21412
	ctx.r4.s64 = r11.s64 + 21412;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,21396
	ctx.r4.s64 = ctx.r10.s64 + 21396;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4e8
	sub_825DF4E8(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,21384
	ctx.r4.s64 = r11.s64 + 21384;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,21372
	ctx.r4.s64 = r11.s64 + 21372;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,21352
	ctx.r4.s64 = r11.s64 + 21352;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,136
	ctx.r5.s64 = r31.s64 + 136;
	// addi r4,r11,21324
	ctx.r4.s64 = r11.s64 + 21324;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,140
	ctx.r5.s64 = r31.s64 + 140;
	// addi r4,r11,21292
	ctx.r4.s64 = r11.s64 + 21292;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,184
	ctx.r5.s64 = r31.s64 + 184;
	// addi r4,r11,21272
	ctx.r4.s64 = r11.s64 + 21272;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,21256
	ctx.r4.s64 = r11.s64 + 21256;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,240
	ctx.r5.s64 = r31.s64 + 240;
	// addi r4,r11,20788
	ctx.r4.s64 = r11.s64 + 20788;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,256
	ctx.r5.s64 = r31.s64 + 256;
	// addi r4,r11,20772
	ctx.r4.s64 = r11.s64 + 20772;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,272
	ctx.r5.s64 = r31.s64 + 272;
	// addi r4,r11,20800
	ctx.r4.s64 = r11.s64 + 20800;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,288
	ctx.r5.s64 = r31.s64 + 288;
	// addi r4,r11,21232
	ctx.r4.s64 = r11.s64 + 21232;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,21220
	ctx.r4.s64 = r11.s64 + 21220;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,16956
	ctx.r4.s64 = r11.s64 + 16956;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r29,r31,200
	r29.s64 = r31.s64 + 200;
	// addi r4,r11,20712
	ctx.r4.s64 = r11.s64 + 20712;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,212
	ctx.r5.s64 = r31.s64 + 212;
	// addi r4,r11,20508
	ctx.r4.s64 = r11.s64 + 20508;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r31,196
	ctx.r5.s64 = r31.s64 + 196;
	// addi r4,r11,28072
	ctx.r4.s64 = r11.s64 + 28072;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df548
	sub_825DF548(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r11,-5136
	ctx.r4.s64 = r11.s64 + -5136;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r11,21204
	ctx.r4.s64 = r11.s64 + 21204;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r11,21184
	ctx.r4.s64 = r11.s64 + 21184;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r4,r11,21160
	ctx.r4.s64 = r11.s64 + 21160;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r4,r11,21144
	ctx.r4.s64 = r11.s64 + 21144;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// addi r4,r11,21124
	ctx.r4.s64 = r11.s64 + 21124;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,208
	ctx.r5.s64 = r31.s64 + 208;
	// addi r4,r11,21108
	ctx.r4.s64 = r11.s64 + 21108;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,152
	ctx.r5.s64 = r31.s64 + 152;
	// addi r4,r11,21100
	ctx.r4.s64 = r11.s64 + 21100;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,220
	ctx.r5.s64 = r31.s64 + 220;
	// addi r4,r11,21084
	ctx.r4.s64 = r11.s64 + 21084;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,21060
	ctx.r4.s64 = r11.s64 + 21060;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,232
	ctx.r5.s64 = r31.s64 + 232;
	// addi r4,r11,21040
	ctx.r4.s64 = r11.s64 + 21040;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r11,21028
	ctx.r4.s64 = r11.s64 + 21028;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,164
	ctx.r5.s64 = r31.s64 + 164;
	// addi r4,r11,21016
	ctx.r4.s64 = r11.s64 + 21016;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df528
	sub_825DF528(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,21004
	ctx.r4.s64 = r11.s64 + 21004;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r8,20988
	ctx.r4.s64 = ctx.r8.s64 + 20988;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,20968
	ctx.r4.s64 = r11.s64 + 20968;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df538
	sub_825DF538(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,304
	ctx.r5.s64 = r31.s64 + 304;
	// addi r4,r11,20952
	ctx.r4.s64 = r11.s64 + 20952;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,308
	ctx.r5.s64 = r31.s64 + 308;
	// addi r4,r11,20940
	ctx.r4.s64 = r11.s64 + 20940;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,312
	ctx.r5.s64 = r31.s64 + 312;
	// addi r4,r11,20184
	ctx.r4.s64 = r11.s64 + 20184;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,316
	ctx.r5.s64 = r31.s64 + 316;
	// addi r4,r11,20928
	ctx.r4.s64 = r11.s64 + 20928;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r31,156
	ctx.r5.s64 = r31.s64 + 156;
	// addi r4,r11,20900
	ctx.r4.s64 = r11.s64 + 20900;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4f0
	sub_825DF4F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df570
	sub_825DF570(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x827d8af8
	if (cr0.eq) goto loc_827D8AF8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_827D8AF8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d68c8
	sub_827D68C8(ctx, base);
	// stw r3,172(r31)
	PPC_STORE_U32(r31.u32 + 172, ctx.r3.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d6a30
	sub_827D6A30(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r3.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d6b38
	sub_827D6B38(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d6c20
	sub_827D6C20(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d6d08
	sub_827D6D08(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d6838
	sub_827D6838(ctx, base);
	// stw r3,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d67d0
	sub_827D67D0(ctx, base);
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d7bb8
	sub_827D7BB8(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8270b0c0
	sub_8270B0C0(ctx, base);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8270b0c0
	sub_8270B0C0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,20632
	ctx.r4.s64 = r11.s64 + 20632;
	// li r5,575
	ctx.r5.s64 = 575;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d8bec
	if (cr0.eq) goto loc_827D8BEC;
	// bl 0x827d8100
	sub_827D8100(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827d8bf0
	goto loc_827D8BF0;
loc_827D8BEC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827D8BF0:
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// bl 0x827d7ad8
	sub_827D7AD8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// bl 0x827d7748
	sub_827D7748(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825df490
	sub_825DF490(ctx, base);
loc_827D8C50:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_827D8C58"))) PPC_WEAK_FUNC(sub_827D8C58);
PPC_FUNC_IMPL(__imp__sub_827D8C58) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r30,r11,21584
	r30.s64 = r11.s64 + 21584;
	// li r27,0
	r27.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827d8dfc
	if (cr6.eq) goto loc_827D8DFC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r28,r11,20632
	r28.s64 = r11.s64 + 20632;
	// addi r26,r10,21564
	r26.s64 = ctx.r10.s64 + 21564;
loc_827D8CA4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d8dbc
	if (cr0.eq) goto loc_827D8DBC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d8dac
	if (cr6.eq) goto loc_827D8DAC;
	// li r25,1
	r25.s64 = 1;
loc_827D8CEC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,791
	ctx.r5.s64 = 791;
	// li r3,336
	ctx.r3.s64 = 336;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x827d8d1c
	if (cr0.eq) goto loc_827D8D1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d7f48
	sub_827D7F48(ctx, base);
	// stw r27,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r27.u32);
	// stw r27,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r27.u32);
	// b 0x827d8d20
	goto loc_827D8D20;
loc_827D8D1C:
	// mr r31,r27
	r31.u64 = r27.u64;
loc_827D8D20:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x827d7e28
	sub_827D7E28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x827d8688
	sub_827D8688(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825df180
	sub_825DF180(ctx, base);
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
	// beq cr6,0x827d8d90
	if (cr6.eq) goto loc_827D8D90;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D8D90:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d8da0
	if (cr6.eq) goto loc_827D8DA0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D8DA0:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d8cec
	if (!cr6.eq) goto loc_827D8CEC;
loc_827D8DAC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d8dbc
	if (cr6.eq) goto loc_827D8DBC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D8DBC:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d8df0
	if (cr6.eq) goto loc_827D8DF0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D8DF0:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827d8ca4
	if (!cr6.eq) goto loc_827D8CA4;
loc_827D8DFC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d8e0c
	if (cr6.eq) goto loc_827D8E0C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D8E0C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_827D8E18"))) PPC_WEAK_FUNC(sub_827D8E18);
PPC_FUNC_IMPL(__imp__sub_827D8E18) {
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
	// beq 0x827d8e70
	if (cr0.eq) goto loc_827D8E70;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,19996
	ctx.r9.s64 = r11.s64 + 19996;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x827d8e74
	goto loc_827D8E74;
loc_827D8E70:
	// li r11,0
	r11.s64 = 0;
loc_827D8E74:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d8eb8
	if (!cr6.eq) goto loc_827D8EB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827d8e98
	if (cr6.eq) goto loc_827D8E98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d7ef8
	sub_827D7EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827D8E98:
	// lis r11,-31956
	r11.s64 = -2094268416;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-19400(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19400);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_827D8EB8:
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

__attribute__((alias("__imp__sub_827D8ED8"))) PPC_WEAK_FUNC(sub_827D8ED8);
PPC_FUNC_IMPL(__imp__sub_827D8ED8) {
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
	// beq cr6,0x827d8f04
	if (cr6.eq) goto loc_827D8F04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827d7ef8
	sub_827D7EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_827D8F04:
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

__attribute__((alias("__imp__sub_827D8F18"))) PPC_WEAK_FUNC(sub_827D8F18);
PPC_FUNC_IMPL(__imp__sub_827D8F18) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r28,r11,21624
	r28.s64 = r11.s64 + 21624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r25,0
	r25.s64 = 0;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827d90c8
	if (cr6.eq) goto loc_827D90C8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r27,r11,20632
	r27.s64 = r11.s64 + 20632;
	// addi r26,r10,21608
	r26.s64 = ctx.r10.s64 + 21608;
loc_827D8F64:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dfb4e8
	sub_82DFB4E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x827d9088
	if (cr0.eq) goto loc_827D9088;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825df298
	sub_825DF298(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827d9078
	if (cr6.eq) goto loc_827D9078;
	// li r25,1
	r25.s64 = 1;
loc_827D8FAC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,824
	ctx.r5.s64 = 824;
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x827d8fd4
	if (cr0.eq) goto loc_827D8FD4;
	// bl 0x827d80b0
	sub_827D80B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x827d8fd8
	goto loc_827D8FD8;
loc_827D8FD4:
	// li r31,0
	r31.s64 = 0;
loc_827D8FD8:
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x827d8e18
	sub_827D8E18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827d8470
	sub_827D8470(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r31,216
	ctx.r4.s64 = r31.s64 + 216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827d8c58
	sub_827D8C58(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825df180
	sub_825DF180(ctx, base);
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
	// beq cr6,0x827d905c
	if (cr6.eq) goto loc_827D905C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D905C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d906c
	if (cr6.eq) goto loc_827D906C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D906C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827d8fac
	if (!cr6.eq) goto loc_827D8FAC;
loc_827D9078:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d9088
	if (cr6.eq) goto loc_827D9088;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D9088:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d90bc
	if (cr6.eq) goto loc_827D90BC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D90BC:
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x827d8f64
	if (!cr6.eq) goto loc_827D8F64;
loc_827D90C8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827d90d8
	if (cr6.eq) goto loc_827D90D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_827D90D8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b6c
	return;
}

