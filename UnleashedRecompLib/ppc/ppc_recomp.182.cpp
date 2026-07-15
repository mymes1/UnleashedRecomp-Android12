#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EB2338"))) PPC_WEAK_FUNC(sub_82EB2338);
PPC_FUNC_IMPL(__imp__sub_82EB2338) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82eb23f8
	if (cr6.eq) goto loc_82EB23F8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82eb2368
	if (!cr6.eq) goto loc_82EB2368;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r30,31256(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 31256);
loc_82EB2368:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,31252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 31252);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82eb23f8
	if (cr6.eq) goto loc_82EB23F8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb0388
	sub_82EB0388(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb23f8
	if (cr6.eq) goto loc_82EB23F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_82EB23F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB2408"))) PPC_WEAK_FUNC(sub_82EB2408);
PPC_FUNC_IMPL(__imp__sub_82EB2408) {
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
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,31252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 31252);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eb2458
	if (cr6.eq) goto loc_82EB2458;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb1ef8
	sub_82EB1EF8(ctx, base);
loc_82EB2458:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB2460"))) PPC_WEAK_FUNC(sub_82EB2460);
PPC_FUNC_IMPL(__imp__sub_82EB2460) {
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
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,31252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 31252);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eb24b0
	if (cr6.eq) goto loc_82EB24B0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2238
	sub_82EB2238(ctx, base);
loc_82EB24B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB24B8"))) PPC_WEAK_FUNC(sub_82EB24B8);
PPC_FUNC_IMPL(__imp__sub_82EB24B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB24C8"))) PPC_WEAK_FUNC(sub_82EB24C8);
PPC_FUNC_IMPL(__imp__sub_82EB24C8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb24f4
	if (cr6.eq) goto loc_82EB24F4;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82EB24F4:
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

__attribute__((alias("__imp__sub_82EB2508"))) PPC_WEAK_FUNC(sub_82EB2508);
PPC_FUNC_IMPL(__imp__sub_82EB2508) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cd5f8
	sub_831CD5F8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82EB2558"))) PPC_WEAK_FUNC(sub_82EB2558);
PPC_FUNC_IMPL(__imp__sub_82EB2558) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eb2584
	if (!cr6.eq) goto loc_82EB2584;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82EB2584:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bd5868
	sub_82BD5868(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-259
	ctx.r10.s64 = r11.s64 + -259;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB25B0"))) PPC_WEAK_FUNC(sub_82EB25B0);
PPC_FUNC_IMPL(__imp__sub_82EB25B0) {
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
	// bl 0x831cca90
	sub_831CCA90(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB25D8"))) PPC_WEAK_FUNC(sub_82EB25D8);
PPC_FUNC_IMPL(__imp__sub_82EB25D8) {
	PPC_FUNC_PROLOGUE();
	// ld r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB25E0"))) PPC_WEAK_FUNC(sub_82EB25E0);
PPC_FUNC_IMPL(__imp__sub_82EB25E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB25E8"))) PPC_WEAK_FUNC(sub_82EB25E8);
PPC_FUNC_IMPL(__imp__sub_82EB25E8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb2614
	if (cr6.eq) goto loc_82EB2614;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82EB2614:
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

__attribute__((alias("__imp__sub_82EB2628"))) PPC_WEAK_FUNC(sub_82EB2628);
PPC_FUNC_IMPL(__imp__sub_82EB2628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2648"))) PPC_WEAK_FUNC(sub_82EB2648);
PPC_FUNC_IMPL(__imp__sub_82EB2648) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2668"))) PPC_WEAK_FUNC(sub_82EB2668);
PPC_FUNC_IMPL(__imp__sub_82EB2668) {
	PPC_FUNC_PROLOGUE();
	// b 0x831b6778
	sub_831B6778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2670"))) PPC_WEAK_FUNC(sub_82EB2670);
PPC_FUNC_IMPL(__imp__sub_82EB2670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b6778
	sub_831B6778(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB26B8"))) PPC_WEAK_FUNC(sub_82EB26B8);
PPC_FUNC_IMPL(__imp__sub_82EB26B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b48b0
	sub_831B48B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2700"))) PPC_WEAK_FUNC(sub_82EB2700);
PPC_FUNC_IMPL(__imp__sub_82EB2700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EB2704:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r3,r9,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb2704
	if (cr6.eq) goto loc_82EB2704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2730"))) PPC_WEAK_FUNC(sub_82EB2730);
PPC_FUNC_IMPL(__imp__sub_82EB2730) {
	PPC_FUNC_PROLOGUE();
	// b 0x831b5880
	sub_831B5880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2738"))) PPC_WEAK_FUNC(sub_82EB2738);
PPC_FUNC_IMPL(__imp__sub_82EB2738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82EB273C:
	// lbzx r10,r7,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb2754
	if (!cr6.eq) goto loc_82EB2754;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb2808
	if (cr6.eq) goto loc_82EB2808;
loc_82EB2754:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82eb2774
	if (cr6.lt) goto loc_82EB2774;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82eb2774
	if (cr6.gt) goto loc_82EB2774;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r8,r11
	ctx.r8.s64 = r11.s8;
	// b 0x82eb2778
	goto loc_82EB2778;
loc_82EB2774:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82EB2778:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82eb279c
	if (cr6.lt) goto loc_82EB279C;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82eb279c
	if (cr6.gt) goto loc_82EB279C;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x82eb27a0
	goto loc_82EB27A0;
loc_82EB279C:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82EB27A0:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x82eb2810
	if (cr6.lt) goto loc_82EB2810;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82eb27cc
	if (cr6.lt) goto loc_82EB27CC;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82eb27cc
	if (cr6.gt) goto loc_82EB27CC;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
loc_82EB27CC:
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82eb27ec
	if (cr6.lt) goto loc_82EB27EC;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82eb27ec
	if (cr6.gt) goto loc_82EB27EC;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x82eb27f0
	goto loc_82EB27F0;
loc_82EB27EC:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82EB27F0:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x82eb2818
	if (cr6.gt) goto loc_82EB2818;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82eb273c
	goto loc_82EB273C;
loc_82EB2808:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EB2810:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB2818:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2820"))) PPC_WEAK_FUNC(sub_82EB2820);
PPC_FUNC_IMPL(__imp__sub_82EB2820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r4,r4,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82EB282C:
	// lbzx r10,r4,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb2844
	if (!cr6.eq) goto loc_82EB2844;
	// lbz r11,0(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb2914
	if (cr6.eq) goto loc_82EB2914;
loc_82EB2844:
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bge cr6,0x82eb2914
	if (!cr6.lt) goto loc_82EB2914;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82eb286c
	if (cr6.lt) goto loc_82EB286C;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82eb286c
	if (cr6.gt) goto loc_82EB286C;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r8,r11
	ctx.r8.s64 = r11.s8;
	// b 0x82eb2870
	goto loc_82EB2870;
loc_82EB286C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82EB2870:
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82eb2894
	if (cr6.lt) goto loc_82EB2894;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82eb2894
	if (cr6.gt) goto loc_82EB2894;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x82eb2898
	goto loc_82EB2898;
loc_82EB2894:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82EB2898:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// blt cr6,0x82eb2904
	if (cr6.lt) goto loc_82EB2904;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82eb28c4
	if (cr6.lt) goto loc_82EB28C4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82eb28c4
	if (cr6.gt) goto loc_82EB28C4;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
loc_82EB28C4:
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82eb28e4
	if (cr6.lt) goto loc_82EB28E4;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82eb28e4
	if (cr6.gt) goto loc_82EB28E4;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// b 0x82eb28e8
	goto loc_82EB28E8;
loc_82EB28E4:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82EB28E8:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x82eb290c
	if (cr6.gt) goto loc_82EB290C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x82eb282c
	goto loc_82EB282C;
loc_82EB2904:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB290C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82EB2914:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2920"))) PPC_WEAK_FUNC(sub_82EB2920);
PPC_FUNC_IMPL(__imp__sub_82EB2920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// subf r11,r4,r3
	r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82EB2924:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r11,r4
	PPC_STORE_U8(r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x82eb2924
	if (!cr6.eq) goto loc_82EB2924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2940"))) PPC_WEAK_FUNC(sub_82EB2940);
PPC_FUNC_IMPL(__imp__sub_82EB2940) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x831b4fa0
	sub_831B4FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB294C"))) PPC_WEAK_FUNC(sub_82EB294C);
PPC_FUNC_IMPL(__imp__sub_82EB294C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2950"))) PPC_WEAK_FUNC(sub_82EB2950);
PPC_FUNC_IMPL(__imp__sub_82EB2950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EB2954:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb2954
	if (!cr6.eq) goto loc_82EB2954;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2978"))) PPC_WEAK_FUNC(sub_82EB2978);
PPC_FUNC_IMPL(__imp__sub_82EB2978) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831b2fe0
	sub_831B2FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2988"))) PPC_WEAK_FUNC(sub_82EB2988);
PPC_FUNC_IMPL(__imp__sub_82EB2988) {
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
	// bl 0x831b3198
	sub_831B3198(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB29B0"))) PPC_WEAK_FUNC(sub_82EB29B0);
PPC_FUNC_IMPL(__imp__sub_82EB29B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831b5390
	sub_831B5390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB29B8"))) PPC_WEAK_FUNC(sub_82EB29B8);
PPC_FUNC_IMPL(__imp__sub_82EB29B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x831b58d0
	sub_831B58D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB29C0"))) PPC_WEAK_FUNC(sub_82EB29C0);
PPC_FUNC_IMPL(__imp__sub_82EB29C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x831b6f40
	sub_831B6F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB29C8"))) PPC_WEAK_FUNC(sub_82EB29C8);
PPC_FUNC_IMPL(__imp__sub_82EB29C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82EB29D8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x82eb29f8
	if (cr6.lt) goto loc_82EB29F8;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// bgt cr6,0x82eb29f8
	if (cr6.gt) goto loc_82EB29F8;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// extsb r9,r11
	ctx.r9.s64 = r11.s8;
loc_82EB29F8:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb29d8
	if (!cr6.eq) goto loc_82EB29D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2A10"))) PPC_WEAK_FUNC(sub_82EB2A10);
PPC_FUNC_IMPL(__imp__sub_82EB2A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82EB2A20:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x82eb2a40
	if (cr6.lt) goto loc_82EB2A40;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bgt cr6,0x82eb2a40
	if (cr6.gt) goto loc_82EB2A40;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// extsb r9,r11
	ctx.r9.s64 = r11.s8;
loc_82EB2A40:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb2a20
	if (!cr6.eq) goto loc_82EB2A20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2A58"))) PPC_WEAK_FUNC(sub_82EB2A58);
PPC_FUNC_IMPL(__imp__sub_82EB2A58) {
	PPC_FUNC_PROLOGUE();
	// b 0x831b0ed0
	sub_831B0ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2A60"))) PPC_WEAK_FUNC(sub_82EB2A60);
PPC_FUNC_IMPL(__imp__sub_82EB2A60) {
	PPC_FUNC_PROLOGUE();
	// b 0x831b5e00
	sub_831B5E00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2A68"))) PPC_WEAK_FUNC(sub_82EB2A68);
PPC_FUNC_IMPL(__imp__sub_82EB2A68) {
	PPC_FUNC_PROLOGUE();
	// b 0x831b0ba0
	sub_831B0BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB2A70"))) PPC_WEAK_FUNC(sub_82EB2A70);
PPC_FUNC_IMPL(__imp__sub_82EB2A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// add r9,r11,r5
	ctx.r9.u64 = r11.u64 + ctx.r5.u64;
loc_82EB2A88:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eb2a88
	if (!cr6.eq) goto loc_82EB2A88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2AB0"))) PPC_WEAK_FUNC(sub_82EB2AB0);
PPC_FUNC_IMPL(__imp__sub_82EB2AB0) {
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
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB2AC8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb2ac8
	if (!cr6.eq) goto loc_82EB2AC8;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// li r5,22
	ctx.r5.s64 = 22;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - r31.s64;
loc_82EB2B04:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x82eb2b04
	if (!cr6.eq) goto loc_82EB2B04;
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

__attribute__((alias("__imp__sub_82EB2B30"))) PPC_WEAK_FUNC(sub_82EB2B30);
PPC_FUNC_IMPL(__imp__sub_82EB2B30) {
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
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82EB2B44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb2b44
	if (!cr6.eq) goto loc_82EB2B44;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r31,r11,0
	r31.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpw cr6,r31,r4
	cr6.compare<int32_t>(r31.s32, ctx.r4.s32, xer);
	// ble cr6,0x82eb2b6c
	if (!cr6.gt) goto loc_82EB2B6C;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82EB2B6C:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,22
	ctx.r5.s64 = 22;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x82eb2b9c
	if (cr6.eq) goto loc_82EB2B9C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831b4fa0
	sub_831B4FA0(ctx, base);
loc_82EB2B9C:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stbx r11,r30,r31
	PPC_STORE_U8(r30.u32 + r31.u32, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB2BB0"))) PPC_WEAK_FUNC(sub_82EB2BB0);
PPC_FUNC_IMPL(__imp__sub_82EB2BB0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82EB2BD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb2bd4
	if (!cr6.eq) goto loc_82EB2BD4;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rotlwi r24,r11,0
	r24.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x831b5390
	sub_831B5390(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// beq cr6,0x82eb2c78
	if (cr6.eq) goto loc_82EB2C78;
	// li r25,1
	r25.s64 = 1;
loc_82EB2C14:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r29,r26,r30
	r29.s64 = r30.s64 - r26.s64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// stb r25,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r25.u8);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eb2c3c
	if (!cr6.eq) goto loc_82EB2C3C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EB2C3C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// beq cr6,0x82eb2c78
	if (cr6.eq) goto loc_82EB2C78;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r30,r24
	ctx.r3.u64 = r30.u64 + r24.u64;
	// bl 0x831b5390
	sub_831B5390(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82eb2c14
	if (!cr6.eq) goto loc_82EB2C14;
loc_82EB2C78:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EB2C88"))) PPC_WEAK_FUNC(sub_82EB2C88);
PPC_FUNC_IMPL(__imp__sub_82EB2C88) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(r11.s32, 63, xer);
	// bge cr6,0x82eb2cec
	if (!cr6.lt) goto loc_82EB2CEC;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(r11.s32, 256, xer);
	// bge cr6,0x82eb2cec
	if (!cr6.lt) goto loc_82EB2CEC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(r11.s32, 256, xer);
	// bgt cr6,0x82eb2cdc
	if (cr6.gt) goto loc_82EB2CDC;
	// li r11,256
	r11.s64 = 256;
loc_82EB2CDC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB2CEC:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EB2CFC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r31,r11,2
	r31.u64 = r11.u32 & 0x3FFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831b6778
	sub_831B6778(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82eb2d64
	if (cr6.lt) goto loc_82EB2D64;
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// blt cr6,0x82eb2db0
	if (cr6.lt) goto loc_82EB2DB0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82eb2d5c
	if (!cr6.lt) goto loc_82EB2D5C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb2d4c
	if (cr6.lt) goto loc_82EB2D4C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB2D4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB2D5C:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// b 0x82eb2cfc
	goto loc_82EB2CFC;
loc_82EB2D64:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(r11.s32, 255, xer);
	// bgt cr6,0x82eb2d74
	if (cr6.gt) goto loc_82EB2D74;
	// li r11,255
	r11.s64 = 255;
loc_82EB2D74:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82eb2d5c
	if (!cr6.lt) goto loc_82EB2D5C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb2d4c
	if (cr6.lt) goto loc_82EB2D4C;
	// mr r11,r31
	r11.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// b 0x82eb2cfc
	goto loc_82EB2CFC;
loc_82EB2DB0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// stw r6,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r6.u32);
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82eb2dd8
	if (cr6.gt) goto loc_82EB2DD8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaec28
	sub_82EAEC28(ctx, base);
loc_82EB2DD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EB2DE0"))) PPC_WEAK_FUNC(sub_82EB2DE0);
PPC_FUNC_IMPL(__imp__sub_82EB2DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82eb2e20
	if (!cr6.lt) goto loc_82EB2E20;
loc_82EB2DF4:
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// bge cr6,0x82eb2e20
	if (!cr6.lt) goto loc_82EB2E20;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsb r8,r4
	ctx.r8.s64 = ctx.r4.s8;
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// beq cr6,0x82eb2e28
	if (cr6.eq) goto loc_82EB2E28;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82eb2df4
	if (cr6.lt) goto loc_82EB2DF4;
loc_82EB2E20:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB2E28:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2E30"))) PPC_WEAK_FUNC(sub_82EB2E30);
PPC_FUNC_IMPL(__imp__sub_82EB2E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// ble cr6,0x82eb2e44
	if (!cr6.gt) goto loc_82EB2E44;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_82EB2E44:
	// addi r11,r6,-1
	r11.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x82eb2e74
	if (cr6.lt) goto loc_82EB2E74;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
loc_82EB2E58:
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x82eb2e7c
	if (cr6.eq) goto loc_82EB2E7C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x82eb2e58
	if (!cr6.lt) goto loc_82EB2E58;
loc_82EB2E74:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82EB2E7C:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2E88"))) PPC_WEAK_FUNC(sub_82EB2E88);
PPC_FUNC_IMPL(__imp__sub_82EB2E88) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r10,r28,r27
	ctx.r10.u64 = r28.u64 + r27.u64;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82eb2ee4
	if (!cr6.lt) goto loc_82EB2EE4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82eb2ed4
	if (cr6.lt) goto loc_82EB2ED4;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EB2ED4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB2EE4:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r5,r28,1
	ctx.r5.s64 = r28.s64 + 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB2F08"))) PPC_WEAK_FUNC(sub_82EB2F08);
PPC_FUNC_IMPL(__imp__sub_82EB2F08) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
loc_82EB2F28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb2f28
	if (!cr6.eq) goto loc_82EB2F28;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// rotlwi r29,r9,0
	r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82eb2f7c
	if (!cr6.lt) goto loc_82EB2F7C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82eb2f6c
	if (cr6.lt) goto loc_82EB2F6C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EB2F6C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB2F7C:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB2FA0"))) PPC_WEAK_FUNC(sub_82EB2FA0);
PPC_FUNC_IMPL(__imp__sub_82EB2FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
loc_82EB2FB0:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x82eb2fd4
	if (cr6.lt) goto loc_82EB2FD4;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x82eb2fd4
	if (cr6.gt) goto loc_82EB2FD4;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
loc_82EB2FD4:
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82eb2fb0
	if (cr6.lt) goto loc_82EB2FB0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB2FF0"))) PPC_WEAK_FUNC(sub_82EB2FF0);
PPC_FUNC_IMPL(__imp__sub_82EB2FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
loc_82EB3000:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x82eb3024
	if (cr6.lt) goto loc_82EB3024;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x82eb3024
	if (cr6.gt) goto loc_82EB3024;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
loc_82EB3024:
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82eb3000
	if (cr6.lt) goto loc_82EB3000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3040"))) PPC_WEAK_FUNC(sub_82EB3040);
PPC_FUNC_IMPL(__imp__sub_82EB3040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eb3084
	if (cr6.eq) goto loc_82EB3084;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82EB3058:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82eb3090
	if (!cr6.lt) goto loc_82EB3090;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82eb3090
	if (!cr6.eq) goto loc_82EB3090;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eb3058
	if (!cr6.eq) goto loc_82EB3058;
loc_82EB3084:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82EB3090:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB30A0"))) PPC_WEAK_FUNC(sub_82EB30A0);
PPC_FUNC_IMPL(__imp__sub_82EB30A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bge cr6,0x82eb30c4
	if (!cr6.lt) goto loc_82EB30C4;
loc_82EB30B8:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82EB30C4:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82eb30fc
	if (!cr6.gt) goto loc_82EB30FC;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82EB30E0:
	// lbzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + r11.u32);
	// lbzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bne cr6,0x82eb30b8
	if (!cr6.eq) goto loc_82EB30B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82eb30e0
	if (cr6.lt) goto loc_82EB30E0;
loc_82EB30FC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3108"))) PPC_WEAK_FUNC(sub_82EB3108);
PPC_FUNC_IMPL(__imp__sub_82EB3108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82EB3110:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb3110
	if (!cr6.eq) goto loc_82EB3110;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addic. r11,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	r11.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82eb3148
	if (!cr0.lt) goto loc_82EB3148;
loc_82EB313C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82EB3148:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82eb3188
	if (cr6.eq) goto loc_82EB3188;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
loc_82EB3160:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// bne cr6,0x82eb313c
	if (!cr6.eq) goto loc_82EB313C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb3160
	if (!cr6.eq) goto loc_82EB3160;
loc_82EB3188:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3198"))) PPC_WEAK_FUNC(sub_82EB3198);
PPC_FUNC_IMPL(__imp__sub_82EB3198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// addic. r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blelr 
	if (!cr0.gt) return;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82EB31B4:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// bne cr6,0x82eb31d8
	if (!cr6.eq) goto loc_82EB31D8;
	// stbx r6,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r6.u8);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// beqlr cr6
	if (cr6.eq) return;
loc_82EB31D8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82eb31b4
	if (cr6.lt) goto loc_82EB31B4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB31F0"))) PPC_WEAK_FUNC(sub_82EB31F0);
PPC_FUNC_IMPL(__imp__sub_82EB31F0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// addi r26,r11,-1
	r26.s64 = r11.s64 + -1;
	// addi r24,r10,-1
	r24.s64 = ctx.r10.s64 + -1;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82eb32a8
	if (!cr6.gt) goto loc_82EB32A8;
loc_82EB3238:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82eb324c
	if (!cr6.eq) goto loc_82EB324C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82eb3268
	goto loc_82EB3268;
loc_82EB324C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r30,r26,r8
	r30.s64 = ctx.r8.s64 - r26.s64;
loc_82EB3268:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r28,r22
	ctx.r4.u64 = r28.u64 + r22.u64;
	// add r3,r27,r25
	ctx.r3.u64 = r27.u64 + r25.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// add r27,r30,r27
	r27.u64 = r30.u64 + r27.u64;
	// add r11,r30,r26
	r11.u64 = r30.u64 + r26.u64;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r3,r27,r25
	ctx.r3.u64 = r27.u64 + r25.u64;
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r27,r24,r27
	r27.u64 = r24.u64 + r27.u64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb3238
	if (cr6.lt) goto loc_82EB3238;
loc_82EB32A8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r4,r28,r22
	ctx.r4.u64 = r28.u64 + r22.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r3,r27,r25
	ctx.r3.u64 = r27.u64 + r25.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// subf r8,r9,r21
	ctx.r8.s64 = r21.s64 - ctx.r9.s64;
	// subf r5,r26,r8
	ctx.r5.s64 = ctx.r8.s64 - r26.s64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82EB32D8"))) PPC_WEAK_FUNC(sub_82EB32D8);
PPC_FUNC_IMPL(__imp__sub_82EB32D8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r28,r10,-1
	r28.s64 = ctx.r10.s64 + -1;
	// add r11,r28,r31
	r11.u64 = r28.u64 + r31.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r5,r28,1
	ctx.r5.s64 = r28.s64 + 1;
	// add r3,r29,r31
	ctx.r3.u64 = r29.u64 + r31.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EB3358"))) PPC_WEAK_FUNC(sub_82EB3358);
PPC_FUNC_IMPL(__imp__sub_82EB3358) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r28,r10,-1
	r28.s64 = ctx.r10.s64 + -1;
loc_82EB337C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb337c
	if (!cr6.eq) goto loc_82EB337C;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// li r5,22
	ctx.r5.s64 = 22;
	// rotlwi r26,r8,0
	r26.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r11,r26,r28
	r11.u64 = r26.u64 + r28.u64;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r5,r26,1
	ctx.r5.s64 = r26.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r29,r28
	ctx.r3.u64 = r29.u64 + r28.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EB33F0"))) PPC_WEAK_FUNC(sub_82EB33F0);
PPC_FUNC_IMPL(__imp__sub_82EB33F0) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addic. r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble 0x82eb347c
	if (!cr0.gt) goto loc_82EB347C;
loc_82EB3438:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x82eb3460
	if (cr6.lt) goto loc_82EB3460;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x82eb3460
	if (cr6.gt) goto loc_82EB3460;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x82eb3464
	goto loc_82EB3464;
loc_82EB3460:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82EB3464:
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82eb3438
	if (cr6.lt) goto loc_82EB3438;
loc_82EB347C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// stb r10,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r10.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB34B8"))) PPC_WEAK_FUNC(sub_82EB34B8);
PPC_FUNC_IMPL(__imp__sub_82EB34B8) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addic. r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble 0x82eb3544
	if (!cr0.gt) goto loc_82EB3544;
loc_82EB3500:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x82eb3528
	if (cr6.lt) goto loc_82EB3528;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// bgt cr6,0x82eb3528
	if (cr6.gt) goto loc_82EB3528;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x82eb352c
	goto loc_82EB352C;
loc_82EB3528:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82EB352C:
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82eb3500
	if (cr6.lt) goto loc_82EB3500;
loc_82EB3544:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// stb r10,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r10.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3580"))) PPC_WEAK_FUNC(sub_82EB3580);
PPC_FUNC_IMPL(__imp__sub_82EB3580) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// addic. r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x82eb360c
	if (!cr0.gt) goto loc_82EB360C;
	// extsb r9,r29
	ctx.r9.s64 = r29.s8;
loc_82EB35DC:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eb35f8
	if (!cr6.eq) goto loc_82EB35F8;
	// stbx r27,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, r27.u8);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82eb360c
	if (cr6.eq) goto loc_82EB360C;
loc_82EB35F8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82eb35dc
	if (cr6.lt) goto loc_82EB35DC;
loc_82EB360C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// stb r10,-1(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1, ctx.r10.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r8,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r8.u32);
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EB3638"))) PPC_WEAK_FUNC(sub_82EB3638);
PPC_FUNC_IMPL(__imp__sub_82EB3638) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82eb2bb0
	sub_82EB2BB0(ctx, base);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r23,20
	r23.s64 = 20;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,22
	ctx.r5.s64 = 22;
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// mullw r11,r6,r7
	r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// lwzx r3,r23,r24
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// beq cr6,0x82eb36e0
	if (cr6.eq) goto loc_82EB36E0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82eb31f0
	sub_82EB31F0(ctx, base);
	// b 0x82eb36e4
	goto loc_82EB36E4;
loc_82EB36E0:
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_82EB36E4:
	// add r11,r28,r29
	r11.u64 = r28.u64 + r29.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// stw r29,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r29.u32);
	// stw r29,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r29.u32);
	// stb r25,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, r25.u8);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb371c
	if (!cr6.eq) goto loc_82EB371C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r23,r24
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB371C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EB3728"))) PPC_WEAK_FUNC(sub_82EB3728);
PPC_FUNC_IMPL(__imp__sub_82EB3728) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// ori r9,r11,12
	ctx.r9.u64 = r11.u64 | 12;
	// li r26,0
	r26.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82eb2bb0
	sub_82EB2BB0(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eb3878
	if (cr6.eq) goto loc_82EB3878;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x82eb37c4
	if (!cr6.gt) goto loc_82EB37C4;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,22
	ctx.r5.s64 = 22;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82eb37c8
	goto loc_82EB37C8;
loc_82EB37C4:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82EB37C8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb31f0
	sub_82EB31F0(ctx, base);
	// add r11,r29,r30
	r11.u64 = r29.u64 + r30.u64;
	// stb r26,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, r26.u8);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, xer);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// beq cr6,0x82eb3830
	if (cr6.eq) goto loc_82EB3830;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb3824
	if (!cr6.eq) goto loc_82EB3824;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB3824:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x82eb385c
	goto loc_82EB385C;
loc_82EB3830:
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82eb385c
	if (!cr6.lt) goto loc_82EB385C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82eb384c
	if (cr6.lt) goto loc_82EB384C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EB384C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB385C:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stb r10,0(r25)
	PPC_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// b 0x82eb3888
	goto loc_82EB3888;
loc_82EB3878:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stb r26,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r26.u8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_82EB3888:
	// bne cr6,0x82eb38a8
	if (!cr6.eq) goto loc_82EB38A8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB38A8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EB38B8"))) PPC_WEAK_FUNC(sub_82EB38B8);
PPC_FUNC_IMPL(__imp__sub_82EB38B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subfc r9,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB38D8"))) PPC_WEAK_FUNC(sub_82EB38D8);
PPC_FUNC_IMPL(__imp__sub_82EB38D8) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb391c
	if (cr6.eq) goto loc_82EB391C;
	// lis r30,-31949
	r30.s64 = -2093809664;
	// lwz r11,-14816(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -14816);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,-14816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -14816);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EB391C:
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

__attribute__((alias("__imp__sub_82EB3948"))) PPC_WEAK_FUNC(sub_82EB3948);
PPC_FUNC_IMPL(__imp__sub_82EB3948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82eb3ab4
	if (!cr6.gt) goto loc_82EB3AB4;
	// lis r30,-31949
	r30.s64 = -2093809664;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,-14820(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -14820);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82eb39b4
	if (!cr6.gt) goto loc_82EB39B4;
	// li r11,0
	r11.s64 = 0;
loc_82EB3994:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stwx r9,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x82eb3994
	if (cr6.lt) goto loc_82EB3994;
loc_82EB39B4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82eb39d8
	if (!cr6.gt) goto loc_82EB39D8;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// addi r6,r10,14520
	ctx.r6.s64 = ctx.r10.s64 + 14520;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb3b68
	sub_82EB3B68(ctx, base);
loc_82EB39D8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r10,-14820(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -14820);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r8,-14820(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + -14820);
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r9,84
	ctx.r3.s64 = ctx.r9.s64 * 84;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82eb3a78
	if (!cr6.gt) goto loc_82EB3A78;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// subf r27,r26,r25
	r27.s64 = r25.s64 - r26.s64;
loc_82EB3A2C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stwx r10,r27,r30
	PPC_STORE_U32(r27.u32 + r30.u32, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// mulli r11,r6,84
	r11.s64 = ctx.r6.s64 * 84;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,84
	r29.s64 = r29.s64 + 84;
	// cmpw cr6,r28,r5
	cr6.compare<int32_t>(r28.s32, ctx.r5.s32, xer);
	// blt cr6,0x82eb3a2c
	if (cr6.lt) goto loc_82EB3A2C;
loc_82EB3A78:
	// lis r30,-31949
	r30.s64 = -2093809664;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-14816(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -14816);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,-14816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -14816);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,-14816(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -14816);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
loc_82EB3AB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EB3AC0"))) PPC_WEAK_FUNC(sub_82EB3AC0);
PPC_FUNC_IMPL(__imp__sub_82EB3AC0) {
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
	// bl 0x82eb3948
	sub_82EB3948(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb3948
	sub_82EB3948(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x82eb3b40
	if (!cr6.lt) goto loc_82EB3B40;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82EB3B14:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x82eb3b40
	if (!cr6.lt) goto loc_82EB3B40;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82eb3b58
	if (!cr6.eq) goto loc_82EB3B58;
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82EB3B34:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82EB3B38:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x82eb3b14
	if (cr6.lt) goto loc_82EB3B14;
loc_82EB3B40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82EB3B58:
	// bge cr6,0x82eb3b34
	if (!cr6.lt) goto loc_82EB3B34;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82eb3b38
	goto loc_82EB3B38;
}

__attribute__((alias("__imp__sub_82EB3B68"))) PPC_WEAK_FUNC(sub_82EB3B68);
PPC_FUNC_IMPL(__imp__sub_82EB3B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
loc_82EB3B84:
	// add r11,r25,r24
	r11.u64 = r25.u64 + r24.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r29,r25
	r29.u64 = r25.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r9,r26
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + r26.u32);
loc_82EB3B9C:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r31,r11,r26
	r31.u64 = r11.u64 + r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r11,r26
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb3bec
	if (cr6.eq) goto loc_82EB3BEC;
loc_82EB3BC4:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb3bc4
	if (!cr6.eq) goto loc_82EB3BC4;
loc_82EB3BEC:
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r31,r11,r26
	r31.u64 = r11.u64 + r26.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lwzx r5,r11,r26
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb3c3c
	if (cr6.eq) goto loc_82EB3C3C;
loc_82EB3C14:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb3c14
	if (!cr6.eq) goto loc_82EB3C14;
loc_82EB3C3C:
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x82eb3c70
	if (cr6.lt) goto loc_82EB3C70;
	// beq cr6,0x82eb3c60
	if (cr6.eq) goto loc_82EB3C60;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lwzx r8,r10,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// stwx r9,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + r26.u32, ctx.r9.u32);
	// stwx r8,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, ctx.r8.u32);
loc_82EB3C60:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// ble cr6,0x82eb3b9c
	if (!cr6.gt) goto loc_82EB3B9C;
loc_82EB3C70:
	// cmpw cr6,r25,r30
	cr6.compare<int32_t>(r25.s32, r30.s32, xer);
	// bge cr6,0x82eb3c8c
	if (!cr6.lt) goto loc_82EB3C8C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb3b68
	sub_82EB3B68(ctx, base);
loc_82EB3C8C:
	// cmpw cr6,r29,r24
	cr6.compare<int32_t>(r29.s32, r24.s32, xer);
	// bge cr6,0x82eb3c9c
	if (!cr6.lt) goto loc_82EB3C9C;
	// mr r25,r29
	r25.u64 = r29.u64;
	// b 0x82eb3b84
	goto loc_82EB3B84;
loc_82EB3C9C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EB3CA8"))) PPC_WEAK_FUNC(sub_82EB3CA8);
PPC_FUNC_IMPL(__imp__sub_82EB3CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r5,29,3,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82EB3CD0:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82eb3cd0
	if (!cr0.eq) goto loc_82EB3CD0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3CE8"))) PPC_WEAK_FUNC(sub_82EB3CE8);
PPC_FUNC_IMPL(__imp__sub_82EB3CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eb3d18
	if (!cr6.gt) goto loc_82EB3D18;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82EB3D04:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82eb3d04
	if (!cr0.eq) goto loc_82EB3D04;
loc_82EB3D18:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3D28"))) PPC_WEAK_FUNC(sub_82EB3D28);
PPC_FUNC_IMPL(__imp__sub_82EB3D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r5,28,4,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82EB3D50:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stdx r9,r10,r8
	PPC_STORE_U64(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82eb3d50
	if (!cr0.eq) goto loc_82EB3D50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3D68"))) PPC_WEAK_FUNC(sub_82EB3D68);
PPC_FUNC_IMPL(__imp__sub_82EB3D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,4
	r11.s64 = 4;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// ble cr6,0x82eb3d80
	if (!cr6.gt) goto loc_82EB3D80;
loc_82EB3D74:
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// blt cr6,0x82eb3d74
	if (cr6.lt) goto loc_82EB3D74;
loc_82EB3D80:
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3D88"))) PPC_WEAK_FUNC(sub_82EB3D88);
PPC_FUNC_IMPL(__imp__sub_82EB3D88) {
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
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// li r31,4
	r31.s64 = 4;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x82eb3dc8
	if (!cr6.gt) goto loc_82EB3DC8;
loc_82EB3DBC:
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb3dbc
	if (cr6.lt) goto loc_82EB3DBC;
loc_82EB3DC8:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,23
	ctx.r5.s64 = 23;
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eb3e18
	if (!cr6.gt) goto loc_82EB3E18;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82EB3E04:
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
	// bne 0x82eb3e04
	if (!cr0.eq) goto loc_82EB3E04;
loc_82EB3E18:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3E40"))) PPC_WEAK_FUNC(sub_82EB3E40);
PPC_FUNC_IMPL(__imp__sub_82EB3E40) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// li r11,32
	r11.s64 = 32;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82EB3E88:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82eb3e88
	if (!cr0.eq) goto loc_82EB3E88;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82EB3EC0"))) PPC_WEAK_FUNC(sub_82EB3EC0);
PPC_FUNC_IMPL(__imp__sub_82EB3EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB3EF4"))) PPC_WEAK_FUNC(sub_82EB3EF4);
PPC_FUNC_IMPL(__imp__sub_82EB3EF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB3EF8"))) PPC_WEAK_FUNC(sub_82EB3EF8);
PPC_FUNC_IMPL(__imp__sub_82EB3EF8) {
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// ble cr6,0x82eb3f30
	if (!cr6.gt) goto loc_82EB3F30;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82eb4250
	sub_82EB4250(ctx, base);
loc_82EB3F30:
	// lis r11,-25033
	r11.s64 = -1640562688;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r7,r11,31153
	ctx.r7.u64 = r11.u64 | 31153;
	// mullw r6,r10,r7
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// and r11,r6,r8
	r11.u64 = ctx.r6.u64 & ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82eb3f84
	if (cr6.eq) goto loc_82EB3F84;
loc_82EB3F5C:
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82eb3f84
	if (cr6.eq) goto loc_82EB3F84;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x82eb3f5c
	if (!cr6.eq) goto loc_82EB3F5C;
loc_82EB3F84:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// subf r6,r8,r30
	ctx.r6.s64 = r30.s64 - ctx.r8.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// xori r8,r4,1
	ctx.r8.u64 = ctx.r4.u64 ^ 1;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r30.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB3FD0"))) PPC_WEAK_FUNC(sub_82EB3FD0);
PPC_FUNC_IMPL(__imp__sub_82EB3FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r8,-25033
	ctx.r8.s64 = -1640562688;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,28,4,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r7,r8,31153
	ctx.r7.u64 = ctx.r8.u64 | 31153;
	// mullw r6,r11,r7
	ctx.r6.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r9
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82eb401c
	if (cr6.eq) goto loc_82EB401C;
loc_82EB3FFC:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82eb3ffc
	if (!cr6.eq) goto loc_82EB3FFC;
loc_82EB401C:
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4028"))) PPC_WEAK_FUNC(sub_82EB4028);
PPC_FUNC_IMPL(__imp__sub_82EB4028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-25033
	ctx.r10.s64 = -1640562688;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,28,4,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r7,r10,31153
	ctx.r7.u64 = ctx.r10.u64 | 31153;
	// mullw r6,r11,r7
	ctx.r6.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// and r11,r6,r9
	r11.u64 = ctx.r6.u64 & ctx.r9.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82eb4074
	if (cr6.eq) goto loc_82EB4074;
loc_82EB4054:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x82eb407c
	if (cr6.eq) goto loc_82EB407C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82eb4054
	if (!cr6.eq) goto loc_82EB4054;
loc_82EB4074:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
loc_82EB407C:
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4090"))) PPC_WEAK_FUNC(sub_82EB4090);
PPC_FUNC_IMPL(__imp__sub_82EB4090) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// ble cr6,0x82eb40c4
	if (!cr6.gt) goto loc_82EB40C4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EB40C4:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82eb40f0
	if (cr6.eq) goto loc_82EB40F0;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// b 0x82eb40f4
	goto loc_82EB40F4;
loc_82EB40F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EB40F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4110"))) PPC_WEAK_FUNC(sub_82EB4110);
PPC_FUNC_IMPL(__imp__sub_82EB4110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stwx r5,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r11,r6,r10
	r11.u64 = ctx.r6.u64 & ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r4,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x82eb4174
	if (cr6.eq) goto loc_82EB4174;
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_82EB415C:
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82eb415c
	if (!cr6.eq) goto loc_82EB415C;
loc_82EB4174:
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// and r11,r8,r10
	r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// and r31,r6,r10
	r31.u64 = ctx.r6.u64 & ctx.r10.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82eb4244
	if (cr6.eq) goto loc_82EB4244;
	// lis r7,-25033
	ctx.r7.s64 = -1640562688;
	// ori r4,r7,31153
	ctx.r4.u64 = ctx.r7.u64 | 31153;
loc_82EB419C:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r30,r6,28,4,31
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// mullw r30,r30,r4
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r4.s32);
	// and r10,r30,r10
	ctx.r10.u64 = r30.u64 & ctx.r10.u64;
	// blt cr6,0x82eb41c0
	if (cr6.lt) goto loc_82EB41C0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82eb4224
	if (cr6.gt) goto loc_82EB4224;
loc_82EB41C0:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eb41d8
	if (!cr6.lt) goto loc_82EB41D8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82eb4224
	if (cr6.gt) goto loc_82EB4224;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82eb4224
	if (!cr6.gt) goto loc_82EB4224;
loc_82EB41D8:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x82eb41e8
	if (!cr6.gt) goto loc_82EB41E8;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// blt cr6,0x82eb4224
	if (cr6.lt) goto loc_82EB4224;
loc_82EB41E8:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lwzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// stwx r10,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stwx r5,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
loc_82EB4224:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x82eb419c
	if (!cr6.eq) goto loc_82EB419C;
loc_82EB4244:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4250"))) PPC_WEAK_FUNC(sub_82EB4250);
PPC_FUNC_IMPL(__imp__sub_82EB4250) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,20
	r24.s64 = 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,23
	ctx.r5.s64 = 23;
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r23,r10,0,0,0
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// lwzx r3,r24,r25
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// addi r27,r11,1
	r27.s64 = r11.s64 + 1;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82eb42bc
	if (!cr6.gt) goto loc_82EB42BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82EB42A8:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82eb42a8
	if (!cr0.eq) goto loc_82EB42A8;
loc_82EB42BC:
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// ble cr6,0x82eb430c
	if (!cr6.gt) goto loc_82EB430C;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r26
	r29.u64 = r26.u64;
	// add r30,r11,r26
	r30.u64 = r11.u64 + r26.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82EB42E4:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82eb42fc
	if (cr6.eq) goto loc_82EB42FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EB42FC:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82eb42e4
	if (!cr0.eq) goto loc_82EB42E4;
loc_82EB430C:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x82eb4328
	if (!cr6.eq) goto loc_82EB4328;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r24,r25
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// rlwinm r5,r27,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB4328:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EB4330"))) PPC_WEAK_FUNC(sub_82EB4330);
PPC_FUNC_IMPL(__imp__sub_82EB4330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r8,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB4364"))) PPC_WEAK_FUNC(sub_82EB4364);
PPC_FUNC_IMPL(__imp__sub_82EB4364) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB4368"))) PPC_WEAK_FUNC(sub_82EB4368);
PPC_FUNC_IMPL(__imp__sub_82EB4368) {
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// ble cr6,0x82eb43a0
	if (!cr6.gt) goto loc_82EB43A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82eb45f8
	sub_82EB45F8(ctx, base);
loc_82EB43A0:
	// li r11,31153
	r11.s64 = 31153;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rldicl r7,r30,60,4
	ctx.r7.u64 = __builtin_rotateleft64(r30.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r6,r11,40503
	ctx.r6.u64 = r11.u64 | 2654404608;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// mulld r5,r7,r6
	ctx.r5.s64 = ctx.r7.s64 * ctx.r6.s64;
	// and r11,r5,r8
	r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// cmpdi cr6,r4,-1
	cr6.compare<int64_t>(ctx.r4.s64, -1, xer);
	// beq cr6,0x82eb43f8
	if (cr6.eq) goto loc_82EB43F8;
loc_82EB43D0:
	// ldx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// cmpld cr6,r10,r30
	cr6.compare<uint64_t>(ctx.r10.u64, r30.u64, xer);
	// beq cr6,0x82eb43f8
	if (cr6.eq) goto loc_82EB43F8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r7.u32);
	// cmpdi cr6,r6,-1
	cr6.compare<int64_t>(ctx.r6.s64, -1, xer);
	// bne cr6,0x82eb43d0
	if (!cr6.eq) goto loc_82EB43D0;
loc_82EB43F8:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// ldx r11,r10,r9
	r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(r11.u64, r30.u64, xer);
	// bne cr6,0x82eb4414
	if (!cr6.eq) goto loc_82EB4414;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82EB4414:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stdx r30,r10,r9
	PPC_STORE_U64(ctx.r10.u32 + ctx.r9.u32, r30.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r29,r8,r10
	PPC_STORE_U64(ctx.r8.u32 + ctx.r10.u32, r29.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB4448"))) PPC_WEAK_FUNC(sub_82EB4448);
PPC_FUNC_IMPL(__imp__sub_82EB4448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,31153
	r11.s64 = 31153;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicl r10,r4,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r6,r11,40503
	ctx.r6.u64 = r11.u64 | 2654404608;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// mulld r5,r10,r6
	ctx.r5.s64 = ctx.r10.s64 * ctx.r6.s64;
	// and r11,r5,r8
	r11.u64 = ctx.r5.u64 & ctx.r8.u64;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r9.u32);
	// cmpdi cr6,r10,-1
	cr6.compare<int64_t>(ctx.r10.s64, -1, xer);
	// beq cr6,0x82eb4498
	if (cr6.eq) goto loc_82EB4498;
loc_82EB4478:
	// cmpld cr6,r10,r4
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r4.u64, xer);
	// beq cr6,0x82eb44a0
	if (cr6.eq) goto loc_82EB44A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// cmpdi cr6,r10,-1
	cr6.compare<int64_t>(ctx.r10.s64, -1, xer);
	// bne cr6,0x82eb4478
	if (!cr6.eq) goto loc_82EB4478;
loc_82EB4498:
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// blr 
	return;
loc_82EB44A0:
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB44A8"))) PPC_WEAK_FUNC(sub_82EB44A8);
PPC_FUNC_IMPL(__imp__sub_82EB44A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0b2c
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,-1
	r29.s64 = -1;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stdx r29,r10,r8
	PPC_STORE_U64(ctx.r10.u32 + ctx.r8.u32, r29.u64);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 & ctx.r10.u64;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r4,r7
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + ctx.r7.u32);
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(r11.s64, -1, xer);
	// beq cr6,0x82eb4510
	if (cr6.eq) goto loc_82EB4510;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
loc_82EB44F8:
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r5,r6,r11
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + r11.u32);
	// cmpdi cr6,r5,-1
	cr6.compare<int64_t>(ctx.r5.s64, -1, xer);
	// bne cr6,0x82eb44f8
	if (!cr6.eq) goto loc_82EB44F8;
loc_82EB4510:
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// and r30,r6,r10
	r30.u64 = ctx.r6.u64 & ctx.r10.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// ldx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r8.u32);
	// cmpdi cr6,r5,-1
	cr6.compare<int64_t>(ctx.r5.s64, -1, xer);
	// beq cr6,0x82eb45f0
	if (cr6.eq) goto loc_82EB45F0;
	// li r7,31153
	ctx.r7.s64 = 31153;
	// oris r31,r7,40503
	r31.u64 = ctx.r7.u64 | 2654404608;
loc_82EB453C:
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(r11.u64, r30.u64, xer);
	// ldx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r8.u32);
	// rldicl r7,r5,60,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// mulld r7,r7,r31
	ctx.r7.s64 = ctx.r7.s64 * r31.s64;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blt cr6,0x82eb4560
	if (cr6.lt) goto loc_82EB4560;
	// cmpld cr6,r10,r9
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, xer);
	// bgt cr6,0x82eb45c8
	if (cr6.gt) goto loc_82EB45C8;
loc_82EB4560:
	// cmpld cr6,r11,r9
	cr6.compare<uint64_t>(r11.u64, ctx.r9.u64, xer);
	// bge cr6,0x82eb4578
	if (!cr6.lt) goto loc_82EB4578;
	// cmpld cr6,r10,r9
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, xer);
	// bgt cr6,0x82eb45c8
	if (cr6.gt) goto loc_82EB45C8;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, r11.u64, xer);
	// ble cr6,0x82eb45c8
	if (!cr6.gt) goto loc_82EB45C8;
loc_82EB4578:
	// cmpld cr6,r10,r9
	cr6.compare<uint64_t>(ctx.r10.u64, ctx.r9.u64, xer);
	// ble cr6,0x82eb4588
	if (!cr6.gt) goto loc_82EB4588;
	// cmpld cr6,r10,r30
	cr6.compare<uint64_t>(ctx.r10.u64, r30.u64, xer);
	// blt cr6,0x82eb45c8
	if (cr6.lt) goto loc_82EB45C8;
loc_82EB4588:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stdx r5,r10,r6
	PPC_STORE_U64(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u64);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r6,r10,r4
	ctx.r6.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r4,r6,1
	ctx.r4.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r4,r7,r5
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r5.u32);
	// stdx r4,r6,r5
	PPC_STORE_U64(ctx.r6.u32 + ctx.r5.u32, ctx.r4.u64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stdx r29,r8,r10
	PPC_STORE_U64(ctx.r8.u32 + ctx.r10.u32, r29.u64);
loc_82EB45C8:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// and r11,r8,r10
	r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// ldx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r7.u32);
	// cmpdi cr6,r6,-1
	cr6.compare<int64_t>(ctx.r6.s64, -1, xer);
	// bne cr6,0x82eb453c
	if (!cr6.eq) goto loc_82EB453C;
loc_82EB45F0:
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB45F8"))) PPC_WEAK_FUNC(sub_82EB45F8);
PPC_FUNC_IMPL(__imp__sub_82EB45F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,20
	r24.s64 = 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,23
	ctx.r5.s64 = 23;
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r23,r10,0,0,0
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// lwzx r3,r24,r25
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// addi r27,r11,1
	r27.s64 = r11.s64 + 1;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82eb4664
	if (!cr6.gt) goto loc_82EB4664;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82EB4650:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stdx r9,r10,r8
	PPC_STORE_U64(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82eb4650
	if (!cr0.eq) goto loc_82EB4650;
loc_82EB4664:
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// ble cr6,0x82eb46b4
	if (!cr6.gt) goto loc_82EB46B4;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r26
	r29.u64 = r26.u64;
	// add r30,r11,r26
	r30.u64 = r11.u64 + r26.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82EB468C:
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// cmpdi cr6,r4,-1
	cr6.compare<int64_t>(ctx.r4.s64, -1, xer);
	// beq cr6,0x82eb46a4
	if (cr6.eq) goto loc_82EB46A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// bl 0x82eb4368
	sub_82EB4368(ctx, base);
loc_82EB46A4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82eb468c
	if (!cr0.eq) goto loc_82EB468C;
loc_82EB46B4:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x82eb46d0
	if (!cr6.eq) goto loc_82EB46D0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r24,r25
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// rlwinm r5,r27,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB46D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EB46D8"))) PPC_WEAK_FUNC(sub_82EB46D8);
PPC_FUNC_IMPL(__imp__sub_82EB46D8) {
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
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82eb4708
	if (!cr6.gt) goto loc_82EB4708;
	// li r11,0
	r11.s64 = 0;
loc_82EB4708:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eb4734
	if (cr6.eq) goto loc_82EB4734;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb4110
	sub_82EB4110(ctx, base);
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
loc_82EB4734:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82EB4750"))) PPC_WEAK_FUNC(sub_82EB4750);
PPC_FUNC_IMPL(__imp__sub_82EB4750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,4
	r11.s64 = 4;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x82eb4770
	if (!cr6.gt) goto loc_82EB4770;
loc_82EB4764:
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82eb4764
	if (cr6.lt) goto loc_82EB4764;
loc_82EB4770:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82eb4250
	sub_82EB4250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB4778"))) PPC_WEAK_FUNC(sub_82EB4778);
PPC_FUNC_IMPL(__imp__sub_82EB4778) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r27,r11,6752
	r27.s64 = r11.s64 + 6752;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2730
	sub_82EB2730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb47d0
	if (cr6.eq) goto loc_82EB47D0;
	// lis r11,-32244
	r11.s64 = -2113142784;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,12936
	ctx.r4.s64 = r11.s64 + 12936;
	// bl 0x82eb29b0
	sub_82EB29B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82eb47d4
	if (cr6.eq) goto loc_82EB47D4;
loc_82EB47D0:
	// li r11,1
	r11.s64 = 1;
loc_82EB47D4:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82eb4870
	if (!cr6.eq) goto loc_82EB4870;
	// li r30,0
	r30.s64 = 0;
loc_82EB47E4:
	// lbzx r11,r30,r29
	r11.u64 = PPC_LOAD_U8(r30.u32 + r29.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// beq cr6,0x82eb47fc
	if (cr6.eq) goto loc_82EB47FC;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(r11.s32, 47, xer);
	// bne cr6,0x82eb4804
	if (!cr6.eq) goto loc_82EB4804;
loc_82EB47FC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82eb47e4
	goto loc_82EB47E4;
loc_82EB4804:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + r28.u64;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// addi r30,r10,1
	r30.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82eb4854
	if (!cr6.lt) goto loc_82EB4854;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82eb4844
	if (cr6.lt) goto loc_82EB4844;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EB4844:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB4854:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb2920
	sub_82EB2920(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x82eb48b4
	goto loc_82EB48B4;
loc_82EB4870:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82eb48ac
	if (!cr6.lt) goto loc_82EB48AC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82eb489c
	if (cr6.lt) goto loc_82EB489C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EB489C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB48AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_82EB48B4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82eb2920
	sub_82EB2920(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r8,-1(r7)
	PPC_STORE_U8(ctx.r7.u32 + -1, ctx.r8.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82eb4908
	if (!cr6.gt) goto loc_82EB4908;
	// li r9,92
	ctx.r9.s64 = 92;
loc_82EB48E4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r8,47
	cr6.compare<uint32_t>(ctx.r8.u32, 47, xer);
	// bne cr6,0x82eb48f8
	if (!cr6.eq) goto loc_82EB48F8;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
loc_82EB48F8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82eb48e4
	if (cr6.lt) goto loc_82EB48E4;
loc_82EB4908:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB4918"))) PPC_WEAK_FUNC(sub_82EB4918);
PPC_FUNC_IMPL(__imp__sub_82EB4918) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r24,1
	r24.s64 = 1;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82eb499c
	if (cr6.eq) goto loc_82EB499C;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82eb4984
	if (!cr6.lt) goto loc_82EB4984;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb4974
	if (cr6.lt) goto loc_82EB4974;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB4974:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB4984:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// b 0x82eb49b8
	goto loc_82EB49B8;
loc_82EB499C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
loc_82EB49B8:
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// addi r28,r11,3988
	r28.s64 = r11.s64 + 3988;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82eb4a08
	if (!cr6.lt) goto loc_82EB4A08;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb49f8
	if (cr6.lt) goto loc_82EB49F8;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB49F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB4A08:
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// addi r30,r11,-15520
	r30.s64 = r11.s64 + -15520;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82eb4a6c
	if (!cr6.lt) goto loc_82EB4A6C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb4a5c
	if (cr6.lt) goto loc_82EB4A5C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB4A5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB4A6C:
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb3728
	sub_82EB3728(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb4ac4
	if (!cr6.eq) goto loc_82EB4AC4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB4AC4:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb4af0
	if (!cr6.eq) goto loc_82EB4AF0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB4AF0:
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r29.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82eb4b38
	if (!cr6.lt) goto loc_82EB4B38;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb4b28
	if (cr6.lt) goto loc_82EB4B28;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB4B28:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB4B38:
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// addi r30,r11,6760
	r30.s64 = r11.s64 + 6760;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82eb4b9c
	if (!cr6.lt) goto loc_82EB4B9C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb4b8c
	if (cr6.lt) goto loc_82EB4B8C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB4B8C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB4B9C:
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82eb3728
	sub_82EB3728(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb4be4
	if (!cr6.eq) goto loc_82EB4BE4;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// beq cr6,0x82eb4be8
	if (cr6.eq) goto loc_82EB4BE8;
loc_82EB4BE4:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82EB4BE8:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// rlwinm r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82eb4c18
	if (!cr6.eq) goto loc_82EB4C18;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r5,r10,2
	ctx.r5.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB4C18:
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb4c44
	if (!cr6.eq) goto loc_82EB4C44;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB4C44:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,6756
	ctx.r5.s64 = r11.s64 + 6756;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82eb3040
	sub_82EB3040(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eb4cdc
	if (cr6.eq) goto loc_82EB4CDC;
	// lis r11,32767
	r11.s64 = 2147418112;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ori r30,r11,65535
	r30.u64 = r11.u64 | 65535;
	// addi r11,r10,-3
	r11.s64 = ctx.r10.s64 + -3;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82eb4c84
	if (!cr6.lt) goto loc_82EB4C84;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82EB4C84:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r30,1
	r31.s64 = r30.s64 + 1;
	// addi r4,r3,2
	ctx.r4.s64 = ctx.r3.s64 + 2;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82eb2a60
	sub_82EB2A60(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stbx r29,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r29.u8);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82eb4cd0
	if (!cr6.lt) goto loc_82EB4CD0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb4cc0
	if (cr6.lt) goto loc_82EB4CC0;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB4CC0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB4CD0:
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// b 0x82eb4ce0
	goto loc_82EB4CE0;
loc_82EB4CDC:
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82EB4CE0:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb4d6c
	if (cr6.eq) goto loc_82EB4D6C;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82eb4d1c
	if (!cr6.lt) goto loc_82EB4D1C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb4d0c
	if (cr6.lt) goto loc_82EB4D0C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB4D0C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB4D1C:
	// stw r31,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r31.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r31,0(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// bne cr6,0x82eb4d60
	if (!cr6.eq) goto loc_82EB4D60;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB4D60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b68
	return;
loc_82EB4D6C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb4d98
	if (!cr6.eq) goto loc_82EB4D98;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB4D98:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EB4DA8"))) PPC_WEAK_FUNC(sub_82EB4DA8);
PPC_FUNC_IMPL(__imp__sub_82EB4DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82eb4dd8
	if (!cr6.lt) goto loc_82EB4DD8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EB4DD8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r30,r10,r11
	r30.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(r30.s32, ctx.r9.s32, xer);
	// ble cr6,0x82eb4e0c
	if (!cr6.gt) goto loc_82EB4E0C;
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EB4E0C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82eb4e70
	if (!cr6.gt) goto loc_82EB4E70;
	// mr r11,r30
	r11.u64 = r30.u64;
	// srawi r9,r11,9
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FF) != 0);
	ctx.r9.s64 = r11.s32 >> 9;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r7,r8,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// subf. r28,r7,r11
	r28.s64 = r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// subfic r29,r28,512
	xer.ca = r28.u32 <= 512;
	r29.s64 = 512 - r28.s64;
	// bne 0x82eb4e34
	if (!cr0.eq) goto loc_82EB4E34;
	// li r29,0
	r29.s64 = 0;
loc_82EB4E34:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x82eb2a60
	sub_82EB2A60(ctx, base);
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// srawi r10,r30,9
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1FF) != 0);
	ctx.r10.s64 = r30.s32 >> 9;
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// xori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 ^ 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r7,r8,9,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0xFFFFFE00;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
loc_82EB4E70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EB4E78"))) PPC_WEAK_FUNC(sub_82EB4E78);
PPC_FUNC_IMPL(__imp__sub_82EB4E78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eb4eb8
	if (!cr6.eq) goto loc_82EB4EB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_82EB4EB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb4da8
	sub_82EB4DA8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// subf. r30,r10,r11
	r30.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82eb4f18
	if (!cr0.gt) goto loc_82EB4F18;
loc_82EB4ED4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// bne cr6,0x82eb4f24
	if (!cr6.eq) goto loc_82EB4F24;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x82eb4ed4
	if (cr6.lt) goto loc_82EB4ED4;
loc_82EB4F18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_82EB4F24:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB4F38"))) PPC_WEAK_FUNC(sub_82EB4F38);
PPC_FUNC_IMPL(__imp__sub_82EB4F38) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r30,r11,r10
	r30.s64 = ctx.r10.s64 - r11.s64;
	// cmpw cr6,r27,r30
	cr6.compare<int32_t>(r27.s32, r30.s32, xer);
	// ble cr6,0x82eb4fc0
	if (!cr6.gt) goto loc_82EB4FC0;
loc_82EB4F68:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r28,r28,r30
	r28.u64 = r28.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// subf r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb4ff0
	if (!cr6.eq) goto loc_82EB4FF0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r30,r11,r10
	r30.s64 = ctx.r10.s64 - r11.s64;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bgt cr6,0x82eb4f68
	if (cr6.gt) goto loc_82EB4F68;
loc_82EB4FC0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_82EB4FF0:
	// subf r3,r29,r27
	ctx.r3.s64 = r27.s64 - r29.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB5000"))) PPC_WEAK_FUNC(sub_82EB5000);
PPC_FUNC_IMPL(__imp__sub_82EB5000) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x82eb5060
	if (!cr6.gt) goto loc_82EB5060;
loc_82EB502C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r30,r11,r30
	r30.s64 = r30.s64 - r11.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb5078
	if (!cr6.eq) goto loc_82EB5078;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bgt cr6,0x82eb502c
	if (cr6.gt) goto loc_82EB502C;
loc_82EB5060:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EB5078:
	// subf r3,r30,r29
	ctx.r3.s64 = r29.s64 - r30.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB5088"))) PPC_WEAK_FUNC(sub_82EB5088);
PPC_FUNC_IMPL(__imp__sub_82EB5088) {
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
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82eb50d4
	if (!cr6.eq) goto loc_82EB50D4;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb50d8
	if (cr6.eq) goto loc_82EB50D8;
loc_82EB50D4:
	// li r11,1
	r11.s64 = 1;
loc_82EB50D8:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

__attribute__((alias("__imp__sub_82EB50F8"))) PPC_WEAK_FUNC(sub_82EB50F8);
PPC_FUNC_IMPL(__imp__sub_82EB50F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5110"))) PPC_WEAK_FUNC(sub_82EB5110);
PPC_FUNC_IMPL(__imp__sub_82EB5110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blelr cr6
	if (!cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5138"))) PPC_WEAK_FUNC(sub_82EB5138);
PPC_FUNC_IMPL(__imp__sub_82EB5138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82eb5150
	if (cr6.lt) goto loc_82EB5150;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EB5150:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5158"))) PPC_WEAK_FUNC(sub_82EB5158);
PPC_FUNC_IMPL(__imp__sub_82EB5158) {
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
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82EB5198"))) PPC_WEAK_FUNC(sub_82EB5198);
PPC_FUNC_IMPL(__imp__sub_82EB5198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	r11.s64 = 0;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EB51C8"))) PPC_WEAK_FUNC(sub_82EB51C8);
PPC_FUNC_IMPL(__imp__sub_82EB51C8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82eb521c
	if (cr6.lt) goto loc_82EB521C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82EB521C:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_82EB5238"))) PPC_WEAK_FUNC(sub_82EB5238);
PPC_FUNC_IMPL(__imp__sub_82EB5238) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,26
	ctx.r6.s64 = 26;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB52B8"))) PPC_WEAK_FUNC(sub_82EB52B8);
PPC_FUNC_IMPL(__imp__sub_82EB52B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EB52D8"))) PPC_WEAK_FUNC(sub_82EB52D8);
PPC_FUNC_IMPL(__imp__sub_82EB52D8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,6768
	ctx.r9.s64 = r11.s64 + 6768;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x82eb5238
	sub_82EB5238(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eb5330
	if (cr6.eq) goto loc_82EB5330;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_82EB5330:
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

__attribute__((alias("__imp__sub_82EB5348"))) PPC_WEAK_FUNC(sub_82EB5348);
PPC_FUNC_IMPL(__imp__sub_82EB5348) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,6768
	ctx.r10.s64 = r11.s64 + 6768;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb53a4
	if (cr6.eq) goto loc_82EB53A4;
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
	// bne cr6,0x82eb53a4
	if (!cr6.eq) goto loc_82EB53A4;
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
loc_82EB53A4:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r7,-22012
	ctx.r6.s64 = ctx.r7.s64 + -22012;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82EB53E8"))) PPC_WEAK_FUNC(sub_82EB53E8);
PPC_FUNC_IMPL(__imp__sub_82EB53E8) {
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
	// bl 0x82eb5348
	sub_82EB5348(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5430
	if (cr6.eq) goto loc_82EB5430;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,26
	ctx.r6.s64 = 26;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB5430:
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

__attribute__((alias("__imp__sub_82EB5450"))) PPC_WEAK_FUNC(sub_82EB5450);
PPC_FUNC_IMPL(__imp__sub_82EB5450) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831b7b48
	sub_831B7B48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x82eb5484
	if (cr6.gt) goto loc_82EB5484;
	// li r11,0
	r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_82EB5484:
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

__attribute__((alias("__imp__sub_82EB5498"))) PPC_WEAK_FUNC(sub_82EB5498);
PPC_FUNC_IMPL(__imp__sub_82EB5498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB54A8"))) PPC_WEAK_FUNC(sub_82EB54A8);
PPC_FUNC_IMPL(__imp__sub_82EB54A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB54B8"))) PPC_WEAK_FUNC(sub_82EB54B8);
PPC_FUNC_IMPL(__imp__sub_82EB54B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB54C8"))) PPC_WEAK_FUNC(sub_82EB54C8);
PPC_FUNC_IMPL(__imp__sub_82EB54C8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x831b7c38
	sub_831B7C38(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB54F8"))) PPC_WEAK_FUNC(sub_82EB54F8);
PPC_FUNC_IMPL(__imp__sub_82EB54F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x831ba358
	sub_831BA358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5500"))) PPC_WEAK_FUNC(sub_82EB5500);
PPC_FUNC_IMPL(__imp__sub_82EB5500) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r11,1
	r11.s64 = 1;
	// addi r9,r10,6828
	ctx.r9.s64 = ctx.r10.s64 + 6828;
	// li r8,-1
	ctx.r8.s64 = -1;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// addi r4,r7,6820
	ctx.r4.s64 = ctx.r7.s64 + 6820;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// bl 0x831ba078
	sub_831BA078(ctx, base);
	// cntlzw r6,r3
	ctx.r6.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 ^ 1;
	// stb r4,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r4.u8);
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

__attribute__((alias("__imp__sub_82EB5570"))) PPC_WEAK_FUNC(sub_82EB5570);
PPC_FUNC_IMPL(__imp__sub_82EB5570) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,6828
	ctx.r10.s64 = r11.s64 + 6828;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb55a0
	if (cr6.eq) goto loc_82EB55A0;
	// bl 0x831b8170
	sub_831B8170(ctx, base);
loc_82EB55A0:
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

__attribute__((alias("__imp__sub_82EB55C0"))) PPC_WEAK_FUNC(sub_82EB55C0);
PPC_FUNC_IMPL(__imp__sub_82EB55C0) {
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
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82EB5608"))) PPC_WEAK_FUNC(sub_82EB5608);
PPC_FUNC_IMPL(__imp__sub_82EB5608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EB5620"))) PPC_WEAK_FUNC(sub_82EB5620);
PPC_FUNC_IMPL(__imp__sub_82EB5620) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,6828
	ctx.r10.s64 = r11.s64 + 6828;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb5658
	if (cr6.eq) goto loc_82EB5658;
	// bl 0x831b8170
	sub_831B8170(ctx, base);
loc_82EB5658:
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
	// beq cr6,0x82eb568c
	if (cr6.eq) goto loc_82EB568C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,26
	ctx.r6.s64 = 26;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB568C:
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

__attribute__((alias("__imp__sub_82EB56A8"))) PPC_WEAK_FUNC(sub_82EB56A8);
PPC_FUNC_IMPL(__imp__sub_82EB56A8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5728
	if (cr6.eq) goto loc_82EB5728;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82eb5708
	if (!cr6.gt) goto loc_82EB5708;
loc_82EB56D4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r5,r31,r29
	ctx.r5.s64 = r29.s64 - r31.s64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb571c
	if (cr6.eq) goto loc_82EB571C;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x82eb56d4
	if (cr6.lt) goto loc_82EB56D4;
loc_82EB5708:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EB571C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EB5728:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB5738"))) PPC_WEAK_FUNC(sub_82EB5738);
PPC_FUNC_IMPL(__imp__sub_82EB5738) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r30,r11,r10
	r30.s64 = ctx.r10.s64 - r11.s64;
	// cmpw cr6,r27,r30
	cr6.compare<int32_t>(r27.s32, r30.s32, xer);
	// ble cr6,0x82eb57b4
	if (!cr6.gt) goto loc_82EB57B4;
loc_82EB5768:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r28,r28,r30
	r28.u64 = r28.u64 + r30.u64;
	// subf r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// bl 0x82eb56a8
	sub_82EB56A8(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bne cr6,0x82eb57e4
	if (!cr6.eq) goto loc_82EB57E4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r30,r11,r10
	r30.s64 = ctx.r10.s64 - r11.s64;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bgt cr6,0x82eb5768
	if (cr6.gt) goto loc_82EB5768;
loc_82EB57B4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_82EB57E4:
	// subf r3,r29,r27
	ctx.r3.s64 = r27.s64 - r29.s64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB57F0"))) PPC_WEAK_FUNC(sub_82EB57F0);
PPC_FUNC_IMPL(__imp__sub_82EB57F0) {
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
	// bl 0x82eb56a8
	sub_82EB56A8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5828
	if (cr6.eq) goto loc_82EB5828;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EB5828:
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

__attribute__((alias("__imp__sub_82EB5840"))) PPC_WEAK_FUNC(sub_82EB5840);
PPC_FUNC_IMPL(__imp__sub_82EB5840) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb588c
	if (cr6.eq) goto loc_82EB588C;
	// bl 0x82eb56a8
	sub_82EB56A8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EB588C:
	// li r11,-1
	r11.s64 = -1;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// blt cr6,0x82eb58bc
	if (cr6.lt) goto loc_82EB58BC;
	// beq cr6,0x82eb58b0
	if (cr6.eq) goto loc_82EB58B0;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// bge cr6,0x82eb58c0
	if (!cr6.lt) goto loc_82EB58C0;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// b 0x82eb58c0
	goto loc_82EB58C0;
loc_82EB58B0:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// b 0x82eb58c0
	goto loc_82EB58C0;
loc_82EB58BC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB58C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82eb58e0
	if (!cr6.lt) goto loc_82EB58E0;
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EB58E0:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82eb58f4
	if (!cr6.gt) goto loc_82EB58F4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EB58F4:
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB5900"))) PPC_WEAK_FUNC(sub_82EB5900);
PPC_FUNC_IMPL(__imp__sub_82EB5900) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5958
	if (cr6.eq) goto loc_82EB5958;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82eb5960
	if (cr6.lt) goto loc_82EB5960;
loc_82EB593C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82EB5958:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82eb593c
	goto loc_82EB593C;
loc_82EB5960:
	// li r3,-1
	ctx.r3.s64 = -1;
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

__attribute__((alias("__imp__sub_82EB5978"))) PPC_WEAK_FUNC(sub_82EB5978);
PPC_FUNC_IMPL(__imp__sub_82EB5978) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,6880
	ctx.r8.s64 = r11.s64 + 6880;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// extsb r11,r6
	r11.s64 = ctx.r6.s8;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bne cr6,0x82eb59c8
	if (!cr6.eq) goto loc_82EB59C8;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82EB59C8:
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stb r10,24(r31)
	PPC_STORE_U8(r31.u32 + 24, ctx.r10.u8);
	// beq cr6,0x82eb59e0
	if (cr6.eq) goto loc_82EB59E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82eb2a68
	sub_82EB2A68(ctx, base);
loc_82EB59E0:
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

__attribute__((alias("__imp__sub_82EB59F8"))) PPC_WEAK_FUNC(sub_82EB59F8);
PPC_FUNC_IMPL(__imp__sub_82EB59F8) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5a34
	if (cr6.eq) goto loc_82EB5A34;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82eb5a50
	goto loc_82EB5A50;
loc_82EB5A34:
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
loc_82EB5A50:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

__attribute__((alias("__imp__sub_82EB5A70"))) PPC_WEAK_FUNC(sub_82EB5A70);
PPC_FUNC_IMPL(__imp__sub_82EB5A70) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5aac
	if (cr6.eq) goto loc_82EB5AAC;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82eb5ab4
	goto loc_82EB5AB4;
loc_82EB5AAC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
loc_82EB5AB4:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
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

__attribute__((alias("__imp__sub_82EB5AD8"))) PPC_WEAK_FUNC(sub_82EB5AD8);
PPC_FUNC_IMPL(__imp__sub_82EB5AD8) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r11,1
	r11.s64 = 1;
	// addi r9,r10,6880
	ctx.r9.s64 = ctx.r10.s64 + 6880;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5b34
	if (cr6.eq) goto loc_82EB5B34;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eb5b34
	if (cr6.eq) goto loc_82EB5B34;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_82EB5B34:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,26
	ctx.r6.s64 = 26;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5B88"))) PPC_WEAK_FUNC(sub_82EB5B88);
PPC_FUNC_IMPL(__imp__sub_82EB5B88) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,6880
	ctx.r10.s64 = r11.s64 + 6880;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82eb56a8
	sub_82EB56A8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb5bc8
	if (cr6.eq) goto loc_82EB5BC8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EB5BC8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb5c0c
	if (cr6.eq) goto loc_82EB5C0C;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5c0c
	if (cr6.eq) goto loc_82EB5C0C;
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
	// bne cr6,0x82eb5c0c
	if (!cr6.eq) goto loc_82EB5C0C;
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
loc_82EB5C0C:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5c38
	if (cr6.eq) goto loc_82EB5C38;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EB5C38:
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

__attribute__((alias("__imp__sub_82EB5C58"))) PPC_WEAK_FUNC(sub_82EB5C58);
PPC_FUNC_IMPL(__imp__sub_82EB5C58) {
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
	// bl 0x82eb5b88
	sub_82EB5B88(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5ca0
	if (cr6.eq) goto loc_82EB5CA0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,26
	ctx.r6.s64 = 26;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB5CA0:
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

__attribute__((alias("__imp__sub_82EB5CC0"))) PPC_WEAK_FUNC(sub_82EB5CC0);
PPC_FUNC_IMPL(__imp__sub_82EB5CC0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x831ba078
	sub_831BA078(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82EB5CF8"))) PPC_WEAK_FUNC(sub_82EB5CF8);
PPC_FUNC_IMPL(__imp__sub_82EB5CF8) {
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
	// beq cr6,0x82eb5d28
	if (cr6.eq) goto loc_82EB5D28;
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5d28
	if (cr6.eq) goto loc_82EB5D28;
	// bl 0x831b8170
	sub_831B8170(ctx, base);
loc_82EB5D28:
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82EB5D48"))) PPC_WEAK_FUNC(sub_82EB5D48);
PPC_FUNC_IMPL(__imp__sub_82EB5D48) {
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
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82eb5db0
	if (cr6.eq) goto loc_82EB5DB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831b7fb0
	sub_831B7FB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82eb5da8
	if (cr6.gt) goto loc_82EB5DA8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb5da0
	if (cr6.eq) goto loc_82EB5DA0;
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5da0
	if (cr6.eq) goto loc_82EB5DA0;
	// bl 0x831b8170
	sub_831B8170(ctx, base);
loc_82EB5DA0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82EB5DA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82eb5db4
	goto loc_82EB5DB4;
loc_82EB5DB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB5DB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5DD0"))) PPC_WEAK_FUNC(sub_82EB5DD0);
PPC_FUNC_IMPL(__imp__sub_82EB5DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x831b9430
	sub_831B9430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5DE0"))) PPC_WEAK_FUNC(sub_82EB5DE0);
PPC_FUNC_IMPL(__imp__sub_82EB5DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5DE8"))) PPC_WEAK_FUNC(sub_82EB5DE8);
PPC_FUNC_IMPL(__imp__sub_82EB5DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5E00"))) PPC_WEAK_FUNC(sub_82EB5E00);
PPC_FUNC_IMPL(__imp__sub_82EB5E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5E10"))) PPC_WEAK_FUNC(sub_82EB5E10);
PPC_FUNC_IMPL(__imp__sub_82EB5E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5E20"))) PPC_WEAK_FUNC(sub_82EB5E20);
PPC_FUNC_IMPL(__imp__sub_82EB5E20) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x831b7c38
	sub_831B7C38(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB5E50"))) PPC_WEAK_FUNC(sub_82EB5E50);
PPC_FUNC_IMPL(__imp__sub_82EB5E50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x831ba358
	sub_831BA358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB5E58"))) PPC_WEAK_FUNC(sub_82EB5E58);
PPC_FUNC_IMPL(__imp__sub_82EB5E58) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,6920
	ctx.r9.s64 = r11.s64 + 6920;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stb r8,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r8.u8);
	// bne cr6,0x82eb5e9c
	if (!cr6.eq) goto loc_82EB5E9C;
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// b 0x82eb5ea4
	goto loc_82EB5EA4;
loc_82EB5E9C:
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
loc_82EB5EA4:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82EB5EC0"))) PPC_WEAK_FUNC(sub_82EB5EC0);
PPC_FUNC_IMPL(__imp__sub_82EB5EC0) {
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r11,1
	r11.s64 = 1;
	// addi r9,r10,6920
	ctx.r9.s64 = ctx.r10.s64 + 6920;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// beq cr6,0x82eb5f10
	if (cr6.eq) goto loc_82EB5F10;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,6960
	ctx.r4.s64 = r11.s64 + 6960;
	// bl 0x831ba078
	sub_831BA078(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_82EB5F10:
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

__attribute__((alias("__imp__sub_82EB5F28"))) PPC_WEAK_FUNC(sub_82EB5F28);
PPC_FUNC_IMPL(__imp__sub_82EB5F28) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,6920
	ctx.r10.s64 = r11.s64 + 6920;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb5f64
	if (cr6.eq) goto loc_82EB5F64;
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5f64
	if (cr6.eq) goto loc_82EB5F64;
	// bl 0x831b8170
	sub_831B8170(ctx, base);
loc_82EB5F64:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-22012
	ctx.r9.s64 = r11.s64 + -22012;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82EB5F90"))) PPC_WEAK_FUNC(sub_82EB5F90);
PPC_FUNC_IMPL(__imp__sub_82EB5F90) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,6920
	ctx.r10.s64 = r11.s64 + 6920;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb5fd4
	if (cr6.eq) goto loc_82EB5FD4;
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb5fd4
	if (cr6.eq) goto loc_82EB5FD4;
	// bl 0x831b8170
	sub_831B8170(ctx, base);
loc_82EB5FD4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-22012
	ctx.r9.s64 = r11.s64 + -22012;
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eb6010
	if (cr6.eq) goto loc_82EB6010;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,26
	ctx.r6.s64 = 26;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB6010:
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

__attribute__((alias("__imp__sub_82EB6030"))) PPC_WEAK_FUNC(sub_82EB6030);
PPC_FUNC_IMPL(__imp__sub_82EB6030) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82eb6084
	if (!cr6.gt) goto loc_82EB6084;
loc_82EB6054:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r5,r31,r30
	ctx.r5.s64 = r30.s64 - r31.s64;
	// add r4,r31,r28
	ctx.r4.u64 = r31.u64 + r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb6090
	if (cr6.eq) goto loc_82EB6090;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x82eb6054
	if (cr6.lt) goto loc_82EB6054;
loc_82EB6084:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EB6090:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EB60A0"))) PPC_WEAK_FUNC(sub_82EB60A0);
PPC_FUNC_IMPL(__imp__sub_82EB60A0) {
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
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82EB60E0"))) PPC_WEAK_FUNC(sub_82EB60E0);
PPC_FUNC_IMPL(__imp__sub_82EB60E0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82eb6134
	if (!cr6.gt) goto loc_82EB6134;
loc_82EB6104:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r5,r31,r30
	ctx.r5.s64 = r30.s64 - r31.s64;
	// add r4,r31,r28
	ctx.r4.u64 = r31.u64 + r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb6140
	if (cr6.eq) goto loc_82EB6140;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x82eb6104
	if (cr6.lt) goto loc_82EB6104;
loc_82EB6134:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EB6140:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EB6150"))) PPC_WEAK_FUNC(sub_82EB6150);
PPC_FUNC_IMPL(__imp__sub_82EB6150) {
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
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82EB6190"))) PPC_WEAK_FUNC(sub_82EB6190);
PPC_FUNC_IMPL(__imp__sub_82EB6190) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,36
	ctx.r9.s64 = 36;
	// li r4,-1
	ctx.r4.s64 = -1;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82eb9610
	sub_82EB9610(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB61D8"))) PPC_WEAK_FUNC(sub_82EB61D8);
PPC_FUNC_IMPL(__imp__sub_82EB61D8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r29,1
	r29.s64 = 1;
	// addi r8,r11,7060
	ctx.r8.s64 = r11.s64 + 7060;
	// li r11,0
	r11.s64 = 0;
	// sth r29,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r29.u16);
	// lis r30,-31943
	r30.s64 = -2093416448;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r7,r10,6968
	ctx.r7.s64 = ctx.r10.s64 + 6968;
	// sth r29,14(r31)
	PPC_STORE_U16(r31.u32 + 14, r29.u16);
	// addi r6,r9,7020
	ctx.r6.s64 = ctx.r9.s64 + 7020;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// sth r29,26(r31)
	PPC_STORE_U16(r31.u32 + 26, r29.u16);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r31,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r31.u32);
	// stw r31,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r31.u32);
	// lbz r11,31248(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 31248);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb6260
	if (!cr6.eq) goto loc_82EB6260;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r10,-12836(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -12836);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eb6260
	if (cr6.eq) goto loc_82EB6260;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r29,31248(r30)
	PPC_STORE_U8(r30.u32 + 31248, r29.u8);
loc_82EB6260:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB6270"))) PPC_WEAK_FUNC(sub_82EB6270);
PPC_FUNC_IMPL(__imp__sub_82EB6270) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-22012
	ctx.r9.s64 = r11.s64 + -22012;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82eb62c0
	if (cr6.eq) goto loc_82EB62C0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB62C0:
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

__attribute__((alias("__imp__sub_82EB62D8"))) PPC_WEAK_FUNC(sub_82EB62D8);
PPC_FUNC_IMPL(__imp__sub_82EB62D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB62E0"))) PPC_WEAK_FUNC(sub_82EB62E0);
PPC_FUNC_IMPL(__imp__sub_82EB62E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB62E8"))) PPC_WEAK_FUNC(sub_82EB62E8);
PPC_FUNC_IMPL(__imp__sub_82EB62E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB62F8"))) PPC_WEAK_FUNC(sub_82EB62F8);
PPC_FUNC_IMPL(__imp__sub_82EB62F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// addi r10,r10,-12720
	ctx.r10.s64 = ctx.r10.s64 + -12720;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6318"))) PPC_WEAK_FUNC(sub_82EB6318);
PPC_FUNC_IMPL(__imp__sub_82EB6318) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6320"))) PPC_WEAK_FUNC(sub_82EB6320);
PPC_FUNC_IMPL(__imp__sub_82EB6320) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6328"))) PPC_WEAK_FUNC(sub_82EB6328);
PPC_FUNC_IMPL(__imp__sub_82EB6328) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6330"))) PPC_WEAK_FUNC(sub_82EB6330);
PPC_FUNC_IMPL(__imp__sub_82EB6330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r3,r11
	ctx.r3.s64 = r11.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6340"))) PPC_WEAK_FUNC(sub_82EB6340);
PPC_FUNC_IMPL(__imp__sub_82EB6340) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6348"))) PPC_WEAK_FUNC(sub_82EB6348);
PPC_FUNC_IMPL(__imp__sub_82EB6348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb6358
	if (cr6.eq) goto loc_82EB6358;
	// b 0x82eafe98
	sub_82EAFE98(ctx, base);
	return;
loc_82EB6358:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6360"))) PPC_WEAK_FUNC(sub_82EB6360);
PPC_FUNC_IMPL(__imp__sub_82EB6360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
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
	// lbz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r11,-1
	r11.s64 = -1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r9,30
	cr6.compare<uint32_t>(ctx.r9.u32, 30, xer);
	// bgt cr6,0x82eb64b4
	if (cr6.gt) goto loc_82EB64B4;
	// lis r12,-32021
	r12.s64 = -2098528256;
	// addi r12,r12,25500
	r12.s64 = r12.s64 + 25500;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82EB6418;
	case 1:
		goto loc_82EB6418;
	case 2:
		goto loc_82EB6418;
	case 3:
		goto loc_82EB6418;
	case 4:
		goto loc_82EB6418;
	case 5:
		goto loc_82EB6418;
	case 6:
		goto loc_82EB6418;
	case 7:
		goto loc_82EB6418;
	case 8:
		goto loc_82EB6418;
	case 9:
		goto loc_82EB6418;
	case 10:
		goto loc_82EB6418;
	case 11:
		goto loc_82EB6418;
	case 12:
		goto loc_82EB6418;
	case 13:
		goto loc_82EB6418;
	case 14:
		goto loc_82EB6418;
	case 15:
		goto loc_82EB6418;
	case 16:
		goto loc_82EB6418;
	case 17:
		goto loc_82EB6418;
	case 18:
		goto loc_82EB64B4;
	case 19:
		goto loc_82EB6418;
	case 20:
		goto loc_82EB6418;
	case 21:
		goto loc_82EB6418;
	case 22:
		goto loc_82EB64B4;
	case 23:
		goto loc_82EB6454;
	case 24:
		goto loc_82EB6494;
	case 25:
		goto loc_82EB6418;
	case 26:
		goto loc_82EB6418;
	case 27:
		goto loc_82EB6418;
	case 28:
		goto loc_82EB6418;
	case 29:
		goto loc_82EB6418;
	case 30:
		goto loc_82EB6454;
	default:
		__builtin_unreachable();
	}
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25780(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25780);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25780(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25780);
	// lwz r23,25684(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25684);
	// lwz r23,25748(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25748);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25624(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25624);
	// lwz r23,25684(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 25684);
loc_82EB6418:
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82eb642c
	if (!cr6.eq) goto loc_82EB642C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82EB642C:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r8,-12720
	r11.s64 = ctx.r8.s64 + -12720;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// lhzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// mullw r11,r3,r9
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// b 0x82eb64b4
	goto loc_82EB64B4;
loc_82EB6454:
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82eb6468
	if (!cr6.eq) goto loc_82EB6468;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82EB6468:
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 1);
	// addi r10,r10,-12720
	ctx.r10.s64 = ctx.r10.s64 + -12720;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r7.u32);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mullw r11,r4,r8
	r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// b 0x82eb64b4
	goto loc_82EB64B4;
loc_82EB6494:
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r31,r11
	r31.s64 = r11.s16;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82eb64a8
	if (!cr6.eq) goto loc_82EB64A8;
	// li r31,1
	r31.s64 = 1;
loc_82EB64A8:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mullw r11,r3,r31
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
loc_82EB64B4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
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

__attribute__((alias("__imp__sub_82EB64D0"))) PPC_WEAK_FUNC(sub_82EB64D0);
PPC_FUNC_IMPL(__imp__sub_82EB64D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,16(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB64E0"))) PPC_WEAK_FUNC(sub_82EB64E0);
PPC_FUNC_IMPL(__imp__sub_82EB64E0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,12(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// beq cr6,0x82eb6504
	if (cr6.eq) goto loc_82EB6504;
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// bne cr6,0x82eb6508
	if (!cr6.eq) goto loc_82EB6508;
loc_82EB6504:
	// lbz r11,13(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 13);
loc_82EB6508:
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// bne cr6,0x82eb6570
	if (!cr6.eq) goto loc_82EB6570;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r29,1
	r29.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82eb6568
	if (!cr6.gt) goto loc_82EB6568;
loc_82EB6528:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82eb0158
	sub_82EB0158(ctx, base);
	// bl 0x82eb64e0
	sub_82EB64E0(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, r29.s32, xer);
	// ble cr6,0x82eb6554
	if (!cr6.gt) goto loc_82EB6554;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82eb0158
	sub_82EB0158(ctx, base);
	// bl 0x82eb64e0
	sub_82EB64E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82EB6554:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x82eb6528
	if (cr6.lt) goto loc_82EB6528;
loc_82EB6568:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82eb6590
	goto loc_82EB6590;
loc_82EB6570:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r9,-12720
	r11.s64 = ctx.r9.s64 + -12720;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,10
	ctx.r6.s64 = r11.s64 + 10;
	// lhzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
loc_82EB6590:
	// lhz r11,16(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 16);
	// rlwinm r10,r11,0,23,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x180;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eb65c4
	if (cr6.eq) goto loc_82EB65C4;
	// rlwinm r11,r11,24,24,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// ble cr6,0x82eb65c4
	if (!cr6.gt) goto loc_82EB65C4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_82EB65C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB65D0"))) PPC_WEAK_FUNC(sub_82EB65D0);
PPC_FUNC_IMPL(__imp__sub_82EB65D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,13(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB65D8"))) PPC_WEAK_FUNC(sub_82EB65D8);
PPC_FUNC_IMPL(__imp__sub_82EB65D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// beq cr6,0x82eb6620
	if (cr6.eq) goto loc_82EB6620;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(r11.u32, 31, xer);
	// beq cr6,0x82eb6620
	if (cr6.eq) goto loc_82EB6620;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(r11.u32, 25, xer);
	// beq cr6,0x82eb6618
	if (cr6.eq) goto loc_82EB6618;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r9,-12720
	r11.s64 = ctx.r9.s64 + -12720;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// lhzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// blr 
	return;
loc_82EB6618:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82eb0378
	sub_82EB0378(ctx, base);
	return;
loc_82EB6620:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6628"))) PPC_WEAK_FUNC(sub_82EB6628);
PPC_FUNC_IMPL(__imp__sub_82EB6628) {
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
	// bl 0x82eb6360
	sub_82EB6360(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82eb6674
	if (cr6.eq) goto loc_82EB6674;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82eb6668
	if (cr6.eq) goto loc_82EB6668;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82eb6680
	if (!cr6.eq) goto loc_82EB6680;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82eb6684
	goto loc_82EB6684;
loc_82EB6668:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// extsh r3,r11
	ctx.r3.s64 = r11.s16;
	// b 0x82eb6684
	goto loc_82EB6684;
loc_82EB6674:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// b 0x82eb6684
	goto loc_82EB6684;
loc_82EB6680:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82EB6684:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB66A0"))) PPC_WEAK_FUNC(sub_82EB66A0);
PPC_FUNC_IMPL(__imp__sub_82EB66A0) {
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
	// bl 0x82eb6360
	sub_82EB6360(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82eb66e8
	if (cr6.eq) goto loc_82EB66E8;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82eb66e0
	if (cr6.eq) goto loc_82EB66E0;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bne cr6,0x82eb66ec
	if (!cr6.eq) goto loc_82EB66EC;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82eb66ec
	goto loc_82EB66EC;
loc_82EB66E0:
	// sth r30,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r30.u16);
	// b 0x82eb66ec
	goto loc_82EB66EC;
loc_82EB66E8:
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
loc_82EB66EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB6708"))) PPC_WEAK_FUNC(sub_82EB6708);
PPC_FUNC_IMPL(__imp__sub_82EB6708) {
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
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + r11.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r11,r10,-12720
	r11.s64 = ctx.r10.s64 + -12720;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// bne cr6,0x82eb67f4
	if (!cr6.eq) goto loc_82EB67F4;
	// lwzx r29,r8,r7
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82eb67ac
	if (cr6.eq) goto loc_82EB67AC;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb67ac
	if (cr6.eq) goto loc_82EB67AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82eb6790
	if (!cr6.lt) goto loc_82EB6790;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb6780
	if (cr6.lt) goto loc_82EB6780;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB6780:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB6790:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EB67AC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82eb67d8
	if (!cr6.lt) goto loc_82EB67D8;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bgt cr6,0x82eb67cc
	if (cr6.gt) goto loc_82EB67CC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82EB67CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB67D8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EB67F4:
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r5,7104
	ctx.r4.s64 = ctx.r5.s64 + 7104;
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB6810"))) PPC_WEAK_FUNC(sub_82EB6810);
PPC_FUNC_IMPL(__imp__sub_82EB6810) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// addi r30,r11,16256
	r30.s64 = r11.s64 + 16256;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lbz r31,12(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb684c
	if (cr6.eq) goto loc_82EB684C;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x82eb6850
	goto loc_82EB6850;
loc_82EB684C:
	// mr r26,r30
	r26.u64 = r30.u64;
loc_82EB6850:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb6860
	if (cr6.eq) goto loc_82EB6860;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82EB6860:
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,20
	r24.s64 = 20;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r24,r25
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r27,0
	r27.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(r31.s32, 20, xer);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r27.u8);
	// blt cr6,0x82eb6b50
	if (cr6.lt) goto loc_82EB6B50;
	// cmpwi cr6,r31,27
	cr6.compare<int32_t>(r31.s32, 27, xer);
	// beq cr6,0x82eb6b50
	if (cr6.eq) goto loc_82EB6B50;
	// cmpwi cr6,r31,29
	cr6.compare<int32_t>(r31.s32, 29, xer);
	// beq cr6,0x82eb6b50
	if (cr6.eq) goto loc_82EB6B50;
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(r31.s32, 20, xer);
	// bne cr6,0x82eb69e8
	if (!cr6.eq) goto loc_82EB69E8;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb68d8
	if (cr6.eq) goto loc_82EB68D8;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,7296
	ctx.r4.s64 = r11.s64 + 7296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB68D8:
	// lbz r11,13(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 13);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82eb698c
	if (!cr6.eq) goto loc_82EB698C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r30,r11,7288
	r30.s64 = r11.s64 + 7288;
	// lbz r11,7288(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 7288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb694c
	if (cr6.eq) goto loc_82EB694C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// bge cr6,0x82eb6934
	if (!cr6.lt) goto loc_82EB6934;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb6924
	if (cr6.lt) goto loc_82EB6924;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB6924:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB6934:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB694C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82eb697c
	if (!cr6.lt) goto loc_82EB697C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x82eb696c
	if (cr6.gt) goto loc_82EB696C;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82EB696C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB697C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stb r27,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r27.u8);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB698C:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r30,r11,7280
	r30.s64 = r11.s64 + 7280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// bge cr6,0x82eb69d0
	if (!cr6.lt) goto loc_82EB69D0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb69c0
	if (cr6.lt) goto loc_82EB69C0;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB69C0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB69D0:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB69E8:
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(r31.s32, 22, xer);
	// beq cr6,0x82eb6a78
	if (cr6.eq) goto loc_82EB6A78;
	// cmpwi cr6,r31,26
	cr6.compare<int32_t>(r31.s32, 26, xer);
	// beq cr6,0x82eb6a78
	if (cr6.eq) goto loc_82EB6A78;
	// cmpwi cr6,r31,24
	cr6.compare<int32_t>(r31.s32, 24, xer);
	// bne cr6,0x82eb6a18
	if (!cr6.eq) goto loc_82EB6A18;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,7272
	ctx.r4.s64 = r11.s64 + 7272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB6A18:
	// cmpwi cr6,r31,31
	cr6.compare<int32_t>(r31.s32, 31, xer);
	// bne cr6,0x82eb6a38
	if (!cr6.eq) goto loc_82EB6A38;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,7260
	ctx.r4.s64 = r11.s64 + 7260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB6A38:
	// cmpwi cr6,r31,25
	cr6.compare<int32_t>(r31.s32, 25, xer);
	// bne cr6,0x82eb6b64
	if (!cr6.eq) goto loc_82EB6B64;
	// lhz r11,14(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 14);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// extsh r6,r11
	ctx.r6.s64 = r11.s16;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82eb6a68
	if (!cr6.eq) goto loc_82EB6A68;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,7248
	ctx.r4.s64 = r11.s64 + 7248;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB6A68:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,7232
	ctx.r4.s64 = r11.s64 + 7232;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB6A78:
	// lbz r11,13(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 13);
	// cmpwi cr6,r31,22
	cr6.compare<int32_t>(r31.s32, 22, xer);
	// bne cr6,0x82eb6a90
	if (!cr6.eq) goto loc_82EB6A90;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r5,r10,7224
	ctx.r5.s64 = ctx.r10.s64 + 7224;
	// b 0x82eb6a98
	goto loc_82EB6A98;
loc_82EB6A90:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r5,r10,7208
	ctx.r5.s64 = ctx.r10.s64 + 7208;
loc_82EB6A98:
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// blt cr6,0x82eb6b20
	if (cr6.lt) goto loc_82EB6B20;
	// cmpwi cr6,r11,29
	cr6.compare<int32_t>(r11.s32, 29, xer);
	// beq cr6,0x82eb6b20
	if (cr6.eq) goto loc_82EB6B20;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bne cr6,0x82eb6ae4
	if (!cr6.eq) goto loc_82EB6AE4;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb6ad4
	if (cr6.eq) goto loc_82EB6AD4;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r4,r11,7192
	ctx.r4.s64 = r11.s64 + 7192;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB6AD4:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,7176
	ctx.r4.s64 = r11.s64 + 7176;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB6AE4:
	// cmpwi cr6,r11,25
	cr6.compare<int32_t>(r11.s32, 25, xer);
	// bne cr6,0x82eb6b04
	if (!cr6.eq) goto loc_82EB6B04;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r4,r11,7156
	ctx.r4.s64 = r11.s64 + 7156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB6B04:
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(r11.s32, 28, xer);
	// bne cr6,0x82eb6b64
	if (!cr6.eq) goto loc_82EB6B64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7128
	ctx.r4.s64 = r11.s64 + 7128;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB6B20:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r9,-12720
	r11.s64 = ctx.r9.s64 + -12720;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,7112
	ctx.r4.s64 = ctx.r4.s64 + 7112;
	// lwzx r6,r7,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb6b64
	goto loc_82EB6B64;
loc_82EB6B50:
	// lhz r11,14(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 14);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsh r4,r11
	ctx.r4.s64 = r11.s16;
	// bl 0x82eb6708
	sub_82EB6708(ctx, base);
loc_82EB6B64:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82eb2940
	sub_82EB2940(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// addi r31,r9,-1
	r31.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb6ba0
	if (!cr6.eq) goto loc_82EB6BA0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r24,r25
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB6BA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82EB6BB0"))) PPC_WEAK_FUNC(sub_82EB6BB0);
PPC_FUNC_IMPL(__imp__sub_82EB6BB0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,7344
	ctx.r4.s64 = r11.s64 + 7344;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82eb2730
	sub_82EB2730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb6be4
	if (!cr6.eq) goto loc_82EB6BE4;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_82EB6BE4:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,7336
	ctx.r4.s64 = r11.s64 + 7336;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2730
	sub_82EB2730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb6c0c
	if (!cr6.eq) goto loc_82EB6C0C;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_82EB6C0C:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,7324
	ctx.r4.s64 = r11.s64 + 7324;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2730
	sub_82EB2730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb6c34
	if (!cr6.eq) goto loc_82EB6C34;
	// li r3,22
	ctx.r3.s64 = 22;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_82EB6C34:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,7308
	ctx.r4.s64 = r11.s64 + 7308;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2730
	sub_82EB2730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb6c5c
	if (!cr6.eq) goto loc_82EB6C5C;
	// li r3,26
	ctx.r3.s64 = 26;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_82EB6C5C:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r11,7288
	ctx.r4.s64 = r11.s64 + 7288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2730
	sub_82EB2730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb6c84
	if (!cr6.eq) goto loc_82EB6C84;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_82EB6C84:
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb29c0
	sub_82EB29C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb6cb0
	if (cr6.eq) goto loc_82EB6CB0;
	// lbz r11,1(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb6cb0
	if (!cr6.eq) goto loc_82EB6CB0;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_82EB6CB0:
	// li r27,0
	r27.s64 = 0;
	// lis r28,-32768
	r28.s64 = -2147483648;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// beq cr6,0x82eb6d20
	if (cr6.eq) goto loc_82EB6D20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82eb6d08
	if (!cr6.lt) goto loc_82EB6D08;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82eb6cf8
	if (cr6.lt) goto loc_82EB6CF8;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EB6CF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB6D08:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// b 0x82eb6d40
	goto loc_82EB6D40;
loc_82EB6D20:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	r11.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r27.u8);
loc_82EB6D40:
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb29b8
	sub_82EB29B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb6e34
	if (cr6.eq) goto loc_82EB6E34;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r31,r31,r3
	r31.s64 = ctx.r3.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// ble cr6,0x82eb6d6c
	if (!cr6.gt) goto loc_82EB6D6C;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82EB6D6C:
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic. r30,r31,1
	xer.ca = r31.u32 > 4294967294;
	r30.s64 = r31.s64 + 1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// ble 0x82eb6da0
	if (!cr0.gt) goto loc_82EB6DA0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// blt cr6,0x82eb6d94
	if (cr6.lt) goto loc_82EB6D94;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82EB6D94:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB6DA0:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stbx r27,r11,r31
	PPC_STORE_U8(r11.u32 + r31.u32, r27.u8);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82eb6df4
	if (!cr6.lt) goto loc_82EB6DF4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82eb6de4
	if (!cr6.lt) goto loc_82EB6DE4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EB6DE4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB6DF4:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb6e34
	if (!cr6.eq) goto loc_82EB6E34;
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
loc_82EB6E34:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r29,r11,-12720
	r29.s64 = r11.s64 + -12720;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
loc_82EB6E44:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb6ea4
	if (cr6.eq) goto loc_82EB6EA4;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r11,r29,388
	r11.s64 = r29.s64 + 388;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb6e44
	if (cr6.lt) goto loc_82EB6E44;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb6e98
	if (!cr6.eq) goto loc_82EB6E98;
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
loc_82EB6E98:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_82EB6EA4:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb6ed0
	if (!cr6.eq) goto loc_82EB6ED0;
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
loc_82EB6ED0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB6EE0"))) PPC_WEAK_FUNC(sub_82EB6EE0);
PPC_FUNC_IMPL(__imp__sub_82EB6EE0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,7324
	ctx.r4.s64 = r11.s64 + 7324;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82eb2730
	sub_82EB2730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb6fb0
	if (!cr6.eq) goto loc_82EB6FB0;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// addi r30,r3,-1
	r30.s64 = ctx.r3.s64 + -1;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addic. r29,r30,1
	xer.ca = r30.u32 > 4294967294;
	r29.s64 = r30.s64 + 1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ble 0x82eb6f50
	if (!cr0.gt) goto loc_82EB6F50;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// blt cr6,0x82eb6f44
	if (cr6.lt) goto loc_82EB6F44;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82EB6F44:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB6F50:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stbx r31,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, r31.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb6bb0
	sub_82EB6BB0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb6fa4
	if (!cr6.eq) goto loc_82EB6FA4;
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
loc_82EB6FA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
loc_82EB6FB0:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,7308
	ctx.r4.s64 = r11.s64 + 7308;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2730
	sub_82EB2730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb7074
	if (!cr6.eq) goto loc_82EB7074;
	// addi r28,r31,14
	r28.s64 = r31.s64 + 14;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// addi r30,r3,-1
	r30.s64 = ctx.r3.s64 + -1;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addic. r29,r30,1
	xer.ca = r30.u32 > 4294967294;
	r29.s64 = r30.s64 + 1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// ble 0x82eb7014
	if (!cr0.gt) goto loc_82EB7014;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// blt cr6,0x82eb7008
	if (cr6.lt) goto loc_82EB7008;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82EB7008:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB7014:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stbx r31,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, r31.u8);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82eb6bb0
	sub_82EB6BB0(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb7068
	if (!cr6.eq) goto loc_82EB7068;
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
loc_82EB7068:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
loc_82EB7074:
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb29b8
	sub_82EB29B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82eb7138
	if (cr6.eq) goto loc_82EB7138;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb29b8
	sub_82EB29B8(ctx, base);
	// subf r11,r28,r3
	r11.s64 = ctx.r3.s64 - r28.s64;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addic. r29,r30,1
	xer.ca = r30.u32 > 4294967294;
	r29.s64 = r30.s64 + 1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// ble 0x82eb70d8
	if (!cr0.gt) goto loc_82EB70D8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// blt cr6,0x82eb70cc
	if (cr6.lt) goto loc_82EB70CC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82EB70CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB70D8:
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stbx r31,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, r31.u8);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82eb2978
	sub_82EB2978(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb712c
	if (!cr6.eq) goto loc_82EB712C;
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
loc_82EB712C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
loc_82EB7138:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EB7148"))) PPC_WEAK_FUNC(sub_82EB7148);
PPC_FUNC_IMPL(__imp__sub_82EB7148) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7188"))) PPC_WEAK_FUNC(sub_82EB7188);
PPC_FUNC_IMPL(__imp__sub_82EB7188) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB71C8"))) PPC_WEAK_FUNC(sub_82EB71C8);
PPC_FUNC_IMPL(__imp__sub_82EB71C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB71E0"))) PPC_WEAK_FUNC(sub_82EB71E0);
PPC_FUNC_IMPL(__imp__sub_82EB71E0) {
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
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lbz r11,12(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb7220
	if (!cr6.eq) goto loc_82EB7220;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mullw r5,r30,r6
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(ctx.r6.s32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831b0b68
	return;
loc_82EB7220:
	// mullw. r28,r30,r6
	r28.s64 = int64_t(r30.s32) * int64_t(ctx.r6.s32);
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// li r29,512
	r29.s64 = 512;
	// srawi r10,r11,9
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = r11.s32 >> 9;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// divw r31,r29,r30
	r31.s32 = r29.s32 / r30.s32;
	// rlwinm r8,r9,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// twllei r30,0
	// subf r27,r8,r11
	r27.s64 = r11.s64 - ctx.r8.s64;
	// twllei r30,0
	// rotlwi r11,r27,1
	r11.u64 = __builtin_rotateleft32(r27.u32, 1);
	// divw r25,r27,r30
	r25.s32 = r27.s32 / r30.s32;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// andc r6,r30,r7
	ctx.r6.u64 = r30.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
	// ble 0x82eb7390
	if (!cr0.gt) goto loc_82EB7390;
loc_82EB7264:
	// cmpwi cr6,r28,512
	cr6.compare<int32_t>(r28.s32, 512, xer);
	// bge cr6,0x82eb7274
	if (!cr6.lt) goto loc_82EB7274;
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82EB7274:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// beq cr6,0x82eb733c
	if (cr6.eq) goto loc_82EB733C;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// beq cr6,0x82eb72fc
	if (cr6.eq) goto loc_82EB72FC;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// bne cr6,0x82eb7368
	if (!cr6.eq) goto loc_82EB7368;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82eb7368
	if (!cr6.gt) goto loc_82EB7368;
	// addi r11,r1,86
	r11.s64 = ctx.r1.s64 + 86;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82EB72AC:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbz r8,-6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + -6);
	// stb r9,-6(r11)
	PPC_STORE_U8(r11.u32 + -6, ctx.r9.u8);
	// stb r8,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,-5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + -5);
	// stb r7,-5(r11)
	PPC_STORE_U8(r11.u32 + -5, ctx.r7.u8);
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
	// lbz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + -4);
	// lbz r4,-1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// stb r4,-4(r11)
	PPC_STORE_U8(r11.u32 + -4, ctx.r4.u8);
	// stb r5,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r5.u8);
	// lbz r3,-3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + -3);
	// lbz r9,-2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// stb r9,-3(r11)
	PPC_STORE_U8(r11.u32 + -3, ctx.r9.u8);
	// stb r3,-2(r11)
	PPC_STORE_U8(r11.u32 + -2, ctx.r3.u8);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x82eb72ac
	if (!cr0.eq) goto loc_82EB72AC;
	// b 0x82eb7368
	goto loc_82EB7368;
loc_82EB72FC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82eb7368
	if (!cr6.gt) goto loc_82EB7368;
	// addi r11,r1,82
	r11.s64 = ctx.r1.s64 + 82;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82EB730C:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + -2);
	// stb r9,-2(r11)
	PPC_STORE_U8(r11.u32 + -2, ctx.r9.u8);
	// stb r8,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r8.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,-1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// stb r7,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r7.u8);
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82eb730c
	if (!cr0.eq) goto loc_82EB730C;
	// b 0x82eb7368
	goto loc_82EB7368;
loc_82EB733C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82eb7368
	if (!cr6.gt) goto loc_82EB7368;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82EB734C:
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r8,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r8.u8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x82eb734c
	if (!cr0.eq) goto loc_82EB734C;
loc_82EB7368:
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subf. r28,r29,r28
	r28.s64 = r28.s64 - r29.s64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// add r26,r29,r26
	r26.u64 = r29.u64 + r26.u64;
	// bgt 0x82eb7264
	if (cr0.gt) goto loc_82EB7264;
loc_82EB7390:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EB7398"))) PPC_WEAK_FUNC(sub_82EB7398);
PPC_FUNC_IMPL(__imp__sub_82EB7398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EB73B0"))) PPC_WEAK_FUNC(sub_82EB73B0);
PPC_FUNC_IMPL(__imp__sub_82EB73B0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB73B8"))) PPC_WEAK_FUNC(sub_82EB73B8);
PPC_FUNC_IMPL(__imp__sub_82EB73B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,12(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB73C8"))) PPC_WEAK_FUNC(sub_82EB73C8);
PPC_FUNC_IMPL(__imp__sub_82EB73C8) {
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
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82EB7408"))) PPC_WEAK_FUNC(sub_82EB7408);
PPC_FUNC_IMPL(__imp__sub_82EB7408) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7410"))) PPC_WEAK_FUNC(sub_82EB7410);
PPC_FUNC_IMPL(__imp__sub_82EB7410) {
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
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb7444
	if (cr6.eq) goto loc_82EB7444;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82EB7444:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb7480
	if (cr6.eq) goto loc_82EB7480;
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
	// bne cr6,0x82eb7480
	if (!cr6.eq) goto loc_82EB7480;
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
loc_82EB7480:
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB74A0"))) PPC_WEAK_FUNC(sub_82EB74A0);
PPC_FUNC_IMPL(__imp__sub_82EB74A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r5,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r5.u8);
	// addi r9,r11,7684
	ctx.r9.s64 = r11.s64 + 7684;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lhz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,6(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r4)
	PPC_STORE_U16(ctx.r4.u32 + 6, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB74D8"))) PPC_WEAK_FUNC(sub_82EB74D8);
PPC_FUNC_IMPL(__imp__sub_82EB74D8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r9,r11,7684
	ctx.r9.s64 = r11.s64 + 7684;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r5,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r5.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// lwz r3,31244(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31244);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82EB7538"))) PPC_WEAK_FUNC(sub_82EB7538);
PPC_FUNC_IMPL(__imp__sub_82EB7538) {
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
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r11,7684
	ctx.r8.s64 = r11.s64 + 7684;
	// li r7,20
	ctx.r7.s64 = 20;
	// stb r6,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r6.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,28
	ctx.r4.s64 = 28;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r6,28
	ctx.r6.s64 = 28;
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82eb5978
	sub_82EB5978(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB75B8"))) PPC_WEAK_FUNC(sub_82EB75B8);
PPC_FUNC_IMPL(__imp__sub_82EB75B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r31,1
	r31.s64 = 1;
	// addi r9,r11,7684
	ctx.r9.s64 = r11.s64 + 7684;
	// li r8,20
	ctx.r8.s64 = 20;
	// stb r5,12(r30)
	PPC_STORE_U8(r30.u32 + 12, ctx.r5.u8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// sth r31,6(r30)
	PPC_STORE_U16(r30.u32 + 6, r31.u16);
	// li r5,26
	ctx.r5.s64 = 26;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// sth r31,6(r28)
	PPC_STORE_U16(r28.u32 + 6, r31.u16);
	// addi r5,r7,4116
	ctx.r5.s64 = ctx.r7.s64 + 4116;
	// sth r6,4(r28)
	PPC_STORE_U16(r28.u32 + 4, ctx.r6.u16);
	// stw r5,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r4,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r4.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r31.u32);
	// bl 0x82eae290
	sub_82EAE290(ctx, base);
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EB7640"))) PPC_WEAK_FUNC(sub_82EB7640);
PPC_FUNC_IMPL(__imp__sub_82EB7640) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,7684
	ctx.r10.s64 = r11.s64 + 7684;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb769c
	if (cr6.eq) goto loc_82EB769C;
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
	// bne cr6,0x82eb769c
	if (!cr6.eq) goto loc_82EB769C;
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
loc_82EB769C:
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

__attribute__((alias("__imp__sub_82EB76C0"))) PPC_WEAK_FUNC(sub_82EB76C0);
PPC_FUNC_IMPL(__imp__sub_82EB76C0) {
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
	// sth r4,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r4.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,126
	ctx.r4.s64 = ctx.r1.s64 + 126;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB76F0"))) PPC_WEAK_FUNC(sub_82EB76F0);
PPC_FUNC_IMPL(__imp__sub_82EB76F0) {
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
	// sth r4,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r4.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,126
	ctx.r4.s64 = ctx.r1.s64 + 126;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7720"))) PPC_WEAK_FUNC(sub_82EB7720);
PPC_FUNC_IMPL(__imp__sub_82EB7720) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7750"))) PPC_WEAK_FUNC(sub_82EB7750);
PPC_FUNC_IMPL(__imp__sub_82EB7750) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7780"))) PPC_WEAK_FUNC(sub_82EB7780);
PPC_FUNC_IMPL(__imp__sub_82EB7780) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB77B0"))) PPC_WEAK_FUNC(sub_82EB77B0);
PPC_FUNC_IMPL(__imp__sub_82EB77B0) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB77E0"))) PPC_WEAK_FUNC(sub_82EB77E0);
PPC_FUNC_IMPL(__imp__sub_82EB77E0) {
	PPC_FUNC_PROLOGUE();
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7810"))) PPC_WEAK_FUNC(sub_82EB7810);
PPC_FUNC_IMPL(__imp__sub_82EB7810) {
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
	// stfd f1,120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f1.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7840"))) PPC_WEAK_FUNC(sub_82EB7840);
PPC_FUNC_IMPL(__imp__sub_82EB7840) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,12(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb7878
	if (!cr6.eq) goto loc_82EB7878;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831b0b74
	return;
loc_82EB7878:
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// srawi r10,r11,9
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = r11.s32 >> 9;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// li r31,512
	r31.s64 = 512;
	// rlwinm r8,r9,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// subf r27,r8,r11
	r27.s64 = r11.s64 - ctx.r8.s64;
	// ble cr6,0x82eb78e4
	if (!cr6.gt) goto loc_82EB78E4;
loc_82EB78A0:
	// cmpwi cr6,r30,512
	cr6.compare<int32_t>(r30.s32, 512, xer);
	// bge cr6,0x82eb78ac
	if (!cr6.lt) goto loc_82EB78AC;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82EB78AC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subf. r30,r31,r30
	r30.s64 = r30.s64 - r31.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r29,r31,r29
	r29.u64 = r31.u64 + r29.u64;
	// bgt 0x82eb78a0
	if (cr0.gt) goto loc_82EB78A0;
loc_82EB78E4:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB78F0"))) PPC_WEAK_FUNC(sub_82EB78F0);
PPC_FUNC_IMPL(__imp__sub_82EB78F0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r11,12(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb7928
	if (!cr6.eq) goto loc_82EB7928;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831b0b74
	return;
loc_82EB7928:
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// srawi r10,r11,9
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FF) != 0);
	ctx.r10.s64 = r11.s32 >> 9;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// li r31,512
	r31.s64 = 512;
	// rlwinm r8,r9,9,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// subf r27,r8,r11
	r27.s64 = r11.s64 - ctx.r8.s64;
	// ble cr6,0x82eb7994
	if (!cr6.gt) goto loc_82EB7994;
loc_82EB7950:
	// cmpwi cr6,r30,512
	cr6.compare<int32_t>(r30.s32, 512, xer);
	// bge cr6,0x82eb795c
	if (!cr6.lt) goto loc_82EB795C;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82EB795C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subf. r30,r31,r30
	r30.s64 = r30.s64 - r31.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r29,r31,r29
	r29.u64 = r31.u64 + r29.u64;
	// bgt 0x82eb7950
	if (cr0.gt) goto loc_82EB7950;
loc_82EB7994:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB79A0"))) PPC_WEAK_FUNC(sub_82EB79A0);
PPC_FUNC_IMPL(__imp__sub_82EB79A0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82eb71e0
	sub_82EB71E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB79B0"))) PPC_WEAK_FUNC(sub_82EB79B0);
PPC_FUNC_IMPL(__imp__sub_82EB79B0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82eb71e0
	sub_82EB71E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB79C0"))) PPC_WEAK_FUNC(sub_82EB79C0);
PPC_FUNC_IMPL(__imp__sub_82EB79C0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82eb71e0
	sub_82EB71E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB79D0"))) PPC_WEAK_FUNC(sub_82EB79D0);
PPC_FUNC_IMPL(__imp__sub_82EB79D0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82eb71e0
	sub_82EB71E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB79E0"))) PPC_WEAK_FUNC(sub_82EB79E0);
PPC_FUNC_IMPL(__imp__sub_82EB79E0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82eb71e0
	sub_82EB71E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB79F0"))) PPC_WEAK_FUNC(sub_82EB79F0);
PPC_FUNC_IMPL(__imp__sub_82EB79F0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82eb71e0
	sub_82EB71E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7A00"))) PPC_WEAK_FUNC(sub_82EB7A00);
PPC_FUNC_IMPL(__imp__sub_82EB7A00) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82eb71e0
	sub_82EB71E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7A10"))) PPC_WEAK_FUNC(sub_82EB7A10);
PPC_FUNC_IMPL(__imp__sub_82EB7A10) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82eb71e0
	sub_82EB71E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB7A20"))) PPC_WEAK_FUNC(sub_82EB7A20);
PPC_FUNC_IMPL(__imp__sub_82EB7A20) {
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
	// bl 0x82eb7640
	sub_82EB7640(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb7a68
	if (cr6.eq) goto loc_82EB7A68;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,26
	ctx.r6.s64 = 26;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB7A68:
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

__attribute__((alias("__imp__sub_82EB7A88"))) PPC_WEAK_FUNC(sub_82EB7A88);
PPC_FUNC_IMPL(__imp__sub_82EB7A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82eb7abc
	if (!cr6.gt) goto loc_82EB7ABC;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82EB7AA0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r4
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, xer);
	// beq cr6,0x82eb7ac4
	if (cr6.eq) goto loc_82EB7AC4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82eb7aa0
	if (cr6.lt) goto loc_82EB7AA0;
loc_82EB7ABC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82EB7AC4:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7AE0"))) PPC_WEAK_FUNC(sub_82EB7AE0);
PPC_FUNC_IMPL(__imp__sub_82EB7AE0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eb7b3c
	if (!cr6.gt) goto loc_82EB7B3C;
	// li r30,0
	r30.s64 = 0;
loc_82EB7B0C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82eb2738
	sub_82EB2738(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb7b48
	if (cr6.eq) goto loc_82EB7B48;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82eb7b0c
	if (cr6.lt) goto loc_82EB7B0C;
loc_82EB7B3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_82EB7B48:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB7B68"))) PPC_WEAK_FUNC(sub_82EB7B68);
PPC_FUNC_IMPL(__imp__sub_82EB7B68) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82eb74a0
	sub_82EB74A0(ctx, base);
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb7398
	sub_82EB7398(ctx, base);
	// lwz r27,8(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82eb7bfc
	if (!cr6.gt) goto loc_82EB7BFC;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82EB7BC0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r29,r30,r11
	r29.u64 = r30.u64 + r11.u64;
	// lwz r26,4(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb7398
	sub_82EB7398(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82eb7720
	sub_82EB7720(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82eb7bc0
	if (!cr0.eq) goto loc_82EB7BC0;
loc_82EB7BFC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb7720
	sub_82EB7720(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb7640
	sub_82EB7640(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EB7C18"))) PPC_WEAK_FUNC(sub_82EB7C18);
PPC_FUNC_IMPL(__imp__sub_82EB7C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb7c28
	if (cr6.eq) goto loc_82EB7C28;
	// b 0x82eafe98
	sub_82EAFE98(ctx, base);
	return;
loc_82EB7C28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7C30"))) PPC_WEAK_FUNC(sub_82EB7C30);
PPC_FUNC_IMPL(__imp__sub_82EB7C30) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addic. r25,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r25.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x82eb7cd4
	if (cr0.lt) goto loc_82EB7CD4;
	// rlwinm r27,r25,3,0,28
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
loc_82EB7C64:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82eb7cd4
	if (cr6.eq) goto loc_82EB7CD4;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// and r10,r30,r29
	ctx.r10.u64 = r30.u64 & r29.u64;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bne cr6,0x82eb7cc8
	if (!cr6.eq) goto loc_82EB7CC8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82eb7ca8
	if (!cr6.eq) goto loc_82EB7CA8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EB7CA8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// andc r29,r29,r30
	r29.u64 = r29.u64 & ~r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82EB7CC8:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r27,r27,-8
	r27.s64 = r27.s64 + -8;
	// bge 0x82eb7c64
	if (!cr0.lt) goto loc_82EB7C64;
loc_82EB7CD4:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// stw r29,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r29.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EB7CF0"))) PPC_WEAK_FUNC(sub_82EB7CF0);
PPC_FUNC_IMPL(__imp__sub_82EB7CF0) {
	PPC_FUNC_PROLOGUE();
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb7e60
	sub_82EB7E60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb7b68
	sub_82EB7B68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb7e50
	sub_82EB7E50(ctx, base);
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

__attribute__((alias("__imp__sub_82EB7D38"))) PPC_WEAK_FUNC(sub_82EB7D38);
PPC_FUNC_IMPL(__imp__sub_82EB7D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	// lis r10,-4680
	ctx.r10.s64 = -306708480;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ori r11,r10,33568
	r11.u64 = ctx.r10.u64 | 33568;
	// rlwinm r10,r3,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x82eb7d54
	if (cr6.eq) goto loc_82EB7D54;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_82EB7D54:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb7d68
	if (cr6.eq) goto loc_82EB7D68;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_82EB7D68:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb7d7c
	if (cr6.eq) goto loc_82EB7D7C;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_82EB7D7C:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb7d90
	if (cr6.eq) goto loc_82EB7D90;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_82EB7D90:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb7da4
	if (cr6.eq) goto loc_82EB7DA4;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_82EB7DA4:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb7db8
	if (cr6.eq) goto loc_82EB7DB8;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_82EB7DB8:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb7dcc
	if (cr6.eq) goto loc_82EB7DCC;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ r11.u64;
loc_82EB7DCC:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eb7de4
	if (cr6.eq) goto loc_82EB7DE4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// xor r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 ^ r11.u64;
	// blr 
	return;
loc_82EB7DE4:
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7DF0"))) PPC_WEAK_FUNC(sub_82EB7DF0);
PPC_FUNC_IMPL(__imp__sub_82EB7DF0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwz r30,8(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// ble cr6,0x82eb7e3c
	if (!cr6.gt) goto loc_82EB7E3C;
loc_82EB7E18:
	// lbzx r11,r31,r28
	r11.u64 = PPC_LOAD_U8(r31.u32 + r28.u32);
	// xor r10,r11,r30
	ctx.r10.u64 = r11.u64 ^ r30.u64;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82eb7d38
	sub_82EB7D38(ctx, base);
	// rlwinm r9,r30,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xFFFFFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// xor r30,r3,r9
	r30.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x82eb7e18
	if (cr6.lt) goto loc_82EB7E18;
loc_82EB7E3C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB7E50"))) PPC_WEAK_FUNC(sub_82EB7E50);
PPC_FUNC_IMPL(__imp__sub_82EB7E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// not r3,r11
	ctx.r3.u64 = ~r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7E60"))) PPC_WEAK_FUNC(sub_82EB7E60);
PPC_FUNC_IMPL(__imp__sub_82EB7E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,7700
	ctx.r9.s64 = r11.s64 + 7700;
	// not r8,r4
	ctx.r8.u64 = ~ctx.r4.u64;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7E80"))) PPC_WEAK_FUNC(sub_82EB7E80);
PPC_FUNC_IMPL(__imp__sub_82EB7E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7E90"))) PPC_WEAK_FUNC(sub_82EB7E90);
PPC_FUNC_IMPL(__imp__sub_82EB7E90) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-22012
	ctx.r9.s64 = r11.s64 + -22012;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82eb7ed8
	if (cr6.eq) goto loc_82EB7ED8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,26
	ctx.r6.s64 = 26;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB7ED8:
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

__attribute__((alias("__imp__sub_82EB7EF0"))) PPC_WEAK_FUNC(sub_82EB7EF0);
PPC_FUNC_IMPL(__imp__sub_82EB7EF0) {
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
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82eb7f48
	if (cr6.eq) goto loc_82EB7F48;
loc_82EB7F10:
	// cmpwi cr6,r31,512
	cr6.compare<int32_t>(r31.s32, 512, xer);
	// li r5,512
	ctx.r5.s64 = 512;
	// bgt cr6,0x82eb7f20
	if (cr6.gt) goto loc_82EB7F20;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82EB7F20:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb7f48
	if (cr6.eq) goto loc_82EB7F48;
	// subf. r31,r3,r31
	r31.s64 = r31.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82eb7f10
	if (!cr0.eq) goto loc_82EB7F10;
loc_82EB7F48:
	// subf r3,r31,r29
	ctx.r3.s64 = r29.s64 - r31.s64;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB7F58"))) PPC_WEAK_FUNC(sub_82EB7F58);
PPC_FUNC_IMPL(__imp__sub_82EB7F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb7f9c
	if (cr6.eq) goto loc_82EB7F9C;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82EB7F9C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7FB0"))) PPC_WEAK_FUNC(sub_82EB7FB0);
PPC_FUNC_IMPL(__imp__sub_82EB7FB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7FB8"))) PPC_WEAK_FUNC(sub_82EB7FB8);
PPC_FUNC_IMPL(__imp__sub_82EB7FB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7FC0"))) PPC_WEAK_FUNC(sub_82EB7FC0);
PPC_FUNC_IMPL(__imp__sub_82EB7FC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7FC8"))) PPC_WEAK_FUNC(sub_82EB7FC8);
PPC_FUNC_IMPL(__imp__sub_82EB7FC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7FD0"))) PPC_WEAK_FUNC(sub_82EB7FD0);
PPC_FUNC_IMPL(__imp__sub_82EB7FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7FE0"))) PPC_WEAK_FUNC(sub_82EB7FE0);
PPC_FUNC_IMPL(__imp__sub_82EB7FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB7FF0"))) PPC_WEAK_FUNC(sub_82EB7FF0);
PPC_FUNC_IMPL(__imp__sub_82EB7FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82ea90e0
	sub_82EA90E0(ctx, base);
	// addi r11,r1,464
	r11.s64 = ctx.r1.s64 + 464;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// addi r9,r1,432
	ctx.r9.s64 = ctx.r1.s64 + 432;
	// addi r8,r1,448
	ctx.r8.s64 = ctx.r1.s64 + 448;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-22120(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -22120);
	f0.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f31,-12568(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12568);
	f31.f64 = double(temp.f32);
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82eb8084
	goto loc_82EB8084;
loc_82EB806C:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82EB8084:
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// stvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82eb1548
	sub_82EB1548(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82eb12c8
	sub_82EB12C8(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82eb1738
	sub_82EB1738(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,352
	r11.s64 = ctx.r1.s64 + 352;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// stvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82eb1360
	sub_82EB1360(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,30
	cr6.compare<int32_t>(r30.s32, 30, xer);
	// bge cr6,0x82eb8154
	if (!cr6.lt) goto loc_82EB8154;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82eb13f0
	sub_82EB13F0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb806c
	if (cr6.eq) goto loc_82EB806C;
loc_82EB8154:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,192
	ctx.r4.s64 = 192;
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,176
	ctx.r5.s64 = 176;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stvx128 v13,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stvx128 v12,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v10,r31,r4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v9,v10,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// lvx128 v11,r31,r5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stvx128 v9,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(f0.f64)));
	// vor v5,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lfs f31,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f31.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fdivs f9,f31,f13
	ctx.f9.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v6,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v11,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v4,v5,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v5.f32), 0xEF));
	// stvx128 v4,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f8,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// vspltw v2,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), 0xFF));
	// stvx128 v8,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f10,f31,f11
	ctx.f10.f64 = double(float(f31.f64 / ctx.f11.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v7,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v3,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// vmulfp128 v0,v11,v3
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v3.f32)));
	// fsqrts f7,f8
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// vmulfp128 v13,v10,v2
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v2.f32)));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// vpermwi128 v30,v0,135
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v29,v13,99
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v28,v13,135
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v27,v0,99
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v26,v30,v29
	simde_mm_store_ps(v26.f32, simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(v29.f32)));
	// vmulfp128 v25,v27,v28
	simde_mm_store_ps(v25.f32, simde_mm_mul_ps(simde_mm_load_ps(v27.f32), simde_mm_load_ps(v28.f32)));
	// vsubfp v24,v25,v26
	simde_mm_store_ps(v24.f32, simde_mm_sub_ps(simde_mm_load_ps(v25.f32), simde_mm_load_ps(v26.f32)));
	// fdivs f6,f31,f7
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f6.f64 = double(float(f31.f64 / ctx.f7.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v1,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v31,v1,0
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v1.u32), 0xFF));
	// vmulfp128 v12,v5,v31
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(v31.f32)));
	// vmsum3fp128 v11,v12,v24
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v24.f32), 0xEF));
	// stvewx v11,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f30,2240(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2240);
	f30.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fcmpu cr6,f5,f30
	cr6.compare(ctx.f5.f64, f30.f64);
	// bge cr6,0x82eb827c
	if (!cr6.lt) goto loc_82EB827C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v10,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vmulfp128 v12,v12,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)));
loc_82EB827C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stvewx v11,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// li r11,1
	r11.s64 = 1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x82eb8298
	if (cr6.lt) goto loc_82EB8298;
	// li r11,0
	r11.s64 = 0;
loc_82EB8298:
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// stb r11,50(r31)
	PPC_STORE_U8(r31.u32 + 50, r11.u8);
	// addi r9,r1,496
	ctx.r9.s64 = ctx.r1.s64 + 496;
	// addi r8,r1,512
	ctx.r8.s64 = ctx.r1.s64 + 512;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82eaf760
	sub_82EAF760(ctx, base);
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// addi r9,r4,-12096
	ctx.r9.s64 = ctx.r4.s64 + -12096;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// vmsum4fp128 v12,v13,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// stvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(f0.f64)));
	// fdivs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v11,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v10,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v9,v13,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v9,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v7,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ea8d80
	sub_82EA8D80(ctx, base);
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// bl 0x82eb1860
	sub_82EB1860(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f11,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f9,104(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r10,r4,-14192
	ctx.r10.s64 = ctx.r4.s64 + -14192;
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r3,-31943
	ctx.r3.s64 = -2093416448;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw v6,-1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r3,30848
	ctx.r9.s64 = ctx.r3.s64 + 30848;
	// lvx128 v5,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v3,v5,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), 0xFF));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v1,v0,v3
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v3.f32)));
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,224
	ctx.r8.s64 = 224;
	// lfs f30,-21804(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21804);
	f30.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v4,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v2,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), 0xFF));
	// vand v31,v1,v0
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v13,r9,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgefp v30,v2,v31
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v30.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(v31.f32)));
	// vor v29,v30,v13
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vcmpequw. v28,v29,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	cr6.setFromMask(simde_mm_load_ps(v28.f32), 0xF);
	// mfocrf r7,2
	ctx.r7.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// not r5,r7
	ctx.r5.u64 = ~ctx.r7.u64;
	// lvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v27,v0,v0
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_setzero_si128());
	// rlwinm r3,r5,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stb r3,48(r31)
	PPC_STORE_U8(r31.u32 + 48, ctx.r3.u8);
	// lfs f5,32(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r1,208
	r11.s64 = ctx.r1.s64 + 208;
	// lfs f7,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// fdivs f6,f31,f7
	ctx.f6.f64 = double(float(f31.f64 / ctx.f7.f64));
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f3,f31,f5
	ctx.f3.f64 = double(float(f31.f64 / ctx.f5.f64));
	// stvx128 v27,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fdivs f4,f31,f8
	ctx.f4.f64 = double(float(f31.f64 / ctx.f8.f64));
	// stvx128 v27,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// stvx128 v27,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stfs f3,192(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f6,232(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x82eb1860
	sub_82EB1860(ctx, base);
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// addi r5,r9,29456
	ctx.r5.s64 = ctx.r9.s64 + 29456;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82eb13f0
	sub_82EB13F0(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stb r5,49(r31)
	PPC_STORE_U8(r31.u32 + 49, ctx.r5.u8);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB8470"))) PPC_WEAK_FUNC(sub_82EB8470);
PPC_FUNC_IMPL(__imp__sub_82EB8470) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eb7ff0
	sub_82EB7FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB8478"))) PPC_WEAK_FUNC(sub_82EB8478);
PPC_FUNC_IMPL(__imp__sub_82EB8478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lvx128 v13,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r8,r11,31104
	ctx.r8.s64 = r11.s64 + 31104;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r3,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82eb7ff0
	sub_82EB7FF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB84E0"))) PPC_WEAK_FUNC(sub_82EB84E0);
PPC_FUNC_IMPL(__imp__sub_82EB84E0) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb8544
	if (cr6.eq) goto loc_82EB8544;
	// subf r29,r4,r5
	r29.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_82EB8504:
	// lwzx r5,r29,r31
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82eb8544
	if (cr6.eq) goto loc_82EB8544;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eb8534
	if (cr6.eq) goto loc_82EB8534;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EB8534:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb8504
	if (!cr6.eq) goto loc_82EB8504;
loc_82EB8544:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB8550"))) PPC_WEAK_FUNC(sub_82EB8550);
PPC_FUNC_IMPL(__imp__sub_82EB8550) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r8,20
	ctx.r8.s64 = 20;
	// addi r7,r9,7740
	ctx.r7.s64 = ctx.r9.s64 + 7740;
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r8,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r8.u16);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// sth r6,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r6.u16);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
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

__attribute__((alias("__imp__sub_82EB85B8"))) PPC_WEAK_FUNC(sub_82EB85B8);
PPC_FUNC_IMPL(__imp__sub_82EB85B8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82eb85fc
	if (cr6.lt) goto loc_82EB85FC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
loc_82EB85E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82eb85fc
	if (!cr6.eq) goto loc_82EB85FC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// ble cr6,0x82eb85e0
	if (!cr6.gt) goto loc_82EB85E0;
loc_82EB85FC:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82eb8610
	if (!cr6.gt) goto loc_82EB8610;
	// li r11,0
	r11.s64 = 0;
loc_82EB8610:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eb8688
	if (cr6.eq) goto loc_82EB8688;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82eb8680
	if (cr6.gt) goto loc_82EB8680;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EB8664:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x82eb8680
	if (!cr6.eq) goto loc_82EB8680;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x82eb8664
	if (!cr6.gt) goto loc_82EB8664;
loc_82EB8680:
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82eb85fc
	goto loc_82EB85FC;
loc_82EB8688:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB8690"))) PPC_WEAK_FUNC(sub_82EB8690);
PPC_FUNC_IMPL(__imp__sub_82EB8690) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB8698"))) PPC_WEAK_FUNC(sub_82EB8698);
PPC_FUNC_IMPL(__imp__sub_82EB8698) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82eb4028
	sub_82EB4028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB86A8"))) PPC_WEAK_FUNC(sub_82EB86A8);
PPC_FUNC_IMPL(__imp__sub_82EB86A8) {
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
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
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
	// beq cr6,0x82eb8700
	if (cr6.eq) goto loc_82EB8700;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB8700:
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

__attribute__((alias("__imp__sub_82EB8720"))) PPC_WEAK_FUNC(sub_82EB8720);
PPC_FUNC_IMPL(__imp__sub_82EB8720) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,-12156
	r30.s64 = r11.s64 + -12156;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82EB8748:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb878c
	if (cr6.eq) goto loc_82EB878C;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb8748
	if (cr6.lt) goto loc_82EB8748;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_82EB878C:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r9,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r9.u8);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r8,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EB87B0"))) PPC_WEAK_FUNC(sub_82EB87B0);
PPC_FUNC_IMPL(__imp__sub_82EB87B0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,7784
	ctx.r9.s64 = r11.s64 + 7784;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
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

__attribute__((alias("__imp__sub_82EB87F8"))) PPC_WEAK_FUNC(sub_82EB87F8);
PPC_FUNC_IMPL(__imp__sub_82EB87F8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82EB8810:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb8720
	sub_82EB8720(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb886c
	if (!cr6.eq) goto loc_82EB886C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82eb8810
	if (!cr6.eq) goto loc_82EB8810;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb0388
	sub_82EB0388(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_82EB886C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB8878"))) PPC_WEAK_FUNC(sub_82EB8878);
PPC_FUNC_IMPL(__imp__sub_82EB8878) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,45
	ctx.r5.s64 = 45;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r8,20
	ctx.r8.s64 = 20;
	// addi r7,r9,7784
	ctx.r7.s64 = ctx.r9.s64 + 7784;
	// li r6,1
	ctx.r6.s64 = 1;
	// sth r8,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r8.u16);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// sth r6,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r6.u16);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
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

__attribute__((alias("__imp__sub_82EB88E0"))) PPC_WEAK_FUNC(sub_82EB88E0);
PPC_FUNC_IMPL(__imp__sub_82EB88E0) {
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
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82eb891c
	if (!cr6.gt) goto loc_82EB891C;
	// li r11,0
	r11.s64 = 0;
loc_82EB891C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eb8930
	if (cr6.eq) goto loc_82EB8930;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb4110
	sub_82EB4110(ctx, base);
loc_82EB8930:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8948"))) PPC_WEAK_FUNC(sub_82EB8948);
PPC_FUNC_IMPL(__imp__sub_82EB8948) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82eb8980
	if (!cr6.gt) goto loc_82EB8980;
	// li r11,0
	r11.s64 = 0;
loc_82EB8980:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eb89ac
	if (cr6.eq) goto loc_82EB89AC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EB89AC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EB89C8"))) PPC_WEAK_FUNC(sub_82EB89C8);
PPC_FUNC_IMPL(__imp__sub_82EB89C8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82eb8a08
	if (!cr6.gt) goto loc_82EB8A08;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EB8A08:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82eb8a44
	if (cr6.eq) goto loc_82EB8A44;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stb r9,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r9.u8);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r5,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EB8A44:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EB8A58"))) PPC_WEAK_FUNC(sub_82EB8A58);
PPC_FUNC_IMPL(__imp__sub_82EB8A58) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82EB8A74:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82eb8a94
	if (!cr6.gt) goto loc_82EB8A94;
	// li r11,0
	r11.s64 = 0;
loc_82EB8A94:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82eb8ac8
	if (!cr6.eq) goto loc_82EB8AC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82eb8a74
	if (!cr6.eq) goto loc_82EB8A74;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb87f8
	sub_82EB87F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EB8AC8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EB8AE8"))) PPC_WEAK_FUNC(sub_82EB8AE8);
PPC_FUNC_IMPL(__imp__sub_82EB8AE8) {
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
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
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
	// beq cr6,0x82eb8b40
	if (cr6.eq) goto loc_82EB8B40;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,45
	ctx.r6.s64 = 45;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB8B40:
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

__attribute__((alias("__imp__sub_82EB8B60"))) PPC_WEAK_FUNC(sub_82EB8B60);
PPC_FUNC_IMPL(__imp__sub_82EB8B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,18(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 18);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8B78"))) PPC_WEAK_FUNC(sub_82EB8B78);
PPC_FUNC_IMPL(__imp__sub_82EB8B78) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82eb01e8
	sub_82EB01E8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb8bc0
	if (cr6.eq) goto loc_82EB8BC0;
	// lhz r11,18(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82EB8BC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8BD8"))) PPC_WEAK_FUNC(sub_82EB8BD8);
PPC_FUNC_IMPL(__imp__sub_82EB8BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,18(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 18);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8BF0"))) PPC_WEAK_FUNC(sub_82EB8BF0);
PPC_FUNC_IMPL(__imp__sub_82EB8BF0) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82eb01e8
	sub_82EB01E8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb8c38
	if (cr6.eq) goto loc_82EB8C38;
	// lhz r11,18(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82EB8C38:
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

__attribute__((alias("__imp__sub_82EB8C58"))) PPC_WEAK_FUNC(sub_82EB8C58);
PPC_FUNC_IMPL(__imp__sub_82EB8C58) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82eb01e8
	sub_82EB01E8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb8ca0
	if (cr6.eq) goto loc_82EB8CA0;
	// lhz r11,18(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82EB8CA0:
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

__attribute__((alias("__imp__sub_82EB8CC0"))) PPC_WEAK_FUNC(sub_82EB8CC0);
PPC_FUNC_IMPL(__imp__sub_82EB8CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8CD8"))) PPC_WEAK_FUNC(sub_82EB8CD8);
PPC_FUNC_IMPL(__imp__sub_82EB8CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8CE0"))) PPC_WEAK_FUNC(sub_82EB8CE0);
PPC_FUNC_IMPL(__imp__sub_82EB8CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8CE8"))) PPC_WEAK_FUNC(sub_82EB8CE8);
PPC_FUNC_IMPL(__imp__sub_82EB8CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8CF8"))) PPC_WEAK_FUNC(sub_82EB8CF8);
PPC_FUNC_IMPL(__imp__sub_82EB8CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8D08"))) PPC_WEAK_FUNC(sub_82EB8D08);
PPC_FUNC_IMPL(__imp__sub_82EB8D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8D18"))) PPC_WEAK_FUNC(sub_82EB8D18);
PPC_FUNC_IMPL(__imp__sub_82EB8D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8D28"))) PPC_WEAK_FUNC(sub_82EB8D28);
PPC_FUNC_IMPL(__imp__sub_82EB8D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8D38"))) PPC_WEAK_FUNC(sub_82EB8D38);
PPC_FUNC_IMPL(__imp__sub_82EB8D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8D48"))) PPC_WEAK_FUNC(sub_82EB8D48);
PPC_FUNC_IMPL(__imp__sub_82EB8D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8D58"))) PPC_WEAK_FUNC(sub_82EB8D58);
PPC_FUNC_IMPL(__imp__sub_82EB8D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8D68"))) PPC_WEAK_FUNC(sub_82EB8D68);
PPC_FUNC_IMPL(__imp__sub_82EB8D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8D78"))) PPC_WEAK_FUNC(sub_82EB8D78);
PPC_FUNC_IMPL(__imp__sub_82EB8D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

