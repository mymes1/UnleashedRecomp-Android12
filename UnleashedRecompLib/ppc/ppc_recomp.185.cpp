#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82ED5258"))) PPC_WEAK_FUNC(sub_82ED5258);
PPC_FUNC_IMPL(__imp__sub_82ED5258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5260"))) PPC_WEAK_FUNC(sub_82ED5260);
PPC_FUNC_IMPL(__imp__sub_82ED5260) {
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
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed52d4
	if (cr6.eq) goto loc_82ED52D4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ed52d4
	if (cr6.eq) goto loc_82ED52D4;
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
	// bne cr6,0x82ed52d4
	if (!cr6.eq) goto loc_82ED52D4;
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
loc_82ED52D4:
	// stw r30,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ed52f8
	if (cr6.eq) goto loc_82ED52F8;
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed52f8
	if (cr6.eq) goto loc_82ED52F8;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r10.u16);
loc_82ED52F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5310"))) PPC_WEAK_FUNC(sub_82ED5310);
PPC_FUNC_IMPL(__imp__sub_82ED5310) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,396(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5318"))) PPC_WEAK_FUNC(sub_82ED5318);
PPC_FUNC_IMPL(__imp__sub_82ED5318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lwz r6,112(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,-13820
	ctx.r7.s64 = ctx.r9.s64 + -13820;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,84(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f28b08
	sub_82F28B08(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5370"))) PPC_WEAK_FUNC(sub_82ED5370);
PPC_FUNC_IMPL(__imp__sub_82ED5370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// stw r10,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r10.u32);
	// b 0x82ef02b0
	sub_82EF02B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ED5388"))) PPC_WEAK_FUNC(sub_82ED5388);
PPC_FUNC_IMPL(__imp__sub_82ED5388) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// b 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ED5390"))) PPC_WEAK_FUNC(sub_82ED5390);
PPC_FUNC_IMPL(__imp__sub_82ED5390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// li r11,-1
	r11.s64 = -1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// b 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ED53A0"))) PPC_WEAK_FUNC(sub_82ED53A0);
PPC_FUNC_IMPL(__imp__sub_82ED53A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED53A8"))) PPC_WEAK_FUNC(sub_82ED53A8);
PPC_FUNC_IMPL(__imp__sub_82ED53A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED53B0"))) PPC_WEAK_FUNC(sub_82ED53B0);
PPC_FUNC_IMPL(__imp__sub_82ED53B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,172(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// ld r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 32);
	// li r11,1
	r11.s64 = 1;
	// cmpdi cr6,r10,-1
	cr6.compare<int64_t>(ctx.r10.s64, -1, xer);
	// bne cr6,0x82ed53c8
	if (!cr6.eq) goto loc_82ED53C8;
	// li r11,0
	r11.s64 = 0;
loc_82ED53C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED53D0"))) PPC_WEAK_FUNC(sub_82ED53D0);
PPC_FUNC_IMPL(__imp__sub_82ED53D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,-1
	r11.s64 = -1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// b 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ED53E8"))) PPC_WEAK_FUNC(sub_82ED53E8);
PPC_FUNC_IMPL(__imp__sub_82ED53E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED53F0"))) PPC_WEAK_FUNC(sub_82ED53F0);
PPC_FUNC_IMPL(__imp__sub_82ED53F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,-1
	r11.s64 = -1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// b 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ED5408"))) PPC_WEAK_FUNC(sub_82ED5408);
PPC_FUNC_IMPL(__imp__sub_82ED5408) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5410"))) PPC_WEAK_FUNC(sub_82ED5410);
PPC_FUNC_IMPL(__imp__sub_82ED5410) {
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
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,20
	r30.s64 = 20;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r28,12
	r28.s64 = 12;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// bl 0x82ee50a0
	sub_82EE50A0(ctx, base);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,34
	ctx.r5.s64 = 34;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82ef3340
	sub_82EF3340(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// li r11,1
	r11.s64 = 1;
	// addi r7,r9,21576
	ctx.r7.s64 = ctx.r9.s64 + 21576;
	// li r6,20
	ctx.r6.s64 = 20;
	// sth r11,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r11.u16);
	// addi r5,r8,21428
	ctx.r5.s64 = ctx.r8.s64 + 21428;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// sth r6,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r6.u16);
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r4,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r11,14(r31)
	PPC_STORE_U16(r31.u32 + 14, r11.u16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82f2cd70
	sub_82F2CD70(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82f2cd70
	sub_82F2CD70(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82f2cd70
	sub_82F2CD70(ctx, base);
	// lhz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed552c
	if (cr6.eq) goto loc_82ED552C;
	// lhz r11,6(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r29)
	PPC_STORE_U16(r29.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ed552c
	if (!cr6.eq) goto loc_82ED552C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED552C:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed5568
	if (cr6.eq) goto loc_82ED5568;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ed5568
	if (!cr6.eq) goto loc_82ED5568;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED5568:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed55a4
	if (cr6.eq) goto loc_82ED55A4;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ed55a4
	if (!cr6.eq) goto loc_82ED55A4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED55A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82ED55B0"))) PPC_WEAK_FUNC(sub_82ED55B0);
PPC_FUNC_IMPL(__imp__sub_82ED55B0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed55fc
	if (cr6.eq) goto loc_82ED55FC;
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r7,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r7.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82ED55FC:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5628"))) PPC_WEAK_FUNC(sub_82ED5628);
PPC_FUNC_IMPL(__imp__sub_82ED5628) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed5674
	if (cr6.eq) goto loc_82ED5674;
	// li r11,1
	r11.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_82ED5674:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ee0f00
	sub_82EE0F00(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ed56a8
	if (!cr6.eq) goto loc_82ED56A8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
loc_82ED56A8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r30,224
	ctx.r5.s64 = r30.s64 + 224;
	// lfs f2,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x83206f38
	sub_83206F38(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r29,218(r30)
	PPC_STORE_U16(r30.u32 + 218, r29.u16);
	// sth r29,220(r30)
	PPC_STORE_U16(r30.u32 + 220, r29.u16);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r29,141(r31)
	PPC_STORE_U8(r31.u32 + 141, r29.u8);
	// stw r11,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r11.u32);
	// stw r11,192(r30)
	PPC_STORE_U32(r30.u32 + 192, r11.u32);
	// bl 0x82edd548
	sub_82EDD548(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ee7388
	sub_82EE7388(ctx, base);
	// lbz r11,711(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 711);
	// lbz r10,217(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 217);
	// clrlwi r7,r11,30
	ctx.r7.u64 = r11.u32 & 0x3;
	// lbz r8,710(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 710);
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// lbz r9,709(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 709);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x82ed5718
	if (!cr6.lt) goto loc_82ED5718;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
loc_82ED5718:
	// rlwinm r9,r9,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82ed5730
	if (!cr6.lt) goto loc_82ED5730;
	// not r11,r8
	r11.u64 = ~ctx.r8.u64;
	// rlwinm r11,r11,14,0,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
	// b 0x82ed5734
	goto loc_82ED5734;
loc_82ED5730:
	// rlwinm r11,r8,14,0,17
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
loc_82ED5734:
	// lhz r10,218(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 218);
	// li r8,1
	ctx.r8.s64 = 1;
	// lhz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 220);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi r6,r10,18
	ctx.r6.u64 = ctx.r10.u32 & 0x3FFF;
	// clrlwi r5,r7,18
	ctx.r5.u64 = ctx.r7.u32 & 0x3FFF;
	// or r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 | ctx.r9.u64;
	// or r11,r5,r11
	r11.u64 = ctx.r5.u64 | r11.u64;
	// sth r3,218(r30)
	PPC_STORE_U16(r30.u32 + 218, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,220(r30)
	PPC_STORE_U16(r30.u32 + 220, r11.u16);
	// stb r8,141(r31)
	PPC_STORE_U8(r31.u32 + 141, ctx.r8.u8);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r7.u32);
	// bl 0x82ee9710
	sub_82EE9710(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eebf38
	sub_82EEBF38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eeb428
	sub_82EEB428(ctx, base);
	// lwz r6,132(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addic. r11,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	r11.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82ed57bc
	if (!cr0.eq) goto loc_82ED57BC;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ed57bc
	if (!cr6.eq) goto loc_82ED57BC;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed57bc
	if (cr6.eq) goto loc_82ED57BC;
	// stw r29,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r29.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82ED57BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82ED57C8"))) PPC_WEAK_FUNC(sub_82ED57C8);
PPC_FUNC_IMPL(__imp__sub_82ED57C8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed5818
	if (cr6.eq) goto loc_82ED5818;
	// li r11,2
	r11.s64 = 2;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,0(r27)
	PPC_STORE_U8(r27.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_82ED5818:
	// li r28,1
	r28.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ee99b8
	sub_82EE99B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eec010
	sub_82EEC010(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eeb500
	sub_82EEB500(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r29,141(r31)
	PPC_STORE_U8(r31.u32 + 141, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ee8540
	sub_82EE8540(ctx, base);
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ed5884
	if (cr6.eq) goto loc_82ED5884;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lhz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 80);
	// li r6,2
	ctx.r6.s64 = 2;
	// rotlwi r5,r9,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// sth r29,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r29.u16);
loc_82ED5884:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ed58a4
	if (!cr6.eq) goto loc_82ED58A4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED58A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82edd568
	sub_82EDD568(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// stb r28,141(r31)
	PPC_STORE_U8(r31.u32 + 141, r28.u8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82ed58e4
	if (!cr0.eq) goto loc_82ED58E4;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ed58e4
	if (!cr6.eq) goto loc_82ED58E4;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed58e4
	if (cr6.eq) goto loc_82ED58E4;
	// stw r29,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r29.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82ED58E4:
	// stb r28,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r28.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82ED58F8"))) PPC_WEAK_FUNC(sub_82ED58F8);
PPC_FUNC_IMPL(__imp__sub_82ED58F8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ed593c
	if (cr0.eq) goto loc_82ED593C;
	// li r11,14
	r11.s64 = 14;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_82ED593C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eec298
	sub_82EEC298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eddc80
	sub_82EDDC80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ee9b00
	sub_82EE9B00(ctx, base);
	// lwz r9,232(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// ble cr6,0x82ed5998
	if (!cr6.gt) goto loc_82ED5998;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 228);
loc_82ED597C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82ed599c
	if (cr6.eq) goto loc_82ED599C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed597c
	if (cr6.lt) goto loc_82ED597C;
loc_82ED5998:
	// li r11,-1
	r11.s64 = -1;
loc_82ED599C:
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// lhz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// bne cr6,0x82ed59e0
	if (!cr6.eq) goto loc_82ED59E0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED59E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82edd568
	sub_82EDD568(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82ed5a1c
	if (!cr0.eq) goto loc_82ED5A1C;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ed5a1c
	if (!cr6.eq) goto loc_82ED5A1C;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed5a1c
	if (cr6.eq) goto loc_82ED5A1C;
	// stw r29,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r29.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82ED5A1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82ED5A28"))) PPC_WEAK_FUNC(sub_82ED5A28);
PPC_FUNC_IMPL(__imp__sub_82ED5A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,244(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5a58
	if (!cr6.gt) goto loc_82ED5A58;
	// lwz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
loc_82ED5A3C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5a5c
	if (cr6.eq) goto loc_82ED5A5C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5a3c
	if (cr6.lt) goto loc_82ED5A3C;
loc_82ED5A58:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5A5C:
	// lwz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5A70"))) PPC_WEAK_FUNC(sub_82ED5A70);
PPC_FUNC_IMPL(__imp__sub_82ED5A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,280(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5aa0
	if (!cr6.gt) goto loc_82ED5AA0;
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
loc_82ED5A84:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5aa4
	if (cr6.eq) goto loc_82ED5AA4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5a84
	if (cr6.lt) goto loc_82ED5A84;
loc_82ED5AA0:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5AA4:
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5AB8"))) PPC_WEAK_FUNC(sub_82ED5AB8);
PPC_FUNC_IMPL(__imp__sub_82ED5AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5ae8
	if (!cr6.gt) goto loc_82ED5AE8;
	// lwz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
loc_82ED5ACC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5aec
	if (cr6.eq) goto loc_82ED5AEC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5acc
	if (cr6.lt) goto loc_82ED5ACC;
loc_82ED5AE8:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5AEC:
	// lwz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5B00"))) PPC_WEAK_FUNC(sub_82ED5B00);
PPC_FUNC_IMPL(__imp__sub_82ED5B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,268(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5b30
	if (!cr6.gt) goto loc_82ED5B30;
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
loc_82ED5B14:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5b34
	if (cr6.eq) goto loc_82ED5B34;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5b14
	if (cr6.lt) goto loc_82ED5B14;
loc_82ED5B30:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5B34:
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5B48"))) PPC_WEAK_FUNC(sub_82ED5B48);
PPC_FUNC_IMPL(__imp__sub_82ED5B48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,304(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5b78
	if (!cr6.gt) goto loc_82ED5B78;
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
loc_82ED5B5C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5b7c
	if (cr6.eq) goto loc_82ED5B7C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5b5c
	if (cr6.lt) goto loc_82ED5B5C;
loc_82ED5B78:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5B7C:
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5B90"))) PPC_WEAK_FUNC(sub_82ED5B90);
PPC_FUNC_IMPL(__imp__sub_82ED5B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,340(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5bc0
	if (!cr6.gt) goto loc_82ED5BC0;
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
loc_82ED5BA4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5bc4
	if (cr6.eq) goto loc_82ED5BC4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5ba4
	if (cr6.lt) goto loc_82ED5BA4;
loc_82ED5BC0:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5BC4:
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5BD8"))) PPC_WEAK_FUNC(sub_82ED5BD8);
PPC_FUNC_IMPL(__imp__sub_82ED5BD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,316(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5c08
	if (!cr6.gt) goto loc_82ED5C08;
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
loc_82ED5BEC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5c0c
	if (cr6.eq) goto loc_82ED5C0C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5bec
	if (cr6.lt) goto loc_82ED5BEC;
loc_82ED5C08:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5C0C:
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5C20"))) PPC_WEAK_FUNC(sub_82ED5C20);
PPC_FUNC_IMPL(__imp__sub_82ED5C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5c50
	if (!cr6.gt) goto loc_82ED5C50;
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
loc_82ED5C34:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5c54
	if (cr6.eq) goto loc_82ED5C54;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5c34
	if (cr6.lt) goto loc_82ED5C34;
loc_82ED5C50:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5C54:
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5C68"))) PPC_WEAK_FUNC(sub_82ED5C68);
PPC_FUNC_IMPL(__imp__sub_82ED5C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,364(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5c98
	if (!cr6.gt) goto loc_82ED5C98;
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
loc_82ED5C7C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5c9c
	if (cr6.eq) goto loc_82ED5C9C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5c7c
	if (cr6.lt) goto loc_82ED5C7C;
loc_82ED5C98:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5C9C:
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5CB0"))) PPC_WEAK_FUNC(sub_82ED5CB0);
PPC_FUNC_IMPL(__imp__sub_82ED5CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,352(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5ce0
	if (!cr6.gt) goto loc_82ED5CE0;
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
loc_82ED5CC4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5ce4
	if (cr6.eq) goto loc_82ED5CE4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5cc4
	if (cr6.lt) goto loc_82ED5CC4;
loc_82ED5CE0:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5CE4:
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5CF8"))) PPC_WEAK_FUNC(sub_82ED5CF8);
PPC_FUNC_IMPL(__imp__sub_82ED5CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,376(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5d28
	if (!cr6.gt) goto loc_82ED5D28;
	// lwz r10,372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
loc_82ED5D0C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5d2c
	if (cr6.eq) goto loc_82ED5D2C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5d0c
	if (cr6.lt) goto loc_82ED5D0C;
loc_82ED5D28:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5D2C:
	// lwz r10,372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5D40"))) PPC_WEAK_FUNC(sub_82ED5D40);
PPC_FUNC_IMPL(__imp__sub_82ED5D40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5d70
	if (!cr6.gt) goto loc_82ED5D70;
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
loc_82ED5D54:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5d74
	if (cr6.eq) goto loc_82ED5D74;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5d54
	if (cr6.lt) goto loc_82ED5D54;
loc_82ED5D70:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5D74:
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5D88"))) PPC_WEAK_FUNC(sub_82ED5D88);
PPC_FUNC_IMPL(__imp__sub_82ED5D88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,388(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ed5db8
	if (!cr6.gt) goto loc_82ED5DB8;
	// lwz r10,384(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
loc_82ED5D9C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ed5dbc
	if (cr6.eq) goto loc_82ED5DBC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed5d9c
	if (cr6.lt) goto loc_82ED5D9C;
loc_82ED5DB8:
	// li r11,-1
	r11.s64 = -1;
loc_82ED5DBC:
	// lwz r10,384(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED5DD0"))) PPC_WEAK_FUNC(sub_82ED5DD0);
PPC_FUNC_IMPL(__imp__sub_82ED5DD0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82ed5eb8
	if (!cr6.eq) goto loc_82ED5EB8;
	// lwz r31,80(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ed5eb8
	if (cr6.eq) goto loc_82ED5EB8;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,29520(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 29520);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ed5eb8
	if (!cr6.eq) goto loc_82ED5EB8;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,24
	r29.s64 = 24;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed5e70
	if (!cr6.lt) goto loc_82ED5E70;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,21696
	ctx.r8.s64 = ctx.r9.s64 + 21696;
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
loc_82ED5E70:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed5eb8
	if (!cr6.lt) goto loc_82ED5EB8;
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
loc_82ED5EB8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82ED5EC8"))) PPC_WEAK_FUNC(sub_82ED5EC8);
PPC_FUNC_IMPL(__imp__sub_82ED5EC8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82ed5fb0
	if (!cr6.eq) goto loc_82ED5FB0;
	// lwz r31,80(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ed5fb0
	if (cr6.eq) goto loc_82ED5FB0;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,29520(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 29520);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ed5fb0
	if (!cr6.eq) goto loc_82ED5FB0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,24
	r29.s64 = 24;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed5f68
	if (!cr6.lt) goto loc_82ED5F68;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,21696
	ctx.r8.s64 = ctx.r9.s64 + 21696;
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
loc_82ED5F68:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed5fb0
	if (!cr6.lt) goto loc_82ED5FB0;
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
loc_82ED5FB0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82ED5FC0"))) PPC_WEAK_FUNC(sub_82ED5FC0);
PPC_FUNC_IMPL(__imp__sub_82ED5FC0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x82ef2348
	sub_82EF2348(ctx, base);
	// lwz r31,80(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ed6090
	if (cr6.eq) goto loc_82ED6090;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,29520(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 29520);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ed6090
	if (!cr6.eq) goto loc_82ED6090;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,24
	r29.s64 = 24;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed6048
	if (!cr6.lt) goto loc_82ED6048;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,21696
	ctx.r8.s64 = ctx.r9.s64 + 21696;
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
loc_82ED6048:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed6090
	if (!cr6.lt) goto loc_82ED6090;
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
loc_82ED6090:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82ED6098"))) PPC_WEAK_FUNC(sub_82ED6098);
PPC_FUNC_IMPL(__imp__sub_82ED6098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,16
	r11.s64 = 16;
	// li r10,720
	ctx.r10.s64 = 720;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,736
	ctx.r8.s64 = 736;
	// li r7,64
	ctx.r7.s64 = 64;
	// lvx128 v0,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r4,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,760(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	// stw r6,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// lvx128 v13,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r3,r8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r4,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,108(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r11,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, r11.u32);
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// stw r10,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r10.u32);
	// lwz r11,396(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed60fc
	if (cr6.eq) goto loc_82ED60FC;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// b 0x82ed6100
	goto loc_82ED6100;
loc_82ED60FC:
	// li r11,3
	r11.s64 = 3;
loc_82ED6100:
	// stb r11,40(r4)
	PPC_STORE_U8(ctx.r4.u32 + 40, r11.u8);
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lfs f0,7744(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7744);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lfs f13,7748(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7748);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// lfs f12,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 136, temp.u32);
	// lfs f11,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,136(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 136, temp.u32);
	// lbz r8,196(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 196);
	// stb r8,144(r4)
	PPC_STORE_U8(ctx.r4.u32 + 144, ctx.r8.u8);
	// lwz r7,80(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r7,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r7.u32);
	// lwz r6,752(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 752);
	// stw r6,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r6.u32);
	// lwz r5,756(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	// stw r5,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r5.u32);
	// lbz r11,768(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 768);
	// stb r11,112(r4)
	PPC_STORE_U8(ctx.r4.u32 + 112, r11.u8);
	// lfs f10,512(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f9,420(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,116(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lfs f8,424(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,120(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// lwz r10,692(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// stw r10,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r10.u32);
	// lwz r9,696(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// stw r9,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r9.u32);
	// lbz r8,708(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 708);
	// stb r8,132(r4)
	PPC_STORE_U8(ctx.r4.u32 + 132, ctx.r8.u8);
	// lbz r7,709(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 709);
	// stb r7,164(r4)
	PPC_STORE_U8(ctx.r4.u32 + 164, ctx.r7.u8);
	// lbz r6,710(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 710);
	// stb r6,165(r4)
	PPC_STORE_U8(ctx.r4.u32 + 165, ctx.r6.u8);
	// lbz r5,711(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 711);
	// stb r5,166(r4)
	PPC_STORE_U8(ctx.r4.u32 + 166, ctx.r5.u8);
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,148(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 148, temp.u32);
	// lwz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r8,108(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,152(r4)
	PPC_STORE_U32(ctx.r4.u32 + 152, ctx.r7.u32);
	// lwz r6,108(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lbz r5,104(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 104);
	// stb r5,145(r4)
	PPC_STORE_U8(ctx.r4.u32 + 145, ctx.r5.u8);
	// lbz r11,198(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 198);
	// stb r11,167(r4)
	PPC_STORE_U8(ctx.r4.u32 + 167, r11.u8);
	// lfs f6,204(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,172(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 172, temp.u32);
	// lbz r10,208(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// stb r10,180(r4)
	PPC_STORE_U8(ctx.r4.u32 + 180, ctx.r10.u8);
	// lwz r9,212(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// stw r9,176(r4)
	PPC_STORE_U32(ctx.r4.u32 + 176, ctx.r9.u32);
	// lwz r8,216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// stw r8,184(r4)
	PPC_STORE_U32(ctx.r4.u32 + 184, ctx.r8.u32);
	// lfs f5,200(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,168(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 168, temp.u32);
	// lbz r7,197(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 197);
	// stb r7,188(r4)
	PPC_STORE_U8(ctx.r4.u32 + 188, ctx.r7.u8);
	// lwz r6,220(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// stb r6,189(r4)
	PPC_STORE_U8(ctx.r4.u32 + 189, ctx.r6.u8);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f4,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,200(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lbz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 184);
	// stb r10,190(r4)
	PPC_STORE_U8(ctx.r4.u32 + 190, ctx.r10.u8);
	// lbz r9,160(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// stb r9,196(r4)
	PPC_STORE_U8(ctx.r4.u32 + 196, ctx.r9.u8);
	// lwz r8,164(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r8,192(r4)
	PPC_STORE_U32(ctx.r4.u32 + 192, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED6230"))) PPC_WEAK_FUNC(sub_82ED6230);
PPC_FUNC_IMPL(__imp__sub_82ED6230) {
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
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r6,112(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r11,0
	r11.s64 = 0;
	// addi r7,r9,21688
	ctx.r7.s64 = ctx.r9.s64 + 21688;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,84(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f2c710
	sub_82F2C710(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED6288"))) PPC_WEAK_FUNC(sub_82ED6288);
PPC_FUNC_IMPL(__imp__sub_82ED6288) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed631c
	if (cr6.eq) goto loc_82ED631C;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// addi r30,r11,72
	r30.s64 = r11.s64 + 72;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ed6304
	if (!cr6.gt) goto loc_82ED6304;
loc_82ED62C4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82ed62e0
	if (!cr6.eq) goto loc_82ED62E0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ed62f4
	if (cr6.eq) goto loc_82ED62F4;
loc_82ED62E0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ef3c98
	sub_82EF3C98(ctx, base);
loc_82ED62F4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ed62c4
	if (cr6.lt) goto loc_82ED62C4;
loc_82ED6304:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82ed6318
	if (cr6.gt) goto loc_82ED6318;
	// li r11,0
	r11.s64 = 0;
loc_82ED6318:
	// mr r25,r11
	r25.u64 = r11.u64;
loc_82ED631C:
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// addi r27,r29,52
	r27.s64 = r29.s64 + 52;
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r11
	r28.u64 = r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ed6398
	if (cr6.eq) goto loc_82ED6398;
loc_82ED633C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,72
	r29.s64 = r11.s64 + 72;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed637c
	if (!cr6.gt) goto loc_82ED637C;
	// li r30,0
	r30.s64 = 0;
loc_82ED6358:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ef3c98
	sub_82EF3C98(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ed6358
	if (cr6.lt) goto loc_82ED6358;
loc_82ED637C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ed633c
	if (!cr6.eq) goto loc_82ED633C;
loc_82ED6398:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82ed63b4
	if (cr6.gt) goto loc_82ED63B4;
	// extsb r11,r25
	r11.s64 = r25.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82ed63b8
	if (cr6.eq) goto loc_82ED63B8;
loc_82ED63B4:
	// li r11,1
	r11.s64 = 1;
loc_82ED63B8:
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82ED63C8"))) PPC_WEAK_FUNC(sub_82ED63C8);
PPC_FUNC_IMPL(__imp__sub_82ED63C8) {
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
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r4,40
	r27.s64 = ctx.r4.s64 + 40;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// mr r28,r11
	r28.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ed6458
	if (cr6.eq) goto loc_82ED6458;
loc_82ED63FC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,72
	r29.s64 = r11.s64 + 72;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed643c
	if (!cr6.gt) goto loc_82ED643C;
	// li r30,0
	r30.s64 = 0;
loc_82ED6418:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82ef3c98
	sub_82EF3C98(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ed6418
	if (cr6.lt) goto loc_82ED6418;
loc_82ED643C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ed63fc
	if (!cr6.eq) goto loc_82ED63FC;
loc_82ED6458:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82ed6470
	if (cr6.gt) goto loc_82ED6470;
	// li r11,0
	r11.s64 = 0;
loc_82ED6470:
	// stb r11,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82ED6480"))) PPC_WEAK_FUNC(sub_82ED6480);
PPC_FUNC_IMPL(__imp__sub_82ED6480) {
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ed6288
	sub_82ED6288(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ed63c8
	sub_82ED63C8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED64E0"))) PPC_WEAK_FUNC(sub_82ED64E0);
PPC_FUNC_IMPL(__imp__sub_82ED64E0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed6588
	if (!cr6.gt) goto loc_82ED6588;
	// li r28,0
	r28.s64 = 0;
loc_82ED6508:
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// addi r31,r11,152
	r31.s64 = r11.s64 + 152;
	// lhz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 156);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ed6574
	if (cr6.eq) goto loc_82ED6574;
	// li r30,0
	r30.s64 = 0;
loc_82ED6528:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_82ED6534:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r9,23
	cr6.compare<uint32_t>(ctx.r9.u32, 23, xer);
	// blt cr6,0x82ed6548
	if (cr6.lt) goto loc_82ED6548;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// b 0x82ed6534
	goto loc_82ED6534;
loc_82ED6548:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// beq cr6,0x82ed6560
	if (cr6.eq) goto loc_82ED6560;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82ef3da8
	sub_82EF3DA8(ctx, base);
loc_82ED6560:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82ed6528
	if (cr6.lt) goto loc_82ED6528;
loc_82ED6574:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82ed6508
	if (cr6.lt) goto loc_82ED6508;
loc_82ED6588:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82ED6590"))) PPC_WEAK_FUNC(sub_82ED6590);
PPC_FUNC_IMPL(__imp__sub_82ED6590) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r28,40
	r30.s64 = r28.s64 + 40;
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// lwz r31,40(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ed65e8
	if (cr6.eq) goto loc_82ED65E8;
loc_82ED65C0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82ed64e0
	sub_82ED64E0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ed65c0
	if (!cr6.eq) goto loc_82ED65C0;
loc_82ED65E8:
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// addi r30,r28,52
	r30.s64 = r28.s64 + 52;
	// lwz r31,52(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ed662c
	if (cr6.eq) goto loc_82ED662C;
loc_82ED6604:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82ed64e0
	sub_82ED64E0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ed6604
	if (!cr6.eq) goto loc_82ED6604;
loc_82ED662C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82ED6638"))) PPC_WEAK_FUNC(sub_82ED6638);
PPC_FUNC_IMPL(__imp__sub_82ED6638) {
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r27,r25,40
	r27.s64 = r25.s64 + 40;
	// lwz r10,44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// lwz r11,40(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r11
	r28.u64 = r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ed66c8
	if (cr6.eq) goto loc_82ED66C8;
loc_82ED666C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,56
	r29.s64 = r11.s64 + 56;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed66ac
	if (!cr6.gt) goto loc_82ED66AC;
	// li r30,0
	r30.s64 = 0;
loc_82ED6688:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82ef3e38
	sub_82EF3E38(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ed6688
	if (cr6.lt) goto loc_82ED6688;
loc_82ED66AC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ed666c
	if (!cr6.eq) goto loc_82ED666C;
loc_82ED66C8:
	// lwz r10,56(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// addi r27,r25,52
	r27.s64 = r25.s64 + 52;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 52);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r11
	r28.u64 = r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ed6744
	if (cr6.eq) goto loc_82ED6744;
loc_82ED66E8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,56
	r29.s64 = r11.s64 + 56;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed6728
	if (!cr6.gt) goto loc_82ED6728;
	// li r30,0
	r30.s64 = 0;
loc_82ED6704:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ef3e38
	sub_82EF3E38(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ed6704
	if (cr6.lt) goto loc_82ED6704;
loc_82ED6728:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ed66e8
	if (!cr6.eq) goto loc_82ED66E8;
loc_82ED6744:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82ED6750"))) PPC_WEAK_FUNC(sub_82ED6750);
PPC_FUNC_IMPL(__imp__sub_82ED6750) {
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
	// addi r29,r3,228
	r29.s64 = ctx.r3.s64 + 228;
	// lwz r31,396(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// beq cr6,0x82ed67f8
	if (cr6.eq) goto loc_82ED67F8;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed682c
	if (!cr6.gt) goto loc_82ED682C;
	// li r30,0
	r30.s64 = 0;
loc_82ED6784:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ed67dc
	if (cr6.eq) goto loc_82ED67DC;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82ed67dc
	if (cr6.eq) goto loc_82ED67DC;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82ed67dc
	if (cr6.eq) goto loc_82ED67DC;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82ed67dc
	if (cr6.eq) goto loc_82ED67DC;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82ed67dc
	if (cr6.eq) goto loc_82ED67DC;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82ed67dc
	if (cr6.eq) goto loc_82ED67DC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ef3d20
	sub_82EF3D20(ctx, base);
loc_82ED67DC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82ed6784
	if (cr6.lt) goto loc_82ED6784;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_82ED67F8:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed682c
	if (!cr6.gt) goto loc_82ED682C;
	// li r31,0
	r31.s64 = 0;
loc_82ED6808:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82ef3d20
	sub_82EF3D20(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ed6808
	if (cr6.lt) goto loc_82ED6808;
loc_82ED682C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82ED6838"))) PPC_WEAK_FUNC(sub_82ED6838);
PPC_FUNC_IMPL(__imp__sub_82ED6838) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,68
	ctx.r9.s64 = 68;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82ef3738
	sub_82EF3738(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ed6288
	sub_82ED6288(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ed63c8
	sub_82ED63C8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stb r7,64(r30)
	PPC_STORE_U8(r30.u32 + 64, ctx.r7.u8);
	// bl 0x82ed6750
	sub_82ED6750(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed6590
	sub_82ED6590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed6638
	sub_82ED6638(ctx, base);
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

__attribute__((alias("__imp__sub_82ED68E8"))) PPC_WEAK_FUNC(sub_82ED68E8);
PPC_FUNC_IMPL(__imp__sub_82ED68E8) {
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
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed6928
	if (cr6.eq) goto loc_82ED6928;
	// li r11,34
	r11.s64 = 34;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// b 0x82ed6940
	goto loc_82ED6940;
loc_82ED6928:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED6940:
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

__attribute__((alias("__imp__sub_82ED6958"))) PPC_WEAK_FUNC(sub_82ED6958);
PPC_FUNC_IMPL(__imp__sub_82ED6958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lfs f13,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f12
	f0.f64 = double(float(ctx.f12.f64 - ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82ed6998
	if (!cr6.eq) goto loc_82ED6998;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x82ed69a4
	goto loc_82ED69A4;
loc_82ED6998:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_82ED69A4:
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
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
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED69D8"))) PPC_WEAK_FUNC(sub_82ED69D8);
PPC_FUNC_IMPL(__imp__sub_82ED69D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lfs f30,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f30.f64 = double(temp.f32);
	// lfs f31,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ed6a8c
	if (!cr6.gt) goto loc_82ED6A8C;
	// li r30,0
	r30.s64 = 0;
loc_82ED6A18:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f13
	f0.f64 = double(float(ctx.f13.f64 - ctx.f13.f64));
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r5,76(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r4,72(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x82ed6a50
	if (!cr6.eq) goto loc_82ED6A50;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x82ed6a54
	goto loc_82ED6A54;
loc_82ED6A50:
	// fdivs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 / f0.f64));
loc_82ED6A54:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed6a18
	if (cr6.lt) goto loc_82ED6A18;
loc_82ED6A8C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed6b14
	if (!cr6.gt) goto loc_82ED6B14;
	// li r30,0
	r30.s64 = 0;
loc_82ED6AA0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f13
	f0.f64 = double(float(ctx.f13.f64 - ctx.f13.f64));
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r5,76(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r4,72(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x82ed6ad8
	if (!cr6.eq) goto loc_82ED6AD8;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x82ed6adc
	goto loc_82ED6ADC;
loc_82ED6AD8:
	// fdivs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 / f0.f64));
loc_82ED6ADC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ed6aa0
	if (cr6.lt) goto loc_82ED6AA0;
loc_82ED6B14:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82ED6B28"))) PPC_WEAK_FUNC(sub_82ED6B28);
PPC_FUNC_IMPL(__imp__sub_82ED6B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// addic. r7,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
loc_82ED6B48:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,76(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r6,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r5,r11,42
	ctx.r5.s64 = r11.s64 + 42;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x82ed6b78
	if (cr6.gt) goto loc_82ED6B78;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_82ED6B78:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// bge 0x82ed6b48
	if (!cr0.lt) goto loc_82ED6B48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED6B88"))) PPC_WEAK_FUNC(sub_82ED6B88);
PPC_FUNC_IMPL(__imp__sub_82ED6B88) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// b 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ED6B90"))) PPC_WEAK_FUNC(sub_82ED6B90);
PPC_FUNC_IMPL(__imp__sub_82ED6B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ED6BA0"))) PPC_WEAK_FUNC(sub_82ED6BA0);
PPC_FUNC_IMPL(__imp__sub_82ED6BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED6BA8"))) PPC_WEAK_FUNC(sub_82ED6BA8);
PPC_FUNC_IMPL(__imp__sub_82ED6BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ED6BB8"))) PPC_WEAK_FUNC(sub_82ED6BB8);
PPC_FUNC_IMPL(__imp__sub_82ED6BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED6BC0"))) PPC_WEAK_FUNC(sub_82ED6BC0);
PPC_FUNC_IMPL(__imp__sub_82ED6BC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed6c28
	if (cr6.eq) goto loc_82ED6C28;
	// li r11,31
	r11.s64 = 31;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// b 0x82ed6ce4
	goto loc_82ED6CE4;
loc_82ED6C28:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82ed6cb8
	if (!cr6.gt) goto loc_82ED6CB8;
loc_82ED6C68:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + r11.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82ed6ca4
	if (!cr6.eq) goto loc_82ED6CA4;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed6ca4
	if (cr6.eq) goto loc_82ED6CA4;
	// bl 0x82ee1120
	sub_82EE1120(ctx, base);
loc_82ED6CA4:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ed6c68
	if (cr6.lt) goto loc_82ED6C68;
loc_82ED6CB8:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed6ce4
	if (!cr6.eq) goto loc_82ED6CE4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED6CE4:
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

__attribute__((alias("__imp__sub_82ED6D00"))) PPC_WEAK_FUNC(sub_82ED6D00);
PPC_FUNC_IMPL(__imp__sub_82ED6D00) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r29,504
	r31.s64 = r29.s64 + 504;
	// lhz r11,510(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 510);
	// lhz r10,508(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 508);
	// clrlwi r9,r11,18
	ctx.r9.u64 = r11.u32 & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ed6d3c
	if (!cr6.eq) goto loc_82ED6D3C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83207d98
	sub_83207D98(ctx, base);
loc_82ED6D3C:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r8.u16);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lhz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// cmplwi cr6,r6,65535
	cr6.compare<uint32_t>(ctx.r6.u32, 65535, xer);
	// bne cr6,0x82ed6d90
	if (!cr6.eq) goto loc_82ED6D90;
	// lbz r11,216(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82ed6d90
	if (cr6.eq) goto loc_82ED6D90;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ef44f8
	sub_82EF44F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// bl 0x82ef49b0
	sub_82EF49B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82ED6D90:
	// lwz r11,184(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82ed6dbc
	if (cr6.eq) goto loc_82ED6DBC;
	// lbz r11,216(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 216);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82ed6dbc
	if (cr6.eq) goto loc_82ED6DBC;
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82eeabd8
	sub_82EEABD8(ctx, base);
loc_82ED6DBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82ED6DC8"))) PPC_WEAK_FUNC(sub_82ED6DC8);
PPC_FUNC_IMPL(__imp__sub_82ED6DC8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ed6e10
	if (cr0.eq) goto loc_82ED6E10;
	// li r11,13
	r11.s64 = 13;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_82ED6E10:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed6e3c
	if (!cr6.eq) goto loc_82ED6E3C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
loc_82ED6E3C:
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82edd548
	sub_82EDD548(ctx, base);
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// addi r29,r31,228
	r29.s64 = r31.s64 + 228;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed6e6c
	if (!cr6.eq) goto loc_82ED6E6C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED6E6C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r8.u32);
	// bl 0x82ee9880
	sub_82EE9880(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eec1c0
	sub_82EEC1C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eddce8
	sub_82EDDCE8(ctx, base);
	// lwz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82ed6ee0
	if (!cr0.eq) goto loc_82ED6EE0;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ed6ee0
	if (!cr6.eq) goto loc_82ED6EE0;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed6ee0
	if (cr6.eq) goto loc_82ED6EE0;
	// li r11,0
	r11.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82ED6EE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82ED6EF0"))) PPC_WEAK_FUNC(sub_82ED6EF0);
PPC_FUNC_IMPL(__imp__sub_82ED6EF0) {
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
	// lwz r11,248(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// addi r31,r3,240
	r31.s64 = ctx.r3.s64 + 240;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed6f2c
	if (!cr6.eq) goto loc_82ED6F2C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED6F2C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED6F60"))) PPC_WEAK_FUNC(sub_82ED6F60);
PPC_FUNC_IMPL(__imp__sub_82ED6F60) {
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
	// lwz r11,284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// addi r31,r3,276
	r31.s64 = ctx.r3.s64 + 276;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed6f9c
	if (!cr6.eq) goto loc_82ED6F9C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED6F9C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED6FD0"))) PPC_WEAK_FUNC(sub_82ED6FD0);
PPC_FUNC_IMPL(__imp__sub_82ED6FD0) {
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
	// lwz r11,260(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r31,r3,252
	r31.s64 = ctx.r3.s64 + 252;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed700c
	if (!cr6.eq) goto loc_82ED700C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED700C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED7040"))) PPC_WEAK_FUNC(sub_82ED7040);
PPC_FUNC_IMPL(__imp__sub_82ED7040) {
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
	// lwz r11,272(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// addi r31,r3,264
	r31.s64 = ctx.r3.s64 + 264;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed707c
	if (!cr6.eq) goto loc_82ED707C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED707C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED70B0"))) PPC_WEAK_FUNC(sub_82ED70B0);
PPC_FUNC_IMPL(__imp__sub_82ED70B0) {
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
	// lwz r11,308(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,304(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addi r31,r3,300
	r31.s64 = ctx.r3.s64 + 300;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed70ec
	if (!cr6.eq) goto loc_82ED70EC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED70EC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED7120"))) PPC_WEAK_FUNC(sub_82ED7120);
PPC_FUNC_IMPL(__imp__sub_82ED7120) {
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
	// lwz r11,344(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// addi r31,r3,336
	r31.s64 = ctx.r3.s64 + 336;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed715c
	if (!cr6.eq) goto loc_82ED715C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED715C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED7190"))) PPC_WEAK_FUNC(sub_82ED7190);
PPC_FUNC_IMPL(__imp__sub_82ED7190) {
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
	// lwz r11,320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,316(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// addi r31,r3,312
	r31.s64 = ctx.r3.s64 + 312;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed71cc
	if (!cr6.eq) goto loc_82ED71CC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED71CC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED7200"))) PPC_WEAK_FUNC(sub_82ED7200);
PPC_FUNC_IMPL(__imp__sub_82ED7200) {
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
	// lwz r11,332(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r31,r3,324
	r31.s64 = ctx.r3.s64 + 324;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed723c
	if (!cr6.eq) goto loc_82ED723C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED723C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED7270"))) PPC_WEAK_FUNC(sub_82ED7270);
PPC_FUNC_IMPL(__imp__sub_82ED7270) {
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
	// lwz r11,368(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,364(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// addi r31,r3,360
	r31.s64 = ctx.r3.s64 + 360;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed72ac
	if (!cr6.eq) goto loc_82ED72AC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED72AC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED72E0"))) PPC_WEAK_FUNC(sub_82ED72E0);
PPC_FUNC_IMPL(__imp__sub_82ED72E0) {
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
	// lwz r11,356(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addi r31,r3,348
	r31.s64 = ctx.r3.s64 + 348;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed731c
	if (!cr6.eq) goto loc_82ED731C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED731C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED7350"))) PPC_WEAK_FUNC(sub_82ED7350);
PPC_FUNC_IMPL(__imp__sub_82ED7350) {
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
	// lwz r11,380(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,376(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// addi r31,r3,372
	r31.s64 = ctx.r3.s64 + 372;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed738c
	if (!cr6.eq) goto loc_82ED738C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED738C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED73C0"))) PPC_WEAK_FUNC(sub_82ED73C0);
PPC_FUNC_IMPL(__imp__sub_82ED73C0) {
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
	// lwz r11,296(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// addi r31,r3,288
	r31.s64 = ctx.r3.s64 + 288;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed73fc
	if (!cr6.eq) goto loc_82ED73FC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED73FC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED7430"))) PPC_WEAK_FUNC(sub_82ED7430);
PPC_FUNC_IMPL(__imp__sub_82ED7430) {
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
	// lwz r11,392(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// addi r31,r3,384
	r31.s64 = ctx.r3.s64 + 384;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed746c
	if (!cr6.eq) goto loc_82ED746C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED746C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED74A0"))) PPC_WEAK_FUNC(sub_82ED74A0);
PPC_FUNC_IMPL(__imp__sub_82ED74A0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r10,22304
	ctx.r4.s64 = ctx.r10.s64 + 22304;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// rlwinm r7,r11,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82ed7520
	if (!cr6.eq) goto loc_82ED7520;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r4,r9,22288
	ctx.r4.s64 = ctx.r9.s64 + 22288;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7520:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82ed7568
	if (cr0.lt) goto loc_82ED7568;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,3516
	r27.s64 = r11.s64 + 3516;
loc_82ED7538:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r6,r10,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bge 0x82ed7538
	if (!cr0.lt) goto loc_82ED7538;
loc_82ED7568:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed75a8
	if (!cr6.eq) goto loc_82ED75A8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r4,r9,22272
	ctx.r4.s64 = ctx.r9.s64 + 22272;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED75A8:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82ed75f0
	if (cr0.lt) goto loc_82ED75F0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,3752
	r27.s64 = r11.s64 + 3752;
loc_82ED75C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r6,r10,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bge 0x82ed75c0
	if (!cr0.lt) goto loc_82ED75C0;
loc_82ED75F0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r10,15144
	ctx.r4.s64 = ctx.r10.s64 + 15144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82ed7654
	if (!cr6.eq) goto loc_82ED7654;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,232(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,228(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// addi r4,r9,22260
	ctx.r4.s64 = ctx.r9.s64 + 22260;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7654:
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed76a8
	if (!cr6.gt) goto loc_82ED76A8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,22248
	r27.s64 = r11.s64 + 22248;
loc_82ED7670:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r6,r29,r10
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,232(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r8
	cr6.compare<int32_t>(r28.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ed7670
	if (cr6.lt) goto loc_82ED7670;
loc_82ED76A8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r6,168(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,22216
	ctx.r4.s64 = ctx.r10.s64 + 22216;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lwz r6,172(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r7,22204
	ctx.r4.s64 = ctx.r7.s64 + 22204;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r6,176(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r9,22172
	ctx.r4.s64 = ctx.r9.s64 + 22172;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r9,22152
	ctx.r4.s64 = ctx.r9.s64 + 22152;
	// li r7,56
	ctx.r7.s64 = 56;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r6,104(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r9,22120
	ctx.r4.s64 = ctx.r9.s64 + 22120;
	// li r7,20
	ctx.r7.s64 = 20;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed783c
	if (cr6.eq) goto loc_82ED783C;
	// mr r27,r11
	r27.u64 = r11.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r29,r11,22092
	r29.s64 = r11.s64 + 22092;
	// addi r28,r10,22068
	r28.s64 = ctx.r10.s64 + 22068;
loc_82ED77A4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ed7830
	if (cr6.eq) goto loc_82ED7830;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r9,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ed7830
	if (!cr6.eq) goto loc_82ED7830;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r8,r9,2
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7830:
	// lwz r27,8(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82ed77a4
	if (!cr6.eq) goto loc_82ED77A4;
loc_82ED783C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,22056
	ctx.r4.s64 = ctx.r10.s64 + 22056;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r8,22044
	ctx.r4.s64 = ctx.r8.s64 + 22044;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed78bc
	if (!cr6.eq) goto loc_82ED78BC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,68(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r4,r9,22032
	ctx.r4.s64 = ctx.r9.s64 + 22032;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED78BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r6,76(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r10,22020
	ctx.r4.s64 = ctx.r10.s64 + 22020;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lwz r6,124(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r7,22012
	r29.s64 = ctx.r7.s64 + 22012;
	// li r7,88
	ctx.r7.s64 = 88;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r7,r10,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82ed7980
	if (!cr6.eq) goto loc_82ED7980;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,22000
	ctx.r4.s64 = r11.s64 + 22000;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7980:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r6,396(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 396);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r9,21980
	ctx.r4.s64 = ctx.r9.s64 + 21980;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r6,21972
	ctx.r4.s64 = ctx.r6.s64 + 21972;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r6,84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r10,21960
	ctx.r4.s64 = ctx.r10.s64 + 21960;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lwz r6,88(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r7,21948
	r29.s64 = ctx.r7.s64 + 21948;
	// li r7,268
	ctx.r7.s64 = 268;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,96(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r9,21936
	ctx.r4.s64 = ctx.r9.s64 + 21936;
	// li r7,112
	ctx.r7.s64 = 112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed7b04
	if (cr6.eq) goto loc_82ED7B04;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r9,21912
	ctx.r4.s64 = ctx.r9.s64 + 21912;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7B04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,21904
	ctx.r4.s64 = ctx.r10.s64 + 21904;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lwz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r8,21884
	ctx.r4.s64 = ctx.r8.s64 + 21884;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r6,116(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r10,21872
	ctx.r4.s64 = ctx.r10.s64 + 21872;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,20(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,21860
	ctx.r4.s64 = r11.s64 + 21860;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,260(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82ed7bf4
	if (!cr6.eq) goto loc_82ED7BF4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,256(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,252(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// addi r4,r9,21848
	ctx.r4.s64 = ctx.r9.s64 + 21848;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7BF4:
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed7c34
	if (!cr6.eq) goto loc_82ED7C34;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,268(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,264(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// addi r4,r9,21836
	ctx.r4.s64 = ctx.r9.s64 + 21836;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7C34:
	// lwz r11,284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed7c74
	if (!cr6.eq) goto loc_82ED7C74;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,280(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 280);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,276(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 276);
	// addi r4,r9,21820
	ctx.r4.s64 = ctx.r9.s64 + 21820;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7C74:
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed7cb4
	if (!cr6.eq) goto loc_82ED7CB4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,292(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,288(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 288);
	// addi r4,r9,21804
	ctx.r4.s64 = ctx.r9.s64 + 21804;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7CB4:
	// lwz r11,308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed7cf4
	if (!cr6.eq) goto loc_82ED7CF4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,304(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 304);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,300(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 300);
	// addi r4,r9,21788
	ctx.r4.s64 = ctx.r9.s64 + 21788;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7CF4:
	// lwz r11,320(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed7d34
	if (!cr6.eq) goto loc_82ED7D34;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,316(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,312(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 312);
	// addi r4,r9,21772
	ctx.r4.s64 = ctx.r9.s64 + 21772;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7D34:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r29,r11,21756
	r29.s64 = r11.s64 + 21756;
	// lwz r11,332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 332);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed7d78
	if (!cr6.eq) goto loc_82ED7D78;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,328(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 328);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,324(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 324);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7D78:
	// lwz r11,344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 344);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed7db8
	if (!cr6.eq) goto loc_82ED7DB8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,340(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 340);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,336(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 336);
	// addi r4,r9,21740
	ctx.r4.s64 = ctx.r9.s64 + 21740;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7DB8:
	// lwz r11,356(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed7df4
	if (!cr6.eq) goto loc_82ED7DF4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,352(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 352);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,348(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7DF4:
	// lwz r11,380(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 380);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed7e34
	if (!cr6.eq) goto loc_82ED7E34;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,376(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 376);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,372(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 372);
	// addi r4,r9,21728
	ctx.r4.s64 = ctx.r9.s64 + 21728;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED7E34:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82ED7E70"))) PPC_WEAK_FUNC(sub_82ED7E70);
PPC_FUNC_IMPL(__imp__sub_82ED7E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f0{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b1424
	// stwu r1,-1088(r1)
	ea = -1088 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,22440
	ctx.r9.s64 = r11.s64 + 22440;
	// li r14,1
	r14.s64 = 1;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// sth r14,6(r31)
	PPC_STORE_U16(r31.u32 + 6, r14.u16);
	// li r7,-47
	ctx.r7.s64 = -47;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// addi r9,r31,40
	ctx.r9.s64 = r31.s64 + 40;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// add r18,r9,r10
	r18.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// addi r8,r31,152
	ctx.r8.s64 = r31.s64 + 152;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r7,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r7.u32);
	// sth r30,156(r31)
	PPC_STORE_U16(r31.u32 + 156, r30.u16);
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r11.u32);
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r11,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r11.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r30.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// stw r30,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r30.u32);
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r30.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r11.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r11.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r30.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r11.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(r31.u32 + 352, r30.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r30.u32);
	// stw r11,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r11.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r30.u32);
	// stw r11,380(r31)
	PPC_STORE_U32(r31.u32 + 380, r11.u32);
	// stw r30,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r30.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(r31.u32 + 388, r30.u32);
	// stw r11,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r11.u32);
	// stw r6,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r6.u32);
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ed7fcc
	if (cr6.eq) goto loc_82ED7FCC;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r8.u32);
	// b 0x82ed7fdc
	goto loc_82ED7FDC;
loc_82ED7FCC:
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
loc_82ED7FDC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed7ff0
	if (cr6.eq) goto loc_82ED7FF0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82eefb70
	sub_82EEFB70(ctx, base);
	// b 0x82ed7ff4
	goto loc_82ED7FF4;
loc_82ED7FF0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82ED7FF4:
	// addi r27,r28,48
	r27.s64 = r28.s64 + 48;
	// stw r3,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// addi r3,r31,720
	ctx.r3.s64 = r31.s64 + 720;
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// addi r26,r28,64
	r26.s64 = r28.s64 + 64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r4,r31,736
	ctx.r4.s64 = r31.s64 + 736;
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stb r30,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r30.u8);
	// addi r24,r31,168
	r24.s64 = r31.s64 + 168;
	// stb r14,141(r31)
	PPC_STORE_U8(r31.u32 + 141, r14.u8);
	// addi r16,r31,180
	r16.s64 = r31.s64 + 180;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r15,r31,172
	r15.s64 = r31.s64 + 172;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// addi r11,r31,176
	r11.s64 = r31.s64 + 176;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// addi r25,r31,84
	r25.s64 = r31.s64 + 84;
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r14,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r14.u32);
	// lvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,108(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// stw r9,752(r31)
	PPC_STORE_U32(r31.u32 + 752, ctx.r9.u32);
	// lwz r5,108(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// lwz r8,9280(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9280);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// srawi r6,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,760(r31)
	PPC_STORE_U32(r31.u32 + 760, ctx.r7.u32);
	// cmplwi cr6,r29,50500
	cr6.compare<uint32_t>(r29.u32, 50500, xer);
	// stw r5,764(r31)
	PPC_STORE_U32(r31.u32 + 764, ctx.r5.u32);
	// lwz r4,96(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 96);
	// stw r4,756(r31)
	PPC_STORE_U32(r31.u32 + 756, ctx.r4.u32);
	// beq cr6,0x82ed8130
	if (cr6.eq) goto loc_82ED8130;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,22400
	ctx.r4.s64 = r11.s64 + 22400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r23,r10,22392
	r23.s64 = ctx.r10.s64 + 22392;
	// addi r22,r9,22360
	r22.s64 = ctx.r9.s64 + 22360;
	// ori r21,r8,50500
	r21.u64 = ctx.r8.u64 | 50500;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82eadc38
	sub_82EADC38(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82eadca0
	sub_82EADCA0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lis r6,-31943
	ctx.r6.s64 = -2093416448;
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// lis r5,21449
	ctx.r5.s64 = 1405681664;
	// addi r7,r4,22336
	ctx.r7.s64 = ctx.r4.s64 + 22336;
	// li r8,2640
	ctx.r8.s64 = 2640;
	// lwz r3,30588(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 30588);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// ori r5,r5,19266
	ctx.r5.u64 = ctx.r5.u64 | 19266;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
loc_82ED8130:
	// addi r29,r28,16
	r29.s64 = r28.s64 + 16;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lvx128 v0,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,136(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,140(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 140);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f2e690
	sub_82F2E690(ctx, base);
	// lfs f0,136(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 136);
	f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,188(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lfs f13,136(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,416
	r11.s64 = r31.s64 + 416;
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// addi r10,r28,144
	ctx.r10.s64 = r28.s64 + 144;
	// lbz r7,144(r28)
	ctx.r7.u64 = PPC_LOAD_U8(r28.u32 + 144);
	// lfs f31,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f31.f64 = double(temp.f32);
	// stb r7,196(r31)
	PPC_STORE_U8(r31.u32 + 196, ctx.r7.u8);
	// lfs f0,-22120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -22120);
	f0.f64 = double(temp.f32);
	// lbz r6,167(r28)
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + 167);
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// addi r9,r11,64
	ctx.r9.s64 = r11.s64 + 64;
	// addi r7,r28,168
	ctx.r7.s64 = r28.s64 + 168;
	// addi r8,r11,288
	ctx.r8.s64 = r11.s64 + 288;
	// stb r6,198(r31)
	PPC_STORE_U8(r31.u32 + 198, ctx.r6.u8);
	// lfs f12,172(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,204(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// lbz r5,180(r28)
	ctx.r5.u64 = PPC_LOAD_U8(r28.u32 + 180);
	// stb r5,208(r31)
	PPC_STORE_U8(r31.u32 + 208, ctx.r5.u8);
	// lwz r4,176(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 176);
	// stw r4,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r4.u32);
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// stw r3,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// lfs f11,168(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,200(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// stfs f31,416(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 416, temp.u32);
	// lfs f10,116(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f8,120(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f31,f8
	ctx.f7.f64 = double(float(f31.f64 / ctx.f8.f64));
	// fmuls f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// stfs f10,420(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 420, temp.u32);
	// fdivs f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
	// stfs f5,496(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 496, temp.u32);
	// fdivs f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// stfs f9,428(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 428, temp.u32);
	// fmuls f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f8,424(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 424, temp.u32);
	// stfs f4,504(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 504, temp.u32);
	// stfs f6,500(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 500, temp.u32);
	// stfs f3,508(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 508, temp.u32);
	// stfs f6,464(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 464, temp.u32);
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v12,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// stvx128 v12,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f2,496(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 496);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,480(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 480, temp.u32);
	// lvx128 v11,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v10,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// stvx128 v10,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,36(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,512(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 512, temp.u32);
	// lwz r10,124(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// stw r10,692(r31)
	PPC_STORE_U32(r31.u32 + 692, ctx.r10.u32);
	// lwz r9,124(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(f31.f64 / ctx.f12.f64));
	// stfs f11,704(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 704, temp.u32);
	// lwz r5,128(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 128);
	// stw r5,696(r31)
	PPC_STORE_U32(r31.u32 + 696, ctx.r5.u32);
	// lwz r4,128(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 128);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f31,f8
	ctx.f7.f64 = double(float(f31.f64 / ctx.f8.f64));
	// stfs f7,700(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 700, temp.u32);
	// lbz r10,132(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 132);
	// stb r10,708(r31)
	PPC_STORE_U8(r31.u32 + 708, ctx.r10.u8);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lbz r6,164(r28)
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + 164);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stb r6,709(r31)
	PPC_STORE_U8(r31.u32 + 709, ctx.r6.u8);
	// lbz r6,165(r28)
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + 165);
	// stb r6,710(r31)
	PPC_STORE_U8(r31.u32 + 710, ctx.r6.u8);
	// lbz r6,166(r28)
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + 166);
	// stb r6,711(r31)
	PPC_STORE_U8(r31.u32 + 711, ctx.r6.u8);
	// lvx128 v9,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v9,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// stvx128 v8,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f6,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v7,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v6,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// stvewx v6,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f30,2240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2240);
	f30.f64 = double(temp.f32);
	// lfs f25,22332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22332);
	f25.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x82ed82ec
	if (!cr6.eq) goto loc_82ED82EC;
	// fmr f11,f25
	ctx.f11.f64 = f25.f64;
loc_82ED82EC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// lfs f0,-24412(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24412);
	f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,-31000(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -31000);
	ctx.f1.f64 = double(temp.f32);
	// lis r29,-32255
	r29.s64 = -2113863680;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f2,-11748(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -11748);
	ctx.f2.f64 = double(temp.f32);
	// lfs f27,22328(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 22328);
	f27.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f12,22156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 22156);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lfs f28,5576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5576);
	f28.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f3,5568(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 5568);
	ctx.f3.f64 = double(temp.f32);
	// lis r3,-32238
	ctx.r3.s64 = -2112749568;
	// lfs f5,-17788(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -17788);
	ctx.f5.f64 = double(temp.f32);
	// lis r29,-32254
	r29.s64 = -2113798144;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f6,-9488(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -9488);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,-17192(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -17192);
	ctx.f7.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lfs f4,-7056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7056);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f8,22324(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 22324);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f26,f11,f0
	f26.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f9,14456(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 14456);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-12568(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -12568);
	ctx.f10.f64 = double(temp.f32);
	// lfs f29,-24792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24792);
	f29.f64 = double(temp.f32);
loc_82ED836C:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bgt cr6,0x82ed83d0
	if (cr6.gt) goto loc_82ED83D0;
	// lis r12,-32018
	r12.s64 = -2098331648;
	// addi r12,r12,-31860
	r12.s64 = r12.s64 + -31860;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82ED83A0;
	case 1:
		goto loc_82ED83A0;
	case 2:
		goto loc_82ED83AC;
	case 3:
		goto loc_82ED83B8;
	case 4:
		goto loc_82ED83C4;
	default:
		__builtin_unreachable();
	}
	// lwz r23,-31840(r13)
	r23.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31840);
	// lwz r23,-31840(r13)
	r23.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31840);
	// lwz r23,-31828(r13)
	r23.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31828);
	// lwz r23,-31816(r13)
	r23.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31816);
	// lwz r23,-31804(r13)
	r23.u64 = PPC_LOAD_U32(ctx.r13.u32 + -31804);
loc_82ED83A0:
	// fmr f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64;
	// fmr f0,f30
	f0.f64 = f30.f64;
	// b 0x82ed83d8
	goto loc_82ED83D8;
loc_82ED83AC:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
	// b 0x82ed83d8
	goto loc_82ED83D8;
loc_82ED83B8:
	// fmr f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f8.f64;
	// fmr f0,f7
	f0.f64 = ctx.f7.f64;
	// b 0x82ed83d8
	goto loc_82ED83D8;
loc_82ED83C4:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
	// fmr f0,f5
	f0.f64 = ctx.f5.f64;
	// b 0x82ed83d8
	goto loc_82ED83D8;
loc_82ED83D0:
	// fmr f13,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f4.f64;
	// fmr f0,f3
	f0.f64 = ctx.f3.f64;
loc_82ED83D8:
	// fmuls f13,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// lfs f24,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f24.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// fdivs f23,f31,f13
	f23.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * f26.f64));
	// stfs f23,100(r10)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// fmuls f23,f23,f0
	f23.f64 = double(float(f23.f64 * f0.f64));
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stfs f13,104(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 104, temp.u32);
	// fmuls f13,f23,f11
	ctx.f13.f64 = double(float(f23.f64 * ctx.f11.f64));
	// fmuls f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 * f24.f64));
	// fnmsubs f13,f13,f12,f31
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - f31.f64)));
	// stfs f13,108(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 108, temp.u32);
	// ble cr6,0x82ed842c
	if (!cr6.gt) goto loc_82ED842C;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(f0.f64 * ctx.f12.f64));
	// stfs f13,112(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// b 0x82ed8430
	goto loc_82ED8430;
loc_82ED842C:
	// stfs f27,112(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 112, temp.u32);
loc_82ED8430:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(f0.f64 * f28.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r5,r6,16
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(f0.f64 * ctx.f2.f64));
	// srawi r6,r4,16
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 16;
	// stfs f0,116(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// stfs f13,120(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// sth r5,124(r10)
	PPC_STORE_U16(ctx.r10.u32 + 124, ctx.r5.u16);
	// sth r6,126(r10)
	PPC_STORE_U16(ctx.r10.u32 + 126, ctx.r6.u16);
	// cmpwi cr6,r9,6
	cr6.compare<int32_t>(ctx.r9.s32, 6, xer);
	// lhz r4,124(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 124);
	// lfs f0,120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	f0.f64 = double(temp.f32);
	// lfs f13,116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// rotlwi r3,r4,16
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 16);
	// stfs f0,120(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f13,116(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r5,r6,16
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,124(r10)
	PPC_STORE_U16(ctx.r10.u32 + 124, ctx.r5.u16);
	// lhz r5,126(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// rotlwi r4,r5,16
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 16);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// rotlwi r6,r3,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 16);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r6,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 16;
	// sth r6,126(r10)
	PPC_STORE_U16(ctx.r10.u32 + 126, ctx.r6.u16);
	// blt cr6,0x82ed836c
	if (cr6.lt) goto loc_82ED836C;
	// lwz r11,104(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// beq cr6,0x82ed8514
	if (cr6.eq) goto loc_82ED8514;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ed8514
	if (cr6.eq) goto loc_82ED8514;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_82ED8514:
	// lbz r11,190(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 190);
	// addi r10,r31,184
	ctx.r10.s64 = r31.s64 + 184;
	// stb r11,184(r31)
	PPC_STORE_U8(r31.u32 + 184, r11.u8);
	// lbz r11,188(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 188);
	// stb r11,197(r31)
	PPC_STORE_U8(r31.u32 + 197, r11.u8);
	// lbz r9,184(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 184);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ed8544
	if (!cr6.eq) goto loc_82ED8544;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed8544
	if (cr6.eq) goto loc_82ED8544;
	// stb r30,197(r31)
	PPC_STORE_U8(r31.u32 + 197, r30.u8);
loc_82ED8544:
	// lbz r11,196(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 196);
	// stb r11,160(r31)
	PPC_STORE_U8(r31.u32 + 160, r11.u8);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ed8578
	if (cr6.eq) goto loc_82ED8578;
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,148(r11)
	PPC_STORE_U32(r11.u32 + 148, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,144(r11)
	PPC_STORE_U32(r11.u32 + 144, ctx.r8.u32);
	// b 0x82ed8588
	goto loc_82ED8588;
loc_82ED8578:
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
loc_82ED8588:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed8598
	if (cr6.eq) goto loc_82ED8598;
	// bl 0x82f2bca8
	sub_82F2BCA8(ctx, base);
	// b 0x82ed859c
	goto loc_82ED859C;
loc_82ED8598:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82ED859C:
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// sth r14,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r14.u16);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r29,12
	r29.s64 = 12;
	// addi r23,r11,21496
	r23.s64 = r11.s64 + 21496;
	// addi r8,r10,21528
	ctx.r8.s64 = ctx.r10.s64 + 21528;
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r29.u16);
	// addi r7,r9,21512
	ctx.r7.s64 = ctx.r9.s64 + 21512;
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r23.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// bl 0x82ef52c0
	sub_82EF52C0(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r29.u16);
	// sth r14,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r14.u16);
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r23.u32);
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// addi r11,r5,21560
	r11.s64 = ctx.r5.s64 + 21560;
	// addi r10,r4,21544
	ctx.r10.s64 = ctx.r4.s64 + 21544;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82ed8654
	if (!cr6.eq) goto loc_82ED8654;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED8654:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, r11.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82ed8670
	if (!cr6.eq) goto loc_82ED8670;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED8670:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, r11.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82ed868c
	if (!cr6.eq) goto loc_82ED868C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED868C:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, r11.u32);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82ed86a8
	if (!cr6.eq) goto loc_82ED86A8;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED86A8:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, r11.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82ed86c4
	if (!cr6.eq) goto loc_82ED86C4;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED86C4:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, r11.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82ed86e0
	if (!cr6.eq) goto loc_82ED86E0;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED86E0:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, r11.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82ed86fc
	if (!cr6.eq) goto loc_82ED86FC;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED86FC:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, r11.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82ed8718
	if (!cr6.eq) goto loc_82ED8718;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED8718:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, r11.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82ed8734
	if (!cr6.eq) goto loc_82ED8734;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED8734:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r5,34
	ctx.r5.s64 = 34;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, r11.u32);
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r29.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ee50a0
	sub_82EE50A0(ctx, base);
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,7760
	ctx.r4.s64 = 7760;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r8,7760
	ctx.r8.s64 = 7760;
	// lis r7,-32013
	ctx.r7.s64 = -2098003968;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r7,-6576
	ctx.r4.s64 = ctx.r7.s64 + -6576;
	// addi r21,r31,116
	r21.s64 = r31.s64 + 116;
	// bl 0x82f2d640
	sub_82F2D640(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// lhz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ed87cc
	if (cr6.eq) goto loc_82ED87CC;
	// lhz r11,6(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r29)
	PPC_STORE_U16(r29.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ed87cc
	if (!cr6.eq) goto loc_82ED87CC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED87CC:
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// li r17,48
	r17.s64 = 48;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ed8840
	if (!cr6.eq) goto loc_82ED8840;
	// li r5,39
	ctx.r5.s64 = 39;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// sth r17,4(r29)
	PPC_STORE_U16(r29.u32 + 4, r17.u16);
	// bl 0x82f25dc0
	sub_82F25DC0(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r14,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r14.u32);
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
	// stw r6,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r6.u32);
	// addi r3,r8,21628
	ctx.r3.s64 = ctx.r8.s64 + 21628;
	// stw r5,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r5.u32);
	// addi r11,r7,21596
	r11.s64 = ctx.r7.s64 + 21596;
	// stw r4,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r4.u32);
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// b 0x82ed885c
	goto loc_82ED885C;
loc_82ED8840:
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ed885c
	if (cr6.eq) goto loc_82ED885C;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_82ED885C:
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ed8898
	if (!cr6.eq) goto loc_82ED8898;
	// li r5,39
	ctx.r5.s64 = 39;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,8
	ctx.r10.s64 = 8;
	// sth r14,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r14.u16);
	// addi r9,r11,21668
	ctx.r9.s64 = r11.s64 + 21668;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// b 0x82ed88b4
	goto loc_82ED88B4;
loc_82ED8898:
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ed88b4
	if (cr6.eq) goto loc_82ED88B4;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_82ED88B4:
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lwz r29,112(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ed88dc
	if (cr6.eq) goto loc_82ED88DC;
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// b 0x82ed88ec
	goto loc_82ED88EC;
loc_82ED88DC:
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82ED88EC:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r19,r31,108
	r19.s64 = r31.s64 + 108;
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lfs f0,80(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bne cr6,0x82ed8918
	if (!cr6.eq) goto loc_82ED8918;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED8918:
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ed8950
	if (cr6.eq) goto loc_82ED8950;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r8.u32);
	// b 0x82ed8960
	goto loc_82ED8960;
loc_82ED8950:
	// li r5,31
	ctx.r5.s64 = 31;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
loc_82ED8960:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed897c
	if (cr6.eq) goto loc_82ED897C;
	// li r10,20
	ctx.r10.s64 = 20;
	// stfs f29,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x82ed8980
	goto loc_82ED8980;
loc_82ED897C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED8980:
	// stfs f30,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,108(r29)
	PPC_STORE_U32(r29.u32 + 108, r11.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,22320(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22320);
	f0.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,22316(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 22316);
	f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r29,64
	ctx.r6.s64 = r29.s64 + 64;
	// addi r9,r9,-12080
	ctx.r9.s64 = ctx.r9.s64 + -12080;
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// addi r5,r29,48
	ctx.r5.s64 = r29.s64 + 48;
	// addi r23,r28,112
	r23.s64 = r28.s64 + 112;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,112(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 112);
	// stb r11,768(r31)
	PPC_STORE_U8(r31.u32 + 768, r11.u8);
	// vxor v12,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_setzero_si128());
	// lvlx v9,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r7,108(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 108);
	// lfs f0,148(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 148);
	f0.f64 = double(temp.f32);
	// vspltw v8,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lvlx v11,0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r3,152(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 152);
	// lwz r11,108(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 108);
	// vspltw v10,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lbz r7,145(r28)
	ctx.r7.u64 = PPC_LOAD_U8(r28.u32 + 145);
	// stw r30,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r30.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r11,7264
	ctx.r3.s64 = r11.s64 + 7264;
	// extsb r11,r7
	r11.s64 = ctx.r7.s8;
	// stw r3,96(r29)
	PPC_STORE_U32(r29.u32 + 96, ctx.r3.u32);
	// cntlzw r7,r11
	ctx.r7.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r11,r3,1
	r11.u64 = ctx.r3.u64 ^ 1;
	// stb r11,104(r29)
	PPC_STORE_U8(r29.u32 + 104, r11.u8);
	// lvx128 v7,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r26
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v13,v6,v7
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v7.f32)));
	// stvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 / ctx.f13.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f31,f11
	ctx.f9.f64 = double(float(f31.f64 / ctx.f11.f64));
	// fdivs f8,f31,f10
	ctx.f8.f64 = double(float(f31.f64 / ctx.f10.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvx128 v5,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v4,v5,v10
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v10.f32)));
	// stvx128 v4,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v1,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v0,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmaddfp v2,v13,v8,v0
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v1,v12,1,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 1));
	// stvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r4
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v31,v12,1,0
	simde_mm_store_ps(v31.f32, simde_mm_blend_ps(simde_mm_load_ps(v31.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 1));
	// stvx128 v31,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r0,r5
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v30,v12,1,0
	simde_mm_store_ps(v30.f32, simde_mm_blend_ps(simde_mm_load_ps(v30.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 228), 1));
	// stvx128 v30,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed5410
	sub_82ED5410(ctx, base);
	// lis r8,-31942
	ctx.r8.s64 = -2093350912;
	// li r22,3
	r22.s64 = 3;
	// lbz r11,-31792(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + -31792);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed8ae0
	if (cr6.eq) goto loc_82ED8AE0;
	// stb r22,189(r28)
	PPC_STORE_U8(r28.u32 + 189, r22.u8);
loc_82ED8AE0:
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// addi r20,r28,189
	r20.s64 = r28.s64 + 189;
	// lbz r11,189(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 189);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82ed8c18
	if (cr6.eq) goto loc_82ED8C18;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82ed8bf4
	if (cr6.eq) goto loc_82ED8BF4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82ed8c3c
	if (!cr6.eq) goto loc_82ED8C3C;
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ed8b38
	if (cr6.eq) goto loc_82ED8B38;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r8.u32);
	// b 0x82ed8b48
	goto loc_82ED8B48;
loc_82ED8B38:
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
loc_82ED8B48:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed8b60
	if (cr6.eq) goto loc_82ED8B60;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x82eaa4f8
	sub_82EAA4F8(ctx, base);
	// b 0x82ed8b64
	goto loc_82ED8B64;
loc_82ED8B60:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82ED8B64:
	// stw r3,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ed8b94
	if (cr6.eq) goto loc_82ED8B94;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r8.u32);
	// b 0x82ed8ba4
	goto loc_82ED8BA4;
loc_82ED8B94:
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
loc_82ED8BA4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed8bbc
	if (cr6.eq) goto loc_82ED8BBC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x82eaa4f8
	sub_82EAA4F8(ctx, base);
	// b 0x82ed8bc0
	goto loc_82ED8BC0;
loc_82ED8BBC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82ED8BC0:
	// stw r3,0(r16)
	PPC_STORE_U32(r16.u32 + 0, ctx.r3.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,1024
	r11.s64 = 1024;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82ef1af8
	sub_82EF1AF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r10,192(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 192);
	// stw r10,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// b 0x82ed8c3c
	goto loc_82ED8C3C;
loc_82ED8BF4:
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,80
	r11.s64 = 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82f691e8
	sub_82F691E8(ctx, base);
	// b 0x82ed8c38
	goto loc_82ED8C38;
loc_82ED8C18:
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,44
	r11.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82eed670
	sub_82EED670(ctx, base);
loc_82ED8C38:
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_82ED8C3C:
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lwz r29,96(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ed8c64
	if (cr6.eq) goto loc_82ED8C64;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// b 0x82ed8c74
	goto loc_82ED8C74;
loc_82ED8C64:
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82ED8C74:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r25,4000
	r25.s64 = 4000;
	// li r24,-1
	r24.s64 = -1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r27,r11,31184
	r27.s64 = r11.s64 + 31184;
	// beq cr6,0x82ed8cec
	if (cr6.eq) goto loc_82ED8CEC;
	// stw r25,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r25.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r30.u32);
	// addi r26,r29,40
	r26.s64 = r29.s64 + 40;
	// stw r30,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r30.u32);
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed8cbc
	if (cr6.eq) goto loc_82ED8CBC;
	// stw r29,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r29.u32);
loc_82ED8CBC:
	// mr r11,r24
	r11.u64 = r24.u64;
	// stw r27,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r27.u32);
	// stw r29,48(r27)
	PPC_STORE_U32(r27.u32 + 48, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// std r11,32(r27)
	PPC_STORE_U64(r27.u32 + 32, r11.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b9fc
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// std r24,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r24.u64);
	// b 0x82ed8cf0
	goto loc_82ED8CF0;
loc_82ED8CEC:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED8CF0:
	// stw r11,0(r15)
	PPC_STORE_U32(r15.u32 + 0, r11.u32);
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lwz r29,96(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ed8d1c
	if (cr6.eq) goto loc_82ED8D1C;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// b 0x82ed8d2c
	goto loc_82ED8D2C;
loc_82ED8D1C:
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82ED8D2C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ed8d94
	if (cr6.eq) goto loc_82ED8D94;
	// stw r25,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r25.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r30.u32);
	// addi r26,r29,40
	r26.s64 = r29.s64 + 40;
	// stw r30,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r30.u32);
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed8d64
	if (cr6.eq) goto loc_82ED8D64;
	// stw r29,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r29.u32);
loc_82ED8D64:
	// mr r11,r24
	r11.u64 = r24.u64;
	// stw r27,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r27.u32);
	// stw r29,48(r27)
	PPC_STORE_U32(r27.u32 + 48, r29.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// std r11,32(r27)
	PPC_STORE_U64(r27.u32 + 32, r11.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b9fc
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// std r24,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r24.u64);
	// b 0x82ed8d98
	goto loc_82ED8D98;
loc_82ED8D94:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED8D98:
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r9,r31,176
	ctx.r9.s64 = r31.s64 + 176;
	// lfs f0,200(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 200);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// stvewx v11,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x82ed8df0
	if (!cr6.eq) goto loc_82ED8DF0;
	// fmr f0,f25
	f0.f64 = f25.f64;
loc_82ED8DF0:
	// stfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lbz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U8(r20.u32 + 0);
	// lfs f0,100(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 100);
	f0.f64 = double(temp.f32);
	// lfs f13,92(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r11,r14
	r11.u64 = r14.u64;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bge cr6,0x82ed8e28
	if (!cr6.lt) goto loc_82ED8E28;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED8E28:
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, r11.u8);
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r9,r11,-2
	ctx.r9.s64 = r11.s64 + -2;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r11,r14
	r11.u64 = r14.u64;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r7.u8);
	// bge cr6,0x82ed8e54
	if (!cr6.lt) goto loc_82ED8E54;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82ED8E54:
	// lbz r9,144(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 144);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,4
	ctx.r7.s64 = 4;
	// stb r11,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, r11.u8);
	// sth r14,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, r14.u16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// sth r8,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r8.u16);
	// addi r10,r28,144
	ctx.r10.s64 = r28.s64 + 144;
	// sth r22,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, r22.u16);
	// stb r9,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r9.u8);
	// sth r7,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r7.u16);
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// bl 0x82f2d180
	sub_82F2D180(ctx, base);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// li r5,50
	ctx.r5.s64 = 50;
	// addi r6,r11,7264
	ctx.r6.s64 = r11.s64 + 7264;
	// li r4,108
	ctx.r4.s64 = 108;
	// stw r6,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r6.u32);
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r29,108
	r29.s64 = 108;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r29.u16);
	// bl 0x82ef4e10
	sub_82EF4E10(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, r11.u16);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lbz r9,38(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 38);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r8,r8,0,28,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stb r8,38(r11)
	PPC_STORE_U8(r11.u32 + 38, ctx.r8.u8);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lbz r7,38(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 38);
	// clrlwi r6,r7,26
	ctx.r6.u64 = ctx.r7.u32 & 0x3F;
	// stb r6,38(r11)
	PPC_STORE_U8(r11.u32 + 38, ctx.r6.u8);
	// addi r11,r31,184
	r11.s64 = r31.s64 + 184;
	// lbz r5,184(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 184);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ed8f5c
	if (!cr6.eq) goto loc_82ED8F5C;
	// li r5,50
	ctx.r5.s64 = 50;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r29,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r29.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ef4e10
	sub_82EF4E10(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r27,r31,40
	r27.s64 = r31.s64 + 40;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed8f3c
	if (!cr6.eq) goto loc_82ED8F3C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED8F3C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r8.u32);
	// sth r30,32(r29)
	PPC_STORE_U16(r29.u32 + 32, r30.u16);
loc_82ED8F5C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82ed4d70
	sub_82ED4D70(ctx, base);
	// li r11,7
	r11.s64 = 7;
	// stfs f30,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// li r5,45
	ctx.r5.s64 = 45;
	// stb r11,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, r11.u8);
	// li r4,512
	ctx.r4.s64 = 512;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r10,512
	ctx.r10.s64 = 512;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// bl 0x82ed3c60
	sub_82ED3C60(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ed5628
	sub_82ED5628(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82edd568
	sub_82EDD568(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stfs f30,400(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 400, temp.u32);
	// addi r11,r31,400
	r11.s64 = r31.s64 + 400;
	// lfs f0,-13364(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13364);
	f0.f64 = double(temp.f32);
	// lfs f13,-2472(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2472);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,404(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 404, temp.u32);
	// stfs f0,408(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 408, temp.u32);
	// stfs f13,412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 412, temp.u32);
	// lwz r7,0(r19)
	ctx.r7.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// stw r11,100(r7)
	PPC_STORE_U32(ctx.r7.u32 + 100, r11.u32);
	// lbz r6,40(r28)
	ctx.r6.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// beq cr6,0x82ed9010
	if (cr6.eq) goto loc_82ED9010;
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r17,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r17.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x82ee24d8
	sub_82EE24D8(ctx, base);
	// stw r3,396(r31)
	PPC_STORE_U32(r31.u32 + 396, ctx.r3.u32);
	// b 0x82ed9014
	goto loc_82ED9014;
loc_82ED9010:
	// stw r30,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r30.u32);
loc_82ED9014:
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,16
	r11.s64 = 16;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82ef4f80
	sub_82EF4F80(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U8(r20.u32 + 0);
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// beq cr6,0x82ed905c
	if (cr6.eq) goto loc_82ED905C;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x83207e40
	sub_83207E40(ctx, base);
loc_82ED905C:
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ed9088
	if (cr6.eq) goto loc_82ED9088;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r8.u32);
	// b 0x82ed9098
	goto loc_82ED9098;
loc_82ED9088:
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
loc_82ED9098:
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,1088
	ctx.r1.s64 = ctx.r1.s64 + 1088;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b1470
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82ED90B0"))) PPC_WEAK_FUNC(sub_82ED90B0);
PPC_FUNC_IMPL(__imp__sub_82ED90B0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r6,r7,21720
	ctx.r6.s64 = ctx.r7.s64 + 21720;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfs f0,-12568(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12568);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stfs f0,224(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// bne cr6,0x82ed90f8
	if (!cr6.eq) goto loc_82ED90F8;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82ED90F8:
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r4,84(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82f2e450
	sub_82F2E450(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED9138"))) PPC_WEAK_FUNC(sub_82ED9138);
PPC_FUNC_IMPL(__imp__sub_82ED9138) {
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
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,20
	r27.s64 = 20;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r26,68
	r26.s64 = 68;
	// sth r26,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r26.u16);
	// bl 0x82ef3738
	sub_82EF3738(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ed6288
	sub_82ED6288(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed91d8
	if (cr6.eq) goto loc_82ED91D8;
	// li r11,0
	r11.s64 = 0;
	// stb r11,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r8,r9,2
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ed91b8
	if (!cr6.eq) goto loc_82ED91B8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED91B8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// b 0x82ed91e0
	goto loc_82ED91E0;
loc_82ED91D8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ed91fc
	if (!cr6.eq) goto loc_82ED91FC;
loc_82ED91E0:
	// li r5,47
	ctx.r5.s64 = 47;
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// li r4,68
	ctx.r4.s64 = 68;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r26,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r26.u16);
	// bl 0x82ef3738
	sub_82EF3738(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82ED91FC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ed921c
	if (!cr6.eq) goto loc_82ED921C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82ED921C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// bl 0x82ed63c8
	sub_82ED63C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ed6750
	sub_82ED6750(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ed6590
	sub_82ED6590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ed6638
	sub_82ED6638(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82ED9278"))) PPC_WEAK_FUNC(sub_82ED9278);
PPC_FUNC_IMPL(__imp__sub_82ED9278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,22440
	ctx.r8.s64 = ctx.r10.s64 + 22440;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// li r7,-47
	ctx.r7.s64 = -47;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r7,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r7.u32);
	// sth r11,156(r3)
	PPC_STORE_U16(ctx.r3.u32 + 156, r11.u16);
	// stw r11,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, r11.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, r11.u32);
	// stw r10,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r10.u32);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, r11.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, r11.u32);
	// stw r10,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r10.u32);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, r11.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, r11.u32);
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, r11.u32);
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, r11.u32);
	// stw r10,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r10.u32);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, r11.u32);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, r11.u32);
	// stw r10,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r10.u32);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, r11.u32);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, r11.u32);
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, r11.u32);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, r11.u32);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, r11.u32);
	// stw r10,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r10.u32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, r11.u32);
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, r11.u32);
	// stw r10,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r10.u32);
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, r11.u32);
	// stw r11,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, r11.u32);
	// stw r10,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r10.u32);
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, r11.u32);
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, r11.u32);
	// stw r10,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, r11.u32);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, r11.u32);
	// stw r10,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r10.u32);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, r11.u32);
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, r11.u32);
	// stw r10,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ED9368"))) PPC_WEAK_FUNC(sub_82ED9368);
PPC_FUNC_IMPL(__imp__sub_82ED9368) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,22440
	ctx.r10.s64 = r11.s64 + 22440;
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ed93d8
	if (cr6.eq) goto loc_82ED93D8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ed93bc
	if (cr6.lt) goto loc_82ED93BC;
	// li r6,47
	ctx.r6.s64 = 47;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82ea8360
	sub_82EA8360(ctx, base);
	// b 0x82ed93d8
	goto loc_82ED93D8;
loc_82ED93BC:
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r11,r3,80
	r11.s64 = ctx.r3.s64 + 80;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
loc_82ED93D8:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed9414
	if (cr6.eq) goto loc_82ED9414;
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
	// bne cr6,0x82ed9414
	if (!cr6.eq) goto loc_82ED9414;
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
loc_82ED9414:
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r30,0
	r30.s64 = 0;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed9434
	if (cr6.eq) goto loc_82ED9434;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ecff30
	sub_82ECFF30(ctx, base);
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
loc_82ED9434:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed944c
	if (cr6.eq) goto loc_82ED944C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ecff30
	sub_82ECFF30(ctx, base);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
loc_82ED944C:
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed9464
	if (cr6.eq) goto loc_82ED9464;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ecff30
	sub_82ECFF30(ctx, base);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
loc_82ED9464:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed947c
	if (cr6.eq) goto loc_82ED947C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ecff30
	sub_82ECFF30(ctx, base);
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
loc_82ED947C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed94c4
	if (cr6.eq) goto loc_82ED94C4;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed94c0
	if (cr6.eq) goto loc_82ED94C0;
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
	// bne cr6,0x82ed94c0
	if (!cr6.eq) goto loc_82ED94C0;
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
loc_82ED94C0:
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_82ED94C4:
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed94f0
	if (!cr6.gt) goto loc_82ED94F0;
loc_82ED94D4:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82ed58f8
	sub_82ED58F8(ctx, base);
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82ed94d4
	if (cr6.gt) goto loc_82ED94D4;
loc_82ED94F0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed9530
	if (!cr6.gt) goto loc_82ED9530;
loc_82ED94FC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ed9530
	if (cr6.eq) goto loc_82ED9530;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82ed57c8
	sub_82ED57C8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82ed94fc
	if (cr6.gt) goto loc_82ED94FC;
loc_82ED9530:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed9564
	if (!cr6.gt) goto loc_82ED9564;
loc_82ED953C:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82ed57c8
	sub_82ED57C8(ctx, base);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x82ed953c
	if (cr6.gt) goto loc_82ED953C;
loc_82ED9564:
	// lbz r11,184(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ed95c8
	if (!cr6.eq) goto loc_82ED95C8;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,-4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// bl 0x82ee7360
	sub_82EE7360(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed95bc
	if (cr6.eq) goto loc_82ED95BC;
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
loc_82ED95BC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82ED95C8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ed57c8
	sub_82ED57C8(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ed9614
	if (!cr6.gt) goto loc_82ED9614;
loc_82ED95EC:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82ed57c8
	sub_82ED57C8(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x82ed95ec
	if (cr6.gt) goto loc_82ED95EC;
loc_82ED9614:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82ee7360
	sub_82EE7360(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed9640
	if (cr6.eq) goto loc_82ED9640;
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
loc_82ED9640:
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eec978
	sub_82EEC978(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed9688
	if (cr6.eq) goto loc_82ED9688;
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
	// bne cr6,0x82ed9688
	if (!cr6.eq) goto loc_82ED9688;
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
loc_82ED9688:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed96c8
	if (cr6.eq) goto loc_82ED96C8;
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
	// bne cr6,0x82ed96c8
	if (!cr6.eq) goto loc_82ED96C8;
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
loc_82ED96C8:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed96e0
	if (cr6.eq) goto loc_82ED96E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82edcbe0
	sub_82EDCBE0(ctx, base);
loc_82ED96E0:
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed9724
	if (cr6.eq) goto loc_82ED9724;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed9724
	if (cr6.eq) goto loc_82ED9724;
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
	// bne cr6,0x82ed9724
	if (!cr6.eq) goto loc_82ED9724;
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
loc_82ED9724:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed9744
	if (cr6.eq) goto loc_82ED9744;
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
loc_82ED9744:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed9764
	if (cr6.eq) goto loc_82ED9764;
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
loc_82ED9764:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed9784
	if (cr6.eq) goto loc_82ED9784;
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
loc_82ED9784:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed97c0
	if (cr6.eq) goto loc_82ED97C0;
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
	// bne cr6,0x82ed97c0
	if (!cr6.eq) goto loc_82ED97C0;
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
loc_82ED97C0:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed97fc
	if (cr6.eq) goto loc_82ED97FC;
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
	// bne cr6,0x82ed97fc
	if (!cr6.eq) goto loc_82ED97FC;
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
loc_82ED97FC:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ed9854
	if (cr6.eq) goto loc_82ED9854;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ed9838
	if (cr6.lt) goto loc_82ED9838;
	// li r6,31
	ctx.r6.s64 = 31;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82ea8360
	sub_82EA8360(ctx, base);
	// b 0x82ed9854
	goto loc_82ED9854;
loc_82ED9838:
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r3,72
	r11.s64 = ctx.r3.s64 + 72;
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
loc_82ED9854:
	// lwz r5,108(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ed98a8
	if (cr6.eq) goto loc_82ED98A8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ed988c
	if (cr6.lt) goto loc_82ED988C;
	// li r6,31
	ctx.r6.s64 = 31;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82ea8360
	sub_82EA8360(ctx, base);
	// b 0x82ed98a8
	goto loc_82ED98A8;
loc_82ED988C:
	// lwz r10,116(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r11,r3,112
	r11.s64 = ctx.r3.s64 + 112;
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r5,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r5.u32);
loc_82ED98A8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ed98e4
	if (cr6.eq) goto loc_82ED98E4;
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
	// bne cr6,0x82ed98e4
	if (!cr6.eq) goto loc_82ED98E4;
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
loc_82ED98E4:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ed98f8
	if (cr6.eq) goto loc_82ED98F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82edcc80
	sub_82EDCC80(ctx, base);
loc_82ED98F8:
	// lwz r11,392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9924
	if (!cr6.eq) goto loc_82ED9924;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 384);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9924:
	// lwz r11,380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 380);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9950
	if (!cr6.eq) goto loc_82ED9950;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,372(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9950:
	// lwz r11,368(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 368);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed997c
	if (!cr6.eq) goto loc_82ED997C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,360(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED997C:
	// lwz r11,356(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed99a8
	if (!cr6.eq) goto loc_82ED99A8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED99A8:
	// lwz r11,344(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed99d4
	if (!cr6.eq) goto loc_82ED99D4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED99D4:
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9a00
	if (!cr6.eq) goto loc_82ED9A00;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9A00:
	// lwz r11,320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9a2c
	if (!cr6.eq) goto loc_82ED9A2C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9A2C:
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9a58
	if (!cr6.eq) goto loc_82ED9A58;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9A58:
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9a84
	if (!cr6.eq) goto loc_82ED9A84;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9A84:
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9ab0
	if (!cr6.eq) goto loc_82ED9AB0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9AB0:
	// lwz r11,272(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9adc
	if (!cr6.eq) goto loc_82ED9ADC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9ADC:
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9b08
	if (!cr6.eq) goto loc_82ED9B08;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9B08:
	// lwz r11,248(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9b34
	if (!cr6.eq) goto loc_82ED9B34;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9B34:
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9b60
	if (!cr6.eq) goto loc_82ED9B60;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9B60:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9b8c
	if (!cr6.eq) goto loc_82ED9B8C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9B8C:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9bb8
	if (!cr6.eq) goto loc_82ED9BB8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9BB8:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9be4
	if (!cr6.eq) goto loc_82ED9BE4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9BE4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82ED9BF8"))) PPC_WEAK_FUNC(sub_82ED9BF8);
PPC_FUNC_IMPL(__imp__sub_82ED9BF8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed9c40
	if (cr6.eq) goto loc_82ED9C40;
	// li r11,19
	r11.s64 = 19;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// stb r22,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r22.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b60
	return;
loc_82ED9C40:
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,24
	r24.s64 = 24;
	// li r11,1
	r11.s64 = 1;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// lwzx r10,r27,r24
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed9c8c
	if (!cr6.lt) goto loc_82ED9C8C;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r7,r9,22508
	ctx.r7.s64 = ctx.r9.s64 + 22508;
	// addi r6,r8,22492
	ctx.r6.s64 = ctx.r8.s64 + 22492;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82ED9C8C:
	// li r23,20
	r23.s64 = 20;
	// lwz r31,760(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 760);
	// li r25,0
	r25.s64 = 0;
	// lis r28,-32768
	r28.s64 = -2147483648;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// addi r29,r26,16
	r29.s64 = r26.s64 + 16;
	// lwzx r3,r27,r23
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r23.u32);
	// rlwinm r4,r11,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF0;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ed9cd4
	if (cr6.gt) goto loc_82ED9CD4;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ed9ce8
	goto loc_82ED9CE8;
loc_82ED9CD4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82ED9CE8:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// or r10,r31,r28
	ctx.r10.u64 = r31.u64 | r28.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r27,r24
	r11.u64 = PPC_LOAD_U32(r27.u32 + r24.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82ed9d48
	if (!cr6.lt) goto loc_82ED9D48;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22472
	ctx.r8.s64 = ctx.r9.s64 + 22472;
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
loc_82ED9D48:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ed9d9c
	if (!cr6.gt) goto loc_82ED9D9C;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82ED9D5C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + r11.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82ed9d88
	if (cr6.eq) goto loc_82ED9D88;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82ed4f08
	sub_82ED4F08(ctx, base);
loc_82ED9D88:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82ed9d5c
	if (cr6.lt) goto loc_82ED9D5C;
loc_82ED9D9C:
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// beq cr6,0x82ed9de8
	if (cr6.eq) goto loc_82ED9DE8;
	// lwzx r10,r27,r24
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed9dd4
	if (!cr6.lt) goto loc_82ED9DD4;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22452
	ctx.r8.s64 = ctx.r9.s64 + 22452;
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
loc_82ED9DD4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED9DE8:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bne 0x82ed9e1c
	if (!cr0.eq) goto loc_82ED9E1C;
	// lbz r11,140(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ed9e1c
	if (!cr6.eq) goto loc_82ED9E1C;
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed9e1c
	if (cr6.eq) goto loc_82ED9E1C;
	// stw r25,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r25.u32);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82ED9E1C:
	// lwzx r10,r27,r24
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed9e4c
	if (!cr6.lt) goto loc_82ED9E4C;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-22156
	ctx.r8.s64 = ctx.r9.s64 + -22156;
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
loc_82ED9E4C:
	// lwzx r3,r27,r23
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r23.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ed9e74
	if (!cr6.eq) goto loc_82ED9E74;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ED9E74:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ed9e98
	if (!cr6.eq) goto loc_82ED9E98;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r27,r23
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r23.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82ED9E98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82ED9EA0"))) PPC_WEAK_FUNC(sub_82ED9EA0);
PPC_FUNC_IMPL(__imp__sub_82ED9EA0) {
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
	// stwu r1,-2304(r1)
	ea = -2304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// lwz r11,132(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ed9eec
	if (cr6.eq) goto loc_82ED9EEC;
	// li r10,18
	ctx.r10.s64 = 18;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// stb r5,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r5.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stb r21,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r21.u8);
	// lwz r3,124(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x831b0b54
	return;
loc_82ED9EEC:
	// lwz r22,0(r13)
	r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r20,24
	r20.s64 = 24;
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed9f30
	if (!cr6.lt) goto loc_82ED9F30;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r7,r9,22576
	ctx.r7.s64 = ctx.r9.s64 + 22576;
	// addi r6,r8,22568
	ctx.r6.s64 = ctx.r8.s64 + 22568;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r4
	ctx.r4.u64 = __rdtsc();
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82ED9F30:
	// lwz r11,132(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 132);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r19,0
	r19.s64 = 0;
	// ori r28,r10,128
	r28.u64 = ctx.r10.u64 | 128;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r19.u32);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r8,132(r24)
	PPC_STORE_U32(r24.u32 + 132, ctx.r8.u32);
	// bne cr6,0x82eda174
	if (!cr6.eq) goto loc_82EDA174;
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed9f90
	if (!cr6.lt) goto loc_82ED9F90;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22492
	ctx.r8.s64 = ctx.r9.s64 + 22492;
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
loc_82ED9F90:
	// lwz r3,84(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 84);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r23,36
	ctx.r4.s64 = r23.s64 + 36;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + r20.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ed9fdc
	if (!cr6.lt) goto loc_82ED9FDC;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22556
	ctx.r8.s64 = ctx.r9.s64 + 22556;
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
loc_82ED9FDC:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r19
	r30.u64 = r19.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eda09c
	if (!cr6.gt) goto loc_82EDA09C;
	// mr r31,r19
	r31.u64 = r19.u64;
loc_82ED9FF0:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + r11.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// bne cr6,0x82eda088
	if (!cr6.eq) goto loc_82EDA088;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82eda088
	if (cr6.eq) goto loc_82EDA088;
	// addi r4,r23,16
	ctx.r4.s64 = r23.s64 + 16;
	// lwz r5,112(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ed4f08
	sub_82ED4F08(ctx, base);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x82eda054
	if (cr6.eq) goto loc_82EDA054;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDA054:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
loc_82EDA088:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ed9ff0
	if (cr6.lt) goto loc_82ED9FF0;
loc_82EDA09C:
	// lwz r10,96(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 96);
	// addi r9,r1,1164
	ctx.r9.s64 = ctx.r1.s64 + 1164;
	// mr r11,r19
	r11.u64 = r19.u64;
	// stw r28,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, r28.u32);
	// addi r30,r23,92
	r30.s64 = r23.s64 + 92;
	// stw r9,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, ctx.r9.u32);
	// stw r11,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, r11.u32);
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82eda140
	if (!cr6.gt) goto loc_82EDA140;
	// mr r31,r19
	r31.u64 = r19.u64;
	// b 0x82eda0d0
	goto loc_82EDA0D0;
loc_82EDA0CC:
	// lwz r11,1156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
loc_82EDA0D0:
	// lwz r10,1160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eda0f0
	if (!cr6.eq) goto loc_82EDA0F0;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
	// lwz r11,1156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
loc_82EDA0F0:
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,1152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r10.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// addi r6,r10,20
	ctx.r6.s64 = ctx.r10.s64 + 20;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r4,r5,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + r31.u32);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82eda0cc
	if (cr6.lt) goto loc_82EDA0CC;
loc_82EDA140:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82f2bee8
	sub_82F2BEE8(ctx, base);
	// lwz r11,1160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eda174
	if (!cr6.eq) goto loc_82EDA174;
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r4,1152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// li r6,23
	ctx.r6.s64 = 23;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r22,r10
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDA174:
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eda1a4
	if (!cr6.lt) goto loc_82EDA1A4;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22544
	ctx.r8.s64 = ctx.r9.s64 + 22544;
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
loc_82EDA1A4:
	// lwz r11,96(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 96);
	// addi r27,r23,92
	r27.s64 = r23.s64 + 92;
	// lhz r28,42(r23)
	r28.u64 = PPC_LOAD_U16(r23.u32 + 42);
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eda29c
	if (!cr6.gt) goto loc_82EDA29C;
	// addi r26,r23,16
	r26.s64 = r23.s64 + 16;
	// mr r30,r19
	r30.u64 = r19.u64;
	// li r25,1
	r25.s64 = 1;
loc_82EDA1C8:
	// lwz r11,112(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 112);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// add r31,r10,r30
	r31.u64 = ctx.r10.u64 + r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
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
	// beq cr6,0x82eda22c
	if (cr6.eq) goto loc_82EDA22C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,116(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 116);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,26(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 26);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r8,7088(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7088);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82eda250
	if (!cr6.eq) goto loc_82EDA250;
loc_82EDA22C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82ef58a0
	sub_82EF58A0(ctx, base);
	// lwz r11,184(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 184);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwimi r10,r25,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r25.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stb r10,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r10.u8);
	// b 0x82eda288
	goto loc_82EDA288;
loc_82EDA250:
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// bne cr6,0x82eda288
	if (!cr6.eq) goto loc_82EDA288;
	// lbz r10,216(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 216);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82eda278
	if (!cr6.eq) goto loc_82EDA278;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r5,184(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 184);
	// b 0x82eda27c
	goto loc_82EDA27C;
loc_82EDA278:
	// lwz r5,184(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 184);
loc_82EDA27C:
	// lwz r4,108(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 108);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82f75ef0
	sub_82F75EF0(ctx, base);
loc_82EDA288:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82eda1c8
	if (cr6.lt) goto loc_82EDA1C8;
loc_82EDA29C:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82eda2fc
	if (!cr6.gt) goto loc_82EDA2FC;
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eda2d8
	if (!cr6.lt) goto loc_82EDA2D8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22532
	ctx.r8.s64 = ctx.r9.s64 + 22532;
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
loc_82EDA2D8:
	// lwz r11,112(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x82eda2ec
	if (!cr6.eq) goto loc_82EDA2EC;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
loc_82EDA2EC:
	// lwz r3,88(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 88);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82f2bdc0
	sub_82F2BDC0(ctx, base);
loc_82EDA2FC:
	// lwz r11,132(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r24)
	PPC_STORE_U32(r24.u32 + 132, r11.u32);
	// bne 0x82eda330
	if (!cr0.eq) goto loc_82EDA330;
	// lbz r11,140(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eda330
	if (!cr6.eq) goto loc_82EDA330;
	// lwz r11,128(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eda330
	if (cr6.eq) goto loc_82EDA330;
	// stw r19,128(r24)
	PPC_STORE_U32(r24.u32 + 128, r19.u32);
	// lwz r3,124(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82EDA330:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eda358
	if (!cr6.eq) goto loc_82EDA358;
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r6,23
	ctx.r6.s64 = 23;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r22,r10
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDA358:
	// lwzx r10,r22,r20
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eda388
	if (!cr6.lt) goto loc_82EDA388;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-22156
	ctx.r8.s64 = ctx.r9.s64 + -22156;
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
loc_82EDA388:
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_82EDA390"))) PPC_WEAK_FUNC(sub_82EDA390);
PPC_FUNC_IMPL(__imp__sub_82EDA390) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eda3d4
	if (cr6.eq) goto loc_82EDA3D4;
	// li r11,10
	r11.s64 = 10;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b6c
	return;
loc_82EDA3D4:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eda3ec
	if (cr6.eq) goto loc_82EDA3EC;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r10.u16);
loc_82EDA3EC:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r25,0
	r25.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r9,132(r27)
	PPC_STORE_U32(r27.u32 + 132, ctx.r9.u32);
	// ori r7,r10,4
	ctx.r7.u64 = ctx.r10.u64 | 4;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r25
	r28.u64 = r25.u64;
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82eda4f4
	if (!cr6.gt) goto loc_82EDA4F4;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82EDA448:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// addi r31,r11,504
	r31.s64 = r11.s64 + 504;
	// lhz r10,510(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 510);
	// lhz r9,508(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 508);
	// clrlwi r8,r10,18
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82eda474
	if (!cr6.eq) goto loc_82EDA474;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83207d98
	sub_83207D98(ctx, base);
loc_82EDA474:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r8.u16);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r5,r29,r6
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + ctx.r6.u32);
	// lwz r3,184(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 184);
	// lhz r4,32(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x82eda4d8
	if (cr6.eq) goto loc_82EDA4D8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82eda4c0
	if (!cr6.eq) goto loc_82EDA4C0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82ef49b0
	sub_82EF49B0(ctx, base);
	// b 0x82eda4d8
	goto loc_82EDA4D8;
loc_82EDA4C0:
	// lwz r11,184(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82eda4d8
	if (cr6.eq) goto loc_82EDA4D8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eeabd8
	sub_82EEABD8(ctx, base);
loc_82EDA4D8:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82eda448
	if (cr6.lt) goto loc_82EDA448;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82eda508
	if (!cr6.eq) goto loc_82EDA508;
loc_82EDA4F4:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// bl 0x82ef49b0
	sub_82EF49B0(ctx, base);
loc_82EDA508:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r27)
	PPC_STORE_U32(r27.u32 + 132, r11.u32);
	// bne 0x82eda53c
	if (!cr0.eq) goto loc_82EDA53C;
	// lbz r11,140(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eda53c
	if (!cr6.eq) goto loc_82EDA53C;
	// lwz r11,128(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eda53c
	if (cr6.eq) goto loc_82EDA53C;
	// stw r25,128(r27)
	PPC_STORE_U32(r27.u32 + 128, r25.u32);
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82EDA53C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eebd88
	sub_82EEBD88(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eda574
	if (!cr6.eq) goto loc_82EDA574;
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
loc_82EDA574:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EDA580"))) PPC_WEAK_FUNC(sub_82EDA580);
PPC_FUNC_IMPL(__imp__sub_82EDA580) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eda5ac
	if (cr6.eq) goto loc_82EDA5AC;
	// lhz r11,6(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r29)
	PPC_STORE_U16(r29.u32 + 6, ctx.r10.u16);
loc_82EDA5AC:
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r28)
	PPC_STORE_U32(r28.u32 + 132, r11.u32);
	// bl 0x82eebe60
	sub_82EEBE60(ctx, base);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r27,0
	r27.s64 = 0;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82eda688
	if (!cr6.gt) goto loc_82EDA688;
	// lis r11,0
	r11.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// ori r5,r11,65535
	ctx.r5.u64 = r11.u64 | 65535;
loc_82EDA614:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r27
	r11.u64 = r27.u64;
	// lwzx r9,r7,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lhz r8,508(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 508);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82eda64c
	if (!cr6.gt) goto loc_82EDA64C;
	// lwz r10,504(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 504);
loc_82EDA630:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// beq cr6,0x82eda650
	if (cr6.eq) goto loc_82EDA650;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82eda630
	if (cr6.lt) goto loc_82EDA630;
loc_82EDA64C:
	// li r11,-1
	r11.s64 = -1;
loc_82EDA650:
	// lhz r10,508(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 508);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,504(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 504);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3FFFC;
	// sth r11,508(r9)
	PPC_STORE_U16(ctx.r9.u32 + 508, r11.u16);
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stwx r9,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// blt cr6,0x82eda614
	if (cr6.lt) goto loc_82EDA614;
loc_82EDA688:
	// lwz r30,12(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef44f8
	sub_82EF44F8(ctx, base);
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eda6d8
	if (cr6.eq) goto loc_82EDA6D8;
	// lhz r11,6(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r29)
	PPC_STORE_U16(r29.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82eda6d8
	if (!cr6.eq) goto loc_82EDA6D8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDA6D8:
	// lhz r10,34(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82eda730
	if (!cr6.eq) goto loc_82EDA730;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// addi r31,r11,64
	r31.s64 = r11.s64 + 64;
	// sth r10,34(r30)
	PPC_STORE_U16(r30.u32 + 34, ctx.r10.u16);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r7,72(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// clrlwi r6,r7,2
	ctx.r6.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// bne cr6,0x82eda714
	if (!cr6.eq) goto loc_82EDA714;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EDA714:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82EDA730:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eda75c
	if (!cr6.eq) goto loc_82EDA75C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDA75C:
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r28)
	PPC_STORE_U32(r28.u32 + 132, r11.u32);
	// bne 0x82eda790
	if (!cr0.eq) goto loc_82EDA790;
	// lbz r11,140(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eda790
	if (!cr6.eq) goto loc_82EDA790;
	// lwz r11,128(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eda790
	if (cr6.eq) goto loc_82EDA790;
	// stw r27,128(r28)
	PPC_STORE_U32(r28.u32 + 128, r27.u32);
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82EDA790:
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eda7cc
	if (cr6.eq) goto loc_82EDA7CC;
	// lhz r11,6(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r29)
	PPC_STORE_U16(r29.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82eda7cc
	if (!cr6.eq) goto loc_82EDA7CC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDA7CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EDA7D8"))) PPC_WEAK_FUNC(sub_82EDA7D8);
PPC_FUNC_IMPL(__imp__sub_82EDA7D8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// lhz r9,508(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 508);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82eda820
	if (!cr6.gt) goto loc_82EDA820;
	// lwz r10,504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 504);
loc_82EDA804:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, xer);
	// beq cr6,0x82eda824
	if (cr6.eq) goto loc_82EDA824;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82eda804
	if (cr6.lt) goto loc_82EDA804;
loc_82EDA820:
	// li r11,-1
	r11.s64 = -1;
loc_82EDA824:
	// lhz r10,508(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 508);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,504(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 504);
	// li r7,1
	ctx.r7.s64 = 1;
	// addis r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 65536;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// rlwinm r6,r4,2,14,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// sth r4,508(r31)
	PPC_STORE_U16(r31.u32 + 508, ctx.r4.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r6,r8
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r11.u32);
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwimi r9,r7,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stb r9,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r9.u8);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82eda8d4
	if (!cr6.gt) goto loc_82EDA8D4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EDA8A4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, xer);
	// beq cr6,0x82eda8c4
	if (cr6.eq) goto loc_82EDA8C4;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r30,184(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 184);
	// lhz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// bne cr6,0x82eda8d4
	if (!cr6.eq) goto loc_82EDA8D4;
loc_82EDA8C4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82eda8a4
	if (cr6.lt) goto loc_82EDA8A4;
loc_82EDA8D4:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x82eda8f4
	if (cr6.eq) goto loc_82EDA8F4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ef44f8
	sub_82EF44F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ef49b0
	sub_82EF49B0(ctx, base);
loc_82EDA8F4:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eda920
	if (!cr6.eq) goto loc_82EDA920;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDA920:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDA928"))) PPC_WEAK_FUNC(sub_82EDA928);
PPC_FUNC_IMPL(__imp__sub_82EDA928) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,0(r13)
	r23.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,24
	r24.s64 = 24;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eda988
	if (!cr6.lt) goto loc_82EDA988;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r7,r9,22616
	ctx.r7.s64 = ctx.r9.s64 + 22616;
	// addi r6,r8,22492
	ctx.r6.s64 = ctx.r8.s64 + 22492;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82EDA988:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r10,108(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 108);
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f13.f64)));
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// lwz r3,84(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r7,128
	ctx.r4.u64 = ctx.r7.u64 | 128;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r23,r24
	r11.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// lwz r28,12(r8)
	r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bge cr6,0x82edaa30
	if (!cr6.lt) goto loc_82EDAA30;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r7,r8,22600
	ctx.r7.s64 = ctx.r8.s64 + 22600;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// mftb r6
	ctx.r6.u64 = __rdtsc();
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
loc_82EDAA30:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addic. r22,r11,-1
	xer.ca = r11.u32 > 0;
	r22.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// blt 0x82edaae4
	if (cr0.lt) goto loc_82EDAAE4;
	// addi r25,r9,4
	r25.s64 = ctx.r9.s64 + 4;
loc_82EDAA40:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82edaad8
	if (cr6.eq) goto loc_82EDAAD8;
	// lwz r11,112(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
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
	// beq cr6,0x82edaad8
	if (cr6.eq) goto loc_82EDAAD8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edaad8
	if (cr6.eq) goto loc_82EDAAD8;
	// addi r9,r28,13
	ctx.r9.s64 = r28.s64 + 13;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r8,r10
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,2472(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2472);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDAAD8:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// bge 0x82edaa40
	if (!cr0.lt) goto loc_82EDAA40;
loc_82EDAAE4:
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edab14
	if (!cr6.lt) goto loc_82EDAB14;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-22156
	ctx.r8.s64 = ctx.r9.s64 + -22156;
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
loc_82EDAB14:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edab3c
	if (!cr6.eq) goto loc_82EDAB3C;
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,23
	ctx.r6.s64 = 23;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r23,r10
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDAB3C:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82EDAB48"))) PPC_WEAK_FUNC(sub_82EDAB48);
PPC_FUNC_IMPL(__imp__sub_82EDAB48) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,0(r13)
	r23.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,24
	r24.s64 = 24;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edaba8
	if (!cr6.lt) goto loc_82EDABA8;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r7,r9,22648
	ctx.r7.s64 = ctx.r9.s64 + 22648;
	// addi r6,r8,22492
	ctx.r6.s64 = ctx.r8.s64 + 22492;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82EDABA8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r10,108(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 108);
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f13.f64)));
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// lwz r3,84(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r7,128
	ctx.r4.u64 = ctx.r7.u64 | 128;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r23,r24
	r11.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// lwz r27,12(r8)
	r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bge cr6,0x82edac50
	if (!cr6.lt) goto loc_82EDAC50;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r7,r8,22600
	ctx.r7.s64 = ctx.r8.s64 + 22600;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// mftb r6
	ctx.r6.u64 = __rdtsc();
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
loc_82EDAC50:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addic. r22,r11,-1
	xer.ca = r11.u32 > 0;
	r22.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// blt 0x82edad10
	if (cr0.lt) goto loc_82EDAD10;
	// addi r25,r9,4
	r25.s64 = ctx.r9.s64 + 4;
loc_82EDAC60:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82edad04
	if (cr6.eq) goto loc_82EDAD04;
	// lwz r11,112(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 112);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
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
	// beq cr6,0x82edad04
	if (cr6.eq) goto loc_82EDAD04;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edad04
	if (cr6.eq) goto loc_82EDAD04;
	// addi r9,r27,13
	ctx.r9.s64 = r27.s64 + 13;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r8,r10
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,2468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2468);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82edad10
	if (!cr6.eq) goto loc_82EDAD10;
loc_82EDAD04:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// bge 0x82edac60
	if (!cr0.lt) goto loc_82EDAC60;
loc_82EDAD10:
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edad40
	if (!cr6.lt) goto loc_82EDAD40;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-22156
	ctx.r8.s64 = ctx.r9.s64 + -22156;
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
loc_82EDAD40:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edad68
	if (!cr6.eq) goto loc_82EDAD68;
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,23
	ctx.r6.s64 = 23;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r23,r10
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDAD68:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82EDAD70"))) PPC_WEAK_FUNC(sub_82EDAD70);
PPC_FUNC_IMPL(__imp__sub_82EDAD70) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edadb4
	if (cr6.eq) goto loc_82EDADB4;
	// li r10,20
	ctx.r10.s64 = 20;
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// stb r18,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r18.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r3,124(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831b0b44
	return;
loc_82EDADB4:
	// lwz r16,0(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r15,24
	r15.s64 = 24;
	// li r24,1
	r24.s64 = 1;
	// stb r24,140(r25)
	PPC_STORE_U8(r25.u32 + 140, r24.u8);
	// lwzx r10,r16,r15
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + r15.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edadf4
	if (!cr6.lt) goto loc_82EDADF4;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22676
	ctx.r8.s64 = ctx.r9.s64 + 22676;
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
loc_82EDADF4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// li r17,0
	r17.s64 = 0;
	// bne cr6,0x82edaf88
	if (!cr6.eq) goto loc_82EDAF88;
	// lwz r11,44(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// addi r27,r25,40
	r27.s64 = r25.s64 + 40;
	// mr r26,r17
	r26.u64 = r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82edae78
	if (!cr6.gt) goto loc_82EDAE78;
	// mr r28,r17
	r28.u64 = r17.u64;
loc_82EDAE18:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r31,r17
	r31.u64 = r17.u64;
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// addi r29,r11,72
	r29.s64 = r11.s64 + 72;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82edae64
	if (!cr6.gt) goto loc_82EDAE64;
	// mr r30,r17
	r30.u64 = r17.u64;
loc_82EDAE38:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ed9ea0
	sub_82ED9EA0(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82edae38
	if (cr6.lt) goto loc_82EDAE38;
loc_82EDAE64:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82edae18
	if (cr6.lt) goto loc_82EDAE18;
loc_82EDAE78:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82edaeec
	if (!cr6.gt) goto loc_82EDAEEC;
	// mr r28,r17
	r28.u64 = r17.u64;
loc_82EDAE8C:
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 52);
	// mr r31,r17
	r31.u64 = r17.u64;
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// addi r29,r11,72
	r29.s64 = r11.s64 + 72;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82edaed8
	if (!cr6.gt) goto loc_82EDAED8;
	// mr r30,r17
	r30.u64 = r17.u64;
loc_82EDAEAC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82ed9ea0
	sub_82ED9EA0(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82edaeac
	if (cr6.lt) goto loc_82EDAEAC;
loc_82EDAED8:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82edae8c
	if (cr6.lt) goto loc_82EDAE8C;
loc_82EDAEEC:
	// lwz r11,232(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 232);
	// mr r30,r17
	r30.u64 = r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82edaf28
	if (!cr6.gt) goto loc_82EDAF28;
	// mr r31,r17
	r31.u64 = r17.u64;
loc_82EDAF00:
	// lwz r11,228(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 228);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82ed9bf8
	sub_82ED9BF8(ctx, base);
	// lwz r10,232(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 232);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82edaf00
	if (cr6.lt) goto loc_82EDAF00;
loc_82EDAF28:
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// stb r17,140(r25)
	PPC_STORE_U8(r25.u32 + 140, r17.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82edaf50
	if (!cr6.eq) goto loc_82EDAF50;
	// lwz r11,128(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edaf50
	if (cr6.eq) goto loc_82EDAF50;
	// stw r17,128(r25)
	PPC_STORE_U32(r25.u32 + 128, r17.u32);
	// lwz r3,124(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82EDAF50:
	// lwzx r10,r16,r15
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + r15.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edaf80
	if (!cr6.lt) goto loc_82EDAF80;
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
loc_82EDAF80:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831b0b44
	return;
loc_82EDAF88:
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// addi r10,r25,40
	ctx.r10.s64 = r25.s64 + 40;
	// addi r9,r25,52
	ctx.r9.s64 = r25.s64 + 52;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r20,r1,88
	r20.s64 = ctx.r1.s64 + 88;
	// stw r8,132(r25)
	PPC_STORE_U32(r25.u32 + 132, ctx.r8.u32);
	// li r19,2
	r19.s64 = 2;
loc_82EDAFAC:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lwz r23,0(r20)
	r23.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r21,r17
	r21.u64 = r17.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82edb168
	if (!cr6.gt) goto loc_82EDB168;
	// mr r22,r17
	r22.u64 = r17.u64;
loc_82EDAFDC:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// lwzx r30,r22,r11
	r30.u64 = PPC_LOAD_U32(r22.u32 + r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r28,r30,88
	r28.s64 = r30.s64 + 88;
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82edb150
	if (!cr6.gt) goto loc_82EDB150;
	// mr r26,r17
	r26.u64 = r17.u64;
loc_82EDB004:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// lwzx r31,r26,r11
	r31.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne cr6,0x82edb02c
	if (!cr6.eq) goto loc_82EDB02C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// b 0x82edb030
	goto loc_82EDB030;
loc_82EDB02C:
	// addi r29,r31,512
	r29.s64 = r31.s64 + 512;
loc_82EDB030:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x82edb114
	if (!cr6.lt) goto loc_82EDB114;
loc_82EDB038:
	// lwz r11,112(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 112);
	// addi r3,r1,83
	ctx.r3.s64 = ctx.r1.s64 + 83;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
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
	// beq cr6,0x82edb09c
	if (cr6.eq) goto loc_82EDB09C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,116(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 116);
	// lhz r11,26(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 26);
	// lhz r8,26(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 26);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// lbz r5,7088(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 7088);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82edb0e8
	if (!cr6.eq) goto loc_82EDB0E8;
loc_82EDB09C:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82edb0bc
	if (!cr6.eq) goto loc_82EDB0BC;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EDB0BC:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lbz r6,37(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// rlwimi r6,r24,6,0,25
	ctx.r6.u64 = (__builtin_rotateleft32(r24.u32, 6) & 0xFFFFFFC0) | (ctx.r6.u64 & 0xFFFFFFFF0000003F);
	// stb r6,37(r30)
	PPC_STORE_U8(r30.u32 + 37, ctx.r6.u8);
	// b 0x82edb100
	goto loc_82EDB100;
loc_82EDB0E8:
	// cmpwi cr6,r18,1
	cr6.compare<int32_t>(r18.s32, 1, xer);
	// bne cr6,0x82edb100
	if (!cr6.eq) goto loc_82EDB100;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,108(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82f75ef0
	sub_82F75EF0(ctx, base);
loc_82EDB100:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82edb038
	if (cr6.lt) goto loc_82EDB038;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82EDB114:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82edb004
	if (cr6.lt) goto loc_82EDB004;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82edb150
	if (cr6.eq) goto loc_82EDB150;
loc_82EDB128:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// lwz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82ef58a0
	sub_82EF58A0(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edb128
	if (!cr6.eq) goto loc_82EDB128;
loc_82EDB150:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// blt cr6,0x82edafdc
	if (cr6.lt) goto loc_82EDAFDC;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82EDB168:
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edb18c
	if (!cr6.eq) goto loc_82EDB18C;
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,23
	ctx.r6.s64 = 23;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r16,r10
	ctx.r3.u64 = PPC_LOAD_U32(r16.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDB18C:
	// addic. r19,r19,-1
	xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// bne 0x82edafac
	if (!cr0.eq) goto loc_82EDAFAC;
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,132(r25)
	PPC_STORE_U32(r25.u32 + 132, r11.u32);
	// b 0x82edaf28
	goto loc_82EDAF28;
}

__attribute__((alias("__imp__sub_82EDB1A8"))) PPC_WEAK_FUNC(sub_82EDB1A8);
PPC_FUNC_IMPL(__imp__sub_82EDB1A8) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r14,r4
	r14.u64 = ctx.r4.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x82edb8b0
	if (cr6.eq) goto loc_82EDB8B0;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edb210
	if (cr6.eq) goto loc_82EDB210;
	// li r11,6
	r11.s64 = 6;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r14.u32);
	// sth r18,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r18.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// stb r16,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r16.u8);
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831b0b40
	return;
loc_82EDB210:
	// lwz r20,0(r13)
	r20.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r15,24
	r15.s64 = 24;
	// lwzx r10,r20,r15
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r15.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edb254
	if (!cr6.lt) goto loc_82EDB254;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r7,r9,22744
	ctx.r7.s64 = ctx.r9.s64 + 22744;
	// addi r6,r8,22568
	ctx.r6.s64 = ctx.r8.s64 + 22568;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// mftb r5
	ctx.r5.u64 = __rdtsc();
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_82EDB254:
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// li r17,20
	r17.s64 = 20;
	// li r23,0
	r23.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lis r19,-32768
	r19.s64 = -2147483648;
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// addi r10,r18,4
	ctx.r10.s64 = r18.s64 + 4;
	// lwzx r3,r20,r17
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r17.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// rlwinm r4,r10,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82edb2a4
	if (cr6.gt) goto loc_82EDB2A4;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82edb2b4
	goto loc_82EDB2B4;
loc_82EDB2A4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDB2B4:
	// or r31,r18,r19
	r31.u64 = r18.u64 | r19.u64;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r19.u32);
	// rlwinm r11,r18,5,0,26
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lwzx r3,r20,r17
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r17.u32);
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82edb2fc
	if (cr6.gt) goto loc_82EDB2FC;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82edb310
	goto loc_82EDB310;
loc_82EDB2FC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EDB310:
	// lbz r10,184(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 184);
	// li r22,1
	r22.s64 = 1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// mr r21,r23
	r21.u64 = r23.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// beq cr6,0x82edb39c
	if (cr6.eq) goto loc_82EDB39C;
	// li r5,50
	ctx.r5.s64 = 50;
	// lwzx r3,r20,r17
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r17.u32);
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r11,108
	r11.s64 = 108;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// bl 0x82ef4e10
	sub_82EF4E10(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r16,1
	cr6.compare<int32_t>(r16.s32, 1, xer);
	// lbz r10,37(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 37);
	// rlwimi r10,r22,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r22.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stb r10,37(r27)
	PPC_STORE_U8(r27.u32 + 37, ctx.r10.u8);
	// bne cr6,0x82edb384
	if (!cr6.eq) goto loc_82EDB384;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// li r10,5
	ctx.r10.s64 = 5;
	// lbz r9,38(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 38);
	// rlwimi r9,r10,4,0,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFF0) | (ctx.r9.u64 & 0xFFFFFFFF0000000F);
	// sth r11,32(r27)
	PPC_STORE_U16(r27.u32 + 32, r11.u16);
	// stb r9,38(r27)
	PPC_STORE_U8(r27.u32 + 38, ctx.r9.u8);
	// b 0x82edb3dc
	goto loc_82EDB3DC;
loc_82EDB384:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lbz r10,38(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 38);
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// sth r11,32(r27)
	PPC_STORE_U16(r27.u32 + 32, r11.u16);
	// stb r8,38(r27)
	PPC_STORE_U8(r27.u32 + 38, ctx.r8.u8);
	// b 0x82edb3dc
	goto loc_82EDB3DC;
loc_82EDB39C:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r27,72
	ctx.r3.s64 = r27.s64 + 72;
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// add r11,r11,r18
	r11.u64 = r11.u64 + r18.u64;
	// clrlwi r10,r10,2
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82edb3dc
	if (!cr6.lt) goto loc_82EDB3DC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82edb3d0
	if (!cr6.lt) goto loc_82EDB3D0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EDB3D0:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EDB3DC:
	// lwz r11,108(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 108);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * f0.f64));
	// ble cr6,0x82edb574
	if (!cr6.gt) goto loc_82EDB574;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r25,r29,709
	r25.s64 = r29.s64 + 709;
	// mr r26,r14
	r26.u64 = r14.u64;
	// mr r24,r18
	r24.u64 = r18.u64;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_82EDB40C:
	// lwz r11,224(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 224);
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,224(r29)
	PPC_STORE_U32(r29.u32 + 224, r11.u32);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// bl 0x82edd548
	sub_82EDD548(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82edb44c
	if (!cr6.eq) goto loc_82EDB44C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_82EDB44C:
	// addi r5,r31,224
	ctx.r5.s64 = r31.s64 + 224;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x83206f38
	sub_83206F38(ctx, base);
	// sth r23,218(r31)
	PPC_STORE_U16(r31.u32 + 218, r23.u16);
	// sth r23,220(r31)
	PPC_STORE_U16(r31.u32 + 220, r23.u16);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// lbz r11,711(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 711);
	// lbz r10,217(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 217);
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r7,r11,30
	ctx.r7.u64 = r11.u32 & 0x3;
	// lbz r8,1(r25)
	ctx.r8.u64 = PPC_LOAD_U8(r25.u32 + 1);
	// lbz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x82edb48c
	if (!cr6.lt) goto loc_82EDB48C;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
loc_82EDB48C:
	// rlwinm r9,r9,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82edb4a4
	if (!cr6.lt) goto loc_82EDB4A4;
	// not r11,r8
	r11.u64 = ~ctx.r8.u64;
	// rlwinm r11,r11,14,0,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
	// b 0x82edb4a8
	goto loc_82EDB4A8;
loc_82EDB4A4:
	// rlwinm r11,r8,14,0,17
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
loc_82EDB4A8:
	// lhz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 220);
	// lhz r8,218(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 218);
	// clrlwi r7,r10,18
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFF;
	// clrlwi r6,r8,18
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFF;
	// or r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 | r11.u64;
	// or r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 | ctx.r9.u64;
	// sth r5,220(r31)
	PPC_STORE_U16(r31.u32 + 220, ctx.r5.u16);
	// sth r4,218(r31)
	PPC_STORE_U16(r31.u32 + 218, ctx.r4.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 216);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82edb4e0
	if (!cr6.eq) goto loc_82EDB4E0;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// b 0x82edb4e8
	goto loc_82EDB4E8;
loc_82EDB4E0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r21,r22
	r21.u64 = r22.u64;
loc_82EDB4E8:
	// bl 0x82ef45a8
	sub_82EF45A8(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r28,16(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82edb560
	if (cr6.eq) goto loc_82EDB560;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r30,20
	ctx.r6.s64 = r30.s64 + 20;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r6,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x82ee0f00
	sub_82EE0F00(ctx, base);
loc_82EDB560:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// stw r22,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r22.u32);
	// stw r23,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r23.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x82edb40c
	if (!cr0.eq) goto loc_82EDB40C;
loc_82EDB574:
	// lbz r11,184(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edb604
	if (cr6.eq) goto loc_82EDB604;
	// clrlwi r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edb5ec
	if (cr6.eq) goto loc_82EDB5EC;
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// cmpwi cr6,r16,1
	cr6.compare<int32_t>(r16.s32, 1, xer);
	// addi r31,r29,40
	r31.s64 = r29.s64 + 40;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// stb r9,36(r27)
	PPC_STORE_U8(r27.u32 + 36, ctx.r9.u8);
	// beq cr6,0x82edb5ac
	if (cr6.eq) goto loc_82EDB5AC;
	// addi r31,r29,52
	r31.s64 = r29.s64 + 52;
loc_82EDB5AC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82edb5cc
	if (!cr6.eq) goto loc_82EDB5CC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EDB5CC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r27.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// b 0x82edb604
	goto loc_82EDB604;
loc_82EDB5EC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDB604:
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r23.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r23.u32);
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r19.u32);
	// lwz r31,760(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 760);
	// lwzx r3,r20,r17
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r17.u32);
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// rlwinm r4,r11,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82edb63c
	if (cr6.gt) goto loc_82EDB63C;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82edb650
	goto loc_82EDB650;
loc_82EDB63C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EDB650:
	// or r10,r31,r19
	ctx.r10.u64 = r31.u64 | r19.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwzx r11,r20,r15
	r11.u64 = PPC_LOAD_U32(r20.u32 + r15.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edb690
	if (!cr6.lt) goto loc_82EDB690;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22728
	ctx.r8.s64 = ctx.r9.s64 + 22728;
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
loc_82EDB690:
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r20,r15
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r15.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edb6e0
	if (!cr6.lt) goto loc_82EDB6E0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22712
	ctx.r8.s64 = ctx.r9.s64 + 22712;
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
loc_82EDB6E0:
	// lwz r11,112(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x82edb6f4
	if (!cr6.eq) goto loc_82EDB6F4;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
loc_82EDB6F4:
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82f2bdc0
	sub_82F2BDC0(ctx, base);
	// lwzx r10,r20,r15
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r15.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edb734
	if (!cr6.lt) goto loc_82EDB734;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22700
	ctx.r8.s64 = ctx.r9.s64 + 22700;
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
loc_82EDB734:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// ble cr6,0x82edb768
	if (!cr6.gt) goto loc_82EDB768;
	// mr r30,r14
	r30.u64 = r14.u64;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_82EDB744:
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82eebf38
	sub_82EEBF38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eeb428
	sub_82EEB428(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82edb744
	if (!cr0.eq) goto loc_82EDB744;
loc_82EDB768:
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// bne 0x82edb79c
	if (!cr0.eq) goto loc_82EDB79C;
	// lbz r11,140(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82edb79c
	if (!cr6.eq) goto loc_82EDB79C;
	// lwz r11,128(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edb79c
	if (cr6.eq) goto loc_82EDB79C;
	// stw r23,128(r29)
	PPC_STORE_U32(r29.u32 + 128, r23.u32);
	// lwz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82EDB79C:
	// lwzx r10,r20,r15
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r15.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edb7cc
	if (!cr6.lt) goto loc_82EDB7CC;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-22156
	ctx.r8.s64 = ctx.r9.s64 + -22156;
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
loc_82EDB7CC:
	// lwzx r3,r20,r17
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r17.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82edb7f4
	if (!cr6.eq) goto loc_82EDB7F4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDB7F4:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edb818
	if (!cr6.eq) goto loc_82EDB818;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r20,r17
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r17.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDB818:
	// lwzx r3,r20,r17
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r17.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82edb840
	if (!cr6.eq) goto loc_82EDB840;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDB840:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edb864
	if (!cr6.eq) goto loc_82EDB864;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r20,r17
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r17.u32);
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDB864:
	// lwzx r3,r20,r17
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r17.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82edb88c
	if (!cr6.eq) goto loc_82EDB88C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDB88C:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edb8b0
	if (!cr6.eq) goto loc_82EDB8B0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r20,r17
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + r17.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDB8B0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82EDB8C0"))) PPC_WEAK_FUNC(sub_82EDB8C0);
PPC_FUNC_IMPL(__imp__sub_82EDB8C0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// blt cr6,0x82edbce4
	if (cr6.lt) goto loc_82EDBCE4;
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edb910
	if (cr6.eq) goto loc_82EDB910;
	// li r11,7
	r11.s64 = 7;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// sth r30,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r30.u16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b64
	return;
loc_82EDB910:
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,24
	r23.s64 = 24;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,132(r27)
	PPC_STORE_U32(r27.u32 + 132, ctx.r9.u32);
	// lwzx r10,r29,r23
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r23.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82edb95c
	if (!cr6.lt) goto loc_82EDB95C;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r6,r8,22816
	ctx.r6.s64 = ctx.r8.s64 + 22816;
	// addi r5,r7,22800
	ctx.r5.s64 = ctx.r7.s64 + 22800;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r5.u32);
	// mftb r4
	ctx.r4.u64 = __rdtsc();
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_82EDB95C:
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r26,20
	r26.s64 = 20;
	// li r25,0
	r25.s64 = 0;
	// lis r28,-32768
	r28.s64 = -2147483648;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// lwzx r3,r29,r26
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// rlwinm r4,r8,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFF0;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82edb9c8
	if (cr6.gt) goto loc_82EDB9C8;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82edb9dc
	goto loc_82EDB9DC;
loc_82EDB9C8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EDB9DC:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// or r9,r30,r28
	ctx.r9.u64 = r30.u64 | r28.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// add r24,r10,r31
	r24.u64 = ctx.r10.u64 + r31.u64;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(r31.u32, r24.u32, xer);
	// beq cr6,0x82edba40
	if (cr6.eq) goto loc_82EDBA40;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82EDBA04:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82edba34
	if (cr6.eq) goto loc_82EDBA34;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,20
	ctx.r6.s64 = r11.s64 + 20;
	// stwx r6,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
loc_82EDBA34:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r24
	cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, xer);
	// bne cr6,0x82edba04
	if (!cr6.eq) goto loc_82EDBA04;
loc_82EDBA40:
	// lwzx r10,r29,r23
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r23.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edba70
	if (!cr6.lt) goto loc_82EDBA70;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22784
	ctx.r8.s64 = ctx.r9.s64 + 22784;
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
loc_82EDBA70:
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// lwz r30,760(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 760);
	// lwzx r3,r29,r26
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// rlwinm r4,r11,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82edbaa8
	if (cr6.gt) goto loc_82EDBAA8;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82edbabc
	goto loc_82EDBABC;
loc_82EDBAA8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EDBABC:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// or r10,r30,r28
	ctx.r10.u64 = r30.u64 | r28.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,84(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 84);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r29,r23
	r11.u64 = PPC_LOAD_U32(r29.u32 + r23.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82edbb18
	if (!cr6.lt) goto loc_82EDBB18;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22772
	ctx.r8.s64 = ctx.r9.s64 + 22772;
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
loc_82EDBB18:
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 88);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82f2be78
	sub_82F2BE78(ctx, base);
	// lwzx r3,r29,r26
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82edbb50
	if (!cr6.eq) goto loc_82EDBB50;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDBB50:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edbb74
	if (!cr6.eq) goto loc_82EDBB74;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r29,r26
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDBB74:
	// lwzx r3,r29,r26
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82edbb9c
	if (!cr6.eq) goto loc_82EDBB9C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDBB9C:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edbbc0
	if (!cr6.eq) goto loc_82EDBBC0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r29,r26
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDBBC0:
	// lwzx r10,r29,r23
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r23.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edbbf0
	if (!cr6.lt) goto loc_82EDBBF0;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,22760
	ctx.r8.s64 = ctx.r9.s64 + 22760;
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
loc_82EDBBF0:
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(r31.u32, r24.u32, xer);
	// beq cr6,0x82edbc80
	if (cr6.eq) goto loc_82EDBC80;
loc_82EDBBF8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eec010
	sub_82EEC010(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eeb500
	sub_82EEB500(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82ee8540
	sub_82EE8540(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82edbc4c
	if (cr6.eq) goto loc_82EDBC4C;
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwzx r3,r29,r26
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r26.u32);
	// rotlwi r5,r11,5
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 5);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r25,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, r25.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// sth r25,80(r9)
	PPC_STORE_U16(ctx.r9.u32 + 80, r25.u16);
loc_82EDBC4C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82edbc6c
	if (!cr6.eq) goto loc_82EDBC6C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDBC6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82edd568
	sub_82EDD568(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(r31.u32, r24.u32, xer);
	// bne cr6,0x82edbbf8
	if (!cr6.eq) goto loc_82EDBBF8;
loc_82EDBC80:
	// lwzx r10,r29,r23
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r23.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82edbcb0
	if (!cr6.lt) goto loc_82EDBCB0;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r8,r9,-22156
	ctx.r8.s64 = ctx.r9.s64 + -22156;
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
loc_82EDBCB0:
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r27)
	PPC_STORE_U32(r27.u32 + 132, r11.u32);
	// bne 0x82edbce4
	if (!cr0.eq) goto loc_82EDBCE4;
	// lbz r11,140(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82edbce4
	if (!cr6.eq) goto loc_82EDBCE4;
	// lwz r11,128(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edbce4
	if (cr6.eq) goto loc_82EDBCE4;
	// stw r25,128(r27)
	PPC_STORE_U32(r27.u32 + 128, r25.u32);
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82EDBCE4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EDBCF0"))) PPC_WEAK_FUNC(sub_82EDBCF0);
PPC_FUNC_IMPL(__imp__sub_82EDBCF0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edbd34
	if (cr6.eq) goto loc_82EDBD34;
	// li r11,8
	r11.s64 = 8;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_82EDBD34:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r3,12
	cr6.compare<int32_t>(ctx.r3.s32, 12, xer);
	// bne cr6,0x82edbd98
	if (!cr6.eq) goto loc_82EDBD98;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lhz r11,28(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82edbd98
	if (!cr6.eq) goto loc_82EDBD98;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// sth r8,28(r29)
	PPC_STORE_U16(r29.u32 + 28, ctx.r8.u16);
	// sth r7,30(r29)
	PPC_STORE_U16(r29.u32 + 30, ctx.r7.u16);
loc_82EDBD98:
	// stb r28,140(r30)
	PPC_STORE_U8(r30.u32 + 140, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ee5c60
	sub_82EE5C60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ee7048
	sub_82EE7048(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82edbe00
	if (!cr6.eq) goto loc_82EDBE00;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82edbdec
	if (!cr6.eq) goto loc_82EDBDEC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eda390
	sub_82EDA390(ctx, base);
loc_82EDBDEC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDBE00:
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// li r11,0
	r11.s64 = 0;
	// stb r11,140(r30)
	PPC_STORE_U8(r30.u32 + 140, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edbe2c
	if (!cr6.eq) goto loc_82EDBE2C;
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82edbe2c
	if (cr6.eq) goto loc_82EDBE2C;
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82EDBE2C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EDBE38"))) PPC_WEAK_FUNC(sub_82EDBE38);
PPC_FUNC_IMPL(__imp__sub_82EDBE38) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,44
	ctx.r9.s64 = 44;
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ee5920
	sub_82EE5920(ctx, base);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r8,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r8.u32);
	// bl 0x82edbcf0
	sub_82EDBCF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EDBEB0"))) PPC_WEAK_FUNC(sub_82EDBEB0);
PPC_FUNC_IMPL(__imp__sub_82EDBEB0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edbf00
	if (cr6.eq) goto loc_82EDBF00;
	// li r11,9
	r11.s64 = 9;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EDBF00:
	// li r28,1
	r28.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82edbf3c
	if (!cr6.eq) goto loc_82EDBF3C;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82edbf3c
	if (!cr6.eq) goto loc_82EDBF3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eda580
	sub_82EDA580(ctx, base);
loc_82EDBF3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ee7100
	sub_82EE7100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ee58d8
	sub_82EE58D8(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82edbf90
	if (!cr0.eq) goto loc_82EDBF90;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82edbf90
	if (!cr6.eq) goto loc_82EDBF90;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edbf90
	if (cr6.eq) goto loc_82EDBF90;
	// li r11,0
	r11.s64 = 0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82EDBF90:
	// stb r28,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r28.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EDBFA0"))) PPC_WEAK_FUNC(sub_82EDBFA0);
PPC_FUNC_IMPL(__imp__sub_82EDBFA0) {
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
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edbfe0
	if (cr6.eq) goto loc_82EDBFE0;
	// li r11,11
	r11.s64 = 11;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82EDBFE0:
	// bl 0x82eda580
	sub_82EDA580(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDBFF8"))) PPC_WEAK_FUNC(sub_82EDBFF8);
PPC_FUNC_IMPL(__imp__sub_82EDBFF8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r10,136(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 136);
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82edc044
	if (cr0.eq) goto loc_82EDC044;
	// li r11,15
	r11.s64 = 15;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// sth r31,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r31.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b5c
	return;
loc_82EDC044:
	// lwz r22,0(r13)
	r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,20
	r23.s64 = 20;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r25,0
	r25.s64 = 0;
	// stw r11,132(r28)
	PPC_STORE_U32(r28.u32 + 132, r11.u32);
	// lis r24,-32768
	r24.s64 = -2147483648;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// rlwinm r4,r10,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r24.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82edc094
	if (cr6.gt) goto loc_82EDC094;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82edc0a4
	goto loc_82EDC0A4;
loc_82EDC094:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDC0A4:
	// or r30,r31,r24
	r30.u64 = r31.u64 | r24.u64;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r24.u32);
	// rlwinm r11,r31,5,0,26
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82edc0ec
	if (cr6.gt) goto loc_82EDC0EC;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82edc100
	goto loc_82EDC100;
loc_82EDC0EC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EDC100:
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// ble cr6,0x82edc1e8
	if (!cr6.gt) goto loc_82EDC1E8;
	// addi r30,r28,228
	r30.s64 = r28.s64 + 228;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82EDC12C:
	// lwzx r31,r29,r21
	r31.u64 = PPC_LOAD_U32(r29.u32 + r21.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82edc154
	if (!cr6.eq) goto loc_82EDC154;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_82EDC154:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r11,r29,r10
	PPC_STORE_U32(r29.u32 + ctx.r10.u32, r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r4,r27,r11
	ctx.r4.u64 = r27.u64 + r11.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82edd548
	sub_82EDD548(ctx, base);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r5,r7,2
	ctx.r5.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bne cr6,0x82edc1a8
	if (!cr6.eq) goto loc_82EDC1A8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EDC1A8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// bl 0x82eec1c0
	sub_82EEC1C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eddce8
	sub_82EDDCE8(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r27,r27,32
	r27.s64 = r27.s64 + 32;
	// bne 0x82edc12c
	if (!cr0.eq) goto loc_82EDC12C;
loc_82EDC1E8:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// lwz r31,760(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 760);
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// rlwinm r4,r11,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82edc220
	if (cr6.gt) goto loc_82EDC220;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82edc234
	goto loc_82EDC234;
loc_82EDC220:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EDC234:
	// or r10,r31,r24
	ctx.r10.u64 = r31.u64 | r24.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x82edc278
	if (!cr6.eq) goto loc_82EDC278;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_82EDC278:
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82f2bdc0
	sub_82F2BDC0(ctx, base);
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r28)
	PPC_STORE_U32(r28.u32 + 132, r11.u32);
	// bne 0x82edc2bc
	if (!cr0.eq) goto loc_82EDC2BC;
	// lbz r11,140(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82edc2bc
	if (!cr6.eq) goto loc_82EDC2BC;
	// lwz r11,128(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edc2bc
	if (cr6.eq) goto loc_82EDC2BC;
	// stw r25,128(r28)
	PPC_STORE_U32(r28.u32 + 128, r25.u32);
	// lwz r3,124(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82EDC2BC:
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82edc2e4
	if (!cr6.eq) goto loc_82EDC2E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDC2E4:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edc308
	if (!cr6.eq) goto loc_82EDC308;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDC308:
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82edc330
	if (!cr6.eq) goto loc_82EDC330;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDC330:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edc354
	if (!cr6.eq) goto loc_82EDC354;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDC354:
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82edc37c
	if (!cr6.eq) goto loc_82EDC37C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDC37C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edc3a0
	if (!cr6.eq) goto loc_82EDC3A0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r23,r22
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + r22.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDC3A0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82EDC3A8"))) PPC_WEAK_FUNC(sub_82EDC3A8);
PPC_FUNC_IMPL(__imp__sub_82EDC3A8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82edc3f4
	if (cr0.eq) goto loc_82EDC3F4;
	// li r11,16
	r11.s64 = 16;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// sth r26,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r26.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b60
	return;
loc_82EDC3F4:
	// lwz r23,0(r13)
	r23.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r22,20
	r22.s64 = 20;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r24,0
	r24.s64 = 0;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// lwzx r3,r22,r23
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// rlwinm r4,r10,2,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFF0;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82edc440
	if (cr6.gt) goto loc_82EDC440;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82edc454
	goto loc_82EDC454;
loc_82EDC440:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EDC454:
	// or r10,r26,r27
	ctx.r10.u64 = r26.u64 | r27.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// ble cr6,0x82edc4b8
	if (!cr6.gt) goto loc_82EDC4B8;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82EDC474:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r30,36
	ctx.r8.s64 = r30.s64 + 36;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// bl 0x82eec298
	sub_82EEC298(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eddc80
	sub_82EDDC80(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82edc474
	if (!cr0.eq) goto loc_82EDC474;
loc_82EDC4B8:
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// lwzx r3,r22,r23
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// lwz r30,760(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 760);
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// rlwinm r4,r11,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF0;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82edc4f4
	if (cr6.gt) goto loc_82EDC4F4;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82edc504
	goto loc_82EDC504;
loc_82EDC4F4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDC504:
	// or r11,r30,r27
	r11.u64 = r30.u64 | r27.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82f2be78
	sub_82F2BE78(ctx, base);
	// lwzx r3,r22,r23
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bne cr6,0x82edc568
	if (!cr6.eq) goto loc_82EDC568;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDC568:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edc58c
	if (!cr6.eq) goto loc_82EDC58C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r22,r23
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDC58C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82edc628
	if (!cr6.gt) goto loc_82EDC628;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82EDC598:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r11,r24
	r11.u64 = r24.u64;
	// stw r24,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r24.u32);
	// lwz r9,232(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82edc5d0
	if (!cr6.gt) goto loc_82EDC5D0;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 228);
loc_82EDC5B4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82edc5d4
	if (cr6.eq) goto loc_82EDC5D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82edc5b4
	if (cr6.lt) goto loc_82EDC5B4;
loc_82EDC5D0:
	// li r11,-1
	r11.s64 = -1;
loc_82EDC5D4:
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,228(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// lhz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82edc614
	if (!cr6.eq) goto loc_82EDC614;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDC614:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82edd568
	sub_82EDD568(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82edc598
	if (!cr0.eq) goto loc_82EDC598;
loc_82EDC628:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bne 0x82edc65c
	if (!cr0.eq) goto loc_82EDC65C;
	// lbz r11,140(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82edc65c
	if (!cr6.eq) goto loc_82EDC65C;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edc65c
	if (cr6.eq) goto loc_82EDC65C;
	// stw r24,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r24.u32);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x82ef02b0
	sub_82EF02B0(ctx, base);
loc_82EDC65C:
	// lwzx r3,r22,r23
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82edc684
	if (!cr6.eq) goto loc_82EDC684;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDC684:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edc6a8
	if (!cr6.eq) goto loc_82EDC6A8;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r22,r23
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + r23.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDC6A8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82EDC6B0"))) PPC_WEAK_FUNC(sub_82EDC6B0);
PPC_FUNC_IMPL(__imp__sub_82EDC6B0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82edc784
	if (!cr6.gt) goto loc_82EDC784;
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82edc70c
	if (!cr6.gt) goto loc_82EDC70C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82EDC6E4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82edc704
	if (cr6.eq) goto loc_82EDC704;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82edc6e4
	if (cr6.lt) goto loc_82EDC6E4;
	// b 0x82edc70c
	goto loc_82EDC70C;
loc_82EDC704:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82edc730
	if (!cr6.eq) goto loc_82EDC730;
loc_82EDC70C:
	// lbz r11,64(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// bl 0x82edb1a8
	sub_82EDB1A8(ctx, base);
	// b 0x82edc784
	goto loc_82EDC784;
loc_82EDC730:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82edc784
	if (!cr6.gt) goto loc_82EDC784;
	// li r30,0
	r30.s64 = 0;
loc_82EDC740:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82edc770
	if (cr6.eq) goto loc_82EDC770;
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r5,r7,1
	ctx.r5.u64 = ctx.r7.u64 ^ 1;
	// bl 0x82ed5628
	sub_82ED5628(ctx, base);
loc_82EDC770:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82edc740
	if (cr6.lt) goto loc_82EDC740;
loc_82EDC784:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82edc828
	if (!cr6.gt) goto loc_82EDC828;
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82edc7d8
	if (!cr6.gt) goto loc_82EDC7D8;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
loc_82EDC7A4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82edc7d0
	if (cr6.eq) goto loc_82EDC7D0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82edc7a4
	if (cr6.lt) goto loc_82EDC7A4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82edbff8
	sub_82EDBFF8(ctx, base);
	// b 0x82edc828
	goto loc_82EDC828;
loc_82EDC7D0:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82edc7e8
	if (!cr6.eq) goto loc_82EDC7E8;
loc_82EDC7D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82edbff8
	sub_82EDBFF8(ctx, base);
	// b 0x82edc828
	goto loc_82EDC828;
loc_82EDC7E8:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82edc828
	if (!cr6.gt) goto loc_82EDC828;
	// li r30,0
	r30.s64 = 0;
loc_82EDC7F8:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82edc814
	if (cr6.eq) goto loc_82EDC814;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82ed6dc8
	sub_82ED6DC8(ctx, base);
loc_82EDC814:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82edc7f8
	if (cr6.lt) goto loc_82EDC7F8;
loc_82EDC828:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82edc86c
	if (!cr6.gt) goto loc_82EDC86C;
	// li r30,0
	r30.s64 = 0;
loc_82EDC83C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82edc858
	if (cr6.eq) goto loc_82EDC858;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82eda390
	sub_82EDA390(ctx, base);
loc_82EDC858:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82edc83c
	if (cr6.lt) goto loc_82EDC83C;
loc_82EDC86C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82edc8c8
	if (!cr6.gt) goto loc_82EDC8C8;
	// li r30,0
	r30.s64 = 0;
loc_82EDC880:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82edc8b4
	if (cr6.eq) goto loc_82EDC8B4;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82edc8ac
	if (!cr6.eq) goto loc_82EDC8AC;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edc8b4
	if (cr6.eq) goto loc_82EDC8B4;
loc_82EDC8AC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82edbcf0
	sub_82EDBCF0(ctx, base);
loc_82EDC8B4:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82edc880
	if (cr6.lt) goto loc_82EDC880;
loc_82EDC8C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EDC8D0"))) PPC_WEAK_FUNC(sub_82EDC8D0);
PPC_FUNC_IMPL(__imp__sub_82EDC8D0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82edc92c
	if (!cr6.gt) goto loc_82EDC92C;
	// li r31,0
	r31.s64 = 0;
loc_82EDC8F8:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82edc918
	if (cr6.eq) goto loc_82EDC918;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82edbeb0
	sub_82EDBEB0(ctx, base);
loc_82EDC918:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82edc8f8
	if (cr6.lt) goto loc_82EDC8F8;
loc_82EDC92C:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82edc998
	if (!cr6.gt) goto loc_82EDC998;
	// li r31,0
	r31.s64 = 0;
	// li r28,11
	r28.s64 = 11;
loc_82EDC944:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82edc984
	if (cr6.eq) goto loc_82EDC984;
	// lwz r10,132(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82edc97c
	if (cr6.eq) goto loc_82EDC97C;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r28.u8);
	// lwz r3,124(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// bl 0x82eefcc0
	sub_82EEFCC0(ctx, base);
	// b 0x82edc984
	goto loc_82EDC984;
loc_82EDC97C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eda580
	sub_82EDA580(ctx, base);
loc_82EDC984:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82edc944
	if (cr6.lt) goto loc_82EDC944;
loc_82EDC998:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82edc9e4
	if (!cr6.gt) goto loc_82EDC9E4;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
loc_82EDC9AC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82edc9dc
	if (cr6.eq) goto loc_82EDC9DC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82edc9ac
	if (cr6.lt) goto loc_82EDC9AC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82edb8c0
	sub_82EDB8C0(ctx, base);
	// b 0x82edca40
	goto loc_82EDCA40;
loc_82EDC9DC:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82edc9f8
	if (!cr6.eq) goto loc_82EDC9F8;
loc_82EDC9E4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82edb8c0
	sub_82EDB8C0(ctx, base);
	// b 0x82edca40
	goto loc_82EDCA40;
loc_82EDC9F8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82edca40
	if (!cr6.gt) goto loc_82EDCA40;
	// li r31,0
	r31.s64 = 0;
loc_82EDCA0C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82edca2c
	if (cr6.eq) goto loc_82EDCA2C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ed57c8
	sub_82ED57C8(ctx, base);
loc_82EDCA2C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82edca0c
	if (cr6.lt) goto loc_82EDCA0C;
loc_82EDCA40:
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82edca90
	if (!cr6.gt) goto loc_82EDCA90;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
loc_82EDCA54:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82edca88
	if (cr6.eq) goto loc_82EDCA88;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82edca54
	if (cr6.lt) goto loc_82EDCA54;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82edc3a8
	sub_82EDC3A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_82EDCA88:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82edcaa8
	if (!cr6.eq) goto loc_82EDCAA8;
loc_82EDCA90:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82edc3a8
	sub_82EDC3A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_82EDCAA8:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82edcaec
	if (!cr6.gt) goto loc_82EDCAEC;
	// li r31,0
	r31.s64 = 0;
loc_82EDCABC:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82edcad8
	if (cr6.eq) goto loc_82EDCAD8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82ed58f8
	sub_82ED58F8(ctx, base);
loc_82EDCAD8:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82edcabc
	if (cr6.lt) goto loc_82EDCABC;
loc_82EDCAEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EDCAF8"))) PPC_WEAK_FUNC(sub_82EDCAF8);
PPC_FUNC_IMPL(__imp__sub_82EDCAF8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82edcb4c
	if (!cr6.eq) goto loc_82EDCB4C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,48
	ctx.r9.s64 = 48;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82edcd98
	sub_82EDCD98(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82edcb64
	goto loc_82EDCB64;
loc_82EDCB4C:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edcb64
	if (cr6.eq) goto loc_82EDCB64;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82EDCB64:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edcba0
	if (cr6.eq) goto loc_82EDCBA0;
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
	// bne cr6,0x82edcba0
	if (!cr6.eq) goto loc_82EDCBA0;
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
loc_82EDCBA0:
	// stw r31,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// bne cr6,0x82edcbb4
	if (!cr6.eq) goto loc_82EDCBB4;
	// li r11,0
	r11.s64 = 0;
loc_82EDCBB4:
	// lwz r10,108(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// extsb r9,r29
	ctx.r9.s64 = r29.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// beq cr6,0x82edcbd8
	if (cr6.eq) goto loc_82EDCBD8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82edad70
	sub_82EDAD70(ctx, base);
loc_82EDCBD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EDCBE0"))) PPC_WEAK_FUNC(sub_82EDCBE0);
PPC_FUNC_IMPL(__imp__sub_82EDCBE0) {
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
	// bl 0x82f2bd90
	sub_82F2BD90(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edcc64
	if (cr6.eq) goto loc_82EDCC64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82edcc64
	if (cr6.eq) goto loc_82EDCC64;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82edcc48
	if (cr6.lt) goto loc_82EDCC48;
	// li r6,39
	ctx.r6.s64 = 39;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8360
	sub_82EA8360(ctx, base);
	// b 0x82edcc64
	goto loc_82EDCC64;
loc_82EDCC48:
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// addi r10,r11,144
	ctx.r10.s64 = r11.s64 + 144;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,148(r11)
	PPC_STORE_U32(r11.u32 + 148, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,144(r11)
	PPC_STORE_U32(r11.u32 + 144, r31.u32);
loc_82EDCC64:
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

__attribute__((alias("__imp__sub_82EDCC80"))) PPC_WEAK_FUNC(sub_82EDCC80);
PPC_FUNC_IMPL(__imp__sub_82EDCC80) {
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
	// bl 0x82eefc20
	sub_82EEFC20(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edcd04
	if (cr6.eq) goto loc_82EDCD04;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82edcd04
	if (cr6.eq) goto loc_82EDCD04;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82edcce8
	if (cr6.lt) goto loc_82EDCCE8;
	// li r6,47
	ctx.r6.s64 = 47;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8360
	sub_82EA8360(ctx, base);
	// b 0x82edcd04
	goto loc_82EDCD04;
loc_82EDCCE8:
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// addi r10,r11,104
	ctx.r10.s64 = r11.s64 + 104;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,104(r11)
	PPC_STORE_U32(r11.u32 + 104, r31.u32);
loc_82EDCD04:
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

__attribute__((alias("__imp__sub_82EDCD20"))) PPC_WEAK_FUNC(sub_82EDCD20);
PPC_FUNC_IMPL(__imp__sub_82EDCD20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82edcef8
	sub_82EDCEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDCD28"))) PPC_WEAK_FUNC(sub_82EDCD28);
PPC_FUNC_IMPL(__imp__sub_82EDCD28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDCD30"))) PPC_WEAK_FUNC(sub_82EDCD30);
PPC_FUNC_IMPL(__imp__sub_82EDCD30) {
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
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82edcd7c
	if (cr6.eq) goto loc_82EDCD7C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDCD7C:
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

__attribute__((alias("__imp__sub_82EDCD98"))) PPC_WEAK_FUNC(sub_82EDCD98);
PPC_FUNC_IMPL(__imp__sub_82EDCD98) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r6,r11,21652
	ctx.r6.s64 = r11.s64 + 21652;
	// addi r5,r10,21640
	ctx.r5.s64 = ctx.r10.s64 + 21640;
	// addi r3,r8,21628
	ctx.r3.s64 = ctx.r8.s64 + 21628;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r4,r9,21608
	ctx.r4.s64 = ctx.r9.s64 + 21608;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// addi r11,r7,21596
	r11.s64 = ctx.r7.s64 + 21596;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
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

__attribute__((alias("__imp__sub_82EDCE10"))) PPC_WEAK_FUNC(sub_82EDCE10);
PPC_FUNC_IMPL(__imp__sub_82EDCE10) {
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
	// bl 0x82f2c400
	sub_82F2C400(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edce58
	if (cr6.eq) goto loc_82EDCE58;
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
loc_82EDCE58:
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

__attribute__((alias("__imp__sub_82EDCE78"))) PPC_WEAK_FUNC(sub_82EDCE78);
PPC_FUNC_IMPL(__imp__sub_82EDCE78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82edce10
	sub_82EDCE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDCE80"))) PPC_WEAK_FUNC(sub_82EDCE80);
PPC_FUNC_IMPL(__imp__sub_82EDCE80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82edce10
	sub_82EDCE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDCE88"))) PPC_WEAK_FUNC(sub_82EDCE88);
PPC_FUNC_IMPL(__imp__sub_82EDCE88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82edce10
	sub_82EDCE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDCE90"))) PPC_WEAK_FUNC(sub_82EDCE90);
PPC_FUNC_IMPL(__imp__sub_82EDCE90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82edce10
	sub_82EDCE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDCE98"))) PPC_WEAK_FUNC(sub_82EDCE98);
PPC_FUNC_IMPL(__imp__sub_82EDCE98) {
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
	// beq cr6,0x82edcee0
	if (cr6.eq) goto loc_82EDCEE0;
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
loc_82EDCEE0:
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

__attribute__((alias("__imp__sub_82EDCEF8"))) PPC_WEAK_FUNC(sub_82EDCEF8);
PPC_FUNC_IMPL(__imp__sub_82EDCEF8) {
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
	// bne cr6,0x82edcf1c
	if (!cr6.eq) goto loc_82EDCF1C;
	// li r11,0
	r11.s64 = 0;
loc_82EDCF1C:
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
	// beq cr6,0x82edcf5c
	if (cr6.eq) goto loc_82EDCF5C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDCF5C:
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

__attribute__((alias("__imp__sub_82EDCF78"))) PPC_WEAK_FUNC(sub_82EDCF78);
PPC_FUNC_IMPL(__imp__sub_82EDCF78) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-13832
	ctx.r9.s64 = r11.s64 + -13832;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82edcfac
	if (cr6.eq) goto loc_82EDCFAC;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82EDCFAC:
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

__attribute__((alias("__imp__sub_82EDCFC0"))) PPC_WEAK_FUNC(sub_82EDCFC0);
PPC_FUNC_IMPL(__imp__sub_82EDCFC0) {
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
	// bl 0x82ed9368
	sub_82ED9368(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edd008
	if (cr6.eq) goto loc_82EDD008;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,47
	ctx.r6.s64 = 47;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDD008:
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

__attribute__((alias("__imp__sub_82EDD028"))) PPC_WEAK_FUNC(sub_82EDD028);
PPC_FUNC_IMPL(__imp__sub_82EDD028) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD030"))) PPC_WEAK_FUNC(sub_82EDD030);
PPC_FUNC_IMPL(__imp__sub_82EDD030) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ede040
	sub_82EDE040(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDD038"))) PPC_WEAK_FUNC(sub_82EDD038);
PPC_FUNC_IMPL(__imp__sub_82EDD038) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82edd0ac
	if (cr6.eq) goto loc_82EDD0AC;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edd08c
	if (cr6.eq) goto loc_82EDD08C;
	// li r11,5
	r11.s64 = 5;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82ed5388
	sub_82ED5388(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82edd170
	goto loc_82EDD170;
loc_82EDD08C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82edd0ac
	if (cr6.eq) goto loc_82EDD0AC;
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ee9b00
	sub_82EE9B00(ctx, base);
loc_82EDD0AC:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edd0c4
	if (cr6.eq) goto loc_82EDD0C4;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r10.u16);
loc_82EDD0C4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82edd108
	if (cr6.eq) goto loc_82EDD108;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edd108
	if (cr6.eq) goto loc_82EDD108;
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
	// bne cr6,0x82edd108
	if (!cr6.eq) goto loc_82EDD108;
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
loc_82EDD108:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82edd120
	if (cr6.eq) goto loc_82EDD120;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82eec370
	sub_82EEC370(ctx, base);
loc_82EDD120:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eddd50
	sub_82EDDD50(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82edd16c
	if (cr6.eq) goto loc_82EDD16C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ee9880
	sub_82EE9880(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// bne 0x82edd16c
	if (!cr0.eq) goto loc_82EDD16C;
	// lbz r11,140(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82edd16c
	if (!cr6.eq) goto loc_82EDD16C;
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edd16c
	if (cr6.eq) goto loc_82EDD16C;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EDD16C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EDD170:
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

__attribute__((alias("__imp__sub_82EDD188"))) PPC_WEAK_FUNC(sub_82EDD188);
PPC_FUNC_IMPL(__imp__sub_82EDD188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edd210
	if (cr6.eq) goto loc_82EDD210;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,-22120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ede198
	sub_82EDE198(ctx, base);
loc_82EDD210:
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

__attribute__((alias("__imp__sub_82EDD228"))) PPC_WEAK_FUNC(sub_82EDD228);
PPC_FUNC_IMPL(__imp__sub_82EDD228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,208
	ctx.r10.s64 = 208;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stvx128 v0,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edd290
	if (cr6.eq) goto loc_82EDD290;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,-22120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f1.f64));
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ede198
	sub_82EDE198(ctx, base);
loc_82EDD290:
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

__attribute__((alias("__imp__sub_82EDD2A8"))) PPC_WEAK_FUNC(sub_82EDD2A8);
PPC_FUNC_IMPL(__imp__sub_82EDD2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r3,160
	ctx.r4.s64 = ctx.r3.s64 + 160;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lfs f0,-22120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	f0.f64 = double(temp.f32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,28(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EDD2E0"))) PPC_WEAK_FUNC(sub_82EDD2E0);
PPC_FUNC_IMPL(__imp__sub_82EDD2E0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82edda18
	sub_82EDDA18(ctx, base);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// subf r10,r10,r31
	ctx.r10.s64 = r31.s64 - ctx.r10.s64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// stw r9,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r9.u32);
	// addi r6,r8,22916
	ctx.r6.s64 = ctx.r8.s64 + 22916;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r9.u32);
	// stb r10,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r10.u8);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// bl 0x82eaf760
	sub_82EAF760(ctx, base);
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83208350
	sub_83208350(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDD368"))) PPC_WEAK_FUNC(sub_82EDD368);
PPC_FUNC_IMPL(__imp__sub_82EDD368) {
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
	// addi r10,r11,22836
	ctx.r10.s64 = r11.s64 + 22836;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82edd3cc
	if (cr6.eq) goto loc_82EDD3CC;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edd3cc
	if (cr6.eq) goto loc_82EDD3CC;
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
	// bne cr6,0x82edd3cc
	if (!cr6.eq) goto loc_82EDD3CC;
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
loc_82EDD3CC:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edd3f8
	if (!cr6.eq) goto loc_82EDD3F8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDD3F8:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edd424
	if (!cr6.eq) goto loc_82EDD424;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDD424:
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

__attribute__((alias("__imp__sub_82EDD448"))) PPC_WEAK_FUNC(sub_82EDD448);
PPC_FUNC_IMPL(__imp__sub_82EDD448) {
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
	// bl 0x82edd368
	sub_82EDD368(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edd490
	if (cr6.eq) goto loc_82EDD490;
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
loc_82EDD490:
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

__attribute__((alias("__imp__sub_82EDD4B0"))) PPC_WEAK_FUNC(sub_82EDD4B0);
PPC_FUNC_IMPL(__imp__sub_82EDD4B0) {
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
	// bl 0x82ede100
	sub_82EDE100(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edd4f8
	if (cr6.eq) goto loc_82EDD4F8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,49
	ctx.r6.s64 = 49;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDD4F8:
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

__attribute__((alias("__imp__sub_82EDD518"))) PPC_WEAK_FUNC(sub_82EDD518);
PPC_FUNC_IMPL(__imp__sub_82EDD518) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD520"))) PPC_WEAK_FUNC(sub_82EDD520);
PPC_FUNC_IMPL(__imp__sub_82EDD520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,-1
	r11.s64 = -1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// b 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDD544"))) PPC_WEAK_FUNC(sub_82EDD544);
PPC_FUNC_IMPL(__imp__sub_82EDD544) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD548"))) PPC_WEAK_FUNC(sub_82EDD548);
PPC_FUNC_IMPL(__imp__sub_82EDD548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD568"))) PPC_WEAK_FUNC(sub_82EDD568);
PPC_FUNC_IMPL(__imp__sub_82EDD568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
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
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EDD5A0"))) PPC_WEAK_FUNC(sub_82EDD5A0);
PPC_FUNC_IMPL(__imp__sub_82EDD5A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD5A8"))) PPC_WEAK_FUNC(sub_82EDD5A8);
PPC_FUNC_IMPL(__imp__sub_82EDD5A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD5B0"))) PPC_WEAK_FUNC(sub_82EDD5B0);
PPC_FUNC_IMPL(__imp__sub_82EDD5B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD5B8"))) PPC_WEAK_FUNC(sub_82EDD5B8);
PPC_FUNC_IMPL(__imp__sub_82EDD5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD5C0"))) PPC_WEAK_FUNC(sub_82EDD5C0);
PPC_FUNC_IMPL(__imp__sub_82EDD5C0) {
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
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82edd604
	if (!cr6.gt) goto loc_82EDD604;
	// lwz r11,116(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
loc_82EDD5E8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82edd648
	if (cr6.eq) goto loc_82EDD648;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82edd5e8
	if (cr6.lt) goto loc_82EDD5E8;
loc_82EDD604:
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// addi r31,r3,116
	r31.s64 = ctx.r3.s64 + 116;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82edd628
	if (!cr6.eq) goto loc_82EDD628;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EDD628:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r30.u32);
	// std r29,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r29.u64);
loc_82EDD648:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDD650"))) PPC_WEAK_FUNC(sub_82EDD650);
PPC_FUNC_IMPL(__imp__sub_82EDD650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82edd688
	if (!cr6.gt) goto loc_82EDD688;
	// lwz r7,116(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	// addi r8,r4,116
	ctx.r8.s64 = ctx.r4.s64 + 116;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82EDD66C:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x82edd694
	if (cr6.eq) goto loc_82EDD694;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82edd66c
	if (cr6.lt) goto loc_82EDD66C;
loc_82EDD688:
	// li r11,0
	r11.s64 = 0;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// blr 
	return;
loc_82EDD694:
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// add r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 + ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// ldx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// ld r5,8(r5)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// std r4,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// std r5,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r5.u64);
	// bge cr6,0x82edd6f8
	if (!cr6.lt) goto loc_82EDD6F8;
loc_82EDD6C8:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// ld r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r6,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r6.u64);
	// ld r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r5,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r5.u64);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// blt cr6,0x82edd6c8
	if (cr6.lt) goto loc_82EDD6C8;
loc_82EDD6F8:
	// ld r11,-8(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD708"))) PPC_WEAK_FUNC(sub_82EDD708);
PPC_FUNC_IMPL(__imp__sub_82EDD708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r8,116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82EDD720:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82edd740
	if (cr6.eq) goto loc_82EDD740;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82edd720
	if (cr6.lt) goto loc_82EDD720;
	// blr 
	return;
loc_82EDD740:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// std r5,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r5.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD750"))) PPC_WEAK_FUNC(sub_82EDD750);
PPC_FUNC_IMPL(__imp__sub_82EDD750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDD76C"))) PPC_WEAK_FUNC(sub_82EDD76C);
PPC_FUNC_IMPL(__imp__sub_82EDD76C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD770"))) PPC_WEAK_FUNC(sub_82EDD770);
PPC_FUNC_IMPL(__imp__sub_82EDD770) {
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
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82edd7bc
	if (cr6.eq) goto loc_82EDD7BC;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82edd7bc
	if (cr6.eq) goto loc_82EDD7BC;
	// li r10,29
	ctx.r10.s64 = 29;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x82ed5388
	sub_82ED5388(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82EDD7BC:
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82edd7d4
	if (cr6.eq) goto loc_82EDD7D4;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_82EDD7D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD7E8"))) PPC_WEAK_FUNC(sub_82EDD7E8);
PPC_FUNC_IMPL(__imp__sub_82EDD7E8) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edd834
	if (cr6.eq) goto loc_82EDD834;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82edd834
	if (cr6.eq) goto loc_82EDD834;
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ed5388
	sub_82ED5388(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82EDD834:
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edd86c
	if (cr6.eq) goto loc_82EDD86C;
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
	// bne cr6,0x82edd86c
	if (!cr6.eq) goto loc_82EDD86C;
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
loc_82EDD86C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD880"))) PPC_WEAK_FUNC(sub_82EDD880);
PPC_FUNC_IMPL(__imp__sub_82EDD880) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,23020
	ctx.r4.s64 = ctx.r10.s64 + 23020;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82edd900
	if (!cr6.eq) goto loc_82EDD900;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r4,r9,23008
	ctx.r4.s64 = ctx.r9.s64 + 23008;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDD900:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edd940
	if (!cr6.eq) goto loc_82EDD940;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r4,r9,22996
	ctx.r4.s64 = ctx.r9.s64 + 22996;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDD940:
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82edd978
	if (cr6.eq) goto loc_82EDD978;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lhz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,22980
	ctx.r4.s64 = ctx.r10.s64 + 22980;
	// rotlwi r7,r9,5
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDD978:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDD990"))) PPC_WEAK_FUNC(sub_82EDD990);
PPC_FUNC_IMPL(__imp__sub_82EDD990) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,22836
	ctx.r9.s64 = r11.s64 + 22836;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// sth r10,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r10.u16);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82f2b568
	sub_82F2B568(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82edd9d8
	if (cr6.eq) goto loc_82EDD9D8;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
loc_82EDD9D8:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r9,-47
	ctx.r9.s64 = -47;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r9,104(r30)
	PPC_STORE_U32(r30.u32 + 104, ctx.r9.u32);
	// sth r11,108(r30)
	PPC_STORE_U16(r30.u32 + 108, r11.u16);
	// beq cr6,0x82edda08
	if (cr6.eq) goto loc_82EDDA08;
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_82EDDA08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDDA18"))) PPC_WEAK_FUNC(sub_82EDDA18);
PPC_FUNC_IMPL(__imp__sub_82EDDA18) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r30,0
	r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,22836
	ctx.r9.s64 = r11.s64 + 22836;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82eddab8
	sub_82EDDAB8(ctx, base);
	// li r8,-47
	ctx.r8.s64 = -47;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// sth r30,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r30.u16);
	// stw r8,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r8.u32);
	// subf r7,r28,r31
	ctx.r7.s64 = r31.s64 - r28.s64;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r6,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r6.u32);
	// stb r7,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r7.u8);
	// beq cr6,0x82eddaac
	if (cr6.eq) goto loc_82EDDAAC;
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eddaac
	if (cr6.eq) goto loc_82EDDAAC;
	// lhz r11,6(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r29)
	PPC_STORE_U16(r29.u32 + 6, ctx.r10.u16);
loc_82EDDAAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EDDAB8"))) PPC_WEAK_FUNC(sub_82EDDAB8);
PPC_FUNC_IMPL(__imp__sub_82EDDAB8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r11,-1
	r11.s64 = -1;
	// li r9,127
	ctx.r9.s64 = 127;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
	// stb r6,24(r31)
	PPC_STORE_U8(r31.u32 + 24, ctx.r6.u8);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// sth r30,26(r31)
	PPC_STORE_U16(r31.u32 + 26, r30.u16);
	// stb r9,25(r31)
	PPC_STORE_U8(r31.u32 + 25, ctx.r9.u8);
	// bl 0x82f2b568
	sub_82F2B568(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// subf r7,r29,r31
	ctx.r7.s64 = r31.s64 - r29.s64;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-24780(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24780);
	f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stb r7,25(r31)
	PPC_STORE_U8(r31.u32 + 25, ctx.r7.u8);
	// stb r30,17(r31)
	PPC_STORE_U8(r31.u32 + 17, r30.u8);
	// sth r30,18(r31)
	PPC_STORE_U16(r31.u32 + 18, r30.u16);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r6,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDDB40"))) PPC_WEAK_FUNC(sub_82EDDB40);
PPC_FUNC_IMPL(__imp__sub_82EDDB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EDDB50:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eddba0
	if (!cr6.eq) goto loc_82EDDBA0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bge cr6,0x82eddba0
	if (!cr6.lt) goto loc_82EDDBA0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82EDDB7C:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x82eddb7c
	if (cr6.lt) goto loc_82EDDB7C;
loc_82EDDBA0:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x82eddb50
	if (!cr0.lt) goto loc_82EDDB50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDDBB0"))) PPC_WEAK_FUNC(sub_82EDDBB0);
PPC_FUNC_IMPL(__imp__sub_82EDDBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EDDBC0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eddc10
	if (!cr6.eq) goto loc_82EDDC10;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bge cr6,0x82eddc10
	if (!cr6.lt) goto loc_82EDDC10;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82EDDBEC:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x82eddbec
	if (cr6.lt) goto loc_82EDDBEC;
loc_82EDDC10:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x82eddbc0
	if (!cr0.lt) goto loc_82EDDBC0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDDC20"))) PPC_WEAK_FUNC(sub_82EDDC20);
PPC_FUNC_IMPL(__imp__sub_82EDDC20) {
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
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82eddc74
	if (cr0.lt) goto loc_82EDDC74;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EDDC40:
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eddc68
	if (cr6.eq) goto loc_82EDDC68;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDDC68:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82eddc40
	if (!cr0.lt) goto loc_82EDDC40;
loc_82EDDC74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDDC80"))) PPC_WEAK_FUNC(sub_82EDDC80);
PPC_FUNC_IMPL(__imp__sub_82EDDC80) {
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
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82eddcd4
	if (cr0.lt) goto loc_82EDDCD4;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EDDCA0:
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eddcc8
	if (cr6.eq) goto loc_82EDDCC8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDDCC8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82eddca0
	if (!cr0.lt) goto loc_82EDDCA0;
loc_82EDDCD4:
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// bl 0x82eddb40
	sub_82EDDB40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDDCE8"))) PPC_WEAK_FUNC(sub_82EDDCE8);
PPC_FUNC_IMPL(__imp__sub_82EDDCE8) {
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
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82eddd3c
	if (cr0.lt) goto loc_82EDDD3C;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EDDD08:
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eddd30
	if (cr6.eq) goto loc_82EDDD30;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDDD30:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82eddd08
	if (!cr0.lt) goto loc_82EDDD08;
loc_82EDDD3C:
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// bl 0x82eddb40
	sub_82EDDB40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDDD50"))) PPC_WEAK_FUNC(sub_82EDDD50);
PPC_FUNC_IMPL(__imp__sub_82EDDD50) {
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
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82eddda4
	if (cr0.lt) goto loc_82EDDDA4;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EDDD70:
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eddd98
	if (cr6.eq) goto loc_82EDDD98;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDDD98:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82eddd70
	if (!cr0.lt) goto loc_82EDDD70;
loc_82EDDDA4:
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// bl 0x82eddb40
	sub_82EDDB40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDDDB8"))) PPC_WEAK_FUNC(sub_82EDDDB8);
PPC_FUNC_IMPL(__imp__sub_82EDDDB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,144(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r8,r3,140
	ctx.r8.s64 = ctx.r3.s64 + 140;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82edddec
	if (!cr6.gt) goto loc_82EDDDEC;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82EDDDD0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82edddf0
	if (cr6.eq) goto loc_82EDDDF0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82edddd0
	if (cr6.lt) goto loc_82EDDDD0;
loc_82EDDDEC:
	// li r11,-1
	r11.s64 = -1;
loc_82EDDDF0:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EDDE08:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// blt cr6,0x82edde08
	if (cr6.lt) goto loc_82EDDE08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDDE30"))) PPC_WEAK_FUNC(sub_82EDDE30);
PPC_FUNC_IMPL(__imp__sub_82EDDE30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r8,r3,128
	ctx.r8.s64 = ctx.r3.s64 + 128;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82edde64
	if (!cr6.gt) goto loc_82EDDE64;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_82EDDE48:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82edde68
	if (cr6.eq) goto loc_82EDDE68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82edde48
	if (cr6.lt) goto loc_82EDDE48;
loc_82EDDE64:
	// li r11,-1
	r11.s64 = -1;
loc_82EDDE68:
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EDDE80:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// blt cr6,0x82edde80
	if (cr6.lt) goto loc_82EDDE80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDDEA8"))) PPC_WEAK_FUNC(sub_82EDDEA8);
PPC_FUNC_IMPL(__imp__sub_82EDDEA8) {
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
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r31,r3,140
	r31.s64 = ctx.r3.s64 + 140;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eddee4
	if (!cr6.eq) goto loc_82EDDEE4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EDDEE4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDDF18"))) PPC_WEAK_FUNC(sub_82EDDF18);
PPC_FUNC_IMPL(__imp__sub_82EDDF18) {
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
	// lwz r11,136(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r31,r3,128
	r31.s64 = ctx.r3.s64 + 128;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eddf54
	if (!cr6.eq) goto loc_82EDDF54;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EDDF54:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDDF88"))) PPC_WEAK_FUNC(sub_82EDDF88);
PPC_FUNC_IMPL(__imp__sub_82EDDF88) {
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
	// bl 0x82edd880
	sub_82EDD880(ctx, base);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eddfe8
	if (!cr6.eq) goto loc_82EDDFE8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r4,r9,23044
	ctx.r4.s64 = ctx.r9.s64 + 23044;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDDFE8:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ede028
	if (!cr6.eq) goto loc_82EDE028;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,140(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// addi r4,r9,23028
	ctx.r4.s64 = ctx.r9.s64 + 23028;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDE028:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDE040"))) PPC_WEAK_FUNC(sub_82EDE040);
PPC_FUNC_IMPL(__imp__sub_82EDE040) {
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
	// li r28,1
	r28.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ede0a8
	if (!cr6.eq) goto loc_82EDE0A8;
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// addi r31,r30,128
	r31.s64 = r30.s64 + 128;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ede094
	if (!cr6.eq) goto loc_82EDE094;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDE094:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// rlwimi r11,r28,31,2,0
	r11.u64 = (__builtin_rotateleft32(r28.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (r11.u64 & 0x40000000);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82EDE0A8:
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ede0f8
	if (!cr6.eq) goto loc_82EDE0F8;
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addi r31,r30,140
	r31.s64 = r30.s64 + 140;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ede0e4
	if (!cr6.eq) goto loc_82EDE0E4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDE0E4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// rlwimi r11,r28,31,2,0
	r11.u64 = (__builtin_rotateleft32(r28.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (r11.u64 & 0x40000000);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82EDE0F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EDE100"))) PPC_WEAK_FUNC(sub_82EDE100);
PPC_FUNC_IMPL(__imp__sub_82EDE100) {
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
	// addi r10,r11,22860
	ctx.r10.s64 = r11.s64 + 22860;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82eddc20
	sub_82EDDC20(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ede150
	if (!cr6.eq) goto loc_82EDE150;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDE150:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ede17c
	if (!cr6.eq) goto loc_82EDE17C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDE17C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82edd368
	sub_82EDD368(ctx, base);
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

__attribute__((alias("__imp__sub_82EDE198"))) PPC_WEAK_FUNC(sub_82EDE198);
PPC_FUNC_IMPL(__imp__sub_82EDE198) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ede460
	if (cr6.eq) goto loc_82EDE460;
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// add. r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ede1e8
	if (cr0.eq) goto loc_82EDE1E8;
	// li r11,17
	r11.s64 = 17;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// bl 0x82ed5388
	sub_82ED5388(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b6c
	return;
loc_82EDE1E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r27,20
	r27.s64 = 20;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// lwz r11,132(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r30,764(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 764);
	// addi r7,r30,2
	ctx.r7.s64 = r30.s64 + 2;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// rlwinm r4,r7,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF0;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82ede248
	if (cr6.gt) goto loc_82EDE248;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82ede258
	goto loc_82EDE258;
loc_82EDE248:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDE258:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// or r9,r30,r29
	ctx.r9.u64 = r30.u64 | r29.u64;
	// lwzx r11,r27,r26
	r11.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// lwz r30,764(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 764);
	// addi r8,r30,2
	ctx.r8.s64 = r30.s64 + 2;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// rlwinm r4,r8,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF0;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82ede2a4
	if (cr6.gt) goto loc_82EDE2A4;
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// b 0x82ede2bc
	goto loc_82EDE2BC;
loc_82EDE2A4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82EDE2BC:
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// or r10,r30,r29
	ctx.r10.u64 = r30.u64 | r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,84(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ede2ec
	if (cr6.eq) goto loc_82EDE2EC;
	// bl 0x82f77bc8
	sub_82F77BC8(ctx, base);
loc_82EDE2EC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82ede330
	if (!cr6.eq) goto loc_82EDE330;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ede380
	if (cr6.eq) goto loc_82EDE380;
loc_82EDE330:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f2bee8
	sub_82F2BEE8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// bl 0x82f2be78
	sub_82F2BE78(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,112(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x82ede368
	if (!cr6.eq) goto loc_82EDE368;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_82EDE368:
	// lwz r3,88(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82f2bdc0
	sub_82F2BDC0(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82eddbb0
	sub_82EDDBB0(ctx, base);
loc_82EDE380:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ede398
	if (cr6.eq) goto loc_82EDE398;
	// bl 0x82f77bb8
	sub_82F77BB8(ctx, base);
loc_82EDE398:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// bne 0x82ede3c8
	if (!cr0.eq) goto loc_82EDE3C8;
	// lbz r11,140(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ede3c8
	if (!cr6.eq) goto loc_82EDE3C8;
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ede3c8
	if (cr6.eq) goto loc_82EDE3C8;
	// bl 0x82ed5370
	sub_82ED5370(ctx, base);
loc_82EDE3C8:
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ede3f0
	if (!cr6.eq) goto loc_82EDE3F0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDE3F0:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ede414
	if (!cr6.eq) goto loc_82EDE414;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDE414:
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ede43c
	if (!cr6.eq) goto loc_82EDE43C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDE43C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ede460
	if (!cr6.eq) goto loc_82EDE460;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDE460:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EDE468"))) PPC_WEAK_FUNC(sub_82EDE468);
PPC_FUNC_IMPL(__imp__sub_82EDE468) {
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
	// beq cr6,0x82ede4b0
	if (cr6.eq) goto loc_82EDE4B0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,4
	ctx.r6.s64 = 4;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDE4B0:
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

__attribute__((alias("__imp__sub_82EDE4C8"))) PPC_WEAK_FUNC(sub_82EDE4C8);
PPC_FUNC_IMPL(__imp__sub_82EDE4C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDE4D0"))) PPC_WEAK_FUNC(sub_82EDE4D0);
PPC_FUNC_IMPL(__imp__sub_82EDE4D0) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82ede4f8
	if (!cr6.eq) goto loc_82EDE4F8;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r27,108(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 108);
loc_82EDE4F8:
	// lwz r11,340(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 340);
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82ede544
	if (cr0.lt) goto loc_82EDE544;
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// rlwinm r30,r31,3,0,28
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_82EDE50C:
	// lwz r11,336(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 336);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// bge 0x82ede50c
	if (!cr0.lt) goto loc_82EDE50C;
loc_82EDE544:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EDE550"))) PPC_WEAK_FUNC(sub_82EDE550);
PPC_FUNC_IMPL(__imp__sub_82EDE550) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82ede578
	if (!cr6.eq) goto loc_82EDE578;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r27,108(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 108);
loc_82EDE578:
	// lwz r11,340(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 340);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82ede5d0
	if (cr0.lt) goto loc_82EDE5D0;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// rlwinm r31,r26,3,0,28
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
loc_82EDE58C:
	// lwz r11,336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 336);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ede5d0
	if (!cr6.eq) goto loc_82EDE5D0;
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// bge 0x82ede58c
	if (!cr0.lt) goto loc_82EDE58C;
loc_82EDE5D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EDE5D8"))) PPC_WEAK_FUNC(sub_82EDE5D8);
PPC_FUNC_IMPL(__imp__sub_82EDE5D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,340(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ede60c
	if (!cr6.gt) goto loc_82EDE60C;
	// lwz r11,336(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82EDE5F0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x82ede618
	if (cr6.eq) goto loc_82EDE618;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ede5f0
	if (cr6.lt) goto loc_82EDE5F0;
loc_82EDE60C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82EDE618:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDE628"))) PPC_WEAK_FUNC(sub_82EDE628);
PPC_FUNC_IMPL(__imp__sub_82EDE628) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,23064
	ctx.r8.s64 = r11.s64 + 23064;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r9,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r9.u16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// beq cr6,0x82ede6ac
	if (cr6.eq) goto loc_82EDE6AC;
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82ede694
	if (cr0.lt) goto loc_82EDE694;
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82EDE67C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ede6c4
	if (cr6.eq) goto loc_82EDE6C4;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// bge 0x82ede67c
	if (!cr0.lt) goto loc_82EDE67C;
loc_82EDE694:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82edef88
	sub_82EDEF88(ctx, base);
loc_82EDE6AC:
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
loc_82EDE6C4:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82edef88
	sub_82EDEF88(ctx, base);
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// rlwinm r30,r30,3,0,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ede700
	if (cr6.eq) goto loc_82EDE700;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDE700:
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,340(r31)
	PPC_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stwx r6,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// b 0x82ede6ac
	goto loc_82EDE6AC;
}

__attribute__((alias("__imp__sub_82EDE730"))) PPC_WEAK_FUNC(sub_82EDE730);
PPC_FUNC_IMPL(__imp__sub_82EDE730) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EDE754:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82ede754
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EDE754;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r10,340(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 340);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,23064
	ctx.r8.s64 = r11.s64 + 23064;
	// sth r9,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// li r30,0
	r30.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ede7d4
	if (!cr6.gt) goto loc_82EDE7D4;
	// addi r28,r29,16
	r28.s64 = r29.s64 + 16;
	// li r31,0
	r31.s64 = 0;
loc_82EDE794:
	// lwz r11,336(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 336);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,340(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 340);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(r30.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ede794
	if (cr6.lt) goto loc_82EDE794;
loc_82EDE7D4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EDE7E0"))) PPC_WEAK_FUNC(sub_82EDE7E0);
PPC_FUNC_IMPL(__imp__sub_82EDE7E0) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82edd2e0
	sub_82EDD2E0(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,23100
	ctx.r9.s64 = ctx.r10.s64 + 23100;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// stw r8,344(r31)
	PPC_STORE_U32(r31.u32 + 344, ctx.r8.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDE840"))) PPC_WEAK_FUNC(sub_82EDE840);
PPC_FUNC_IMPL(__imp__sub_82EDE840) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r10,23100
	ctx.r8.s64 = ctx.r10.s64 + 23100;
	// addi r7,r9,23064
	ctx.r7.s64 = ctx.r9.s64 + 23064;
	// lwz r11,340(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 340);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// sth r6,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// blt 0x82ede8a8
	if (cr0.lt) goto loc_82EDE8A8;
	// rlwinm r30,r31,3,0,28
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
loc_82EDE880:
	// lwz r11,336(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 336);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// bge 0x82ede880
	if (!cr0.lt) goto loc_82EDE880;
loc_82EDE8A8:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,340(r29)
	PPC_STORE_U32(r29.u32 + 340, r11.u32);
	// lwz r11,344(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 344);
	// addi r9,r10,-22012
	ctx.r9.s64 = ctx.r10.s64 + -22012;
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82ede8e8
	if (!cr6.eq) goto loc_82EDE8E8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,336(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 336);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDE8E8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ede100
	sub_82EDE100(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDE8F8"))) PPC_WEAK_FUNC(sub_82EDE8F8);
PPC_FUNC_IMPL(__imp__sub_82EDE8F8) {
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
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r26,20
	r26.s64 = 20;
	// li r5,49
	ctx.r5.s64 = 49;
	// li r4,352
	ctx.r4.s64 = 352;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,352
	r11.s64 = 352;
	// addi r5,r28,160
	ctx.r5.s64 = r28.s64 + 160;
	// sth r11,4(r30)
	PPC_STORE_U16(r30.u32 + 4, r11.u16);
	// lwz r25,44(r28)
	r25.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// bl 0x82edd2e0
	sub_82EDD2E0(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r9,r10,23100
	ctx.r9.s64 = ctx.r10.s64 + 23100;
	// li r11,0
	r11.s64 = 0;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r11,336(r30)
	PPC_STORE_U32(r30.u32 + 336, r11.u32);
	// addi r31,r30,128
	r31.s64 = r30.s64 + 128;
	// stw r11,340(r30)
	PPC_STORE_U32(r30.u32 + 340, r11.u32);
	// addi r29,r28,128
	r29.s64 = r28.s64 + 128;
	// stw r8,344(r30)
	PPC_STORE_U32(r30.u32 + 344, ctx.r8.u32);
	// stw r25,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r25.u32);
	// lwz r7,132(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x82ede9c8
	if (!cr6.lt) goto loc_82EDE9C8;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ede99c
	if (!cr6.eq) goto loc_82EDE99C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDE99C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,23
	ctx.r5.s64 = 23;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
loc_82EDE9C8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ble cr6,0x82ede9f8
	if (!cr6.gt) goto loc_82EDE9F8;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82EDE9E4:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82ede9e4
	if (!cr0.eq) goto loc_82EDE9E4;
loc_82EDE9F8:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addi r31,r30,140
	r31.s64 = r30.s64 + 140;
	// lwz r9,144(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// addi r29,r28,140
	r29.s64 = r28.s64 + 140;
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82edea60
	if (!cr6.lt) goto loc_82EDEA60;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edea34
	if (!cr6.eq) goto loc_82EDEA34;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDEA34:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,23
	ctx.r5.s64 = 23;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// rlwinm r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
loc_82EDEA60:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ble cr6,0x82edea90
	if (!cr6.gt) goto loc_82EDEA90;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82EDEA7C:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82edea7c
	if (!cr0.eq) goto loc_82EDEA7C;
loc_82EDEA90:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ed4c90
	sub_82ED4C90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EDEAA8"))) PPC_WEAK_FUNC(sub_82EDEAA8);
PPC_FUNC_IMPL(__imp__sub_82EDEAA8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82edeba0
	if (cr6.eq) goto loc_82EDEBA0;
	// bl 0x82edef18
	sub_82EDEF18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82edeba0
	if (!cr6.eq) goto loc_82EDEBA0;
	// lwz r11,344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 344);
	// addi r31,r30,336
	r31.s64 = r30.s64 + 336;
	// lwz r10,340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 340);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82edeaf8
	if (!cr6.eq) goto loc_82EDEAF8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EDEAF8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r9,14
	ctx.r9.s64 = 14;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r31,r11,r8
	r31.u64 = r11.u64 + ctx.r8.u64;
	// lwz r11,108(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EDEB24:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82edeb24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EDEB24;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// addi r8,r11,7264
	ctx.r8.s64 = r11.s64 + 7264;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r11,416
	ctx.r10.s64 = r11.s64 + 416;
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,2464(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2464);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
loc_82EDEBA0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDEBA8"))) PPC_WEAK_FUNC(sub_82EDEBA8);
PPC_FUNC_IMPL(__imp__sub_82EDEBA8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,23184
	ctx.r4.s64 = ctx.r10.s64 + 23184;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eddf88
	sub_82EDDF88(ctx, base);
	// lwz r11,344(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82edec2c
	if (!cr6.eq) goto loc_82EDEC2C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r7,340(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,336(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// addi r4,r9,23172
	ctx.r4.s64 = ctx.r9.s64 + 23172;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDEC2C:
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82edec80
	if (!cr6.gt) goto loc_82EDEC80;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,23164
	r27.s64 = r11.s64 + 23164;
loc_82EDEC48:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,340(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r28,r8
	cr6.compare<int32_t>(r28.s32, ctx.r8.s32, xer);
	// blt cr6,0x82edec48
	if (cr6.lt) goto loc_82EDEC48;
loc_82EDEC80:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82EDECA0"))) PPC_WEAK_FUNC(sub_82EDECA0);
PPC_FUNC_IMPL(__imp__sub_82EDECA0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,340(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 340);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82eded10
	if (!cr6.eq) goto loc_82EDED10;
	// lwz r11,344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 344);
	// addi r31,r30,336
	r31.s64 = r30.s64 + 336;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82edecf4
	if (!cr6.eq) goto loc_82EDECF4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDECF4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// rlwimi r10,r9,31,2,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 31) & 0xFFFFFFFFBFFFFFFF) | (ctx.r10.u64 & 0x40000000);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82EDED10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82edd030
	sub_82EDD030(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDED30"))) PPC_WEAK_FUNC(sub_82EDED30);
PPC_FUNC_IMPL(__imp__sub_82EDED30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// li r12,-96
	r12.s64 = -96;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,208
	r11.s64 = 208;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// lfs f0,-22120(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	f0.f64 = double(temp.f32);
	// addi r25,r29,20
	r25.s64 = r29.s64 + 20;
	// lwz r8,108(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// lfs f13,20(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lwz r5,28(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lvx128 v12,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vsubfp128 v127,v11,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v127.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// vxor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_setzero_si128());
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vminfp128 v8,v13,v127
	simde_mm_store_ps(ctx.v8.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v127.f32)));
	// vmaxfp128 v7,v13,v127
	simde_mm_store_ps(ctx.v7.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v127.f32)));
	// vaddfp v6,v10,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vaddfp v5,v9,v7
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v7.f32)));
	// stvx128 v6,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ede198
	sub_82EDE198(ctx, base);
	// vmsum3fp128 v4,v127,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v127.f32), 0xEF));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f0,-12568(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12568);
	f0.f64 = double(temp.f32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// stfs f0,240(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r24,r1,80
	r24.s64 = ctx.r1.s64 + 80;
	// stvx128 v4,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v3,0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,108(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 108);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// vspltw v2,v3,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), 0xFF));
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// lvx128 v1,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v1,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r10,r8
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r7
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,108(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// stw r5,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r5.u32);
	// stvx128 v127,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvewx v2,r0,r24
	ea = (r24.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lfs f9,20(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// addic. r30,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	r30.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f7,240(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f8,244(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// blt 0x82edef04
	if (cr0.lt) goto loc_82EDEF04;
	// rlwinm r29,r30,3,0,28
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
loc_82EDEEC8:
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// bge 0x82edeec8
	if (!cr0.lt) goto loc_82EDEEC8;
loc_82EDEF04:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// li r0,-96
	r0.s64 = -96;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EDEF18"))) PPC_WEAK_FUNC(sub_82EDEF18);
PPC_FUNC_IMPL(__imp__sub_82EDEF18) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82edef80
	if (cr0.lt) goto loc_82EDEF80;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EDEF48:
	// lwz r11,128(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 128);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82edef70
	if (cr6.eq) goto loc_82EDEF70;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDEF70:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82edef48
	if (!cr0.lt) goto loc_82EDEF48;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82EDEF80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDEF88"))) PPC_WEAK_FUNC(sub_82EDEF88);
PPC_FUNC_IMPL(__imp__sub_82EDEF88) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82edefe8
	if (cr0.lt) goto loc_82EDEFE8;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EDEFB4:
	// lwz r11,128(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 128);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82edefdc
	if (cr6.eq) goto loc_82EDEFDC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EDEFDC:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82edefb4
	if (!cr0.lt) goto loc_82EDEFB4;
loc_82EDEFE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EDEFF0"))) PPC_WEAK_FUNC(sub_82EDEFF0);
PPC_FUNC_IMPL(__imp__sub_82EDEFF0) {
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
	// bl 0x82ede840
	sub_82EDE840(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82edf038
	if (cr6.eq) goto loc_82EDF038;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,49
	ctx.r6.s64 = 49;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EDF038:
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

__attribute__((alias("__imp__sub_82EDF058"))) PPC_WEAK_FUNC(sub_82EDF058);
PPC_FUNC_IMPL(__imp__sub_82EDF058) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF060"))) PPC_WEAK_FUNC(sub_82EDF060);
PPC_FUNC_IMPL(__imp__sub_82EDF060) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF068"))) PPC_WEAK_FUNC(sub_82EDF068);
PPC_FUNC_IMPL(__imp__sub_82EDF068) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF070"))) PPC_WEAK_FUNC(sub_82EDF070);
PPC_FUNC_IMPL(__imp__sub_82EDF070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82ef5ab0
	sub_82EF5AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDF080"))) PPC_WEAK_FUNC(sub_82EDF080);
PPC_FUNC_IMPL(__imp__sub_82EDF080) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF088"))) PPC_WEAK_FUNC(sub_82EDF088);
PPC_FUNC_IMPL(__imp__sub_82EDF088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF090"))) PPC_WEAK_FUNC(sub_82EDF090);
PPC_FUNC_IMPL(__imp__sub_82EDF090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF098"))) PPC_WEAK_FUNC(sub_82EDF098);
PPC_FUNC_IMPL(__imp__sub_82EDF098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0A0"))) PPC_WEAK_FUNC(sub_82EDF0A0);
PPC_FUNC_IMPL(__imp__sub_82EDF0A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0A8"))) PPC_WEAK_FUNC(sub_82EDF0A8);
PPC_FUNC_IMPL(__imp__sub_82EDF0A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0B0"))) PPC_WEAK_FUNC(sub_82EDF0B0);
PPC_FUNC_IMPL(__imp__sub_82EDF0B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0B8"))) PPC_WEAK_FUNC(sub_82EDF0B8);
PPC_FUNC_IMPL(__imp__sub_82EDF0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0C0"))) PPC_WEAK_FUNC(sub_82EDF0C0);
PPC_FUNC_IMPL(__imp__sub_82EDF0C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0C8"))) PPC_WEAK_FUNC(sub_82EDF0C8);
PPC_FUNC_IMPL(__imp__sub_82EDF0C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0D0"))) PPC_WEAK_FUNC(sub_82EDF0D0);
PPC_FUNC_IMPL(__imp__sub_82EDF0D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0D8"))) PPC_WEAK_FUNC(sub_82EDF0D8);
PPC_FUNC_IMPL(__imp__sub_82EDF0D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0E0"))) PPC_WEAK_FUNC(sub_82EDF0E0);
PPC_FUNC_IMPL(__imp__sub_82EDF0E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0E8"))) PPC_WEAK_FUNC(sub_82EDF0E8);
PPC_FUNC_IMPL(__imp__sub_82EDF0E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0F0"))) PPC_WEAK_FUNC(sub_82EDF0F0);
PPC_FUNC_IMPL(__imp__sub_82EDF0F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF0F8"))) PPC_WEAK_FUNC(sub_82EDF0F8);
PPC_FUNC_IMPL(__imp__sub_82EDF0F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF100"))) PPC_WEAK_FUNC(sub_82EDF100);
PPC_FUNC_IMPL(__imp__sub_82EDF100) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF108"))) PPC_WEAK_FUNC(sub_82EDF108);
PPC_FUNC_IMPL(__imp__sub_82EDF108) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF110"))) PPC_WEAK_FUNC(sub_82EDF110);
PPC_FUNC_IMPL(__imp__sub_82EDF110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF118"))) PPC_WEAK_FUNC(sub_82EDF118);
PPC_FUNC_IMPL(__imp__sub_82EDF118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF120"))) PPC_WEAK_FUNC(sub_82EDF120);
PPC_FUNC_IMPL(__imp__sub_82EDF120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF128"))) PPC_WEAK_FUNC(sub_82EDF128);
PPC_FUNC_IMPL(__imp__sub_82EDF128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF130"))) PPC_WEAK_FUNC(sub_82EDF130);
PPC_FUNC_IMPL(__imp__sub_82EDF130) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF138"))) PPC_WEAK_FUNC(sub_82EDF138);
PPC_FUNC_IMPL(__imp__sub_82EDF138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF140"))) PPC_WEAK_FUNC(sub_82EDF140);
PPC_FUNC_IMPL(__imp__sub_82EDF140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF148"))) PPC_WEAK_FUNC(sub_82EDF148);
PPC_FUNC_IMPL(__imp__sub_82EDF148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF150"))) PPC_WEAK_FUNC(sub_82EDF150);
PPC_FUNC_IMPL(__imp__sub_82EDF150) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF158"))) PPC_WEAK_FUNC(sub_82EDF158);
PPC_FUNC_IMPL(__imp__sub_82EDF158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF160"))) PPC_WEAK_FUNC(sub_82EDF160);
PPC_FUNC_IMPL(__imp__sub_82EDF160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF168"))) PPC_WEAK_FUNC(sub_82EDF168);
PPC_FUNC_IMPL(__imp__sub_82EDF168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82ef5910
	sub_82EF5910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDF178"))) PPC_WEAK_FUNC(sub_82EDF178);
PPC_FUNC_IMPL(__imp__sub_82EDF178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF180"))) PPC_WEAK_FUNC(sub_82EDF180);
PPC_FUNC_IMPL(__imp__sub_82EDF180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82ef5910
	sub_82EF5910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDF190"))) PPC_WEAK_FUNC(sub_82EDF190);
PPC_FUNC_IMPL(__imp__sub_82EDF190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF198"))) PPC_WEAK_FUNC(sub_82EDF198);
PPC_FUNC_IMPL(__imp__sub_82EDF198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1A0"))) PPC_WEAK_FUNC(sub_82EDF1A0);
PPC_FUNC_IMPL(__imp__sub_82EDF1A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1A8"))) PPC_WEAK_FUNC(sub_82EDF1A8);
PPC_FUNC_IMPL(__imp__sub_82EDF1A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1B0"))) PPC_WEAK_FUNC(sub_82EDF1B0);
PPC_FUNC_IMPL(__imp__sub_82EDF1B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1B8"))) PPC_WEAK_FUNC(sub_82EDF1B8);
PPC_FUNC_IMPL(__imp__sub_82EDF1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1C0"))) PPC_WEAK_FUNC(sub_82EDF1C0);
PPC_FUNC_IMPL(__imp__sub_82EDF1C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1C8"))) PPC_WEAK_FUNC(sub_82EDF1C8);
PPC_FUNC_IMPL(__imp__sub_82EDF1C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1D0"))) PPC_WEAK_FUNC(sub_82EDF1D0);
PPC_FUNC_IMPL(__imp__sub_82EDF1D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1D8"))) PPC_WEAK_FUNC(sub_82EDF1D8);
PPC_FUNC_IMPL(__imp__sub_82EDF1D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1E0"))) PPC_WEAK_FUNC(sub_82EDF1E0);
PPC_FUNC_IMPL(__imp__sub_82EDF1E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1E8"))) PPC_WEAK_FUNC(sub_82EDF1E8);
PPC_FUNC_IMPL(__imp__sub_82EDF1E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1F0"))) PPC_WEAK_FUNC(sub_82EDF1F0);
PPC_FUNC_IMPL(__imp__sub_82EDF1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF1F8"))) PPC_WEAK_FUNC(sub_82EDF1F8);
PPC_FUNC_IMPL(__imp__sub_82EDF1F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF200"))) PPC_WEAK_FUNC(sub_82EDF200);
PPC_FUNC_IMPL(__imp__sub_82EDF200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF208"))) PPC_WEAK_FUNC(sub_82EDF208);
PPC_FUNC_IMPL(__imp__sub_82EDF208) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF210"))) PPC_WEAK_FUNC(sub_82EDF210);
PPC_FUNC_IMPL(__imp__sub_82EDF210) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF218"))) PPC_WEAK_FUNC(sub_82EDF218);
PPC_FUNC_IMPL(__imp__sub_82EDF218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF220"))) PPC_WEAK_FUNC(sub_82EDF220);
PPC_FUNC_IMPL(__imp__sub_82EDF220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF228"))) PPC_WEAK_FUNC(sub_82EDF228);
PPC_FUNC_IMPL(__imp__sub_82EDF228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF230"))) PPC_WEAK_FUNC(sub_82EDF230);
PPC_FUNC_IMPL(__imp__sub_82EDF230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF238"))) PPC_WEAK_FUNC(sub_82EDF238);
PPC_FUNC_IMPL(__imp__sub_82EDF238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF240"))) PPC_WEAK_FUNC(sub_82EDF240);
PPC_FUNC_IMPL(__imp__sub_82EDF240) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF248"))) PPC_WEAK_FUNC(sub_82EDF248);
PPC_FUNC_IMPL(__imp__sub_82EDF248) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF250"))) PPC_WEAK_FUNC(sub_82EDF250);
PPC_FUNC_IMPL(__imp__sub_82EDF250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF258"))) PPC_WEAK_FUNC(sub_82EDF258);
PPC_FUNC_IMPL(__imp__sub_82EDF258) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF260"))) PPC_WEAK_FUNC(sub_82EDF260);
PPC_FUNC_IMPL(__imp__sub_82EDF260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF268"))) PPC_WEAK_FUNC(sub_82EDF268);
PPC_FUNC_IMPL(__imp__sub_82EDF268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF270"))) PPC_WEAK_FUNC(sub_82EDF270);
PPC_FUNC_IMPL(__imp__sub_82EDF270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF278"))) PPC_WEAK_FUNC(sub_82EDF278);
PPC_FUNC_IMPL(__imp__sub_82EDF278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF280"))) PPC_WEAK_FUNC(sub_82EDF280);
PPC_FUNC_IMPL(__imp__sub_82EDF280) {
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

__attribute__((alias("__imp__sub_82EDF298"))) PPC_WEAK_FUNC(sub_82EDF298);
PPC_FUNC_IMPL(__imp__sub_82EDF298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF2A0"))) PPC_WEAK_FUNC(sub_82EDF2A0);
PPC_FUNC_IMPL(__imp__sub_82EDF2A0) {
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
	// addi r9,r11,31828
	ctx.r9.s64 = r11.s64 + 31828;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF2C0"))) PPC_WEAK_FUNC(sub_82EDF2C0);
PPC_FUNC_IMPL(__imp__sub_82EDF2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,31828
	ctx.r3.s64 = r11.s64 + 31828;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF2D0"))) PPC_WEAK_FUNC(sub_82EDF2D0);
PPC_FUNC_IMPL(__imp__sub_82EDF2D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF2D8"))) PPC_WEAK_FUNC(sub_82EDF2D8);
PPC_FUNC_IMPL(__imp__sub_82EDF2D8) {
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

__attribute__((alias("__imp__sub_82EDF2F0"))) PPC_WEAK_FUNC(sub_82EDF2F0);
PPC_FUNC_IMPL(__imp__sub_82EDF2F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF2F8"))) PPC_WEAK_FUNC(sub_82EDF2F8);
PPC_FUNC_IMPL(__imp__sub_82EDF2F8) {
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
	// addi r9,r11,32012
	ctx.r9.s64 = r11.s64 + 32012;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF318"))) PPC_WEAK_FUNC(sub_82EDF318);
PPC_FUNC_IMPL(__imp__sub_82EDF318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,32012
	ctx.r3.s64 = r11.s64 + 32012;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF328"))) PPC_WEAK_FUNC(sub_82EDF328);
PPC_FUNC_IMPL(__imp__sub_82EDF328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF330"))) PPC_WEAK_FUNC(sub_82EDF330);
PPC_FUNC_IMPL(__imp__sub_82EDF330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82ef6dd8
	sub_82EF6DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EDF340"))) PPC_WEAK_FUNC(sub_82EDF340);
PPC_FUNC_IMPL(__imp__sub_82EDF340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF348"))) PPC_WEAK_FUNC(sub_82EDF348);
PPC_FUNC_IMPL(__imp__sub_82EDF348) {
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

__attribute__((alias("__imp__sub_82EDF360"))) PPC_WEAK_FUNC(sub_82EDF360);
PPC_FUNC_IMPL(__imp__sub_82EDF360) {
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
	// bl 0x82ef6dd8
	sub_82EF6DD8(ctx, base);
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

__attribute__((alias("__imp__sub_82EDF390"))) PPC_WEAK_FUNC(sub_82EDF390);
PPC_FUNC_IMPL(__imp__sub_82EDF390) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF398"))) PPC_WEAK_FUNC(sub_82EDF398);
PPC_FUNC_IMPL(__imp__sub_82EDF398) {
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

__attribute__((alias("__imp__sub_82EDF3B0"))) PPC_WEAK_FUNC(sub_82EDF3B0);
PPC_FUNC_IMPL(__imp__sub_82EDF3B0) {
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
	// addi r9,r11,-32692
	ctx.r9.s64 = r11.s64 + -32692;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF3D0"))) PPC_WEAK_FUNC(sub_82EDF3D0);
PPC_FUNC_IMPL(__imp__sub_82EDF3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r3,r11,-32692
	ctx.r3.s64 = r11.s64 + -32692;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EDF3E0"))) PPC_WEAK_FUNC(sub_82EDF3E0);
PPC_FUNC_IMPL(__imp__sub_82EDF3E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

