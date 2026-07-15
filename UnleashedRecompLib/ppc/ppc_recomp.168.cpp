#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E13F88"))) PPC_WEAK_FUNC(sub_82E13F88);
PPC_FUNC_IMPL(__imp__sub_82E13F88) {
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
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// bl 0x82e10848
	sub_82E10848(ctx, base);
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// addi r10,r30,160
	ctx.r10.s64 = r30.s64 + 160;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r11,r31,168
	r11.s64 = r31.s64 + 168;
	// addi r10,r30,168
	ctx.r10.s64 = r30.s64 + 168;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lbz r11,176(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 176);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,176(r31)
	PPC_STORE_U8(r31.u32 + 176, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E14020"))) PPC_WEAK_FUNC(sub_82E14020);
PPC_FUNC_IMPL(__imp__sub_82E14020) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82e14074
	if (cr6.eq) goto loc_82E14074;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E14058:
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
	// bne 0x82e14058
	if (!cr0.eq) goto loc_82E14058;
loc_82E14074:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e13e78
	sub_82E13E78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e140b0
	if (cr6.eq) goto loc_82E140B0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E140B0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e140c0
	if (cr6.eq) goto loc_82E140C0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E140C0:
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

__attribute__((alias("__imp__sub_82E140D8"))) PPC_WEAK_FUNC(sub_82E140D8);
PPC_FUNC_IMPL(__imp__sub_82E140D8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82e0bd40
	sub_82E0BD40(ctx, base);
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// beq cr6,0x82e14154
	if (cr6.eq) goto loc_82E14154;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E14138:
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
	// bne 0x82e14138
	if (!cr0.eq) goto loc_82E14138;
loc_82E14154:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r31,168
	r11.s64 = r31.s64 + 168;
	// stw r10,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// beq cr6,0x82e14190
	if (cr6.eq) goto loc_82E14190;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E14174:
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
	// bne 0x82e14174
	if (!cr0.eq) goto loc_82E14174;
loc_82E14190:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,176(r31)
	PPC_STORE_U8(r31.u32 + 176, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E141A8"))) PPC_WEAK_FUNC(sub_82E141A8);
PPC_FUNC_IMPL(__imp__sub_82E141A8) {
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
	// beq 0x82e14200
	if (cr0.eq) goto loc_82E14200;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-13664
	ctx.r9.s64 = r11.s64 + -13664;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82e14204
	goto loc_82E14204;
loc_82E14200:
	// li r11,0
	r11.s64 = 0;
loc_82E14204:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e14248
	if (!cr6.eq) goto loc_82E14248;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e14228
	if (cr6.eq) goto loc_82E14228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e13d98
	sub_82E13D98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82E14228:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-21488(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21488);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82E14248:
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

__attribute__((alias("__imp__sub_82E14268"))) PPC_WEAK_FUNC(sub_82E14268);
PPC_FUNC_IMPL(__imp__sub_82E14268) {
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
	// beq cr6,0x82e14294
	if (cr6.eq) goto loc_82E14294;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e13d98
	sub_82E13D98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82E14294:
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

__attribute__((alias("__imp__sub_82E142A8"))) PPC_WEAK_FUNC(sub_82E142A8);
PPC_FUNC_IMPL(__imp__sub_82E142A8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,8191
	r11.s64 = 536805376;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r11,r11,65534
	r11.u64 = r11.u64 | 65534;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e14320
	if (cr6.lt) goto loc_82E14320;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23004
	ctx.r4.s64 = r11.s64 + -23004;
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
loc_82E14320:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e26aa0
	sub_82E26AA0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82e1436c
	if (!cr6.eq) goto loc_82E1436C;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82e143a4
	goto loc_82E143A4;
loc_82E1436C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e14390
	if (cr0.eq) goto loc_82E14390;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e143a8
	if (!cr6.eq) goto loc_82E143A8;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// b 0x82e143a8
	goto loc_82E143A8;
loc_82E14390:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e143a8
	if (!cr6.eq) goto loc_82E143A8;
loc_82E143A4:
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_82E143A8:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// li r29,1
	r29.s64 = 1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e144b0
	if (!cr6.eq) goto loc_82E144B0;
	// li r27,0
	r27.s64 = 0;
loc_82E143C8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e1442c
	if (!cr6.eq) goto loc_82E1442C;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e1443c
	if (cr6.eq) goto loc_82E1443C;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e14404
	if (!cr6.eq) goto loc_82E14404;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82e69c10
	sub_82E69C10(ctx, base);
loc_82E14404:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82e0efc0
	sub_82E0EFC0(ctx, base);
	// b 0x82e1449c
	goto loc_82E1449C;
loc_82E1442C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e14460
	if (!cr6.eq) goto loc_82E14460;
loc_82E1443C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, r29.u8);
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r27,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r27.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82e1449c
	goto loc_82E1449C;
loc_82E14460:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e14478
	if (!cr6.eq) goto loc_82E14478;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82e0efc0
	sub_82E0EFC0(ctx, base);
loc_82E14478:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82e69c10
	sub_82E69C10(ctx, base);
loc_82E1449C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e143c8
	if (cr6.eq) goto loc_82E143C8;
loc_82E144B0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E144D0"))) PPC_WEAK_FUNC(sub_82E144D0);
PPC_FUNC_IMPL(__imp__sub_82E144D0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r6,210
	ctx.r6.s64 = 210;
	// addi r5,r11,-13632
	ctx.r5.s64 = r11.s64 + -13632;
	// addi r4,r28,24
	ctx.r4.s64 = r28.s64 + 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r25,r26,4
	r25.s64 = r26.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82e14538
	if (cr6.eq) goto loc_82E14538;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E1451C:
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
	// bne 0x82e1451c
	if (!cr0.eq) goto loc_82E1451C;
loc_82E14538:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e13a70
	sub_82E13A70(ctx, base);
	// addi r27,r28,60
	r27.s64 = r28.s64 + 60;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e13df8
	sub_82E13DF8(ctx, base);
	// lwz r30,64(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// beq cr6,0x82e1463c
	if (cr6.eq) goto loc_82E1463C;
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82E14574:
	// cmplw cr6,r5,r31
	cr6.compare<uint32_t>(ctx.r5.u32, r31.u32, xer);
	// beq cr6,0x82e14598
	if (cr6.eq) goto loc_82E14598;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfd7f8
	sub_82DFD7F8(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x82e14574
	if (cr6.eq) goto loc_82E14574;
loc_82E14598:
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x82e145d4
	if (cr6.eq) goto loc_82E145D4;
	// b 0x82e145c8
	goto loc_82E145C8;
loc_82E145AC:
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// bne cr6,0x82e1460c
	if (!cr6.eq) goto loc_82E1460C;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82e145e0
	if (cr6.eq) goto loc_82E145E0;
loc_82E145C8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e69ac8
	sub_82E69AC8(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E145D4:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x82e145ac
	if (!cr6.eq) goto loc_82E145AC;
	// b 0x82e1460c
	goto loc_82E1460C;
loc_82E145E0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e275f0
	sub_82E275F0(ctx, base);
	// addi r11,r28,288
	r11.s64 = r28.s64 + 288;
loc_82E145F0:
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
	// bne 0x82e145f0
	if (!cr0.eq) goto loc_82E145F0;
loc_82E1460C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1461c
	if (cr6.eq) goto loc_82E1461C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1461C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e14634
	if (cr6.eq) goto loc_82E14634;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E14634:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e14668
	goto loc_82E14668;
loc_82E1463C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1464c
	if (cr6.eq) goto loc_82E1464C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1464C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e14664
	if (cr6.eq) goto loc_82E14664;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E14664:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E14668:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E14670"))) PPC_WEAK_FUNC(sub_82E14670);
PPC_FUNC_IMPL(__imp__sub_82E14670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e14794
	if (!cr6.eq) goto loc_82E14794;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r6,396
	ctx.r6.s64 = 396;
	// addi r5,r11,-13632
	ctx.r5.s64 = r11.s64 + -13632;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e146e8
	if (cr0.eq) goto loc_82E146E8;
	// stb r28,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r28.u8);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82e27288
	sub_82E27288(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e13f08
	sub_82E13F08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82e13f88
	sub_82E13F88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e13d98
	sub_82E13D98(ctx, base);
	// stw r28,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r28.u32);
loc_82E146E8:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e14744
	if (!cr6.eq) goto loc_82E14744;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e13f08
	sub_82E13F08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82e13f88
	sub_82E13F88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e13d98
	sub_82E13D98(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// b 0x82e14bd0
	goto loc_82E14BD0;
loc_82E14744:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82e13f88
	sub_82E13F88(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e275f0
	sub_82E275F0(ctx, base);
	// addi r11,r31,288
	r11.s64 = r31.s64 + 288;
loc_82E1476C:
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
	// bne 0x82e1476c
	if (!cr0.eq) goto loc_82E1476C;
	// stw r27,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
loc_82E14794:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82e14858
	if (!cr6.eq) goto loc_82E14858;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r30,r31,104
	r30.s64 = r31.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e14930
	if (cr0.eq) goto loc_82E14930;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8241f200
	sub_8241F200(ctx, base);
	// lwz r30,100(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82e14828
	if (cr6.eq) goto loc_82E14828;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_82E1480C:
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
	// bne 0x82e1480c
	if (!cr0.eq) goto loc_82E1480C;
loc_82E14828:
	// addi r9,r31,112
	ctx.r9.s64 = r31.s64 + 112;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r31,108
	ctx.r5.s64 = r31.s64 + 108;
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// bl 0x82e161a8
	sub_82E161A8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e14858
	if (cr6.eq) goto loc_82E14858;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E14858:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82e149e8
	if (!cr6.eq) goto loc_82E149E8;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82e14980
	if (!cr0.eq) goto loc_82E14980;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e14928
	if (cr6.eq) goto loc_82E14928;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8241f200
	sub_8241F200(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r30,100(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// beq cr6,0x82e148f8
	if (cr6.eq) goto loc_82E148F8;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_82E148DC:
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
	// bne 0x82e148dc
	if (!cr0.eq) goto loc_82E148DC;
loc_82E148F8:
	// addi r9,r31,112
	ctx.r9.s64 = r31.s64 + 112;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r31,108
	ctx.r5.s64 = r31.s64 + 108;
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// bl 0x82e161a8
	sub_82E161A8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e14928
	if (cr6.eq) goto loc_82E14928;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E14928:
	// stw r28,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r28.u32);
	// b 0x82e14bd0
	goto loc_82E14BD0;
loc_82E14930:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lbz r11,280(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 280);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne 0x82e14964
	if (!cr0.eq) goto loc_82E14964;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e14a40
	if (cr0.eq) goto loc_82E14A40;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E14964:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// b 0x82e14858
	goto loc_82E14858;
loc_82E14980:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82e0ee00
	sub_82E0EE00(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e149e0
	if (cr0.eq) goto loc_82E149E0;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82e149c8
	if (cr6.eq) goto loc_82E149C8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E149AC:
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
	// bne 0x82e149ac
	if (!cr0.eq) goto loc_82E149AC;
loc_82E149C8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x82e14020
	sub_82E14020(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// b 0x82e149e8
	goto loc_82E149E8;
loc_82E149E0:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82dfa2b0
	sub_82DFA2B0(ctx, base);
loc_82E149E8:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e14a5c
	if (!cr6.eq) goto loc_82E14A5C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bne cr6,0x82e14a04
	if (!cr6.eq) goto loc_82E14A04;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_82E14A04:
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e14a18
	if (cr6.gt) goto loc_82E14A18;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82E14A18:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
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
	// bne 0x82e14a50
	if (!cr0.eq) goto loc_82E14A50;
loc_82E14A3C:
	// stb r28,280(r31)
	PPC_STORE_U8(r31.u32 + 280, r28.u8);
loc_82E14A40:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82dfa2b0
	sub_82DFA2B0(ctx, base);
	// stw r27,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r27.u32);
	// b 0x82e14bd0
	goto loc_82E14BD0;
loc_82E14A50:
	// li r11,4
	r11.s64 = 4;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
loc_82E14A5C:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e14bd0
	if (!cr6.eq) goto loc_82E14BD0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e14a3c
	if (cr0.eq) goto loc_82E14A3C;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82e14bcc
	if (cr6.eq) goto loc_82E14BCC;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subfc r9,r11,r30
	xer.ca = r30.u32 >= r11.u32;
	ctx.r9.s64 = r30.s64 - r11.s64;
	// stw r10,296(r31)
	PPC_STORE_U32(r31.u32 + 296, ctx.r10.u32);
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi. r29,r10,24
	r29.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82e14b0c
	if (!cr0.eq) goto loc_82E14B0C;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e14ae4
	if (!cr6.gt) goto loc_82E14AE4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82E14AE4:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
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
	// beq 0x82e14a3c
	if (cr0.eq) goto loc_82E14A3C;
loc_82E14B0C:
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e14b70
	if (cr6.eq) goto loc_82E14B70;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82e14b50
	if (cr6.eq) goto loc_82E14B50;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E14B34:
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
	// bne 0x82e14b34
	if (!cr0.eq) goto loc_82E14B34;
loc_82E14B50:
	// addi r9,r31,112
	ctx.r9.s64 = r31.s64 + 112;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r31,108
	ctx.r5.s64 = r31.s64 + 108;
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// bl 0x82e161a8
	sub_82E161A8(ctx, base);
loc_82E14B70:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e14bcc
	if (cr6.eq) goto loc_82E14BCC;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r11,r31,92
	r11.s64 = r31.s64 + 92;
	// addi r10,r9,28220
	ctx.r10.s64 = ctx.r9.s64 + 28220;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r11,28220(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28220);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e13f08
	sub_82E13F08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82e13f88
	sub_82E13F88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e13d98
	sub_82E13D98(ctx, base);
	// stw r28,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r28.u32);
loc_82E14BCC:
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_82E14BD0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E14BD8"))) PPC_WEAK_FUNC(sub_82E14BD8);
PPC_FUNC_IMPL(__imp__sub_82E14BD8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82e14c30
	if (cr6.eq) goto loc_82E14C30;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e14c44
	goto loc_82E14C44;
loc_82E14C10:
	// lbz r11,40(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e14c28
	if (cr0.eq) goto loc_82E14C28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82e14670
	sub_82E14670(ctx, base);
loc_82E14C28:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E14C30:
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e14c10
	if (cr0.eq) goto loc_82E14C10;
loc_82E14C44:
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

__attribute__((alias("__imp__sub_82E14C58"))) PPC_WEAK_FUNC(sub_82E14C58);
PPC_FUNC_IMPL(__imp__sub_82E14C58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82e279f8
	sub_82E279F8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82E14CB0"))) PPC_WEAK_FUNC(sub_82E14CB0);
PPC_FUNC_IMPL(__imp__sub_82E14CB0) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e14d28
	if (!cr6.eq) goto loc_82E14D28;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82E14CEC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt cr6,0x82e14d08
	if (cr6.gt) goto loc_82E14D08;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E14D08:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e14d18
	if (cr0.eq) goto loc_82E14D18;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82e14d1c
	goto loc_82E14D1C;
loc_82E14D18:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82E14D1C:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e14cec
	if (cr6.eq) goto loc_82E14CEC;
loc_82E14D28:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e142a8
	sub_82E142A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82E14D60"))) PPC_WEAK_FUNC(sub_82E14D60);
PPC_FUNC_IMPL(__imp__sub_82E14D60) {
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
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,28208
	r31.s64 = r11.s64 + 28208;
	// lwz r11,28216(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28216);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82e14da8
	if (!cr0.eq) goto loc_82E14DA8;
	// lis r9,-31987
	ctx.r9.s64 = -2096300032;
	// lis r8,-32031
	ctx.r8.s64 = -2099183616;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-24728
	ctx.r9.s64 = ctx.r9.s64 + -24728;
	// addi r8,r8,14888
	ctx.r8.s64 = ctx.r8.s64 + 14888;
	// stw r11,28216(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28216, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_82E14DA8:
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
	// bl 0x82e13880
	sub_82E13880(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e14dd4
	if (cr0.eq) goto loc_82E14DD4;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x82e14dd8
	goto loc_82E14DD8;
loc_82E14DD4:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_82E14DD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E14DE0"))) PPC_WEAK_FUNC(sub_82E14DE0);
PPC_FUNC_IMPL(__imp__sub_82E14DE0) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e14e24
	if (!cr6.eq) goto loc_82E14E24;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_82E14E0C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E14E10:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E14E1C:
	// bl 0x82e142a8
	sub_82E142A8(ctx, base);
	// b 0x82e14fb8
	goto loc_82E14FB8;
loc_82E14E24:
	// lwz r25,4(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e14e64
	if (!cr6.eq) goto loc_82E14E64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82e14e54
	if (cr6.gt) goto loc_82E14E54;
	// li r11,0
	r11.s64 = 0;
loc_82E14E54:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e14f9c
	if (!cr0.eq) goto loc_82E14F9C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x82e14e0c
	goto loc_82E14E0C;
loc_82E14E64:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bne cr6,0x82e14ea0
	if (!cr6.eq) goto loc_82E14EA0;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82e14e90
	if (cr6.gt) goto loc_82E14E90;
	// li r11,0
	r11.s64 = 0;
loc_82E14E90:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e14f9c
	if (!cr0.eq) goto loc_82E14F9C;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e14e10
	goto loc_82E14E10;
loc_82E14EA0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwz r27,8(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// bgt cr6,0x82e14ec0
	if (cr6.gt) goto loc_82E14EC0;
	// li r11,0
	r11.s64 = 0;
loc_82E14EC0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e14f28
	if (!cr0.eq) goto loc_82E14F28;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfd7f8
	sub_82DFD7F8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82e14ef0
	if (cr6.gt) goto loc_82E14EF0;
	// li r11,0
	r11.s64 = 0;
loc_82E14EF0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e14f28
	if (!cr0.eq) goto loc_82E14F28;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,21(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e14f1c
	if (cr6.eq) goto loc_82E14F1C;
loc_82E14F14:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e14e1c
	goto loc_82E14E1C;
loc_82E14F1C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82E14F20:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82e14e1c
	goto loc_82E14E1C;
loc_82E14F28:
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(r27.s32, r28.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82e14f38
	if (cr6.gt) goto loc_82E14F38;
	// li r11,0
	r11.s64 = 0;
loc_82E14F38:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e14f9c
	if (!cr0.eq) goto loc_82E14F9C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e69ac8
	sub_82E69AC8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, xer);
	// beq cr6,0x82e14f78
	if (cr6.eq) goto loc_82E14F78;
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x82e14f70
	if (cr6.gt) goto loc_82E14F70;
	// li r11,0
	r11.s64 = 0;
loc_82E14F70:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e14f9c
	if (!cr0.eq) goto loc_82E14F9C;
loc_82E14F78:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,21(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e14f20
	if (cr6.eq) goto loc_82E14F20;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x82e14f14
	goto loc_82E14F14;
loc_82E14F9C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e14cb0
	sub_82E14CB0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82E14FB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E14FC8"))) PPC_WEAK_FUNC(sub_82E14FC8);
PPC_FUNC_IMPL(__imp__sub_82E14FC8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// b 0x82e15008
	goto loc_82E15008;
loc_82E14FEC:
	// addi r5,r4,12
	ctx.r5.s64 = ctx.r4.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e14cb0
	sub_82E14CB0(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82e69ac8
	sub_82E69AC8(ctx, base);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_82E15008:
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// bne cr6,0x82e14fec
	if (!cr6.eq) goto loc_82E14FEC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E15028"))) PPC_WEAK_FUNC(sub_82E15028);
PPC_FUNC_IMPL(__imp__sub_82E15028) {
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
	// bl 0x82e13ae8
	sub_82E13AE8(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82e13d98
	sub_82E13D98(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e15058
	if (cr6.eq) goto loc_82E15058;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E15058:
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x82e14c58
	sub_82E14C58(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e15070
	if (cr6.eq) goto loc_82E15070;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E15070:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e15080
	if (cr6.eq) goto loc_82E15080;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E15080:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e15090
	if (cr6.eq) goto loc_82E15090;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E15090:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e150a0
	if (cr6.eq) goto loc_82E150A0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E150A0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e150b0
	if (cr6.eq) goto loc_82E150B0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E150B0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e150c0
	if (cr6.eq) goto loc_82E150C0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E150C0:
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

__attribute__((alias("__imp__sub_82E150D8"))) PPC_WEAK_FUNC(sub_82E150D8);
PPC_FUNC_IMPL(__imp__sub_82E150D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r6,152
	ctx.r6.s64 = 152;
	// addi r5,r11,-13632
	ctx.r5.s64 = r11.s64 + -13632;
	// addi r4,r28,24
	ctx.r4.s64 = r28.s64 + 24;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// li r3,184
	ctx.r3.s64 = 184;
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e15148
	if (cr0.eq) goto loc_82E15148;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e140d8
	sub_82E140D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82e1514c
	goto loc_82E1514C;
loc_82E15148:
	// li r31,0
	r31.s64 = 0;
loc_82E1514C:
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
	// addi r27,r24,4
	r27.s64 = r24.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e141a8
	sub_82E141A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e151c4
	if (!cr6.eq) goto loc_82E151C4;
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e151c4
	if (cr6.eq) goto loc_82E151C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E151C4:
	// lwz r31,64(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x82e151fc
	goto loc_82E151FC;
loc_82E151D8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e15204
	if (cr0.eq) goto loc_82E15204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r30
	r29.u64 = r30.u64;
	// bl 0x82e69ac8
	sub_82E69AC8(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E151FC:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bne cr6,0x82e151d8
	if (!cr6.eq) goto loc_82E151D8;
loc_82E15204:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82e1523c
	if (cr6.eq) goto loc_82E1523C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E15220:
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
	// bne 0x82e15220
	if (!cr0.eq) goto loc_82E15220;
loc_82E1523C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e13a70
	sub_82E13A70(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r28,60
	ctx.r4.s64 = r28.s64 + 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e14de0
	sub_82E14DE0(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1526c
	if (cr6.eq) goto loc_82E1526C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1526C:
	// addi r11,r28,288
	r11.s64 = r28.s64 + 288;
loc_82E15270:
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
	// bne 0x82e15270
	if (!cr0.eq) goto loc_82E15270;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e152cc
	if (cr6.eq) goto loc_82E152CC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E152CC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E152D8"))) PPC_WEAK_FUNC(sub_82E152D8);
PPC_FUNC_IMPL(__imp__sub_82E152D8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e6a128
	sub_82E6A128(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
	// addi r28,r11,-13632
	r28.s64 = r11.s64 + -13632;
	// li r6,328
	ctx.r6.s64 = 328;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r30,60
	r31.s64 = r30.s64 + 60;
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r9,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r9.u32);
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r26,r11
	r26.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82e153a8
	if (cr6.eq) goto loc_82E153A8;
loc_82E15354:
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lbz r11,176(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 176);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e15394
	if (!cr0.eq) goto loc_82E15394;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x82e15398
	if (cr0.eq) goto loc_82E15398;
	// li r11,1
	r11.s64 = 1;
	// stb r11,176(r27)
	PPC_STORE_U8(r27.u32 + 176, r11.u8);
	// b 0x82e15398
	goto loc_82E15398;
loc_82E15394:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82E15398:
	// bl 0x82e69ac8
	sub_82E69AC8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x82e15354
	if (!cr6.eq) goto loc_82E15354;
loc_82E153A8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,368
	ctx.r6.s64 = 368;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1540c
	if (!cr6.eq) goto loc_82E1540C;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lbz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bne 0x82e1543c
	if (!cr0.eq) goto loc_82E1543C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e1543c
	goto loc_82E1543C;
loc_82E1540C:
	// lwz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82e14fc8
	sub_82E14FC8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_82E1543C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e14c58
	sub_82E14C58(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E15458"))) PPC_WEAK_FUNC(sub_82E15458);
PPC_FUNC_IMPL(__imp__sub_82E15458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r28,-31943
	r28.s64 = -2093416448;
	// li r30,0
	r30.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,26804(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 26804);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e01988
	sub_82E01988(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r3,26804(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 26804);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// stw r24,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r24.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e01988
	sub_82E01988(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// stw r24,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r24.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d10c0
	sub_822D10C0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// beq cr6,0x82e1558c
	if (cr6.eq) goto loc_82E1558C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E15570:
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
	// bne 0x82e15570
	if (!cr0.eq) goto loc_82E15570;
loc_82E1558C:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r31,44
	r11.s64 = r31.s64 + 44;
	// stb r10,40(r31)
	PPC_STORE_U8(r31.u32 + 40, ctx.r10.u8);
	// addi r28,r26,4
	r28.s64 = r26.s64 + 4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq cr6,0x82e155d4
	if (cr6.eq) goto loc_82E155D4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E155B8:
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
	// bne 0x82e155b8
	if (!cr0.eq) goto loc_82E155B8;
loc_82E155D4:
	// stb r30,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r30.u8);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stw r25,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r25.u32);
	// bl 0x82e6a128
	sub_82E6A128(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// addi r11,r31,92
	r11.s64 = r31.s64 + 92;
	// stb r30,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8241f200
	sub_8241F200(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82e13f08
	sub_82E13F08(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1564c
	if (cr6.eq) goto loc_82E1564C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1564C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1565c
	if (cr6.eq) goto loc_82E1565C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1565C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E15668"))) PPC_WEAK_FUNC(sub_82E15668);
PPC_FUNC_IMPL(__imp__sub_82E15668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,40(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e15688
	if (cr0.eq) goto loc_82E15688;
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x82e14670
	sub_82E14670(ctx, base);
	return;
loc_82E15688:
	// b 0x82e152d8
	sub_82E152D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1568C"))) PPC_WEAK_FUNC(sub_82E1568C);
PPC_FUNC_IMPL(__imp__sub_82E1568C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E15690"))) PPC_WEAK_FUNC(sub_82E15690);
PPC_FUNC_IMPL(__imp__sub_82E15690) {
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
	// b 0x82e156c8
	goto loc_82E156C8;
loc_82E156A8:
	// lbz r11,40(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e156c4
	if (cr0.eq) goto loc_82E156C4;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82e14670
	sub_82E14670(ctx, base);
	// b 0x82e156c8
	goto loc_82E156C8;
loc_82E156C4:
	// bl 0x82e152d8
	sub_82E152D8(ctx, base);
loc_82E156C8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e156a8
	if (cr0.eq) goto loc_82E156A8;
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

__attribute__((alias("__imp__sub_82E15700"))) PPC_WEAK_FUNC(sub_82E15700);
PPC_FUNC_IMPL(__imp__sub_82E15700) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32031
	ctx.r10.s64 = -2099183616;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r10,r10,22160
	ctx.r10.s64 = ctx.r10.s64 + 22160;
	// stb r11,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r11.u8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82e14d60
	sub_82E14D60(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r6,r11,-13568
	ctx.r6.s64 = r11.s64 + -13568;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfd690
	sub_82DFD690(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e15788
	if (cr6.eq) goto loc_82E15788;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E15788:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8308a2f8
	sub_8308A2F8(ctx, base);
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

__attribute__((alias("__imp__sub_82E157B0"))) PPC_WEAK_FUNC(sub_82E157B0);
PPC_FUNC_IMPL(__imp__sub_82E157B0) {
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
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82e157f0
	goto loc_82E157F0;
loc_82E157CC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e157e8
	if (cr0.eq) goto loc_82E157E8;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x82e157f0
	goto loc_82E157F0;
loc_82E157E8:
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82E157F0:
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e157cc
	if (cr6.eq) goto loc_82E157CC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E15808"))) PPC_WEAK_FUNC(sub_82E15808);
PPC_FUNC_IMPL(__imp__sub_82E15808) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x82e15864
	if (cr6.eq) goto loc_82E15864;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E15848:
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
	// bne 0x82e15848
	if (!cr0.eq) goto loc_82E15848;
loc_82E15864:
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

__attribute__((alias("__imp__sub_82E15880"))) PPC_WEAK_FUNC(sub_82E15880);
PPC_FUNC_IMPL(__imp__sub_82E15880) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r6,49
	ctx.r6.s64 = 49;
	// addi r5,r11,-13552
	ctx.r5.s64 = r11.s64 + -13552;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e4def8
	sub_82E4DEF8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e1590c
	if (cr6.eq) goto loc_82E1590C;
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
	// beq cr6,0x82e15918
	if (cr6.eq) goto loc_82E15918;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E158EC:
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
	// bne 0x82e158ec
	if (!cr0.eq) goto loc_82E158EC;
	// b 0x82e15918
	goto loc_82E15918;
loc_82E1590C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82E15918:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E15930"))) PPC_WEAK_FUNC(sub_82E15930);
PPC_FUNC_IMPL(__imp__sub_82E15930) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r5,r11,-13552
	ctx.r5.s64 = r11.s64 + -13552;
	// li r6,82
	ctx.r6.s64 = 82;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e1af60
	sub_82E1AF60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
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

__attribute__((alias("__imp__sub_82E15980"))) PPC_WEAK_FUNC(sub_82E15980);
PPC_FUNC_IMPL(__imp__sub_82E15980) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e159c4
	if (!cr6.eq) goto loc_82E159C4;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_82E159AC:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E159B0:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82E159BC:
	// bl 0x82e1ad38
	sub_82E1AD38(ctx, base);
	// b 0x82e15b1c
	goto loc_82E15B1C;
loc_82E159C4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e159f0
	if (!cr6.eq) goto loc_82E159F0;
	// addi r4,r28,12
	ctx.r4.s64 = r28.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e15b00
	if (cr0.eq) goto loc_82E15B00;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x82e159ac
	goto loc_82E159AC;
loc_82E159F0:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82e15a20
	if (!cr6.eq) goto loc_82E15A20;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e15b00
	if (cr0.eq) goto loc_82E15B00;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82e159b0
	goto loc_82E159B0;
loc_82E15A20:
	// addi r26,r28,12
	r26.s64 = r28.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e15a90
	if (cr0.eq) goto loc_82E15A90;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e4d110
	sub_82E4D110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r27,12
	ctx.r3.s64 = r27.s64 + 12;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e15a90
	if (cr0.eq) goto loc_82E15A90;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e15a84
	if (cr6.eq) goto loc_82E15A84;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
loc_82E15A7C:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e159bc
	goto loc_82E159BC;
loc_82E15A84:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_82E15A88:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82e159bc
	goto loc_82E159BC;
loc_82E15A90:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e15b00
	if (cr0.eq) goto loc_82E15B00;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830c8360
	sub_830C8360(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x82e15ad4
	if (cr6.eq) goto loc_82E15AD4;
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e15b00
	if (cr0.eq) goto loc_82E15B00;
loc_82E15AD4:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e15af8
	if (cr6.eq) goto loc_82E15AF8;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x82e15a7c
	goto loc_82E15A7C;
loc_82E15AF8:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// b 0x82e15a88
	goto loc_82E15A88;
loc_82E15B00:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e1afb8
	sub_82E1AFB8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82E15B1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E15B28"))) PPC_WEAK_FUNC(sub_82E15B28);
PPC_FUNC_IMPL(__imp__sub_82E15B28) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e157b0
	sub_82E157B0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82e15b64
	if (cr6.eq) goto loc_82E15B64;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e15bb4
	if (cr0.eq) goto loc_82E15BB4;
loc_82E15B64:
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e15808
	sub_82E15808(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e15980
	sub_82E15980(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e15bac
	if (cr6.eq) goto loc_82E15BAC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E15BAC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82E15BB4:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E15BC0"))) PPC_WEAK_FUNC(sub_82E15BC0);
PPC_FUNC_IMPL(__imp__sub_82E15BC0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r5,r11,-13552
	ctx.r5.s64 = r11.s64 + -13552;
	// li r6,36
	ctx.r6.s64 = 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e15b28
	sub_82E15B28(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e15c2c
	if (cr6.eq) goto loc_82E15C2C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E15C2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E15C38"))) PPC_WEAK_FUNC(sub_82E15C38);
PPC_FUNC_IMPL(__imp__sub_82E15C38) {
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
	// bl 0x830cbe68
	sub_830CBE68(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d10c0
	sub_822D10C0(ctx, base);
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

__attribute__((alias("__imp__sub_82E15CA0"))) PPC_WEAK_FUNC(sub_82E15CA0);
PPC_FUNC_IMPL(__imp__sub_82E15CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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

__attribute__((alias("__imp__sub_82E15CB8"))) PPC_WEAK_FUNC(sub_82E15CB8);
PPC_FUNC_IMPL(__imp__sub_82E15CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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

__attribute__((alias("__imp__sub_82E15CD0"))) PPC_WEAK_FUNC(sub_82E15CD0);
PPC_FUNC_IMPL(__imp__sub_82E15CD0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e15d58
	if (!cr0.eq) goto loc_82E15D58;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r6,163
	ctx.r6.s64 = 163;
	// addi r5,r11,-13484
	ctx.r5.s64 = r11.s64 + -13484;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r11,1
	r11.s64 = 1;
	// stb r11,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r11.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e15d50
	if (cr6.eq) goto loc_82E15D50;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E15D50:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
loc_82E15D58:
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

__attribute__((alias("__imp__sub_82E15D70"))) PPC_WEAK_FUNC(sub_82E15D70);
PPC_FUNC_IMPL(__imp__sub_82E15D70) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// addi r29,r30,4
	r29.s64 = r30.s64 + 4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x82e15ddc
	if (cr6.eq) goto loc_82E15DDC;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E15DC0:
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
	// bne 0x82e15dc0
	if (!cr0.eq) goto loc_82E15DC0;
loc_82E15DDC:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// beq cr6,0x82e15e18
	if (cr6.eq) goto loc_82E15E18;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E15DFC:
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
	// bne 0x82e15dfc
	if (!cr0.eq) goto loc_82E15DFC;
loc_82E15E18:
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r26,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r26.u32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82e0bd40
	sub_82E0BD40(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e15e3c
	if (cr6.eq) goto loc_82E15E3C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E15E3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E15E48"))) PPC_WEAK_FUNC(sub_82E15E48);
PPC_FUNC_IMPL(__imp__sub_82E15E48) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// beq cr6,0x82e15ea4
	if (cr6.eq) goto loc_82E15EA4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E15E88:
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
	// bne 0x82e15e88
	if (!cr0.eq) goto loc_82E15E88;
loc_82E15EA4:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// beq cr6,0x82e15ee0
	if (cr6.eq) goto loc_82E15EE0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E15EC4:
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
	// bne 0x82e15ec4
	if (!cr0.eq) goto loc_82E15EC4;
loc_82E15EE0:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bl 0x82e0bd40
	sub_82E0BD40(ctx, base);
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

__attribute__((alias("__imp__sub_82E15F18"))) PPC_WEAK_FUNC(sub_82E15F18);
PPC_FUNC_IMPL(__imp__sub_82E15F18) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,356
	r11.s64 = 23330816;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// ori r31,r11,11397
	r31.u64 = r11.u64 | 11397;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r31
	r11.s64 = r31.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x82e15f48
	if (!cr6.lt) goto loc_82E15F48;
	// bl 0x82e74ad8
	sub_82E74AD8(ctx, base);
loc_82E15F48:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x82e15f5c
	if (!cr6.lt) goto loc_82E15F5C;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82E15F5C:
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e15f74
	if (!cr6.lt) goto loc_82E15F74;
	// subf r9,r10,r31
	ctx.r9.s64 = r31.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82e15f74
	if (cr6.gt) goto loc_82E15F74;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_82E15F74:
	// lis r25,-31946
	r25.s64 = -2093613056;
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r27
	ctx.r3.u64 = r31.u64 + r27.u64;
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r6,r3
	r28.u64 = ctx.r6.u64 + ctx.r3.u64;
	// beq 0x82e15fd4
	if (cr0.eq) goto loc_82E15FD4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x831b1570
	sub_831B1570(ctx, base);
loc_82E15FD4:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// bgt cr6,0x82e16058
	if (cr6.gt) goto loc_82E16058;
	// subf r11,r5,r5
	r11.s64 = ctx.r5.s64 - ctx.r5.s64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r6,r28
	r31.u64 = ctx.r6.u64 + r28.u64;
	// beq 0x82e16004
	if (cr0.eq) goto loc_82E16004;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b1570
	sub_831B1570(ctx, base);
loc_82E16004:
	// subf. r11,r29,r26
	r11.s64 = r26.s64 - r29.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1602c
	if (cr0.eq) goto loc_82E1602C;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1602c
	if (cr0.eq) goto loc_82E1602C;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E16020:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e16020
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E16020;
loc_82E1602C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e160cc
	if (cr6.eq) goto loc_82E160CC;
	// mr r11,r27
	r11.u64 = r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82e160cc
	if (cr0.eq) goto loc_82E160CC;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_82E16048:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82e16048
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E16048;
	// b 0x82e160cc
	goto loc_82E160CC;
loc_82E16058:
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r29
	r11.s64 = r29.s64 - ctx.r5.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1607c
	if (cr0.eq) goto loc_82E1607C;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x831b1570
	sub_831B1570(ctx, base);
loc_82E1607C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r5,r29,r11
	ctx.r5.u64 = r29.u64 + r11.u64;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r6,r27
	r31.u64 = ctx.r6.u64 + r27.u64;
	// beq 0x82e160a8
	if (cr0.eq) goto loc_82E160A8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b1570
	sub_831B1570(ctx, base);
loc_82E160A8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82e160cc
	if (cr6.eq) goto loc_82E160CC;
	// li r11,0
	r11.s64 = 0;
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x82e160cc
	if (cr0.eq) goto loc_82E160CC;
	// mtctr r26
	ctr.u64 = r26.u64;
loc_82E160C0:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bdnz 0x82e160c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E160C0;
loc_82E160CC:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e160e0
	if (cr6.eq) goto loc_82E160E0;
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82E160E0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r27,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r27.u32);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E160F8"))) PPC_WEAK_FUNC(sub_82E160F8);
PPC_FUNC_IMPL(__imp__sub_82E160F8) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e16128
	if (cr6.gt) goto loc_82E16128;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e15f18
	sub_82E15F18(ctx, base);
loc_82E16128:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e16144
	if (cr6.gt) goto loc_82E16144;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E16144:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1617c
	if (!cr6.eq) goto loc_82E1617C;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,184
	ctx.r6.s64 = 184;
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r3.u32);
loc_82E1617C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e16194
	if (cr6.eq) goto loc_82E16194;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e15e48
	sub_82E15E48(ctx, base);
loc_82E16194:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E161A8"))) PPC_WEAK_FUNC(sub_82E161A8);
PPC_FUNC_IMPL(__imp__sub_82E161A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,63
	ctx.r6.s64 = 63;
	// addi r5,r11,-13484
	ctx.r5.s64 = r11.s64 + -13484;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1623c
	if (cr6.eq) goto loc_82E1623C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e16208
	if (cr6.gt) goto loc_82E16208;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E16208:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e1623c
	if (cr6.eq) goto loc_82E1623C;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82e1623c
	if (!cr6.eq) goto loc_82E1623C;
	// stw r28,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// b 0x82e16320
	goto loc_82E16320;
loc_82E1623C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// beq cr6,0x82e16274
	if (cr6.eq) goto loc_82E16274;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E16258:
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
	// bne 0x82e16258
	if (!cr0.eq) goto loc_82E16258;
loc_82E16274:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e15d70
	sub_82E15D70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82e160f8
	sub_82E160F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e0bcd0
	sub_82E0BCD0(ctx, base);
	// addi r11,r31,56
	r11.s64 = r31.s64 + 56;
loc_82E162AC:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82e162ac
	if (!cr0.eq) goto loc_82E162AC;
	// addi r11,r31,52
	r11.s64 = r31.s64 + 52;
loc_82E162CC:
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
	// bne 0x82e162cc
	if (!cr0.eq) goto loc_82E162CC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e16320
	if (cr6.eq) goto loc_82E16320;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E16320:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e16330
	if (cr6.eq) goto loc_82E16330;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E16330:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E16338"))) PPC_WEAK_FUNC(sub_82E16338);
PPC_FUNC_IMPL(__imp__sub_82E16338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r11,r11,-14544
	r11.s64 = r11.s64 + -14544;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r3,8116(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d10c0
	sub_822D10C0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,26804(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 26804);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// stw r26,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r26.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e01988
	sub_82E01988(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// beq cr6,0x82e16438
	if (cr6.eq) goto loc_82E16438;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E1641C:
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
	// bne 0x82e1641c
	if (!cr0.eq) goto loc_82E1641C;
loc_82E16438:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stb r30,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r30.u8);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e16468
	if (cr6.eq) goto loc_82E16468;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E16468:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E16478"))) PPC_WEAK_FUNC(sub_82E16478);
PPC_FUNC_IMPL(__imp__sub_82E16478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r28,r11,-13484
	r28.s64 = r11.s64 + -13484;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r6,98
	ctx.r6.s64 = 98;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// lbz r11,48(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e164dc
	if (cr0.eq) goto loc_82E164DC;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82e0c120
	sub_82E0C120(ctx, base);
	// stb r31,48(r30)
	PPC_STORE_U8(r30.u32 + 48, r31.u8);
	// stw r31,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r31.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r31.u32);
loc_82E164DC:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e16504
	if (!cr6.eq) goto loc_82E16504;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82e16834
	goto loc_82E16834;
loc_82E16504:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r7,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r7.u32);
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// lwz r31,108(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82E16554:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e167fc
	if (!cr0.eq) goto loc_82E167FC;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x82e16584
	if (cr6.gt) goto loc_82E16584;
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
loc_82E16584:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x82e16594
	if (cr6.gt) goto loc_82E16594;
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
loc_82E16594:
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// blt cr6,0x82e16698
	if (cr6.lt) goto loc_82E16698;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x82e165c8
	if (cr6.gt) goto loc_82E165C8;
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
loc_82E165C8:
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bgt cr6,0x82e165e0
	if (cr6.gt) goto loc_82E165E0;
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
loc_82E165E0:
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bgt cr6,0x82e165f8
	if (cr6.gt) goto loc_82E165F8;
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
loc_82E165F8:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x82e16640
	if (cr6.eq) goto loc_82E16640;
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
loc_82E1661C:
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
	// bne 0x82e1661c
	if (!cr0.eq) goto loc_82E1661C;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82E16640:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x82e16650
	if (cr6.gt) goto loc_82E16650;
	// subf r8,r11,r31
	ctx.r8.s64 = r31.s64 - r11.s64;
loc_82E16650:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x82e16660
	if (cr6.gt) goto loc_82E16660;
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
loc_82E16660:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,24(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// addi r8,r6,32
	ctx.r8.s64 = ctx.r6.s64 + 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82e1678c
	goto loc_82E1678C;
loc_82E16698:
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x82e166a4
	if (cr6.gt) goto loc_82E166A4;
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
loc_82E166A4:
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bgt cr6,0x82e166bc
	if (cr6.gt) goto loc_82E166BC;
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
loc_82E166BC:
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bgt cr6,0x82e166d4
	if (cr6.gt) goto loc_82E166D4;
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
loc_82E166D4:
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bgt cr6,0x82e166ec
	if (cr6.gt) goto loc_82E166EC;
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
loc_82E166EC:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x82e16734
	if (cr6.eq) goto loc_82E16734;
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
loc_82E16710:
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
	// bne 0x82e16710
	if (!cr0.eq) goto loc_82E16710;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82E16734:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x82e16744
	if (cr6.gt) goto loc_82E16744;
	// subf r8,r11,r31
	ctx.r8.s64 = r31.s64 - r11.s64;
loc_82E16744:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x82e16754
	if (cr6.gt) goto loc_82E16754;
	// subf r9,r11,r31
	ctx.r9.s64 = r31.s64 - r11.s64;
loc_82E16754:
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r27,r8,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,24(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// addi r9,r5,32
	ctx.r9.s64 = ctx.r5.s64 + 32;
	// lwz r7,20(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwzx r5,r27,r10
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1678C:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bgt cr6,0x82e167a0
	if (cr6.gt) goto loc_82E167A0;
	// subf r11,r10,r31
	r11.s64 = r31.s64 - ctx.r10.s64;
loc_82E167A0:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,56
	ctx.r7.s64 = r30.s64 + 56;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_82E167B8:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// stwcx. r8,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x82e167b8
	if (!cr0.eq) goto loc_82E167B8;
	// addi r9,r30,52
	ctx.r9.s64 = r30.s64 + 52;
loc_82E167D8:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x82e167d8
	if (!cr0.eq) goto loc_82E167D8;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82e16554
	goto loc_82E16554;
loc_82E167FC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,131
	ctx.r6.s64 = 131;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e16830
	if (!cr6.eq) goto loc_82E16830;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E16830:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_82E16834:
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e0c120
	sub_82E0C120(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E16848"))) PPC_WEAK_FUNC(sub_82E16848);
PPC_FUNC_IMPL(__imp__sub_82E16848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E16858"))) PPC_WEAK_FUNC(sub_82E16858);
PPC_FUNC_IMPL(__imp__sub_82E16858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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

__attribute__((alias("__imp__sub_82E16870"))) PPC_WEAK_FUNC(sub_82E16870);
PPC_FUNC_IMPL(__imp__sub_82E16870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-13428
	r11.s64 = r11.s64 + -13428;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x822c0890
	sub_822C0890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1688C"))) PPC_WEAK_FUNC(sub_82E1688C);
PPC_FUNC_IMPL(__imp__sub_82E1688C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E16890"))) PPC_WEAK_FUNC(sub_82E16890);
PPC_FUNC_IMPL(__imp__sub_82E16890) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-13428
	r11.s64 = r11.s64 + -13428;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e168c8
	if (cr6.eq) goto loc_82E168C8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E168C8:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e168d8
	if (cr0.eq) goto loc_82E168D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82E168D8:
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

__attribute__((alias("__imp__sub_82E168F8"))) PPC_WEAK_FUNC(sub_82E168F8);
PPC_FUNC_IMPL(__imp__sub_82E168F8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r11,r11,-13428
	r11.s64 = r11.s64 + -13428;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,26804(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26804);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e01988
	sub_82E01988(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E16980"))) PPC_WEAK_FUNC(sub_82E16980);
PPC_FUNC_IMPL(__imp__sub_82E16980) {
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
	// bl 0x82dfb960
	sub_82DFB960(ctx, base);
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

__attribute__((alias("__imp__sub_82E169B0"))) PPC_WEAK_FUNC(sub_82E169B0);
PPC_FUNC_IMPL(__imp__sub_82E169B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bde010
	sub_82BDE010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E169B8"))) PPC_WEAK_FUNC(sub_82E169B8);
PPC_FUNC_IMPL(__imp__sub_82E169B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82bdd0a8
	sub_82BDD0A8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82E16A08"))) PPC_WEAK_FUNC(sub_82E16A08);
PPC_FUNC_IMPL(__imp__sub_82E16A08) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e16ac8
	if (cr6.eq) goto loc_82E16AC8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e16ac8
	if (cr6.eq) goto loc_82E16AC8;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r11,r11,63,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r6,r11,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82be9818
	sub_82BE9818(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r11,20
	r11.s64 = 20;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r8,24
	ctx.r8.s64 = 24;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x8271e230
	sub_8271E230(ctx, base);
loc_82E16AC8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E16AD0"))) PPC_WEAK_FUNC(sub_82E16AD0);
PPC_FUNC_IMPL(__imp__sub_82E16AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r6,r10,r11
	ctx.r6.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// b 0x82be9818
	sub_82BE9818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E16AF8"))) PPC_WEAK_FUNC(sub_82E16AF8);
PPC_FUNC_IMPL(__imp__sub_82E16AF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E16B00"))) PPC_WEAK_FUNC(sub_82E16B00);
PPC_FUNC_IMPL(__imp__sub_82E16B00) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82E16B18:
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// srd r6,r10,r11
	ctx.r6.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82be9818
	sub_82BE9818(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// bne cr6,0x82e16b18
	if (!cr6.eq) goto loc_82E16B18;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bdd0f8
	sub_82BDD0F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bdd218
	sub_82BDD218(ctx, base);
	// addi r10,r31,140
	ctx.r10.s64 = r31.s64 + 140;
	// li r11,404
	r11.s64 = 404;
loc_82E16B7C:
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// bne 0x82e16b7c
	if (!cr0.eq) goto loc_82E16B7C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E16B98"))) PPC_WEAK_FUNC(sub_82E16B98);
PPC_FUNC_IMPL(__imp__sub_82E16B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// li r5,0
	ctx.r5.s64 = 0;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// lbz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r11,r7
	ctx.r7.u64 = r11.u64 | ctx.r7.u64;
	// beq 0x82e16bf4
	if (cr0.eq) goto loc_82E16BF4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fsubs f1,f0,f1
	ctx.f1.f64 = double(float(f0.f64 - ctx.f1.f64));
	// b 0x82bfe5f0
	sub_82BFE5F0(ctx, base);
	return;
loc_82E16BF4:
	// b 0x82bfe5f0
	sub_82BFE5F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E16BF8"))) PPC_WEAK_FUNC(sub_82E16BF8);
PPC_FUNC_IMPL(__imp__sub_82E16BF8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,56(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lfs f0,2244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// beq 0x82e16c34
	if (cr0.eq) goto loc_82E16C34;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 - ctx.f1.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x82e16c38
	goto loc_82E16C38;
loc_82E16C34:
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82E16C38:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e16c4c
	if (cr6.eq) goto loc_82E16C4C;
	// fsubs f0,f0,f2
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 - ctx.f2.f64));
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x82e16c50
	goto loc_82E16C50;
loc_82E16C4C:
	// stfs f2,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82E16C50:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82bdd8c0
	sub_82BDD8C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E16C70"))) PPC_WEAK_FUNC(sub_82E16C70);
PPC_FUNC_IMPL(__imp__sub_82E16C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bdcfb0
	sub_82BDCFB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E16C78"))) PPC_WEAK_FUNC(sub_82E16C78);
PPC_FUNC_IMPL(__imp__sub_82E16C78) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mulli r11,r9,140
	r11.s64 = ctx.r9.s64 * 140;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r31,r11,132
	r31.s64 = r11.s64 + 132;
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// beq cr6,0x82e16cdc
	if (cr6.eq) goto loc_82E16CDC;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bge cr6,0x82e16cd4
	if (!cr6.lt) goto loc_82E16CD4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82E16CD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e16d34
	goto loc_82E16D34;
loc_82E16CDC:
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// bge cr6,0x82e16cfc
	if (!cr6.lt) goto loc_82E16CFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82E16CFC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e16d14
	if (cr6.eq) goto loc_82E16D14;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82e16d30
	if (cr6.eq) goto loc_82E16D30;
loc_82E16D14:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r11,r3,r9
	r11.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82E16D30:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E16D34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E16D50"))) PPC_WEAK_FUNC(sub_82E16D50);
PPC_FUNC_IMPL(__imp__sub_82E16D50) {
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
	// mulli r11,r4,140
	r11.s64 = ctx.r4.s64 * 140;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r31,r11,132
	r31.s64 = r11.s64 + 132;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e16dc4
	if (cr6.eq) goto loc_82E16DC4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e16dc4
	if (cr6.eq) goto loc_82E16DC4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,64(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_82E16DC4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E16DD0"))) PPC_WEAK_FUNC(sub_82E16DD0);
PPC_FUNC_IMPL(__imp__sub_82E16DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mulli r11,r4,140
	r11.s64 = ctx.r4.s64 * 140;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,132
	r11.s64 = r11.s64 + 132;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bge cr6,0x82e16df0
	if (!cr6.lt) goto loc_82E16DF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82E16DF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E16DF8"))) PPC_WEAK_FUNC(sub_82E16DF8);
PPC_FUNC_IMPL(__imp__sub_82E16DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mulli r11,r4,140
	r11.s64 = ctx.r4.s64 * 140;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,132
	r11.s64 = r11.s64 + 132;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E16E20"))) PPC_WEAK_FUNC(sub_82E16E20);
PPC_FUNC_IMPL(__imp__sub_82E16E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// li r4,208
	ctx.r4.s64 = 208;
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e16e68
	if (cr0.eq) goto loc_82E16E68;
	// fneg f0,f1
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = f31.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x82e16e78
	goto loc_82E16E78;
loc_82E16E68:
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82E16E78:
	// li r4,204
	ctx.r4.s64 = 204;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
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

__attribute__((alias("__imp__sub_82E16EA0"))) PPC_WEAK_FUNC(sub_82E16EA0);
PPC_FUNC_IMPL(__imp__sub_82E16EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lbz r11,56(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// stb r4,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r4.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e16ef4
	if (cr0.eq) goto loc_82E16EF4;
	// fneg f0,f3
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f0,f4
	f0.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f0,f1
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fneg f0,f2
	f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// b 0x82e16f18
	goto loc_82E16F18;
loc_82E16EF4:
	// stfs f3,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82E16F18:
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// bne 0x82e16f3c
	if (!cr0.eq) goto loc_82E16F3C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f2,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82e16e20
	sub_82E16E20(ctx, base);
loc_82E16F3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E16F50"))) PPC_WEAK_FUNC(sub_82E16F50);
PPC_FUNC_IMPL(__imp__sub_82E16F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r4,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r4.u8);
	// li r4,44
	ctx.r4.s64 = 44;
	// beq 0x82e16f68
	if (cr0.eq) goto loc_82E16F68;
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x822e6f00
	sub_822E6F00(ctx, base);
	return;
loc_82E16F68:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x822e6f00
	sub_822E6F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E16F70"))) PPC_WEAK_FUNC(sub_82E16F70);
PPC_FUNC_IMPL(__imp__sub_82E16F70) {
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
	// lhz r11,36(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e16fec
	if (!cr0.eq) goto loc_82E16FEC;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r30,20
	r31.s64 = r30.s64 + 20;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82e16fec
	if (cr6.eq) goto loc_82E16FEC;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e16fd8
	if (cr6.eq) goto loc_82E16FD8;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e16fe4
	if (cr6.eq) goto loc_82E16FE4;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x82e16fdc
	goto loc_82E16FDC;
loc_82E16FD8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E16FDC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82be0110
	sub_82BE0110(ctx, base);
loc_82E16FE4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82E16FEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E17008"))) PPC_WEAK_FUNC(sub_82E17008);
PPC_FUNC_IMPL(__imp__sub_82E17008) {
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
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e17054
	if (!cr0.eq) goto loc_82E17054;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82be0110
	sub_82BE0110(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// beq cr6,0x82e17054
	if (cr6.eq) goto loc_82E17054;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E17054:
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

__attribute__((alias("__imp__sub_82E17068"))) PPC_WEAK_FUNC(sub_82E17068);
PPC_FUNC_IMPL(__imp__sub_82E17068) {
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
	// lhz r11,36(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e170dc
	if (!cr0.eq) goto loc_82E170DC;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82e170dc
	if (cr6.eq) goto loc_82E170DC;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e170d0
	if (cr6.eq) goto loc_82E170D0;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e170dc
	if (cr6.eq) goto loc_82E170DC;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x82e170d4
	goto loc_82E170D4;
loc_82E170D0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E170D4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82bdfe58
	sub_82BDFE58(ctx, base);
loc_82E170DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E170F8"))) PPC_WEAK_FUNC(sub_82E170F8);
PPC_FUNC_IMPL(__imp__sub_82E170F8) {
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
	// lhz r11,36(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e17144
	if (!cr0.eq) goto loc_82E17144;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82bdfe58
	sub_82BDFE58(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x82e17144
	if (cr6.eq) goto loc_82E17144;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E17144:
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

__attribute__((alias("__imp__sub_82E17158"))) PPC_WEAK_FUNC(sub_82E17158);
PPC_FUNC_IMPL(__imp__sub_82E17158) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,8191
	r11.s64 = 536805376;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r11,r11,65534
	r11.u64 = r11.u64 | 65534;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e171d0
	if (cr6.lt) goto loc_82E171D0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23004
	ctx.r4.s64 = r11.s64 + -23004;
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
loc_82E171D0:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e03ee8
	sub_82E03EE8(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82e1721c
	if (!cr6.eq) goto loc_82E1721C;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82e17254
	goto loc_82E17254;
loc_82E1721C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e17240
	if (cr0.eq) goto loc_82E17240;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e17258
	if (!cr6.eq) goto loc_82E17258;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// b 0x82e17258
	goto loc_82E17258;
loc_82E17240:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e17258
	if (!cr6.eq) goto loc_82E17258;
loc_82E17254:
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_82E17258:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// li r29,1
	r29.s64 = 1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e17360
	if (!cr6.eq) goto loc_82E17360;
	// li r27,0
	r27.s64 = 0;
loc_82E17278:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e172dc
	if (!cr6.eq) goto loc_82E172DC;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e172ec
	if (cr6.eq) goto loc_82E172EC;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e172b4
	if (!cr6.eq) goto loc_82E172B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x828547e0
	sub_828547E0(ctx, base);
loc_82E172B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x827fd9c0
	sub_827FD9C0(ctx, base);
	// b 0x82e1734c
	goto loc_82E1734C;
loc_82E172DC:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e17310
	if (!cr6.eq) goto loc_82E17310;
loc_82E172EC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, r29.u8);
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r27,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, r27.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82e1734c
	goto loc_82E1734C;
loc_82E17310:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e17328
	if (!cr6.eq) goto loc_82E17328;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x827fd9c0
	sub_827FD9C0(ctx, base);
loc_82E17328:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x828547e0
	sub_828547E0(ctx, base);
loc_82E1734C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e17278
	if (cr6.eq) goto loc_82E17278;
loc_82E17360:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E17380"))) PPC_WEAK_FUNC(sub_82E17380);
PPC_FUNC_IMPL(__imp__sub_82E17380) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e173f4
	if (cr6.eq) goto loc_82E173F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be0530
	sub_82BE0530(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e04128
	sub_82E04128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82e173f4
	if (cr6.eq) goto loc_82E173F4;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82e173f4
	if (!cr6.eq) goto loc_82E173F4;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x827299d8
	sub_827299D8(ctx, base);
loc_82E173F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E17400"))) PPC_WEAK_FUNC(sub_82E17400);
PPC_FUNC_IMPL(__imp__sub_82E17400) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e17470
	if (!cr6.eq) goto loc_82E17470;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82E17438:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// blt cr6,0x82e17450
	if (cr6.lt) goto loc_82E17450;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E17450:
	// clrlwi. r29,r10,24
	r29.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82e17460
	if (cr0.eq) goto loc_82E17460;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82e17464
	goto loc_82E17464;
loc_82E17460:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82E17464:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e17438
	if (cr6.eq) goto loc_82E17438;
loc_82E17470:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq 0x82e174c4
	if (cr0.eq) goto loc_82E174C4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e174bc
	if (!cr6.eq) goto loc_82E174BC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E17498:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82e17158
	sub_82E17158(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r26.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82e174fc
	goto loc_82E174FC;
loc_82E174BC:
	// bl 0x82dfd7f8
	sub_82DFD7F8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E174C4:
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// blt cr6,0x82e174dc
	if (cr6.lt) goto loc_82E174DC;
	// li r11,0
	r11.s64 = 0;
loc_82E174DC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e174f0
	if (cr0.eq) goto loc_82E174F0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82e17498
	goto loc_82E17498;
loc_82E174F0:
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
loc_82E174FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E17508"))) PPC_WEAK_FUNC(sub_82E17508);
PPC_FUNC_IMPL(__imp__sub_82E17508) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1754c
	if (!cr6.eq) goto loc_82E1754C;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_82E17534:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E17538:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E17544:
	// bl 0x82e17158
	sub_82E17158(ctx, base);
	// b 0x82e176c0
	goto loc_82E176C0;
loc_82E1754C:
	// lwz r25,4(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e17584
	if (!cr6.eq) goto loc_82E17584;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82e17574
	if (cr6.lt) goto loc_82E17574;
	// li r11,0
	r11.s64 = 0;
loc_82E17574:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e176a4
	if (cr0.eq) goto loc_82E176A4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x82e17534
	goto loc_82E17534;
loc_82E17584:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bne cr6,0x82e175b8
	if (!cr6.eq) goto loc_82E175B8;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82e175a8
	if (cr6.lt) goto loc_82E175A8;
	// li r11,0
	r11.s64 = 0;
loc_82E175A8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e176a4
	if (cr0.eq) goto loc_82E176A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e17538
	goto loc_82E17538;
loc_82E175B8:
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r11,1
	r11.s64 = 1;
	// lwz r27,12(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// blt cr6,0x82e175d0
	if (cr6.lt) goto loc_82E175D0;
	// li r11,0
	r11.s64 = 0;
loc_82E175D0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e17634
	if (cr0.eq) goto loc_82E17634;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfd7f8
	sub_82DFD7F8(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82e175fc
	if (cr6.lt) goto loc_82E175FC;
	// li r11,0
	r11.s64 = 0;
loc_82E175FC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e17634
	if (cr0.eq) goto loc_82E17634;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,21(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e17628
	if (cr6.eq) goto loc_82E17628;
loc_82E17620:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e17544
	goto loc_82E17544;
loc_82E17628:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82E1762C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82e17544
	goto loc_82E17544;
loc_82E17634:
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(r27.s32, r28.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82e17644
	if (cr6.lt) goto loc_82E17644;
	// li r11,0
	r11.s64 = 0;
loc_82E17644:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e176a4
	if (cr0.eq) goto loc_82E176A4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8245d028
	sub_8245D028(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, xer);
	// beq cr6,0x82e17680
	if (cr6.eq) goto loc_82E17680;
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82e17678
	if (cr6.lt) goto loc_82E17678;
	// li r11,0
	r11.s64 = 0;
loc_82E17678:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e176a4
	if (cr0.eq) goto loc_82E176A4;
loc_82E17680:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,21(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1762c
	if (cr6.eq) goto loc_82E1762C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x82e17620
	goto loc_82E17620;
loc_82E176A4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e17400
	sub_82E17400(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82E176C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E176D0"))) PPC_WEAK_FUNC(sub_82E176D0);
PPC_FUNC_IMPL(__imp__sub_82E176D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e03cf8
	sub_82E03CF8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82e17720
	if (cr6.eq) goto loc_82E17720;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82e17718
	if (cr6.lt) goto loc_82E17718;
	// li r11,0
	r11.s64 = 0;
loc_82E17718:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e17744
	if (cr0.eq) goto loc_82E17744;
loc_82E17720:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82e17508
	sub_82E17508(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E17744:
	// addi r3,r5,16
	ctx.r3.s64 = ctx.r5.s64 + 16;
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

__attribute__((alias("__imp__sub_82E17760"))) PPC_WEAK_FUNC(sub_82E17760);
PPC_FUNC_IMPL(__imp__sub_82E17760) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82be0428
	sub_82BE0428(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82e177c8
	if (cr0.eq) goto loc_82E177C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x82be0530
	sub_82BE0530(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r29,8
	r30.s64 = r29.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e04128
	sub_82E04128(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82e177ec
	if (cr6.eq) goto loc_82E177EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
	// lwz r31,16(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// b 0x82e177fc
	goto loc_82E177FC;
loc_82E177C8:
	// lis r26,-32761
	r26.s64 = -2147024896;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E177D8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e1bc88
	sub_82E1BC88(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_82E177EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e176d0
	sub_82E176D0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82E177FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be6970
	sub_82BE6970(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82e177d8
	goto loc_82E177D8;
}

__attribute__((alias("__imp__sub_82E17810"))) PPC_WEAK_FUNC(sub_82E17810);
PPC_FUNC_IMPL(__imp__sub_82E17810) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,708
	ctx.r6.s64 = 708;
	// addi r5,r11,-13408
	ctx.r5.s64 = r11.s64 + -13408;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e017e0
	sub_82E017E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d11e0
	sub_822D11E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E17870"))) PPC_WEAK_FUNC(sub_82E17870);
PPC_FUNC_IMPL(__imp__sub_82E17870) {
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
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82e6a128
	sub_82E6A128(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,132
	ctx.r10.s64 = r31.s64 + 132;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// li r6,403
	ctx.r6.s64 = 403;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// stb r11,38(r31)
	PPC_STORE_U8(r31.u32 + 38, r11.u8);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82E178F0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r8,32
	ctx.r8.s64 = 32;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82E17908:
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e17908
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E17908;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// bge 0x82e178f0
	if (!cr0.lt) goto loc_82E178F0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,56(r31)
	PPC_STORE_U8(r31.u32 + 56, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82E17958"))) PPC_WEAK_FUNC(sub_82E17958);
PPC_FUNC_IMPL(__imp__sub_82E17958) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e1a678
	sub_82E1A678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E17960"))) PPC_WEAK_FUNC(sub_82E17960);
PPC_FUNC_IMPL(__imp__sub_82E17960) {
	PPC_FUNC_PROLOGUE();
	// stb r4,271(r3)
	PPC_STORE_U8(ctx.r3.u32 + 271, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E17968"))) PPC_WEAK_FUNC(sub_82E17968);
PPC_FUNC_IMPL(__imp__sub_82E17968) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r11,1
	r11.s64 = 1;
	// rldicr r30,r11,63,63
	r30.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,224(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 224);
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// beq cr6,0x82e179c0
	if (cr6.eq) goto loc_82E179C0;
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r11,r30,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	r11.s64 = r30.s64 >> temp.u64;
	// srd r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82bdfaa0
	sub_82BDFAA0(ctx, base);
loc_82E179C0:
	// lbz r4,246(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 246);
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// beq cr6,0x82e17a48
	if (cr6.eq) goto loc_82E17A48;
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r11,r30,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	r11.s64 = r30.s64 >> temp.u64;
	// srd r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82bdfb80
	sub_82BDFB80(ctx, base);
	// lbz r11,248(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 248);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x82e17a48
	if (cr6.eq) goto loc_82E17A48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e847b0
	sub_82E847B0(ctx, base);
	// lbz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 248);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r11,r30,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	r11.s64 = r30.s64 >> temp.u64;
	// srd r7,r11,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x82bdfb80
	sub_82BDFB80(ctx, base);
loc_82E17A48:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E17A50"))) PPC_WEAK_FUNC(sub_82E17A50);
PPC_FUNC_IMPL(__imp__sub_82E17A50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r11,1
	r11.s64 = 1;
	// rldicr r30,r11,63,63
	r30.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,226(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 226);
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// beq cr6,0x82e17aa8
	if (cr6.eq) goto loc_82E17AA8;
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r11,r30,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	r11.s64 = r30.s64 >> temp.u64;
	// srd r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82bdfaa0
	sub_82BDFAA0(ctx, base);
loc_82E17AA8:
	// lbz r4,250(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 250);
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// beq cr6,0x82e17ae4
	if (cr6.eq) goto loc_82E17AE4;
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r11,r30,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	r11.s64 = r30.s64 >> temp.u64;
	// srd r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82bdfb80
	sub_82BDFB80(ctx, base);
loc_82E17AE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E17AF0"))) PPC_WEAK_FUNC(sub_82E17AF0);
PPC_FUNC_IMPL(__imp__sub_82E17AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,228(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 228);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// srad r10,r7,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r10.s64 = ctx.r7.s64 >> temp.u64;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82bdfaa0
	sub_82BDFAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E17B38"))) PPC_WEAK_FUNC(sub_82E17B38);
PPC_FUNC_IMPL(__imp__sub_82E17B38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E17B40"))) PPC_WEAK_FUNC(sub_82E17B40);
PPC_FUNC_IMPL(__imp__sub_82E17B40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,230(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 230);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// srad r10,r7,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r10.s64 = ctx.r7.s64 >> temp.u64;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82bdfaa0
	sub_82BDFAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E17B88"))) PPC_WEAK_FUNC(sub_82E17B88);
PPC_FUNC_IMPL(__imp__sub_82E17B88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E17B90"))) PPC_WEAK_FUNC(sub_82E17B90);
PPC_FUNC_IMPL(__imp__sub_82E17B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// lbz r11,232(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x82e17c48
	if (cr6.eq) goto loc_82E17C48;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r4,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lvx128 v61,r4,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v60,v63,v62
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// lvx128 v59,r4,r7
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrghw128 v62,v59,v61
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vmrglw128 v61,v59,v61
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// mulli r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 * 3;
	// vmrghw128 v59,v60,v62
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v60.u32)));
	// vmrglw128 v62,v60,v62
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v60.u32)));
	// vmrghw128 v60,v63,v61
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrglw128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// li r11,1
	r11.s64 = 1;
	// stvx128 v59,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// stvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// stvx128 v60,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rldicr r11,r11,63,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// li r6,3
	ctx.r6.s64 = 3;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// srad r11,r11,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r11.s64 < 0) & (((r11.s64 >> temp.u64) << temp.u64) != r11.s64);
	r11.s64 = r11.s64 >> temp.u64;
	// srd r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82bdfaa0
	sub_82BDFAA0(ctx, base);
loc_82E17C48:
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

__attribute__((alias("__imp__sub_82E17C60"))) PPC_WEAK_FUNC(sub_82E17C60);
PPC_FUNC_IMPL(__imp__sub_82E17C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,236(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 236);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// srad r10,r7,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r10.s64 = ctx.r7.s64 >> temp.u64;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82bdfaa0
	sub_82BDFAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E17CA8"))) PPC_WEAK_FUNC(sub_82E17CA8);
PPC_FUNC_IMPL(__imp__sub_82E17CA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E17CB0"))) PPC_WEAK_FUNC(sub_82E17CB0);
PPC_FUNC_IMPL(__imp__sub_82E17CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,238(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 238);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,271(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 271);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// srad r10,r7,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r10.s64 = ctx.r7.s64 >> temp.u64;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82bdfaa0
	sub_82BDFAA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E17D04"))) PPC_WEAK_FUNC(sub_82E17D04);
PPC_FUNC_IMPL(__imp__sub_82E17D04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E17D08"))) PPC_WEAK_FUNC(sub_82E17D08);
PPC_FUNC_IMPL(__imp__sub_82E17D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// lbz r11,240(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 240);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x82e17dcc
	if (cr6.eq) goto loc_82E17DCC;
	// lbz r10,271(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 271);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e17dcc
	if (cr0.eq) goto loc_82E17DCC;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v62,r4,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lvx128 v61,r4,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v60,v63,v62
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// lvx128 v59,r4,r7
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrghw128 v62,v59,v61
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vmrglw128 v61,v59,v61
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// mulli r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 * 3;
	// vmrghw128 v59,v60,v62
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v60.u32)));
	// vmrglw128 v62,v60,v62
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v60.u32)));
	// vmrghw128 v60,v63,v61
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrglw128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// li r11,1
	r11.s64 = 1;
	// stvx128 v59,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// stvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// stvx128 v60,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rldicr r11,r11,63,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// li r6,3
	ctx.r6.s64 = 3;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// srad r11,r11,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r11.s64 < 0) & (((r11.s64 >> temp.u64) << temp.u64) != r11.s64);
	r11.s64 = r11.s64 >> temp.u64;
	// srd r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82bdfaa0
	sub_82BDFAA0(ctx, base);
loc_82E17DCC:
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

__attribute__((alias("__imp__sub_82E17DE0"))) PPC_WEAK_FUNC(sub_82E17DE0);
PPC_FUNC_IMPL(__imp__sub_82E17DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r4,129
	r11.s64 = ctx.r4.s64 + 129;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r11,r3
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,376
	ctx.r8.s64 = r11.s64 + 376;
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r6,-31943
	ctx.r6.s64 = -2093416448;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r6,29232
	ctx.r9.s64 = ctx.r6.s64 + 29232;
	// subf r5,r7,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r7.s64;
	// lfs f0,29232(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 29232);
	f0.f64 = double(temp.f32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stfsx f0,r8,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// rldicr r8,r6,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srad r8,r8,r5
	temp.u64 = ctx.r5.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r8.s64 = ctx.r8.s64 >> temp.u64;
	// srd r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r7.u8 & 0x7F));
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,6020(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,6024(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,6028(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E17E60"))) PPC_WEAK_FUNC(sub_82E17E60);
PPC_FUNC_IMPL(__imp__sub_82E17E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r4,254(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 254);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// lvlx128 v63,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,80
	ctx.r9.s64 = 80;
	// lvrx128 v62,r5,r31
	temp.u32 = ctx.r5.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r10,96
	ctx.r10.s64 = 96;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v62.u8)));
	// lvrx128 v61,r6,r31
	temp.u32 = ctx.r6.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r5,r31
	temp.u32 = ctx.r5.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,112
	r11.s64 = 112;
	// vor128 v62,v62,v61
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v61.u8)));
	// lvrx128 v60,r7,r31
	temp.u32 = ctx.r7.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r6,r31
	temp.u32 = ctx.r6.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,128
	ctx.r6.s64 = 128;
	// vor128 v61,v61,v60
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v60.u8)));
	// lvrx128 v59,r8,r31
	temp.u32 = ctx.r8.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r7,r31
	temp.u32 = ctx.r7.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// vor128 v60,v60,v59
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v59.u8)));
	// vaddfp128 v57,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v57.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// lvlx128 v58,r8,r31
	temp.u32 = ctx.r8.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvrx128 v59,r9,r31
	temp.u32 = ctx.r9.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vaddfp128 v63,v63,v61
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v61.f32)));
	// vor128 v59,v58,v59
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)v59.u8)));
	// lvlx128 v55,r9,r31
	temp.u32 = ctx.r9.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v62,v62,v60
	simde_mm_store_ps(v62.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v60.f32)));
	// lvrx128 v58,r11,r31
	temp.u32 = r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v61,v61,v60
	simde_mm_store_ps(v61.f32, simde_mm_add_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v60.f32)));
	// lvrx128 v56,r10,r31
	temp.u32 = ctx.r10.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v58,v54,v58
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v54.u8), simde_mm_load_si128((simde__m128i*)v58.u8)));
	// vor128 v56,v55,v56
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v55.u8), simde_mm_load_si128((simde__m128i*)v56.u8)));
	// lvlx128 v54,r11,r31
	temp.u32 = r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v55,r6,r31
	temp.u32 = ctx.r6.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vor128 v60,v54,v55
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v54.u8), simde_mm_load_si128((simde__m128i*)v55.u8)));
	// lfs f0,-28612(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28612);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vaddfp128 v55,v59,v56
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v55.f32, simde_mm_add_ps(simde_mm_load_ps(v59.f32), simde_mm_load_ps(v56.f32)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// vaddfp128 v54,v58,v60
	simde_mm_store_ps(v54.f32, simde_mm_add_ps(simde_mm_load_ps(v58.f32), simde_mm_load_ps(v60.f32)));
	// lvlx128 v53,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v63,v63,v59
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v59.f32)));
	// vspltw128 v53,v53,0
	simde_mm_store_si128((simde__m128i*)v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v53.u32), 0xFF));
	// vaddfp128 v62,v62,v56
	simde_mm_store_ps(v62.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v56.f32)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// vaddfp128 v59,v57,v61
	simde_mm_store_ps(v59.f32, simde_mm_add_ps(simde_mm_load_ps(v57.f32), simde_mm_load_ps(v61.f32)));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// vaddfp128 v63,v63,v58
	simde_mm_store_ps(v63.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v58.f32)));
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// vaddfp128 v57,v57,v55
	simde_mm_store_ps(v57.f32, simde_mm_add_ps(simde_mm_load_ps(v57.f32), simde_mm_load_ps(v55.f32)));
	// vaddfp128 v61,v61,v54
	simde_mm_store_ps(v61.f32, simde_mm_add_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v54.f32)));
	// vaddfp128 v56,v55,v54
	simde_mm_store_ps(v56.f32, simde_mm_add_ps(simde_mm_load_ps(v55.f32), simde_mm_load_ps(v54.f32)));
	// vaddfp128 v62,v62,v60
	simde_mm_store_ps(v62.f32, simde_mm_add_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v60.f32)));
	// vmulfp128 v60,v53,v59
	simde_mm_store_ps(v60.f32, simde_mm_mul_ps(simde_mm_load_ps(v53.f32), simde_mm_load_ps(v59.f32)));
	// vmulfp128 v63,v53,v63
	simde_mm_store_ps(v63.f32, simde_mm_mul_ps(simde_mm_load_ps(v53.f32), simde_mm_load_ps(v63.f32)));
	// vmulfp128 v59,v53,v57
	simde_mm_store_ps(v59.f32, simde_mm_mul_ps(simde_mm_load_ps(v53.f32), simde_mm_load_ps(v57.f32)));
	// vmulfp128 v61,v53,v61
	simde_mm_store_ps(v61.f32, simde_mm_mul_ps(simde_mm_load_ps(v53.f32), simde_mm_load_ps(v61.f32)));
	// vmulfp128 v58,v53,v56
	simde_mm_store_ps(v58.f32, simde_mm_mul_ps(simde_mm_load_ps(v53.f32), simde_mm_load_ps(v56.f32)));
	// vmulfp128 v62,v53,v62
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v53.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x82e17fd0
	if (cr6.eq) goto loc_82E17FD0;
	// addi r11,r4,5
	r11.s64 = ctx.r4.s64 + 5;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// li r6,6
	ctx.r6.s64 = 6;
	// srad r11,r8,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	r11.s64 = ctx.r8.s64 >> temp.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// srd r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82bdfb80
	sub_82BDFB80(ctx, base);
loc_82E17FD0:
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

__attribute__((alias("__imp__sub_82E17FE8"))) PPC_WEAK_FUNC(sub_82E17FE8);
PPC_FUNC_IMPL(__imp__sub_82E17FE8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r4,254(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 254);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f1,136(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f1,152(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f1,156(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f1,172(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// beq cr6,0x82e18098
	if (cr6.eq) goto loc_82E18098;
	// addi r11,r4,5
	r11.s64 = ctx.r4.s64 + 5;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// li r6,6
	ctx.r6.s64 = 6;
	// srad r11,r8,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	r11.s64 = ctx.r8.s64 >> temp.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// srd r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82bdfb80
	sub_82BDFB80(ctx, base);
loc_82E18098:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E180A8"))) PPC_WEAK_FUNC(sub_82E180A8);
PPC_FUNC_IMPL(__imp__sub_82E180A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,244(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 244);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,120
	ctx.r8.s64 = r11.s64 + 120;
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r9,r7,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r7.s64;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// stfsx f0,r8,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// srad r9,r6,r9
	temp.u64 = ctx.r9.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r6.s64 < 0) & (((ctx.r6.s64 >> temp.u64) << temp.u64) != ctx.r6.s64);
	ctx.r9.s64 = ctx.r6.s64 >> temp.u64;
	// srd r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1924(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1928(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1932(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E18118"))) PPC_WEAK_FUNC(sub_82E18118);
PPC_FUNC_IMPL(__imp__sub_82E18118) {
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
	PPCVRegister v47{};
	PPCVRegister v48{};
	PPCVRegister v49{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b04
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// rlwinm. r11,r22,0,0,29
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r27,16
	r27.s64 = 16;
	// li r28,32
	r28.s64 = 32;
	// li r29,48
	r29.s64 = 48;
	// li r24,0
	r24.s64 = 0;
	// rldicr r30,r10,63,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// beq 0x82e18368
	if (cr0.eq) goto loc_82E18368;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r4,125
	ctx.r10.s64 = ctx.r4.s64 + 125;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// addi r9,r23,2
	ctx.r9.s64 = r23.s64 + 2;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// add r11,r8,r31
	r11.u64 = ctx.r8.u64 + r31.u64;
	// rlwinm r24,r5,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E18178:
	// lbz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -2);
	// addi r7,r10,-8
	ctx.r7.s64 = ctx.r10.s64 + -8;
	// addi r6,r10,-6
	ctx.r6.s64 = ctx.r10.s64 + -6;
	// lbz r3,-1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// rotlwi r8,r8,6
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 6);
	// lbz r25,0(r9)
	r25.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rlwinm r21,r7,30,2,31
	r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// lbz r20,1(r9)
	r20.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + r26.u64;
	// ld r19,0(r31)
	r19.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rotlwi r7,r3,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 6);
	// subf r3,r21,r6
	ctx.r3.s64 = ctx.r6.s64 - r21.s64;
	// rotlwi r6,r25,6
	ctx.r6.u64 = __builtin_rotateleft32(r25.u32, 6);
	// lvlx128 v61,r28,r8
	temp.u32 = r28.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// clrldi r25,r3,32
	r25.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lvlx128 v60,r29,r8
	temp.u32 = r29.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rotlwi r3,r20,6
	ctx.r3.u64 = __builtin_rotateleft32(r20.u32, 6);
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// srad r25,r30,r25
	temp.u64 = r25.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	r25.s64 = r30.s64 >> temp.u64;
	// lvlx128 v62,r27,r8
	temp.u32 = r27.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v59,v63,v61
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// vmrghw128 v58,v62,v60
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// add r8,r7,r26
	ctx.r8.u64 = ctx.r7.u64 + r26.u64;
	// vmrglw128 v62,v62,v60
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// add r7,r6,r26
	ctx.r7.u64 = ctx.r6.u64 + r26.u64;
	// vmrglw128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// add r6,r3,r26
	ctx.r6.u64 = ctx.r3.u64 + r26.u64;
	// srd r3,r25,r21
	ctx.r3.u64 = r21.u8 & 0x40 ? 0 : (r25.u64 >> (r21.u8 & 0x7F));
	// vmrghw128 v61,v59,v58
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v58.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// lvlx128 v60,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// lvlx128 v57,r27,r8
	temp.u32 = r27.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v59,v59,v58
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v58.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// lvlx128 v58,r29,r8
	temp.u32 = r29.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r28,r8
	temp.u32 = r28.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r25,-80
	r25.s64 = -80;
	// li r8,-64
	ctx.r8.s64 = -64;
	// lvlx128 v56,r27,r7
	temp.u32 = r27.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r21,-48
	r21.s64 = -48;
	// lvlx128 v55,r29,r7
	temp.u32 = r29.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// or r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 | r19.u64;
	// lvlx128 v54,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r28,r7
	temp.u32 = r28.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r19,r10,-3
	r19.s64 = ctx.r10.s64 + -3;
	// lvlx128 v53,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r20,r10,-5
	r20.s64 = ctx.r10.s64 + -5;
	// lvlx128 v51,r27,r6
	temp.u32 = r27.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r7,r19,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// lvlx128 v50,r28,r6
	temp.u32 = r28.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r20,r20,30,2,31
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 30) & 0x3FFFFFFF;
	// lvlx128 v49,r29,r6
	temp.u32 = r29.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// std r3,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r3.u64);
	// stvx128 v59,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r7,r20,r7
	ctx.r7.s64 = ctx.r7.s64 - r20.s64;
	// stvx128 v61,r11,r25
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v61,v60,v62
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v60.u32)));
	// stvx128 v63,r11,r21
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// vmrghw128 v63,v57,v58
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v58.u32), simde_mm_load_si128((simde__m128i*)v57.u32)));
	// addi r19,r10,-2
	r19.s64 = ctx.r10.s64 + -2;
	// srad r8,r30,r7
	temp.u64 = ctx.r7.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	ctx.r8.s64 = r30.s64 >> temp.u64;
	// vmrglw128 v59,v57,v58
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v58.u32), simde_mm_load_si128((simde__m128i*)v57.u32)));
	// srd r8,r8,r20
	ctx.r8.u64 = r20.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (r20.u8 & 0x7F));
	// vmrglw128 v62,v60,v62
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v60.u32)));
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// rlwinm r6,r10,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// vmrghw128 v47,v61,v63
	simde_mm_store_si128((simde__m128i*)v47.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), simde_mm_load_si128((simde__m128i*)v61.u32)));
	// li r3,-32
	ctx.r3.s64 = -32;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// vmrglw128 v63,v61,v63
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), simde_mm_load_si128((simde__m128i*)v61.u32)));
	// rlwinm r7,r19,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// vmrghw128 v60,v54,v52
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v52.u32), simde_mm_load_si128((simde__m128i*)v54.u32)));
	// std r8,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// vmrghw128 v58,v56,v55
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), simde_mm_load_si128((simde__m128i*)v56.u32)));
	// vmrghw128 v57,v53,v50
	simde_mm_store_si128((simde__m128i*)v57.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v50.u32), simde_mm_load_si128((simde__m128i*)v53.u32)));
	// li r25,-16
	r25.s64 = -16;
	// vmrghw128 v48,v51,v49
	simde_mm_store_si128((simde__m128i*)v48.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v49.u32), simde_mm_load_si128((simde__m128i*)v51.u32)));
	// subf r8,r7,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r7.s64;
	// vmrghw128 v62,v62,v59
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v59.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// vmrglw128 v61,v56,v55
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v55.u32), simde_mm_load_si128((simde__m128i*)v56.u32)));
	// stvx128 v47,r11,r3
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v47.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// stvx128 v63,r11,r25
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v59,v54,v52
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v52.u32), simde_mm_load_si128((simde__m128i*)v54.u32)));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// srad r8,r30,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	ctx.r8.s64 = r30.s64 >> temp.u64;
	// srd r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r7.u8 & 0x7F));
	// vmrghw128 v63,v60,v58
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v58.u32), simde_mm_load_si128((simde__m128i*)v60.u32)));
	// vmrglw128 v62,v60,v58
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v58.u32), simde_mm_load_si128((simde__m128i*)v60.u32)));
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// vmrghw128 v61,v59,v61
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// vmrglw128 v60,v51,v49
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v49.u32), simde_mm_load_si128((simde__m128i*)v51.u32)));
	// addi r3,r10,3
	ctx.r3.s64 = ctx.r10.s64 + 3;
	// vmrglw128 v59,v53,v50
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v50.u32), simde_mm_load_si128((simde__m128i*)v53.u32)));
	// std r8,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stvx128 v63,r11,r27
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r6,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// vmrghw128 v58,v57,v48
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v48.u32), simde_mm_load_si128((simde__m128i*)v57.u32)));
	// rlwinm r8,r3,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// vmrglw128 v63,v57,v48
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v48.u32), simde_mm_load_si128((simde__m128i*)v57.u32)));
	// stvx128 v62,r11,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v62,v59,v60
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v60.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// stvx128 v61,r11,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// li r6,64
	ctx.r6.s64 = 64;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// li r3,80
	ctx.r3.s64 = 80;
	// srad r8,r30,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	ctx.r8.s64 = r30.s64 >> temp.u64;
	// ld r25,0(r31)
	r25.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// srd r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r7.u8 & 0x7F));
	// li r7,96
	ctx.r7.s64 = 96;
	// or r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 | r25.u64;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// std r8,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r8.u64);
	// stvx128 v58,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r3
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,192
	r11.s64 = r11.s64 + 192;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82e18178
	if (!cr0.eq) goto loc_82E18178;
loc_82E18368:
	// cmplw cr6,r24,r22
	cr6.compare<uint32_t>(r24.u32, r22.u32, xer);
	// bge cr6,0x82e18414
	if (!cr6.lt) goto loc_82E18414;
	// mulli r11,r24,3
	r11.s64 = r24.s64 * 3;
	// add r25,r11,r4
	r25.u64 = r11.u64 + ctx.r4.u64;
loc_82E18378:
	// lbzx r11,r24,r23
	r11.u64 = PPC_LOAD_U8(r24.u32 + r23.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r11,6
	r11.u64 = __builtin_rotateleft32(r11.u32, 6);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r21,r1,128
	r21.s64 = ctx.r1.s64 + 128;
	// addi r7,r25,2
	ctx.r7.s64 = r25.s64 + 2;
	// rlwinm r4,r25,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,3
	ctx.r6.s64 = 3;
	// lvx128 v63,r11,r28
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r7,r4,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lvx128 v59,r11,r27
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v60,v62,v63
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// lvx128 v61,r11,r29
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), simde_mm_load_si128((simde__m128i*)v62.u32)));
	// vmrghw128 v62,v59,v61
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// clrldi r11,r7,32
	r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// vmrglw128 v61,v59,v61
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v59.u32)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// srad r11,r30,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (r30.s64 < 0) & (((r30.s64 >> temp.u64) << temp.u64) != r30.s64);
	r11.s64 = r30.s64 >> temp.u64;
	// vmrghw128 v59,v60,v62
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v60.u32)));
	// srd r7,r11,r4
	ctx.r7.u64 = ctx.r4.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r4.u8 & 0x7F));
	// vmrglw128 v62,v60,v62
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v62.u32), simde_mm_load_si128((simde__m128i*)v60.u32)));
	// stvx128 v59,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v60,v63,v61
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// vmrglw128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), simde_mm_load_si128((simde__m128i*)v63.u32)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r21
	simde_mm_store_si128((simde__m128i*)(base + ((r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82bdfaa0
	sub_82BDFAA0(ctx, base);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,3
	r25.s64 = r25.s64 + 3;
	// cmplw cr6,r24,r22
	cr6.compare<uint32_t>(r24.u32, r22.u32, xer);
	// blt cr6,0x82e18378
	if (cr6.lt) goto loc_82E18378;
loc_82E18414:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_82E18420"))) PPC_WEAK_FUNC(sub_82E18420);
PPC_FUNC_IMPL(__imp__sub_82E18420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e18434
	if (!cr0.eq) goto loc_82E18434;
	// lbz r10,271(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 271);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
loc_82E18434:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r3,232
	r11.s64 = ctx.r3.s64 + 232;
	// bne cr6,0x82e18444
	if (!cr6.eq) goto loc_82E18444;
	// addi r11,r3,240
	r11.s64 = ctx.r3.s64 + 240;
loc_82E18444:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r4,255
	cr6.compare<uint32_t>(ctx.r4.u32, 255, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82e18118
	sub_82E18118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1845C"))) PPC_WEAK_FUNC(sub_82E1845C);
PPC_FUNC_IMPL(__imp__sub_82E1845C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E18460"))) PPC_WEAK_FUNC(sub_82E18460);
PPC_FUNC_IMPL(__imp__sub_82E18460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r15,r31,24
	r15.s64 = r31.s64 + 24;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r16,r31,4
	r16.s64 = r31.s64 + 4;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r14,r31,28
	r14.s64 = r31.s64 + 28;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r27,r31,104
	r27.s64 = r31.s64 + 104;
	// li r28,3
	r28.s64 = 3;
loc_82E18584:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bge 0x82e18584
	if (!cr0.lt) goto loc_82E18584;
	// addi r27,r31,120
	r27.s64 = r31.s64 + 120;
	// li r28,3
	r28.s64 = 3;
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r27.u32);
loc_82E185A4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bge 0x82e185a4
	if (!cr0.lt) goto loc_82E185A4;
	// addi r27,r31,136
	r27.s64 = r31.s64 + 136;
	// li r28,3
	r28.s64 = 3;
loc_82E185C0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bge 0x82e185c0
	if (!cr0.lt) goto loc_82E185C0;
	// addi r27,r31,152
	r27.s64 = r31.s64 + 152;
	// li r28,3
	r28.s64 = 3;
loc_82E185DC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bge 0x82e185dc
	if (!cr0.lt) goto loc_82E185DC;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r28,r31,172
	r28.s64 = r31.s64 + 172;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r27,r31,176
	r27.s64 = r31.s64 + 176;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r26,r31,180
	r26.s64 = r31.s64 + 180;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r25,r31,184
	r25.s64 = r31.s64 + 184;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r24,r31,188
	r24.s64 = r31.s64 + 188;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r23,r31,192
	r23.s64 = r31.s64 + 192;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r22,r31,196
	r22.s64 = r31.s64 + 196;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r21,r31,200
	r21.s64 = r31.s64 + 200;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r20,r31,204
	r20.s64 = r31.s64 + 204;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r19,r31,212
	r19.s64 = r31.s64 + 212;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r18,r31,216
	r18.s64 = r31.s64 + 216;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// addi r17,r31,220
	r17.s64 = r31.s64 + 220;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
	// stb r30,271(r31)
	PPC_STORE_U8(r31.u32 + 271, r30.u8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-12784
	ctx.r4.s64 = r11.s64 + -12784;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,-12804
	ctx.r4.s64 = r11.s64 + -12804;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r15)
	PPC_STORE_U32(r15.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-12812
	ctx.r4.s64 = r11.s64 + -12812;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r14)
	PPC_STORE_U32(r14.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-12824
	ctx.r4.s64 = ctx.r10.s64 + -12824;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r10,-12836
	ctx.r4.s64 = ctx.r10.s64 + -12836;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-12844
	ctx.r4.s64 = r11.s64 + -12844;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r10,-12860
	ctx.r4.s64 = ctx.r10.s64 + -12860;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r10,-12876
	ctx.r4.s64 = ctx.r10.s64 + -12876;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r10,-12892
	ctx.r4.s64 = ctx.r10.s64 + -12892;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-12916
	ctx.r4.s64 = ctx.r10.s64 + -12916;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// addi r4,r10,-12936
	ctx.r4.s64 = ctx.r10.s64 + -12936;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r10,-12948
	ctx.r4.s64 = ctx.r10.s64 + -12948;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// addi r4,r10,-12964
	ctx.r4.s64 = ctx.r10.s64 + -12964;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-12976
	ctx.r4.s64 = ctx.r10.s64 + -12976;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r10,-14768
	ctx.r4.s64 = ctx.r10.s64 + -14768;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r4,r10,-13004
	ctx.r4.s64 = ctx.r10.s64 + -13004;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r10,-13028
	ctx.r4.s64 = ctx.r10.s64 + -13028;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r10,-13052
	ctx.r4.s64 = ctx.r10.s64 + -13052;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r10,-13068
	ctx.r4.s64 = ctx.r10.s64 + -13068;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// addi r4,r11,-13084
	ctx.r4.s64 = r11.s64 + -13084;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// addi r4,r11,-13100
	ctx.r4.s64 = r11.s64 + -13100;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r4,r11,-13116
	ctx.r4.s64 = r11.s64 + -13116;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-13132
	ctx.r4.s64 = r11.s64 + -13132;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lwz r30,152(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// addi r9,r9,28072
	ctx.r9.s64 = ctx.r9.s64 + 28072;
	// addi r8,r8,-17868
	ctx.r8.s64 = ctx.r8.s64 + -17868;
	// addi r29,r1,160
	r29.s64 = ctx.r1.s64 + 160;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// li r16,4
	r16.s64 = 4;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// addi r15,r11,-13144
	r15.s64 = r11.s64 + -13144;
	// addi r14,r10,13708
	r14.s64 = ctx.r10.s64 + 13708;
loc_82E1891C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e014a8
	sub_82E014A8(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// stw r11,-16(r30)
	PPC_STORE_U32(r30.u32 + -16, r11.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82e014a8
	sub_82E014A8(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82e014a8
	sub_82E014A8(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82e014a8
	sub_82E014A8(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addic. r16,r16,-1
	xer.ca = r16.u32 > 0;
	r16.s64 = r16.s64 + -1;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82e1891c
	if (!cr0.eq) goto loc_82E1891C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,-13164
	ctx.r4.s64 = r11.s64 + -13164;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,-13188
	ctx.r4.s64 = r11.s64 + -13188;
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,-13208
	ctx.r4.s64 = r11.s64 + -13208;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,-13232
	ctx.r4.s64 = r11.s64 + -13232;
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,-25620
	ctx.r4.s64 = r11.s64 + -25620;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,-13248
	ctx.r4.s64 = r11.s64 + -13248;
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,-13260
	ctx.r4.s64 = r11.s64 + -13260;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,-13284
	ctx.r4.s64 = r11.s64 + -13284;
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,-13304
	ctx.r4.s64 = r11.s64 + -13304;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,-13320
	ctx.r4.s64 = r11.s64 + -13320;
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,-23664
	ctx.r4.s64 = r11.s64 + -23664;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// addi r4,r11,-13344
	ctx.r4.s64 = r11.s64 + -13344;
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r30,r1,180
	r30.s64 = ctx.r1.s64 + 180;
	// li r29,4
	r29.s64 = 4;
	// stw r11,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r11.u32);
loc_82E18B04:
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x82e18b04
	if (!cr0.lt) goto loc_82E18B04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82E18B28"))) PPC_WEAK_FUNC(sub_82E18B28);
PPC_FUNC_IMPL(__imp__sub_82E18B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e18b68
	if (!cr6.eq) goto loc_82E18B68;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82E18B40:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e18b54
	if (!cr6.lt) goto loc_82E18B54;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82e18b5c
	goto loc_82E18B5C;
loc_82E18B54:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82E18B5C:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e18b40
	if (cr6.eq) goto loc_82E18B40;
loc_82E18B68:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82e18b90
	if (cr6.eq) goto loc_82E18B90;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e18b90
	if (cr6.lt) goto loc_82E18B90;
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// b 0x82e18b98
	goto loc_82E18B98;
loc_82E18B90:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// addi r11,r1,-12
	r11.s64 = ctx.r1.s64 + -12;
loc_82E18B98:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E18BA8"))) PPC_WEAK_FUNC(sub_82E18BA8);
PPC_FUNC_IMPL(__imp__sub_82E18BA8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r24,r31,16
	r24.s64 = r31.s64 + 16;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r24,4
	ctx.r3.s64 = r24.s64 + 4;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// li r29,255
	r29.s64 = 255;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r29,224(r31)
	PPC_STORE_U8(r31.u32 + 224, r29.u8);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r28,r31,224
	r28.s64 = r31.s64 + 224;
	// lwz r26,24(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r27,8(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r27,12
	r30.s64 = r27.s64 + 12;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18c3c
	if (cr6.eq) goto loc_82E18C3C;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18C3C:
	// lwz r23,32(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,226(r31)
	PPC_STORE_U8(r31.u32 + 226, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,226
	r28.s64 = r31.s64 + 226;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18c80
	if (cr6.eq) goto loc_82E18C80;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18C80:
	// lwz r25,36(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,228(r31)
	PPC_STORE_U8(r31.u32 + 228, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,228
	r28.s64 = r31.s64 + 228;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18cc4
	if (cr6.eq) goto loc_82E18CC4;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18CC4:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,230(r31)
	PPC_STORE_U8(r31.u32 + 230, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,230
	r28.s64 = r31.s64 + 230;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18d08
	if (cr6.eq) goto loc_82E18D08;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18D08:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,232(r31)
	PPC_STORE_U8(r31.u32 + 232, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,232
	r28.s64 = r31.s64 + 232;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18d4c
	if (cr6.eq) goto loc_82E18D4C;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18D4C:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,234(r31)
	PPC_STORE_U8(r31.u32 + 234, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,234
	r28.s64 = r31.s64 + 234;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18d90
	if (cr6.eq) goto loc_82E18D90;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18D90:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,236(r31)
	PPC_STORE_U8(r31.u32 + 236, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,236
	r28.s64 = r31.s64 + 236;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18dd4
	if (cr6.eq) goto loc_82E18DD4;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18DD4:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,238(r31)
	PPC_STORE_U8(r31.u32 + 238, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,238
	r28.s64 = r31.s64 + 238;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18e18
	if (cr6.eq) goto loc_82E18E18;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18E18:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,240(r31)
	PPC_STORE_U8(r31.u32 + 240, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,240
	r28.s64 = r31.s64 + 240;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18e5c
	if (cr6.eq) goto loc_82E18E5C;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18E5C:
	// lwz r11,216(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,244(r31)
	PPC_STORE_U8(r31.u32 + 244, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,244
	r28.s64 = r31.s64 + 244;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18ea0
	if (cr6.eq) goto loc_82E18EA0;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18EA0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r4,r27,36
	ctx.r4.s64 = r27.s64 + 36;
	// stb r29,242(r31)
	PPC_STORE_U8(r31.u32 + 242, r29.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,242
	r30.s64 = r31.s64 + 242;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,40(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18ee4
	if (cr6.eq) goto loc_82E18EE4;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r11.u8);
loc_82E18EE4:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,246(r31)
	PPC_STORE_U8(r31.u32 + 246, r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r28,r31,246
	r28.s64 = r31.s64 + 246;
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18f2c
	if (cr6.eq) goto loc_82E18F2C;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18F2C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,248(r31)
	PPC_STORE_U8(r31.u32 + 248, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,248
	r28.s64 = r31.s64 + 248;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18f70
	if (cr6.eq) goto loc_82E18F70;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18F70:
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,250(r31)
	PPC_STORE_U8(r31.u32 + 250, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,250
	r28.s64 = r31.s64 + 250;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18fb0
	if (cr6.eq) goto loc_82E18FB0;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18FB0:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,252(r31)
	PPC_STORE_U8(r31.u32 + 252, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,252
	r28.s64 = r31.s64 + 252;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e18ff0
	if (cr6.eq) goto loc_82E18FF0;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E18FF0:
	// li r27,0
	r27.s64 = 0;
	// addi r30,r31,258
	r30.s64 = r31.s64 + 258;
	// addi r26,r31,120
	r26.s64 = r31.s64 + 120;
	// addi r25,r31,266
	r25.s64 = r31.s64 + 266;
loc_82E19000:
	// li r11,1
	r11.s64 = 1;
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stbx r11,r25,r27
	PPC_STORE_U8(r25.u32 + r27.u32, r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r28,r11,12
	r28.s64 = r11.s64 + 12;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e19050
	if (cr6.eq) goto loc_82E19050;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r11.u8);
loc_82E19050:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// blt cr6,0x82e19000
	if (cr6.lt) goto loc_82E19000;
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,254(r31)
	PPC_STORE_U8(r31.u32 + 254, r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r28,r31,254
	r28.s64 = r31.s64 + 254;
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e190b0
	if (cr6.eq) goto loc_82E190B0;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E190B0:
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r29,256(r31)
	PPC_STORE_U8(r31.u32 + 256, r29.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,256
	r28.s64 = r31.s64 + 256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e190f4
	if (cr6.eq) goto loc_82E190F4;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lbz r11,17(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 17);
	// stb r11,1(r28)
	PPC_STORE_U8(r28.u32 + 1, r11.u8);
loc_82E190F4:
	// li r11,0
	r11.s64 = 0;
	// stb r11,270(r31)
	PPC_STORE_U8(r31.u32 + 270, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82E19108"))) PPC_WEAK_FUNC(sub_82E19108);
PPC_FUNC_IMPL(__imp__sub_82E19108) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e19158
	if (cr6.eq) goto loc_82E19158;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e1915c
	goto loc_82E1915C;
loc_82E19158:
	// li r11,0
	r11.s64 = 0;
loc_82E1915C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e191cc
	if (cr0.eq) goto loc_82E191CC;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 4);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r5,r6,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r6.s64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// rldicr r9,r7,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stfsx f0,r8,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// srad r9,r9,r7
	temp.u64 = ctx.r7.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r9.s64 = ctx.r9.s64 >> temp.u64;
	// srd r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r6.u8 & 0x7F));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,1924(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1924, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,1928(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1928, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,1932(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1932, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
loc_82E191CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E191D8"))) PPC_WEAK_FUNC(sub_82E191D8);
PPC_FUNC_IMPL(__imp__sub_82E191D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e19228
	if (cr6.eq) goto loc_82E19228;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e1922c
	goto loc_82E1922C;
loc_82E19228:
	// li r11,0
	r11.s64 = 0;
loc_82E1922C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e19274
	if (cr0.eq) goto loc_82E19274;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r4,3
	ctx.r8.s64 = ctx.r4.s64 + 3;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - r11.s64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srad r10,r10,r9
	temp.u64 = ctx.r9.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	ctx.r10.s64 = ctx.r10.s64 >> temp.u64;
	// srd r7,r10,r11
	ctx.r7.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// bl 0x82bdfaa0
	sub_82BDFAA0(ctx, base);
loc_82E19274:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E19280"))) PPC_WEAK_FUNC(sub_82E19280);
PPC_FUNC_IMPL(__imp__sub_82E19280) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r11,36
	r31.s64 = r11.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e192d0
	if (cr6.eq) goto loc_82E192D0;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e192d4
	goto loc_82E192D4;
loc_82E192D0:
	// li r11,0
	r11.s64 = 0;
loc_82E192D4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e192fc
	if (cr0.eq) goto loc_82E192FC;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bdfc60
	sub_82BDFC60(ctx, base);
loc_82E192FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E19308"))) PPC_WEAK_FUNC(sub_82E19308);
PPC_FUNC_IMPL(__imp__sub_82E19308) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e1935c
	if (cr6.eq) goto loc_82E1935C;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e19360
	goto loc_82E19360;
loc_82E1935C:
	// li r11,0
	r11.s64 = 0;
loc_82E19360:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e193a8
	if (cr0.eq) goto loc_82E193A8;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// add r11,r4,r29
	r11.u64 = ctx.r4.u64 + r29.u64;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r11,r10,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	r11.s64 = ctx.r10.s64 >> temp.u64;
	// srd r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r8.u8 & 0x7F));
	// bl 0x82bdfb80
	sub_82BDFB80(ctx, base);
loc_82E193A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E193B0"))) PPC_WEAK_FUNC(sub_82E193B0);
PPC_FUNC_IMPL(__imp__sub_82E193B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e1941c
	if (cr6.eq) goto loc_82E1941C;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e19420
	goto loc_82E19420;
loc_82E1941C:
	// li r11,0
	r11.s64 = 0;
loc_82E19420:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e19484
	if (cr0.eq) goto loc_82E19484;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// rldicr r7,r10,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 4);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r10,376
	ctx.r8.s64 = ctx.r10.s64 + 376;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r6,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r6.s64;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// stfs f28,6028(r10)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// stfs f30,6020(r10)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// stfs f29,6024(r10)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// stfsx f31,r9,r11
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, temp.u32);
	// srad r9,r7,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r9.s64 = ctx.r7.s64 >> temp.u64;
	// srd r10,r9,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r6.u8 & 0x7F));
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
loc_82E19484:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_82E194A8"))) PPC_WEAK_FUNC(sub_82E194A8);
PPC_FUNC_IMPL(__imp__sub_82E194A8) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e194f8
	if (cr6.eq) goto loc_82E194F8;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e194fc
	goto loc_82E194FC;
loc_82E194F8:
	// li r11,0
	r11.s64 = 0;
loc_82E194FC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1956c
	if (cr0.eq) goto loc_82E1956C;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,376
	ctx.r10.s64 = ctx.r10.s64 + 376;
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 4);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r5,r6,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r6.s64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// rldicr r9,r7,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stfsx f0,r8,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// srad r9,r9,r7
	temp.u64 = ctx.r7.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r9.s64 = ctx.r9.s64 >> temp.u64;
	// srd r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r6.u8 & 0x7F));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,6020(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6020, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,6024(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6024, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,6028(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
loc_82E1956C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E19578"))) PPC_WEAK_FUNC(sub_82E19578);
PPC_FUNC_IMPL(__imp__sub_82E19578) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r11,36
	r31.s64 = r11.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e195c8
	if (cr6.eq) goto loc_82E195C8;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e195cc
	goto loc_82E195CC;
loc_82E195C8:
	// li r11,0
	r11.s64 = 0;
loc_82E195CC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e195f4
	if (cr0.eq) goto loc_82E195F4;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82bdfcc0
	sub_82BDFCC0(ctx, base);
loc_82E195F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E19600"))) PPC_WEAK_FUNC(sub_82E19600);
PPC_FUNC_IMPL(__imp__sub_82E19600) {
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
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82e19108
	sub_82E19108(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e194a8
	sub_82E194A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E19650"))) PPC_WEAK_FUNC(sub_82E19650);
PPC_FUNC_IMPL(__imp__sub_82E19650) {
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
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x82e19108
	sub_82E19108(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e194a8
	sub_82E194A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E196A0"))) PPC_WEAK_FUNC(sub_82E196A0);
PPC_FUNC_IMPL(__imp__sub_82E196A0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82e19108
	sub_82E19108(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82e194a8
	sub_82E194A8(ctx, base);
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

__attribute__((alias("__imp__sub_82E19730"))) PPC_WEAK_FUNC(sub_82E19730);
PPC_FUNC_IMPL(__imp__sub_82E19730) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x82e19108
	sub_82E19108(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x82e194a8
	sub_82E194A8(ctx, base);
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

__attribute__((alias("__imp__sub_82E19790"))) PPC_WEAK_FUNC(sub_82E19790);
PPC_FUNC_IMPL(__imp__sub_82E19790) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,84(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x82e191d8
	sub_82E191D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E197A0"))) PPC_WEAK_FUNC(sub_82E197A0);
PPC_FUNC_IMPL(__imp__sub_82E197A0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,88(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// b 0x82e191d8
	sub_82E191D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E197B0"))) PPC_WEAK_FUNC(sub_82E197B0);
PPC_FUNC_IMPL(__imp__sub_82E197B0) {
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
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x82e19108
	sub_82E19108(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e194a8
	sub_82E194A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E19800"))) PPC_WEAK_FUNC(sub_82E19800);
PPC_FUNC_IMPL(__imp__sub_82E19800) {
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
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82e19108
	sub_82E19108(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e194a8
	sub_82E194A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E19850"))) PPC_WEAK_FUNC(sub_82E19850);
PPC_FUNC_IMPL(__imp__sub_82E19850) {
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
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82e19108
	sub_82E19108(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e194a8
	sub_82E194A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E198A0"))) PPC_WEAK_FUNC(sub_82E198A0);
PPC_FUNC_IMPL(__imp__sub_82E198A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,68
	ctx.r10.s64 = 68;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,76
	ctx.r8.s64 = 76;
	// li r7,72
	ctx.r7.s64 = 72;
	// addi r11,r5,16
	r11.s64 = ctx.r5.s64 + 16;
	// lvlx128 v63,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r5,48
	ctx.r10.s64 = ctx.r5.s64 + 48;
	// lvlx128 v62,r5,r9
	temp.u32 = ctx.r5.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,16
	ctx.r9.s64 = 16;
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(v62.f32, simde_mm_blend_ps(simde_mm_load_ps(v62.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 57), 4));
	// lvlx128 v63,r5,r8
	temp.u32 = ctx.r5.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r5,r7
	temp.u32 = ctx.r5.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vrlimi128 v61,v63,4,3
	simde_mm_store_ps(v61.f32, simde_mm_blend_ps(simde_mm_load_ps(v61.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 57), 4));
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvrx128 v58,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lvrx128 v59,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// vor128 v63,v63,v59
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v59.u8)));
	// addi r10,r30,26
	ctx.r10.s64 = r30.s64 + 26;
	// vor128 v60,v60,v58
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v58.u8)));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// vrlimi128 v62,v61,3,2
	simde_mm_store_ps(v62.f32, simde_mm_blend_ps(simde_mm_load_ps(v62.f32), simde_mm_permute_ps(simde_mm_load_ps(v61.f32), 78), 3));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,3
	ctx.r6.s64 = 3;
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// bl 0x82e19308
	sub_82E19308(ctx, base);
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,266(r11)
	PPC_STORE_U8(r11.u32 + 266, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82E19960"))) PPC_WEAK_FUNC(sub_82E19960);
PPC_FUNC_IMPL(__imp__sub_82E19960) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19994
	if (cr6.eq) goto loc_82E19994;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E19994:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e199e4
	if (cr6.eq) goto loc_82E199E4;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_82E199A4:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82e32860
	sub_82E32860(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e199d8
	if (cr0.eq) goto loc_82E199D8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82e16ad0
	sub_82E16AD0(ctx, base);
loc_82E199D8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82e199a4
	if (!cr0.eq) goto loc_82E199A4;
loc_82E199E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E199F0"))) PPC_WEAK_FUNC(sub_82E199F0);
PPC_FUNC_IMPL(__imp__sub_82E199F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19a20
	if (cr6.eq) goto loc_82E19A20;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E19A20:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19a70
	if (cr6.eq) goto loc_82E19A70;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_82E19A30:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,44(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82e32860
	sub_82E32860(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e19a64
	if (cr0.eq) goto loc_82E19A64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82e16a08
	sub_82E16A08(ctx, base);
loc_82E19A64:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82e19a30
	if (!cr0.eq) goto loc_82E19A30;
loc_82E19A70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E19A78"))) PPC_WEAK_FUNC(sub_82E19A78);
PPC_FUNC_IMPL(__imp__sub_82E19A78) {
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
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e19aa8
	if (cr6.eq) goto loc_82E19AA8;
	// bl 0x82e32930
	sub_82E32930(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e19aa8
	if (!cr0.eq) goto loc_82E19AA8;
loc_82E19AA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e19b0c
	goto loc_82E19B0C;
loc_82E19AA8:
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e19abc
	if (!cr6.eq) goto loc_82E19ABC;
	// li r29,0
	r29.s64 = 0;
	// b 0x82e19ac8
	goto loc_82E19AC8;
loc_82E19ABC:
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r29,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r29.s64 = r11.s32 >> 3;
loc_82E19AC8:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e19b08
	if (cr6.eq) goto loc_82E19B08;
	// li r31,0
	r31.s64 = 0;
loc_82E19AD8:
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e19af8
	if (cr6.eq) goto loc_82E19AF8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e19aa0
	if (cr0.eq) goto loc_82E19AA0;
loc_82E19AF8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x82e19ad8
	if (cr6.lt) goto loc_82E19AD8;
loc_82E19B08:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E19B0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E19B18"))) PPC_WEAK_FUNC(sub_82E19B18);
PPC_FUNC_IMPL(__imp__sub_82E19B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19b5c
	if (cr6.eq) goto loc_82E19B5C;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E19B5C:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19c28
	if (cr6.eq) goto loc_82E19C28;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r29,0
	r29.s64 = 0;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82E19B74:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e19bb0
	if (cr6.eq) goto loc_82E19BB0;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e19bb4
	goto loc_82E19BB4;
loc_82E19BB0:
	// li r11,0
	r11.s64 = 0;
loc_82E19BB4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e19c1c
	if (cr0.eq) goto loc_82E19C1C;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r10,r11,r26
	ctx.r10.u64 = r11.u64 + r26.u64;
	// li r28,1
	r28.s64 = 1;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r10,376
	ctx.r7.s64 = ctx.r10.s64 + 376;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r6,r10,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r10.s64;
	// stfsx f31,r7,r11
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, temp.u32);
	// stfs f30,6020(r9)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6020, temp.u32);
	// clrldi r7,r6,32
	ctx.r7.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// stfs f29,6024(r9)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6024, temp.u32);
	// stfs f28,6028(r9)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6028, temp.u32);
	// srad r9,r8,r7
	temp.u64 = ctx.r7.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r9.s64 = ctx.r8.s64 >> temp.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
loc_82E19C1C:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82e19b74
	if (!cr0.eq) goto loc_82E19B74;
loc_82E19C28:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b1484
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E19C40"))) PPC_WEAK_FUNC(sub_82E19C40);
PPC_FUNC_IMPL(__imp__sub_82E19C40) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19c70
	if (cr6.eq) goto loc_82E19C70;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E19C70:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19d48
	if (cr6.eq) goto loc_82E19D48;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r28,0
	r28.s64 = 0;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_82E19C88:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e19cc4
	if (cr6.eq) goto loc_82E19CC4;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e19cc8
	goto loc_82E19CC8;
loc_82E19CC4:
	// li r11,0
	r11.s64 = 0;
loc_82E19CC8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e19d3c
	if (cr0.eq) goto loc_82E19D3C;
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r10,r11,r26
	ctx.r10.u64 = r11.u64 + r26.u64;
	// li r27,1
	r27.s64 = 1;
	// addi r7,r10,376
	ctx.r7.s64 = ctx.r10.s64 + 376;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r6,r10,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r10.s64;
	// stfsx f0,r7,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, temp.u32);
	// clrldi r7,r6,32
	ctx.r7.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srad r8,r8,r7
	temp.u64 = ctx.r7.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r8.s64 = ctx.r8.s64 >> temp.u64;
	// srd r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r10.u8 & 0x7F));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,6020(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6020, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,6024(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6024, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,6028(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 6028, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
loc_82E19D3C:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x82e19c88
	if (!cr0.eq) goto loc_82E19C88;
loc_82E19D48:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E19D58"))) PPC_WEAK_FUNC(sub_82E19D58);
PPC_FUNC_IMPL(__imp__sub_82E19D58) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r24,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r24.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19d90
	if (cr6.eq) goto loc_82E19D90;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E19D90:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19e60
	if (cr6.eq) goto loc_82E19E60;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r27,0
	r27.s64 = 0;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_82E19DA8:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e19de4
	if (cr6.eq) goto loc_82E19DE4;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e19de8
	goto loc_82E19DE8;
loc_82E19DE4:
	// li r11,0
	r11.s64 = 0;
loc_82E19DE8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e19e54
	if (cr0.eq) goto loc_82E19E54;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// blt cr6,0x82e19e0c
	if (cr6.lt) goto loc_82E19E0C;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
loc_82E19E0C:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r4,r6
	r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r8,r4,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r11,r9,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	r11.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r11,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r8.u8 & 0x7F));
	// bl 0x82bdfb80
	sub_82BDFB80(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82E19E54:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// bne 0x82e19da8
	if (!cr0.eq) goto loc_82E19DA8;
loc_82E19E60:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E19E70"))) PPC_WEAK_FUNC(sub_82E19E70);
PPC_FUNC_IMPL(__imp__sub_82E19E70) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19ea0
	if (cr6.eq) goto loc_82E19EA0;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E19EA0:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19f50
	if (cr6.eq) goto loc_82E19F50;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r29,0
	r29.s64 = 0;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82E19EB8:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e19ef4
	if (cr6.eq) goto loc_82E19EF4;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e19ef8
	goto loc_82E19EF8;
loc_82E19EF4:
	// li r11,0
	r11.s64 = 0;
loc_82E19EF8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e19f44
	if (cr0.eq) goto loc_82E19F44;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r6,4
	ctx.r6.s64 = 4;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r11,r10,r11
	temp.u64 = r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	r11.s64 = ctx.r10.s64 >> temp.u64;
	// srd r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r9.u8 & 0x7F));
	// bl 0x82bdfb80
	sub_82BDFB80(ctx, base);
	// li r28,1
	r28.s64 = 1;
loc_82E19F44:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82e19eb8
	if (!cr0.eq) goto loc_82E19EB8;
loc_82E19F50:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E19F60"))) PPC_WEAK_FUNC(sub_82E19F60);
PPC_FUNC_IMPL(__imp__sub_82E19F60) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r24,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r24.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e19f98
	if (cr6.eq) goto loc_82E19F98;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E19F98:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1a040
	if (cr6.eq) goto loc_82E1A040;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r29,0
	r29.s64 = 0;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_82E19FB0:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r31,r11,24
	r31.s64 = r11.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e19fec
	if (cr6.eq) goto loc_82E19FEC;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e19ff0
	goto loc_82E19FF0;
loc_82E19FEC:
	// li r11,0
	r11.s64 = 0;
loc_82E19FF0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1a034
	if (cr0.eq) goto loc_82E1A034;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// blt cr6,0x82e1a014
	if (cr6.lt) goto loc_82E1A014;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
loc_82E1A014:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82bdfd78
	sub_82BDFD78(ctx, base);
	// li r28,1
	r28.s64 = 1;
loc_82E1A034:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82e19fb0
	if (!cr0.eq) goto loc_82E19FB0;
loc_82E1A040:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E1A050"))) PPC_WEAK_FUNC(sub_82E1A050);
PPC_FUNC_IMPL(__imp__sub_82E1A050) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1a080
	if (cr6.eq) goto loc_82E1A080;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1A080:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1a114
	if (cr6.eq) goto loc_82E1A114;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r29,0
	r29.s64 = 0;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_82E1A098:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r31,r11,36
	r31.s64 = r11.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e1a0d4
	if (cr6.eq) goto loc_82E1A0D4;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e1a0d8
	goto loc_82E1A0D8;
loc_82E1A0D4:
	// li r11,0
	r11.s64 = 0;
loc_82E1A0D8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1a108
	if (cr0.eq) goto loc_82E1A108;
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// add r4,r10,r26
	ctx.r4.u64 = ctx.r10.u64 + r26.u64;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82bdfcc0
	sub_82BDFCC0(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_82E1A108:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82e1a098
	if (!cr0.eq) goto loc_82E1A098;
loc_82E1A114:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E1A120"))) PPC_WEAK_FUNC(sub_82E1A120);
PPC_FUNC_IMPL(__imp__sub_82E1A120) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r24,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r24.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1a158
	if (cr6.eq) goto loc_82E1A158;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1A158:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1a200
	if (cr6.eq) goto loc_82E1A200;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r29,0
	r29.s64 = 0;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_82E1A170:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r31,r11,36
	r31.s64 = r11.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e18b28
	sub_82E18B28(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e1a1ac
	if (cr6.eq) goto loc_82E1A1AC;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x82e1a1b0
	goto loc_82E1A1B0;
loc_82E1A1AC:
	// li r11,0
	r11.s64 = 0;
loc_82E1A1B0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1a1f4
	if (cr0.eq) goto loc_82E1A1F4;
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// blt cr6,0x82e1a1d4
	if (cr6.lt) goto loc_82E1A1D4;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
loc_82E1A1D4:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82bdfcc0
	sub_82BDFCC0(ctx, base);
	// li r28,1
	r28.s64 = 1;
loc_82E1A1F4:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82e1a170
	if (!cr0.eq) goto loc_82E1A170;
loc_82E1A200:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E1A210"))) PPC_WEAK_FUNC(sub_82E1A210);
PPC_FUNC_IMPL(__imp__sub_82E1A210) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e19b18
	sub_82E19B18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1A218"))) PPC_WEAK_FUNC(sub_82E1A218);
PPC_FUNC_IMPL(__imp__sub_82E1A218) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e19c40
	sub_82E19C40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1A228"))) PPC_WEAK_FUNC(sub_82E1A228);
PPC_FUNC_IMPL(__imp__sub_82E1A228) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e19d58
	sub_82E19D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1A238"))) PPC_WEAK_FUNC(sub_82E1A238);
PPC_FUNC_IMPL(__imp__sub_82E1A238) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e19e70
	sub_82E19E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1A248"))) PPC_WEAK_FUNC(sub_82E1A248);
PPC_FUNC_IMPL(__imp__sub_82E1A248) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e1a050
	sub_82E1A050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1A258"))) PPC_WEAK_FUNC(sub_82E1A258);
PPC_FUNC_IMPL(__imp__sub_82E1A258) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r11,28(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1a288
	if (cr6.eq) goto loc_82E1A288;
	// lwz r10,32(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1A288:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1a350
	if (cr6.eq) goto loc_82E1A350;
	// li r25,0
	r25.s64 = 0;
	// mr r24,r11
	r24.u64 = r11.u64;
loc_82E1A298:
	// lwz r11,28(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 28);
	// lwz r29,20(r23)
	r29.u64 = PPC_LOAD_U32(r23.u32 + 20);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwzx r10,r25,r11
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r11.u32);
	// beq cr6,0x82e1a344
	if (cr6.eq) goto loc_82E1A344;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1a344
	if (cr6.eq) goto loc_82E1A344;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e1a344
	if (!cr0.gt) goto loc_82E1A344;
	// addi r27,r10,48
	r27.s64 = ctx.r10.s64 + 48;
	// li r30,0
	r30.s64 = 0;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_82E1A2D8:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r31,r30,r11
	r31.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82e327c0
	sub_82E327C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1a338
	if (cr0.eq) goto loc_82E1A338;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,20(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 20);
	// slw r11,r10,r4
	r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// or r28,r11,r28
	r28.u64 = r11.u64 | r28.u64;
	// bl 0x82e16a08
	sub_82E16A08(ctx, base);
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfsx f0,r10,r22
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + r22.u32, temp.u32);
loc_82E1A338:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82e1a2d8
	if (!cr0.eq) goto loc_82E1A2D8;
loc_82E1A344:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// bne 0x82e1a298
	if (!cr0.eq) goto loc_82E1A298;
loc_82E1A350:
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lwz r11,28232(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28232);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82e1a37c
	if (!cr0.eq) goto loc_82E1A37C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// stw r11,28232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28232, r11.u32);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r4,r9,-12768
	ctx.r4.s64 = ctx.r9.s64 + -12768;
	// addi r3,r11,28228
	ctx.r3.s64 = r11.s64 + 28228;
	// bl 0x82e014d8
	sub_82E014D8(ctx, base);
loc_82E1A37C:
	// lwz r11,20(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 20);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,4
	ctx.r6.s64 = 4;
	// rldicr r7,r7,56,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 56) & 0xFF00000000000000;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82bdfb80
	sub_82BDFB80(ctx, base);
	// lbz r11,79(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 79);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e1a400
	if (!cr0.eq) goto loc_82E1A400;
	// lwz r11,32(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1a3bc
	if (!cr6.eq) goto loc_82E1A3BC;
	// li r31,0
	r31.s64 = 0;
	// b 0x82e1a3c8
	goto loc_82E1A3C8;
loc_82E1A3BC:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 36);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r31,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r31.s64 = r11.s32 >> 3;
loc_82E1A3C8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1a400
	if (cr6.eq) goto loc_82E1A400;
	// li r30,0
	r30.s64 = 0;
loc_82E1A3D4:
	// lwz r11,32(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82e19d58
	sub_82E19D58(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82e1a3d4
	if (!cr0.eq) goto loc_82E1A3D4;
loc_82E1A400:
	// lbz r11,79(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 79);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e1a464
	if (!cr0.eq) goto loc_82E1A464;
	// lwz r11,48(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1a420
	if (!cr6.eq) goto loc_82E1A420;
	// li r31,0
	r31.s64 = 0;
	// b 0x82e1a42c
	goto loc_82E1A42C;
loc_82E1A420:
	// lwz r10,52(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 52);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r31,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r31.s64 = r11.s32 >> 3;
loc_82E1A42C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1a464
	if (cr6.eq) goto loc_82E1A464;
	// li r30,0
	r30.s64 = 0;
loc_82E1A438:
	// lwz r11,48(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82e19f60
	sub_82E19F60(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82e1a438
	if (!cr0.eq) goto loc_82E1A438;
loc_82E1A464:
	// lbz r11,79(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 79);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e1a4c8
	if (!cr0.eq) goto loc_82E1A4C8;
	// lwz r11,64(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1a484
	if (!cr6.eq) goto loc_82E1A484;
	// li r31,0
	r31.s64 = 0;
	// b 0x82e1a490
	goto loc_82E1A490;
loc_82E1A484:
	// lwz r10,68(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 68);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r31,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r31.s64 = r11.s32 >> 3;
loc_82E1A490:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1a4c8
	if (cr6.eq) goto loc_82E1A4C8;
	// li r30,0
	r30.s64 = 0;
loc_82E1A49C:
	// lwz r11,64(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82e1a120
	sub_82E1A120(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82e1a49c
	if (!cr0.eq) goto loc_82E1A49C;
loc_82E1A4C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82E1A4D0"))) PPC_WEAK_FUNC(sub_82E1A4D0);
PPC_FUNC_IMPL(__imp__sub_82E1A4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-12748
	r11.s64 = r11.s64 + -12748;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1A4E8"))) PPC_WEAK_FUNC(sub_82E1A4E8);
PPC_FUNC_IMPL(__imp__sub_82E1A4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-12748
	r11.s64 = r11.s64 + -12748;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1A4F8"))) PPC_WEAK_FUNC(sub_82E1A4F8);
PPC_FUNC_IMPL(__imp__sub_82E1A4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
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

__attribute__((alias("__imp__sub_82E1A514"))) PPC_WEAK_FUNC(sub_82E1A514);
PPC_FUNC_IMPL(__imp__sub_82E1A514) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1A518"))) PPC_WEAK_FUNC(sub_82E1A518);
PPC_FUNC_IMPL(__imp__sub_82E1A518) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-12748
	r11.s64 = r11.s64 + -12748;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e1a544
	if (cr0.eq) goto loc_82E1A544;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82E1A544:
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

__attribute__((alias("__imp__sub_82E1A560"))) PPC_WEAK_FUNC(sub_82E1A560);
PPC_FUNC_IMPL(__imp__sub_82E1A560) {
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
	// addi r11,r11,-23064
	r11.s64 = r11.s64 + -23064;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1a5a0
	if (cr6.eq) goto loc_82E1A5A0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1a5b0
	if (!cr6.eq) goto loc_82E1A5B0;
	// bl 0x831cdab8
	sub_831CDAB8(ctx, base);
	// b 0x82e1a5b0
	goto loc_82E1A5B0;
loc_82E1A5A0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1a5b0
	if (cr6.eq) goto loc_82E1A5B0;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_82E1A5B0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r11,-23076
	r11.s64 = r11.s64 + -23076;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82E1A5D8"))) PPC_WEAK_FUNC(sub_82E1A5D8);
PPC_FUNC_IMPL(__imp__sub_82E1A5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// li r11,1
	r11.s64 = 1;
	// stb r11,28236(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28236, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1A5E8"))) PPC_WEAK_FUNC(sub_82E1A5E8);
PPC_FUNC_IMPL(__imp__sub_82E1A5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// li r11,0
	r11.s64 = 0;
	// stb r11,28236(r10)
	PPC_STORE_U8(ctx.r10.u32 + 28236, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1A5F8"))) PPC_WEAK_FUNC(sub_82E1A5F8);
PPC_FUNC_IMPL(__imp__sub_82E1A5F8) {
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
	// lis r29,-31943
	r29.s64 = -2093416448;
	// lis r30,-31943
	r30.s64 = -2093416448;
loc_82E1A610:
	// lbz r11,28236(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1a630
	if (cr0.eq) goto loc_82E1A630;
	// lwz r3,28240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1A630:
	// li r11,0
	r11.s64 = 0;
	// stb r11,57(r31)
	PPC_STORE_U8(r31.u32 + 57, r11.u8);
	// lbz r11,28236(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1a658
	if (cr0.eq) goto loc_82E1A658;
	// lwz r3,28240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1A658:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1a66c
	if (cr6.eq) goto loc_82E1A66C;
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82e1a610
	goto loc_82E1A610;
loc_82E1A66C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1A678"))) PPC_WEAK_FUNC(sub_82E1A678);
PPC_FUNC_IMPL(__imp__sub_82E1A678) {
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
	// lis r31,-31943
	r31.s64 = -2093416448;
	// lwz r11,28240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1a6b4
	if (!cr6.eq) goto loc_82E1A6B4;
	// lis r11,-31946
	r11.s64 = -2093613056;
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
	// stw r3,28240(r31)
	PPC_STORE_U32(r31.u32 + 28240, ctx.r3.u32);
loc_82E1A6B4:
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

__attribute__((alias("__imp__sub_82E1A6C8"))) PPC_WEAK_FUNC(sub_82E1A6C8);
PPC_FUNC_IMPL(__imp__sub_82E1A6C8) {
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
	// lis r31,-31943
	r31.s64 = -2093416448;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r28,-31943
	r28.s64 = -2093416448;
	// lbz r11,28236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1a704
	if (cr0.eq) goto loc_82E1A704;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1A704:
	// lbz r11,58(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 58);
	// or r11,r11,r29
	r11.u64 = r11.u64 | r29.u64;
	// stb r11,58(r30)
	PPC_STORE_U8(r30.u32 + 58, r11.u8);
	// lbz r11,28236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1a730
	if (cr0.eq) goto loc_82E1A730;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1A730:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1A738"))) PPC_WEAK_FUNC(sub_82E1A738);
PPC_FUNC_IMPL(__imp__sub_82E1A738) {
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
	// lis r31,-31943
	r31.s64 = -2093416448;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r28,-31943
	r28.s64 = -2093416448;
	// lbz r11,28236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1a774
	if (cr0.eq) goto loc_82E1A774;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1A774:
	// lbz r11,58(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 58);
	// andc r11,r11,r29
	r11.u64 = r11.u64 & ~r29.u64;
	// stb r11,58(r30)
	PPC_STORE_U8(r30.u32 + 58, r11.u8);
	// lbz r11,28236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1a7a0
	if (cr0.eq) goto loc_82E1A7A0;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1A7A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1A7A8"))) PPC_WEAK_FUNC(sub_82E1A7A8);
PPC_FUNC_IMPL(__imp__sub_82E1A7A8) {
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
	// lis r30,-31943
	r30.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r29,-31943
	r29.s64 = -2093416448;
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1a7e0
	if (cr0.eq) goto loc_82E1A7E0;
	// lwz r3,28240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1A7E0:
	// li r11,0
	r11.s64 = 0;
	// stb r11,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r11.u8);
	// stb r11,57(r31)
	PPC_STORE_U8(r31.u32 + 57, r11.u8);
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1a80c
	if (cr0.eq) goto loc_82E1A80C;
	// lwz r3,28240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1A80C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1a81c
	if (cr6.eq) goto loc_82E1A81C;
	// bl 0x82e1a5f8
	sub_82E1A5F8(ctx, base);
loc_82E1A81C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1A828"))) PPC_WEAK_FUNC(sub_82E1A828);
PPC_FUNC_IMPL(__imp__sub_82E1A828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,25(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e1a848
	if (!cr6.eq) goto loc_82E1A848;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82E1A848:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e1a868
	if (!cr6.eq) goto loc_82E1A868;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82e1a884
	goto loc_82E1A884;
loc_82E1A868:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e1a880
	if (!cr6.eq) goto loc_82E1A880;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x82e1a884
	goto loc_82E1A884;
loc_82E1A880:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82E1A884:
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1A890"))) PPC_WEAK_FUNC(sub_82E1A890);
PPC_FUNC_IMPL(__imp__sub_82E1A890) {
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
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82e1a8d0
	goto loc_82E1A8D0;
loc_82E1A8AC:
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1a8cc
	if (cr0.eq) goto loc_82E1A8CC;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82e1a8d0
	goto loc_82E1A8D0;
loc_82E1A8CC:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82E1A8D0:
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1a8ac
	if (cr6.eq) goto loc_82E1A8AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1A8E8"))) PPC_WEAK_FUNC(sub_82E1A8E8);
PPC_FUNC_IMPL(__imp__sub_82E1A8E8) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1a90c
	if (cr6.eq) goto loc_82E1A90C;
	// bl 0x82e1a8e8
	sub_82E1A8E8(ctx, base);
loc_82E1A90C:
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82e1a930
	if (!cr6.eq) goto loc_82E1A930;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1a998
	if (cr6.eq) goto loc_82E1A998;
	// lbz r11,57(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 57);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82e1a998
	if (cr6.eq) goto loc_82E1A998;
loc_82E1A930:
	// lbz r11,58(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 58);
	// li r29,0
	r29.s64 = 0;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bne 0x82e1a948
	if (!cr0.eq) goto loc_82E1A948;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82E1A948:
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
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e1a968
	if (!cr0.eq) goto loc_82E1A968;
	// stb r30,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r30.u8);
loc_82E1A968:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// b 0x82e1a980
	goto loc_82E1A980;
loc_82E1A974:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stb r29,56(r9)
	PPC_STORE_U8(ctx.r9.u32 + 56, r29.u8);
loc_82E1A980:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e1a974
	if (!cr6.eq) goto loc_82E1A974;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// stb r29,57(r31)
	PPC_STORE_U8(r31.u32 + 57, r29.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_82E1A998:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1A9A0"))) PPC_WEAK_FUNC(sub_82E1A9A0);
PPC_FUNC_IMPL(__imp__sub_82E1A9A0) {
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
	// li r11,1
	r11.s64 = 1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stb r11,61(r30)
	PPC_STORE_U8(r30.u32 + 61, r11.u8);
	// b 0x82e1aa44
	goto loc_82E1AA44;
loc_82E1A9C8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,56(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82e1a9e4
	if (!cr6.eq) goto loc_82E1A9E4;
	// lbz r11,57(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 57);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82e1aa34
	if (cr6.eq) goto loc_82E1AA34;
loc_82E1A9E4:
	// lbz r11,58(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e1a9f8
	if (!cr0.eq) goto loc_82E1A9F8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82E1A9F8:
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
	// bne 0x82e1aa18
	if (!cr0.eq) goto loc_82E1AA18;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stb r29,56(r11)
	PPC_STORE_U8(r11.u32 + 56, r29.u8);
loc_82E1AA18:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,57(r11)
	PPC_STORE_U8(r11.u32 + 57, ctx.r10.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
loc_82E1AA34:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e1a9a0
	sub_82E1A9A0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82E1AA44:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x82e1a9c8
	if (!cr6.eq) goto loc_82E1A9C8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1b5d0
	sub_82E1B5D0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1AA60"))) PPC_WEAK_FUNC(sub_82E1AA60);
PPC_FUNC_IMPL(__imp__sub_82E1AA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r4,-21176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -21176);
	// b 0x82e1a9a0
	sub_82E1A9A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1AA70"))) PPC_WEAK_FUNC(sub_82E1AA70);
PPC_FUNC_IMPL(__imp__sub_82E1AA70) {
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
	// lis r30,-31943
	r30.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r28,-31943
	r28.s64 = -2093416448;
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1aaac
	if (cr0.eq) goto loc_82E1AAAC;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1AAAC:
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// b 0x82e1aac8
	goto loc_82E1AAC8;
loc_82E1AAB8:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// beq cr6,0x82e1aad0
	if (cr6.eq) goto loc_82E1AAD0;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_82E1AAC8:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x82e1aab8
	if (!cr6.eq) goto loc_82E1AAB8;
loc_82E1AAD0:
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e26a48
	sub_82E26A48(ctx, base);
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1aafc
	if (cr0.eq) goto loc_82E1AAFC;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1AAFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1AB08"))) PPC_WEAK_FUNC(sub_82E1AB08);
PPC_FUNC_IMPL(__imp__sub_82E1AB08) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r26,52(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r27,r31,24
	r27.s64 = r31.s64 + 24;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
loc_82E1AB48:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1abb8
	if (cr6.eq) goto loc_82E1ABB8;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82e1abb8
	if (!cr6.lt) goto loc_82E1ABB8;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwzx r30,r11,r28
	r30.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x82e1abac
	if (cr6.eq) goto loc_82E1ABAC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e1aba8
	if (!cr0.eq) goto loc_82E1ABA8;
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// b 0x82e1abac
	goto loc_82E1ABAC;
loc_82E1ABA8:
	// li r25,1
	r25.s64 = 1;
loc_82E1ABAC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x82e1ab48
	goto loc_82E1AB48;
loc_82E1ABB8:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1ac28
	if (cr6.eq) goto loc_82E1AC28;
	// lwz r30,44(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82e1ac20
	goto loc_82E1AC20;
loc_82E1ABD4:
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x82e1ac14
	if (cr6.eq) goto loc_82E1AC14;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e1ac10
	if (!cr0.eq) goto loc_82E1AC10;
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// b 0x82e1ac14
	goto loc_82E1AC14;
loc_82E1AC10:
	// li r25,1
	r25.s64 = 1;
loc_82E1AC14:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830c8360
	sub_830C8360(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E1AC20:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82e1abd4
	if (!cr6.eq) goto loc_82E1ABD4;
loc_82E1AC28:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E1AC38"))) PPC_WEAK_FUNC(sub_82E1AC38);
PPC_FUNC_IMPL(__imp__sub_82E1AC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r4,-21176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -21176);
	// b 0x82e1a8e8
	sub_82E1A8E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1AC48"))) PPC_WEAK_FUNC(sub_82E1AC48);
PPC_FUNC_IMPL(__imp__sub_82E1AC48) {
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
	// beq 0x82e1acb0
	if (cr0.eq) goto loc_82E1ACB0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// bl 0x82e4dc78
	sub_82E4DC78(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r26,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r26.u8);
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
loc_82E1ACB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E1ACC0"))) PPC_WEAK_FUNC(sub_82E1ACC0);
PPC_FUNC_IMPL(__imp__sub_82E1ACC0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1ad30
	if (!cr6.eq) goto loc_82E1AD30;
	// lis r27,-31946
	r27.s64 = -2093613056;
loc_82E1ACE8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82e1acc0
	sub_82E1ACC0(ctx, base);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// beq cr6,0x82e1ad0c
	if (cr6.eq) goto loc_82E1AD0C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1AD0C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6512(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1ace8
	if (cr6.eq) goto loc_82E1ACE8;
loc_82E1AD30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E1AD38"))) PPC_WEAK_FUNC(sub_82E1AD38);
PPC_FUNC_IMPL(__imp__sub_82E1AD38) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,5461
	r11.s64 = 357892096;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r11,r11,21844
	r11.u64 = r11.u64 | 21844;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e1adb0
	if (cr6.lt) goto loc_82E1ADB0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23004
	ctx.r4.s64 = r11.s64 + -23004;
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
loc_82E1ADB0:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1ac48
	sub_82E1AC48(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82e1adfc
	if (!cr6.eq) goto loc_82E1ADFC;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82e1ae34
	goto loc_82E1AE34;
loc_82E1ADFC:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1ae20
	if (cr0.eq) goto loc_82E1AE20;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e1ae38
	if (!cr6.eq) goto loc_82E1AE38;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// b 0x82e1ae38
	goto loc_82E1AE38;
loc_82E1AE20:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e1ae38
	if (!cr6.eq) goto loc_82E1AE38;
loc_82E1AE34:
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_82E1AE38:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// li r29,1
	r29.s64 = 1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e1af40
	if (!cr6.eq) goto loc_82E1AF40;
	// li r27,0
	r27.s64 = 0;
loc_82E1AE58:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e1aebc
	if (!cr6.eq) goto loc_82E1AEBC;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e1aecc
	if (cr6.eq) goto loc_82E1AECC;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e1ae94
	if (!cr6.eq) goto loc_82E1AE94;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82dfc9b8
	sub_82DFC9B8(ctx, base);
loc_82E1AE94:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82e1a828
	sub_82E1A828(ctx, base);
	// b 0x82e1af2c
	goto loc_82E1AF2C;
loc_82E1AEBC:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e1aef0
	if (!cr6.eq) goto loc_82E1AEF0;
loc_82E1AECC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, r29.u8);
	// stb r29,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r27,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, r27.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82e1af2c
	goto loc_82E1AF2C;
loc_82E1AEF0:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e1af08
	if (!cr6.eq) goto loc_82E1AF08;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82e1a828
	sub_82E1A828(ctx, base);
loc_82E1AF08:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82dfc9b8
	sub_82DFC9B8(ctx, base);
loc_82E1AF2C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e1ae58
	if (cr6.eq) goto loc_82E1AE58;
loc_82E1AF40:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E1AF60"))) PPC_WEAK_FUNC(sub_82E1AF60);
PPC_FUNC_IMPL(__imp__sub_82E1AF60) {
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
	// bl 0x82e1acc0
	sub_82E1ACC0(ctx, base);
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

__attribute__((alias("__imp__sub_82E1AFB8"))) PPC_WEAK_FUNC(sub_82E1AFB8);
PPC_FUNC_IMPL(__imp__sub_82E1AFB8) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r25,1
	r25.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// lwz r30,4(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82e1b00c
	goto loc_82E1B00C;
loc_82E1AFE4:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1b008
	if (cr0.eq) goto loc_82E1B008;
	// lwz r29,0(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82e1b00c
	goto loc_82E1B00C;
loc_82E1B008:
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_82E1B00C:
	// lbz r11,25(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1afe4
	if (cr6.eq) goto loc_82E1AFE4;
	// mr r29,r30
	r29.u64 = r30.u64;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// beq 0x82e1b06c
	if (cr0.eq) goto loc_82E1B06C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e1b064
	if (!cr6.eq) goto loc_82E1B064;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E1B040:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82e1ad38
	sub_82E1AD38(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r25,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r25.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82e1b098
	goto loc_82E1B098;
loc_82E1B064:
	// bl 0x82e4d110
	sub_82E4D110(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E1B06C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x82dfaf58
	sub_82DFAF58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1b08c
	if (cr0.eq) goto loc_82E1B08C;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82e1b040
	goto loc_82E1B040;
loc_82E1B08C:
	// li r11,0
	r11.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
loc_82E1B098:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E1B0A8"))) PPC_WEAK_FUNC(sub_82E1B0A8);
PPC_FUNC_IMPL(__imp__sub_82E1B0A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82e08958
	sub_82E08958(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82E1B100"))) PPC_WEAK_FUNC(sub_82E1B100);
PPC_FUNC_IMPL(__imp__sub_82E1B100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31943
	r28.s64 = -2093416448;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lis r26,-31943
	r26.s64 = -2093416448;
	// lbz r11,28236(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b140
	if (cr0.eq) goto loc_82E1B140;
	// lwz r3,28240(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B140:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x82e1b178
	if (cr6.eq) goto loc_82E1B178;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82E1B15C:
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
	// bne 0x82e1b15c
	if (!cr0.eq) goto loc_82E1B15C;
loc_82E1B178:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e15808
	sub_82E15808(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1b1b0
	if (cr6.eq) goto loc_82E1B1B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1B1B0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e4dc78
	sub_82E4DC78(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r27,40
	ctx.r4.s64 = r27.s64 + 40;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e1afb8
	sub_82E1AFB8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1b1dc
	if (cr6.eq) goto loc_82E1B1DC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1B1DC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1b1f4
	if (cr6.eq) goto loc_82E1B1F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1B1F4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lbz r11,28236(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b21c
	if (cr0.eq) goto loc_82E1B21C;
	// lwz r3,28240(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B21C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E1B228"))) PPC_WEAK_FUNC(sub_82E1B228);
PPC_FUNC_IMPL(__imp__sub_82E1B228) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e1a890
	sub_82E1A890(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e157b0
	sub_82E157B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e070e0
	sub_82E070E0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e08958
	sub_82E08958(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1B290"))) PPC_WEAK_FUNC(sub_82E1B290);
PPC_FUNC_IMPL(__imp__sub_82E1B290) {
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
	// lis r31,-31943
	r31.s64 = -2093416448;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r28,-31943
	r28.s64 = -2093416448;
	// lbz r11,28236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b2cc
	if (cr0.eq) goto loc_82E1B2CC;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B2CC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82e1b228
	sub_82E1B228(ctx, base);
	// lbz r11,28236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b2f8
	if (cr0.eq) goto loc_82E1B2F8;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B2F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1B300"))) PPC_WEAK_FUNC(sub_82E1B300);
PPC_FUNC_IMPL(__imp__sub_82E1B300) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x82e1b330
	if (cr0.eq) goto loc_82E1B330;
	// bl 0x82e1a6c8
	sub_82E1A6C8(ctx, base);
	// b 0x82e1b334
	goto loc_82E1B334;
loc_82E1B330:
	// bl 0x82e1a738
	sub_82E1A738(ctx, base);
loc_82E1B334:
	// stw r30,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r30.u32);
	// lbz r11,61(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 61);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b35c
	if (cr0.eq) goto loc_82E1B35C;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x82e61910
	sub_82E61910(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,60(r30)
	PPC_STORE_U8(r30.u32 + 60, r11.u8);
	// b 0x82e1b3cc
	goto loc_82E1B3CC;
loc_82E1B35C:
	// lis r31,-31943
	r31.s64 = -2093416448;
	// lis r29,-31943
	r29.s64 = -2093416448;
	// lbz r11,28236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b384
	if (cr0.eq) goto loc_82E1B384;
	// lwz r3,28240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B384:
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82e61910
	sub_82E61910(ctx, base);
	// lbz r11,28236(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b3b0
	if (cr0.eq) goto loc_82E1B3B0;
	// lwz r3,28240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B3B0:
	// lis r31,-31949
	r31.s64 = -2093809664;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,-21176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -21176);
	// bl 0x82e1a8e8
	sub_82E1A8E8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,-21176(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -21176);
	// bl 0x82e1a9a0
	sub_82E1A9A0(ctx, base);
loc_82E1B3CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1B3D8"))) PPC_WEAK_FUNC(sub_82E1B3D8);
PPC_FUNC_IMPL(__imp__sub_82E1B3D8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r29.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lbz r11,61(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 61);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b41c
	if (cr0.eq) goto loc_82E1B41C;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82e61910
	sub_82E61910(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r11.u8);
	// b 0x82e1b494
	goto loc_82E1B494;
loc_82E1B41C:
	// lis r30,-31943
	r30.s64 = -2093416448;
	// lis r28,-31943
	r28.s64 = -2093416448;
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b444
	if (cr0.eq) goto loc_82E1B444;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B444:
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// b 0x82e1b460
	goto loc_82E1B460;
loc_82E1B450:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// beq cr6,0x82e1b468
	if (cr6.eq) goto loc_82E1B468;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_82E1B460:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x82e1b450
	if (!cr6.eq) goto loc_82E1B450;
loc_82E1B468:
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e26a48
	sub_82E26A48(ctx, base);
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b494
	if (cr0.eq) goto loc_82E1B494;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B494:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1B4A0"))) PPC_WEAK_FUNC(sub_82E1B4A0);
PPC_FUNC_IMPL(__imp__sub_82E1B4A0) {
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
	// lis r30,-31943
	r30.s64 = -2093416448;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r29.u32);
	// lis r28,-31943
	r28.s64 = -2093416448;
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b4e0
	if (cr0.eq) goto loc_82E1B4E0;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B4E0:
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82e61910
	sub_82E61910(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stb r11,57(r31)
	PPC_STORE_U8(r31.u32 + 57, r11.u8);
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b518
	if (cr0.eq) goto loc_82E1B518;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B518:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1b528
	if (cr6.eq) goto loc_82E1B528;
	// bl 0x82e1a5f8
	sub_82E1A5F8(ctx, base);
loc_82E1B528:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1B530"))) PPC_WEAK_FUNC(sub_82E1B530);
PPC_FUNC_IMPL(__imp__sub_82E1B530) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1b55c
	if (cr6.eq) goto loc_82E1B55C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e1b3d8
	sub_82E1B3D8(ctx, base);
loc_82E1B55C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e1b578
	if (cr6.eq) goto loc_82E1B578;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1b300
	sub_82E1B300(ctx, base);
	// b 0x82e1b5c8
	goto loc_82E1B5C8;
loc_82E1B578:
	// lis r30,-31943
	r30.s64 = -2093416448;
	// lis r29,-31943
	r29.s64 = -2093416448;
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b5a0
	if (cr0.eq) goto loc_82E1B5A0;
	// lwz r3,28240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B5A0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b5c8
	if (cr0.eq) goto loc_82E1B5C8;
	// lwz r3,28240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B5C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1B5D0"))) PPC_WEAK_FUNC(sub_82E1B5D0);
PPC_FUNC_IMPL(__imp__sub_82E1B5D0) {
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
	// lbz r11,60(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 60);
	// stb r26,61(r31)
	PPC_STORE_U8(r31.u32 + 61, r26.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b6b4
	if (cr0.eq) goto loc_82E1B6B4;
	// lwz r29,72(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r30,68(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82e1b630
	if (cr6.eq) goto loc_82E1B630;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// lis r27,-31949
	r27.s64 = -2093809664;
loc_82E1B60C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e61910
	sub_82E61910(ctx, base);
	// lwz r4,-21176(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + -21176);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82e1a9a0
	sub_82E1A9A0(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82e1b60c
	if (!cr6.eq) goto loc_82E1B60C;
loc_82E1B630:
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x82e6d9a8
	sub_82E6D9A8(ctx, base);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r30,84(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82e1b69c
	if (cr6.eq) goto loc_82E1B69C;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
loc_82E1B658:
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82e1b684
	if (cr6.eq) goto loc_82E1B684;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82E1B66C:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e1b684
	if (cr6.eq) goto loc_82E1B684;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x82e1b66c
	if (!cr6.eq) goto loc_82E1B66C;
loc_82E1B684:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e26a48
	sub_82E26A48(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82e1b658
	if (!cr6.eq) goto loc_82E1B658;
loc_82E1B69C:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82e6d9a8
	sub_82E6D9A8(ctx, base);
	// stb r26,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r26.u8);
loc_82E1B6B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E1B6C0"))) PPC_WEAK_FUNC(sub_82E1B6C0);
PPC_FUNC_IMPL(__imp__sub_82E1B6C0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-12736
	r11.s64 = r11.s64 + -12736;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x830cbe68
	sub_830CBE68(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,57(r31)
	PPC_STORE_U8(r31.u32 + 57, r30.u8);
	// stb r30,58(r31)
	PPC_STORE_U8(r31.u32 + 58, r30.u8);
	// stb r30,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r30.u8);
	// stb r30,61(r31)
	PPC_STORE_U8(r31.u32 + 61, r30.u8);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1B758"))) PPC_WEAK_FUNC(sub_82E1B758);
PPC_FUNC_IMPL(__imp__sub_82E1B758) {
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
	// addi r11,r11,-12736
	r11.s64 = r11.s64 + -12736;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1b790
	if (cr6.eq) goto loc_82E1B790;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e1b3d8
	sub_82E1B3D8(ctx, base);
loc_82E1B790:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// b 0x82e1b7ac
	goto loc_82E1B7AC;
loc_82E1B79C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
loc_82E1B7AC:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e1b79c
	if (!cr6.eq) goto loc_82E1B79C;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e6d9a8
	sub_82E6D9A8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82e02fe8
	sub_82E02FE8(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x82e02fe8
	sub_82E02FE8(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82e1b0a8
	sub_82E1B0A8(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x82e02fe8
	sub_82E02FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e02fe8
	sub_82E02FE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1B810"))) PPC_WEAK_FUNC(sub_82E1B810);
PPC_FUNC_IMPL(__imp__sub_82E1B810) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e1b300
	sub_82E1B300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1B818"))) PPC_WEAK_FUNC(sub_82E1B818);
PPC_FUNC_IMPL(__imp__sub_82E1B818) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82e1b300
	sub_82E1B300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1B820"))) PPC_WEAK_FUNC(sub_82E1B820);
PPC_FUNC_IMPL(__imp__sub_82E1B820) {
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
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r24,0
	r24.s64 = 0;
	// bne 0x82e1b85c
	if (!cr0.eq) goto loc_82E1B85C;
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// beq cr6,0x82e1b904
	if (cr6.eq) goto loc_82E1B904;
loc_82E1B85C:
	// lbz r11,58(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 58);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e1b8fc
	if (!cr0.eq) goto loc_82E1B8FC;
	// lis r30,-31943
	r30.s64 = -2093416448;
	// lis r28,-31943
	r28.s64 = -2093416448;
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b890
	if (cr0.eq) goto loc_82E1B890;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B890:
	// lbz r11,58(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 58);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e1b8a4
	if (!cr0.eq) goto loc_82E1B8A4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82E1B8A4:
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
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e1b8c8
	if (!cr0.eq) goto loc_82E1B8C8;
	// stb r25,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r25.u8);
	// b 0x82e1b8cc
	goto loc_82E1B8CC;
loc_82E1B8C8:
	// li r24,1
	r24.s64 = 1;
loc_82E1B8CC:
	// lbz r11,28236(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28236);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e1b8ec
	if (cr0.eq) goto loc_82E1B8EC;
	// lwz r3,28240(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28240);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1B8EC:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// li r26,1
	r26.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_82E1B8FC:
	// li r11,0
	r11.s64 = 0;
	// stb r11,57(r31)
	PPC_STORE_U8(r31.u32 + 57, r11.u8);
loc_82E1B904:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82e1ab08
	sub_82E1AB08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82e1b91c
	if (!cr6.eq) goto loc_82E1B91C;
	// li r24,1
	r24.s64 = 1;
loc_82E1B91C:
	// lbz r11,57(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 57);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// beq cr6,0x82e1b9a0
	if (cr6.eq) goto loc_82E1B9A0;
	// lbz r11,58(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 58);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r28,16(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r27,1
	r27.s64 = 1;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r10,61(r31)
	PPC_STORE_U8(r31.u32 + 61, ctx.r10.u8);
	// bne 0x82e1b948
	if (!cr0.eq) goto loc_82E1B948;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82E1B948:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// b 0x82e1b97c
	goto loc_82E1B97C;
loc_82E1B950:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// dcbt r0,r3
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82e1b820
	sub_82E1B820(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82e1b978
	if (!cr6.eq) goto loc_82E1B978;
	// li r27,0
	r27.s64 = 0;
loc_82E1B978:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82E1B97C:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bne cr6,0x82e1b950
	if (!cr6.eq) goto loc_82E1B950;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1b994
	if (cr0.eq) goto loc_82E1B994;
	// stb r25,57(r31)
	PPC_STORE_U8(r31.u32 + 57, r25.u8);
	// b 0x82e1b998
	goto loc_82E1B998;
loc_82E1B994:
	// li r24,1
	r24.s64 = 1;
loc_82E1B998:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e1b5d0
	sub_82E1B5D0(ctx, base);
loc_82E1B9A0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E1B9B0"))) PPC_WEAK_FUNC(sub_82E1B9B0);
PPC_FUNC_IMPL(__imp__sub_82E1B9B0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e1b530
	sub_82E1B530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1B9B8"))) PPC_WEAK_FUNC(sub_82E1B9B8);
PPC_FUNC_IMPL(__imp__sub_82E1B9B8) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82e1b530
	sub_82E1B530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1B9C0"))) PPC_WEAK_FUNC(sub_82E1B9C0);
PPC_FUNC_IMPL(__imp__sub_82E1B9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r4,-21176(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -21176);
	// b 0x82e1b820
	sub_82E1B820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1B9D8"))) PPC_WEAK_FUNC(sub_82E1B9D8);
PPC_FUNC_IMPL(__imp__sub_82E1B9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e1b6c0
	sub_82E1B6C0(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r6,r11,29088
	ctx.r6.s64 = r11.s64 + 29088;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r5,r10,-12720
	ctx.r5.s64 = ctx.r10.s64 + -12720;
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// lvlx128 v63,r7,r6
	temp.u32 = ctx.r7.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r8,r6
	temp.u32 = ctx.r8.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v61,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r7,r6
	temp.u32 = ctx.r7.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r8,r6
	temp.u32 = ctx.r8.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82E1BA70"))) PPC_WEAK_FUNC(sub_82E1BA70);
PPC_FUNC_IMPL(__imp__sub_82E1BA70) {
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
	// bl 0x82e1b758
	sub_82E1B758(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1baa0
	if (cr0.eq) goto loc_82E1BAA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82E1BAA0:
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

__attribute__((alias("__imp__sub_82E1BAC0"))) PPC_WEAK_FUNC(sub_82E1BAC0);
PPC_FUNC_IMPL(__imp__sub_82E1BAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e1b6c0
	sub_82E1B6C0(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r6,r10,-12720
	ctx.r6.s64 = ctx.r10.s64 + -12720;
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lvlx128 v63,r7,r30
	temp.u32 = ctx.r7.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r8,r30
	temp.u32 = ctx.r8.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v61,r9,r30
	temp.u32 = ctx.r9.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r7,r30
	temp.u32 = ctx.r7.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r8,r30
	temp.u32 = ctx.r8.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r30
	temp.u32 = ctx.r9.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1BB60"))) PPC_WEAK_FUNC(sub_82E1BB60);
PPC_FUNC_IMPL(__imp__sub_82E1BB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e1bbdc
	if (cr6.eq) goto loc_82E1BBDC;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r10,160
	r31.s64 = ctx.r10.s64 + 160;
	// addi r30,r10,96
	r30.s64 = ctx.r10.s64 + 96;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822c6a10
	sub_822C6A10(ctx, base);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvlx128 v62,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82e1bc10
	goto loc_82E1BC10;
loc_82E1BBDC:
	// addi r11,r10,96
	r11.s64 = ctx.r10.s64 + 96;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r7,r11
	temp.u32 = ctx.r7.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82E1BC10:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82E1BC30"))) PPC_WEAK_FUNC(sub_82E1BC30);
PPC_FUNC_IMPL(__imp__sub_82E1BC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// li r8,16
	ctx.r8.s64 = 16;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r11,r3,96
	r11.s64 = ctx.r3.s64 + 96;
	// lvlx128 v62,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82e1a7a8
	sub_82E1A7A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1BC68"))) PPC_WEAK_FUNC(sub_82E1BC68);
PPC_FUNC_IMPL(__imp__sub_82E1BC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82e17380
	sub_82E17380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1BC80"))) PPC_WEAK_FUNC(sub_82E1BC80);
PPC_FUNC_IMPL(__imp__sub_82E1BC80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1BC88"))) PPC_WEAK_FUNC(sub_82E1BC88);
PPC_FUNC_IMPL(__imp__sub_82E1BC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1bcb4
	if (cr6.eq) goto loc_82E1BCB4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e17380
	sub_82E17380(ctx, base);
loc_82E1BCB4:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1BCC8"))) PPC_WEAK_FUNC(sub_82E1BCC8);
PPC_FUNC_IMPL(__imp__sub_82E1BCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1bcf4
	if (cr6.eq) goto loc_82E1BCF4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e17380
	sub_82E17380(ctx, base);
loc_82E1BCF4:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// beq cr6,0x82e1bd0c
	if (cr6.eq) goto loc_82E1BD0C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be6970
	sub_82BE6970(ctx, base);
loc_82E1BD0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1BD18"))) PPC_WEAK_FUNC(sub_82E1BD18);
PPC_FUNC_IMPL(__imp__sub_82E1BD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1bd28
	if (cr6.eq) goto loc_82E1BD28;
	// b 0x82e06c40
	sub_82E06C40(ctx, base);
	return;
loc_82E1BD28:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1BD30"))) PPC_WEAK_FUNC(sub_82E1BD30);
PPC_FUNC_IMPL(__imp__sub_82E1BD30) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// b 0x82e1bd6c
	goto loc_82E1BD6C;
loc_82E1BD54:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e1a4f8
	sub_82E1A4F8(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_82E1BD6C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e1bd54
	if (!cr6.eq) goto loc_82E1BD54;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E1BD80"))) PPC_WEAK_FUNC(sub_82E1BD80);
PPC_FUNC_IMPL(__imp__sub_82E1BD80) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// b 0x82e1bdc0
	goto loc_82E1BDC0;
loc_82E1BDA0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
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
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_82E1BDC0:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e1bda0
	if (!cr6.eq) goto loc_82E1BDA0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1BDD8"))) PPC_WEAK_FUNC(sub_82E1BDD8);
PPC_FUNC_IMPL(__imp__sub_82E1BDD8) {
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
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82e1be50
	if (cr6.eq) goto loc_82E1BE50;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E1BE04:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x82e1be1c
	if (cr6.eq) goto loc_82E1BE1C;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bne cr6,0x82e1be04
	if (!cr6.eq) goto loc_82E1BE04;
loc_82E1BE1C:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x82e1be50
	if (cr6.eq) goto loc_82E1BE50;
	// addi r3,r5,8
	ctx.r3.s64 = ctx.r5.s64 + 8;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// bl 0x82e0bc28
	sub_82E0BC28(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r4,-8
	ctx.r3.s64 = ctx.r4.s64 + -8;
	// bl 0x82afaba0
	sub_82AFABA0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82E1BE50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1BE68"))) PPC_WEAK_FUNC(sub_82E1BE68);
PPC_FUNC_IMPL(__imp__sub_82E1BE68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r24,4(r6)
	r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r26,0(r6)
	r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// beq cr6,0x82e1beb8
	if (cr6.eq) goto loc_82E1BEB8;
	// addi r11,r24,4
	r11.s64 = r24.s64 + 4;
loc_82E1BE9C:
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
	// bne 0x82e1be9c
	if (!cr0.eq) goto loc_82E1BE9C;
loc_82E1BEB8:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e1bed0
	if (!cr6.eq) goto loc_82E1BED0;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// b 0x82e1bedc
	goto loc_82E1BEDC;
loc_82E1BED0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r9,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r9.s64 = r11.s32 >> 3;
loc_82E1BEDC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82e1c158
	if (cr6.eq) goto loc_82E1C158;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e1bef4
	if (!cr6.eq) goto loc_82E1BEF4;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82e1bf00
	goto loc_82E1BF00;
loc_82E1BEF4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1BF00:
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82e1bf1c
	if (!cr6.lt) goto loc_82E1BF1C;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x82e1c158
	goto loc_82E1C158;
loc_82E1BF1C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e1bf2c
	if (!cr6.eq) goto loc_82E1BF2C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82e1bf38
	goto loc_82E1BF38;
loc_82E1BF2C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1BF38:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x82e1c078
	if (!cr6.lt) goto loc_82E1C078;
	// rlwinm r11,r9,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r26,r25
	r26.u64 = r25.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e1bf5c
	if (cr6.lt) goto loc_82E1BF5C;
	// add r26,r11,r9
	r26.u64 = r11.u64 + ctx.r9.u64;
loc_82E1BF5C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e1bf6c
	if (!cr6.eq) goto loc_82E1BF6C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82e1bf78
	goto loc_82E1BF78;
loc_82E1BF6C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1BF78:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bge cr6,0x82e1bfa4
	if (!cr6.lt) goto loc_82E1BFA4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e1bf94
	if (!cr6.eq) goto loc_82E1BF94;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82e1bfa0
	goto loc_82E1BFA0;
loc_82E1BF94:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1BFA0:
	// add r26,r11,r27
	r26.u64 = r11.u64 + r27.u64;
loc_82E1BFA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822f2fb8
	sub_822F2FB8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e3b508
	sub_82E3B508(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82e4e490
	sub_82E4E490(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r25,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r25.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e3b508
	sub_82E3B508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e1c02c
	if (!cr6.eq) goto loc_82E1C02C;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82e1c038
	goto loc_82E1C038;
loc_82E1C02C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1C038:
	// add r30,r11,r27
	r30.u64 = r11.u64 + r27.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1c058
	if (cr6.eq) goto loc_82E1C058;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82afaba0
	sub_82AFABA0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82E1C058:
	// rlwinm r11,r26,3,0,28
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x82e1c158
	goto loc_82E1C158;
loc_82E1C078:
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r28,r27,3,0,28
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
	// bge cr6,0x82e1c104
	if (!cr6.lt) goto loc_82E1C104;
	// add r5,r28,r30
	ctx.r5.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e3b508
	sub_82E3B508(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// subf r11,r30,r3
	r11.s64 = ctx.r3.s64 - r30.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// subf r4,r11,r27
	ctx.r4.s64 = r27.s64 - r11.s64;
	// bl 0x82e4e490
	sub_82E4E490(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// subf r29,r28,r11
	r29.s64 = r11.s64 - r28.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82e1c0f8
	goto loc_82E1C0F8;
loc_82E1C0E4:
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
loc_82E1C0F8:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82e1c0e4
	if (!cr6.eq) goto loc_82E1C0E4;
	// b 0x82e1c158
	goto loc_82E1C158;
loc_82E1C104:
	// subf r27,r28,r29
	r27.s64 = r29.s64 - r28.s64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e3b508
	sub_82E3B508(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1c738
	sub_82E1C738(ctx, base);
	// add r29,r28,r30
	r29.u64 = r28.u64 + r30.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82e1c158
	if (cr6.eq) goto loc_82E1C158;
loc_82E1C13C:
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82e1c13c
	if (!cr6.eq) goto loc_82E1C13C;
loc_82E1C158:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82e1c168
	if (cr6.eq) goto loc_82E1C168;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1C168:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E1C170"))) PPC_WEAK_FUNC(sub_82E1C170);
PPC_FUNC_IMPL(__imp__sub_82E1C170) {
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
	// beq cr6,0x82e1c1a4
	if (cr6.eq) goto loc_82E1C1A4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e1c1ac
	if (!cr0.eq) goto loc_82E1C1AC;
loc_82E1C1A4:
	// li r29,0
	r29.s64 = 0;
	// b 0x82e1c1b4
	goto loc_82E1C1B4;
loc_82E1C1AC:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r29,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r29.s64 = r11.s32 >> 3;
loc_82E1C1B4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e1be68
	sub_82E1BE68(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
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

__attribute__((alias("__imp__sub_82E1C1E0"))) PPC_WEAK_FUNC(sub_82E1C1E0);
PPC_FUNC_IMPL(__imp__sub_82E1C1E0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1c204
	if (!cr6.eq) goto loc_82E1C204;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e1c210
	goto loc_82E1C210;
loc_82E1C204:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
loc_82E1C210:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1c27c
	if (cr6.eq) goto loc_82E1C27C;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82e1c27c
	if (!cr6.lt) goto loc_82E1C27C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1c270
	if (cr6.eq) goto loc_82E1C270;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82e1c270
	if (cr6.eq) goto loc_82E1C270;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82E1C254:
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
	// bne 0x82e1c254
	if (!cr0.eq) goto loc_82E1C254;
loc_82E1C270:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x82e1c28c
	goto loc_82E1C28C;
loc_82E1C27C:
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e1c170
	sub_82E1C170(ctx, base);
loc_82E1C28C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1C2A0"))) PPC_WEAK_FUNC(sub_82E1C2A0);
PPC_FUNC_IMPL(__imp__sub_82E1C2A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82e1c1e0
	sub_82E1C1E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1C2A8"))) PPC_WEAK_FUNC(sub_82E1C2A8);
PPC_FUNC_IMPL(__imp__sub_82E1C2A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1C2B0"))) PPC_WEAK_FUNC(sub_82E1C2B0);
PPC_FUNC_IMPL(__imp__sub_82E1C2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x82e1c2c4
	if (!cr6.lt) goto loc_82E1C2C4;
	// li r11,0
	r11.s64 = 0;
	// sth r11,432(r3)
	PPC_STORE_U16(ctx.r3.u32 + 432, r11.u16);
	// blr 
	return;
loc_82E1C2C4:
	// sth r4,432(r3)
	PPC_STORE_U16(ctx.r3.u32 + 432, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1C2D0"))) PPC_WEAK_FUNC(sub_82E1C2D0);
PPC_FUNC_IMPL(__imp__sub_82E1C2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stfs f1,424(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 424, temp.u32);
	// stfs f2,428(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 428, temp.u32);
	// stb r11,423(r3)
	PPC_STORE_U8(ctx.r3.u32 + 423, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1C2E8"))) PPC_WEAK_FUNC(sub_82E1C2E8);
PPC_FUNC_IMPL(__imp__sub_82E1C2E8) {
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
	// lwz r11,364(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82e1c380
	if (!cr6.eq) goto loc_82E1C380;
	// lwz r3,348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1c380
	if (cr6.eq) goto loc_82E1C380;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82e1c380
	if (!cr0.gt) goto loc_82E1C380;
	// li r29,0
	r29.s64 = 0;
loc_82E1C330:
	// lwz r11,400(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 400);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1c35c
	if (!cr6.eq) goto loc_82E1C35C;
	// lwz r3,348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1C35C:
	// lwz r3,348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x82e1c330
	if (cr6.lt) goto loc_82E1C330;
loc_82E1C380:
	// lbz r11,422(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 422);
	// ori r11,r11,12
	r11.u64 = r11.u64 | 12;
	// stb r11,422(r30)
	PPC_STORE_U8(r30.u32 + 422, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1C398"))) PPC_WEAK_FUNC(sub_82E1C398);
PPC_FUNC_IMPL(__imp__sub_82E1C398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,144
	r11.s64 = 144;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,422(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 422);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,422(r3)
	PPC_STORE_U8(ctx.r3.u32 + 422, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1C3B8"))) PPC_WEAK_FUNC(sub_82E1C3B8);
PPC_FUNC_IMPL(__imp__sub_82E1C3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,304
	r11.s64 = 304;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,422(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 422);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stb r11,422(r3)
	PPC_STORE_U8(ctx.r3.u32 + 422, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1C3D8"))) PPC_WEAK_FUNC(sub_82E1C3D8);
PPC_FUNC_IMPL(__imp__sub_82E1C3D8) {
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
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82e1c4a4
	if (cr6.eq) goto loc_82E1C4A4;
	// lwz r11,336(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1c4a4
	if (cr6.eq) goto loc_82E1C4A4;
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1c4a4
	if (cr0.eq) goto loc_82E1C4A4;
	// lwz r11,336(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// extsw r30,r11
	r30.s64 = r11.s32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1c424
	if (!cr6.eq) goto loc_82E1C424;
	// li r29,0
	r29.s64 = 0;
	// b 0x82e1c43c
	goto loc_82E1C43C;
loc_82E1C424:
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r29,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r29.s64 = r11.s32 >> 3;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// blt cr6,0x82e1c43c
	if (cr6.lt) goto loc_82E1C43C;
	// li r29,4
	r29.s64 = 4;
loc_82E1C43C:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e1c468
	if (cr6.eq) goto loc_82E1C468;
loc_82E1C448:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e198a0
	sub_82E198A0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82e1c448
	if (cr6.lt) goto loc_82E1C448;
loc_82E1C468:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// bge cr6,0x82e1c4a4
	if (!cr6.lt) goto loc_82E1C4A4;
	// addi r30,r28,266
	r30.s64 = r28.s64 + 266;
loc_82E1C478:
	// lbzx r11,r30,r31
	r11.u64 = PPC_LOAD_U8(r30.u32 + r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e1c498
	if (!cr0.eq) goto loc_82E1C498;
	// li r11,1
	r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stbx r11,r30,r31
	PPC_STORE_U8(r30.u32 + r31.u32, r11.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e17de0
	sub_82E17DE0(ctx, base);
loc_82E1C498:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82e1c478
	if (cr6.lt) goto loc_82E1C478;
loc_82E1C4A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1C4B0"))) PPC_WEAK_FUNC(sub_82E1C4B0);
PPC_FUNC_IMPL(__imp__sub_82E1C4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,336(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1c4c8
	if (cr6.eq) goto loc_82E1C4C8;
	// lwz r10,340(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1C4C8:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1C4D8"))) PPC_WEAK_FUNC(sub_82E1C4D8);
PPC_FUNC_IMPL(__imp__sub_82E1C4D8) {
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
	// beq 0x82e1c530
	if (cr0.eq) goto loc_82E1C530;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-9108
	ctx.r9.s64 = r11.s64 + -9108;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82e1c534
	goto loc_82E1C534;
loc_82E1C530:
	// li r11,0
	r11.s64 = 0;
loc_82E1C534:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1c580
	if (!cr6.eq) goto loc_82E1C580;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1c560
	if (cr6.eq) goto loc_82E1C560;
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
loc_82E1C560:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-21152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21152);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82E1C580:
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

__attribute__((alias("__imp__sub_82E1C5A0"))) PPC_WEAK_FUNC(sub_82E1C5A0);
PPC_FUNC_IMPL(__imp__sub_82E1C5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
	// addi r10,r1,-96
	ctx.r10.s64 = ctx.r1.s64 + -96;
	// addi r5,r1,-64
	ctx.r5.s64 = ctx.r1.s64 + -64;
	// addi r4,r1,-48
	ctx.r4.s64 = ctx.r1.s64 + -48;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r7,r11
	temp.u32 = ctx.r7.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// stvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-96
	r30.s64 = ctx.r1.s64 + -96;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-96
	r29.s64 = ctx.r1.s64 + -96;
	// addi r6,r1,-96
	ctx.r6.s64 = ctx.r1.s64 + -96;
	// lvlx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// lvlx128 v60,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stvx128 v60,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v62,r9,r30
	temp.u32 = ctx.r9.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r7,r6
	temp.u32 = ctx.r7.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r8,r31
	temp.u32 = ctx.r8.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1C640"))) PPC_WEAK_FUNC(sub_82E1C640);
PPC_FUNC_IMPL(__imp__sub_82E1C640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e1c5a0
	sub_82E1C5A0(ctx, base);
	// li r8,16
	ctx.r8.s64 = 16;
	// lvlx128 v60,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx128 v63,r8,r30
	temp.u32 = ctx.r8.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r9,r30
	temp.u32 = ctx.r9.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r10,r30
	temp.u32 = ctx.r10.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e1c2e8
	sub_82E1C2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e1c2e8
	sub_82E1C2E8(ctx, base);
	// lbz r11,422(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 422);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,12
	r11.u64 = r11.u64 | 12;
	// stb r11,422(r31)
	PPC_STORE_U8(r31.u32 + 422, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1C6C8"))) PPC_WEAK_FUNC(sub_82E1C6C8);
PPC_FUNC_IMPL(__imp__sub_82E1C6C8) {
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
	// bl 0x82e1c4d8
	sub_82E1C4D8(ctx, base);
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
	// beq cr6,0x82e1c720
	if (cr6.eq) goto loc_82E1C720;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1C720:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1C738"))) PPC_WEAK_FUNC(sub_82E1C738);
PPC_FUNC_IMPL(__imp__sub_82E1C738) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e1c784
	if (cr6.eq) goto loc_82E1C784;
	// subf r28,r31,r4
	r28.s64 = ctx.r4.s64 - r31.s64;
loc_82E1C75C:
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// add r11,r28,r31
	r11.u64 = r28.u64 + r31.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82e1c75c
	if (!cr6.eq) goto loc_82E1C75C;
loc_82E1C784:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1C790"))) PPC_WEAK_FUNC(sub_82E1C790);
PPC_FUNC_IMPL(__imp__sub_82E1C790) {
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
	// lwz r30,376(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 376);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82e1c808
	goto loc_82E1C808;
loc_82E1C7B4:
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1c7e4
	if (cr6.eq) goto loc_82E1C7E4;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82E1C7C8:
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
	// bne 0x82e1c7c8
	if (!cr0.eq) goto loc_82E1C7C8;
loc_82E1C7E4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e1b9b0
	sub_82E1B9B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830c8360
	sub_830C8360(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1c804
	if (cr6.eq) goto loc_82E1C804;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1C804:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E1C808:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82e1c7b4
	if (!cr6.eq) goto loc_82E1C7B4;
	// lwz r30,388(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 388);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82e1c874
	goto loc_82E1C874;
loc_82E1C820:
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1c850
	if (cr6.eq) goto loc_82E1C850;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82E1C834:
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
	// bne 0x82e1c834
	if (!cr0.eq) goto loc_82E1C834;
loc_82E1C850:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e1b9b0
	sub_82E1B9B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830c8360
	sub_830C8360(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1c870
	if (cr6.eq) goto loc_82E1C870;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1C870:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E1C874:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82e1c820
	if (!cr6.eq) goto loc_82E1C820;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1C888"))) PPC_WEAK_FUNC(sub_82E1C888);
PPC_FUNC_IMPL(__imp__sub_82E1C888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,356
	r31.s64 = r30.s64 + 356;
	// lwz r3,356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1c8b4
	if (cr6.eq) goto loc_82E1C8B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e1aa70
	sub_82E1AA70(ctx, base);
loc_82E1C8B4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e1a8e8
	sub_82E1A8E8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// addi r10,r30,80
	ctx.r10.s64 = r30.s64 + 80;
	// lvlx128 v62,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lvlx128 v61,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e1b4a0
	sub_82E1B4A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82e1c790
	sub_82E1C790(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1C960"))) PPC_WEAK_FUNC(sub_82E1C960);
PPC_FUNC_IMPL(__imp__sub_82E1C960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,356
	r30.s64 = r31.s64 + 356;
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1c98c
	if (cr6.eq) goto loc_82E1C98C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e1aa70
	sub_82E1AA70(ctx, base);
loc_82E1C98C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// lvlx128 v62,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lvlx128 v61,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82e1b4a0
	sub_82E1B4A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82e1c790
	sub_82E1C790(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1CA28"))) PPC_WEAK_FUNC(sub_82E1CA28);
PPC_FUNC_IMPL(__imp__sub_82E1CA28) {
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
	// mr r31,r30
	r31.u64 = r30.u64;
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1ca88
	if (!cr6.eq) goto loc_82E1CA88;
	// lis r28,-31946
	r28.s64 = -2093613056;
loc_82E1CA50:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82e1ca28
	sub_82E1CA28(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82dfa670
	sub_82DFA670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6512(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1ca50
	if (cr6.eq) goto loc_82E1CA50;
loc_82E1CA88:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1CA90"))) PPC_WEAK_FUNC(sub_82E1CA90);
PPC_FUNC_IMPL(__imp__sub_82E1CA90) {
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
	// bl 0x82e1ca28
	sub_82E1CA28(ctx, base);
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

__attribute__((alias("__imp__sub_82E1CAE8"))) PPC_WEAK_FUNC(sub_82E1CAE8);
PPC_FUNC_IMPL(__imp__sub_82E1CAE8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r30,4(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e1cb50
	if (!cr6.eq) goto loc_82E1CB50;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82E1CB20:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r30,r11
	r30.u64 = r11.u64;
	// subfc r9,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r29,r9,31
	r29.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82e1cb40
	if (cr0.eq) goto loc_82E1CB40;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82e1cb44
	goto loc_82E1CB44;
loc_82E1CB40:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82E1CB44:
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e1cb20
	if (cr6.eq) goto loc_82E1CB20;
loc_82E1CB50:
	// mr r11,r30
	r11.u64 = r30.u64;
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq 0x82e1cba0
	if (cr0.eq) goto loc_82E1CBA0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e1cb98
	if (!cr6.eq) goto loc_82E1CB98;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E1CB78:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82e07b48
	sub_82E07B48(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r26.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82e1cbc4
	goto loc_82E1CBC4;
loc_82E1CB98:
	// bl 0x82e4d110
	sub_82E4D110(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E1CBA0:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e1cbbc
	if (!cr6.lt) goto loc_82E1CBBC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82e1cb78
	goto loc_82E1CB78;
loc_82E1CBBC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
loc_82E1CBC4:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E1CBD8"))) PPC_WEAK_FUNC(sub_82E1CBD8);
PPC_FUNC_IMPL(__imp__sub_82E1CBD8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1cc1c
	if (!cr6.eq) goto loc_82E1CC1C;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 4);
loc_82E1CC04:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E1CC08:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E1CC14:
	// bl 0x82e07b48
	sub_82E07B48(ctx, base);
	// b 0x82e1cd30
	goto loc_82E1CD30;
loc_82E1CC1C:
	// lwz r25,4(r28)
	r25.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e1cc44
	if (!cr6.eq) goto loc_82E1CC44;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e1cd14
	if (!cr6.lt) goto loc_82E1CD14;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x82e1cc04
	goto loc_82E1CC04;
loc_82E1CC44:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bne cr6,0x82e1cc68
	if (!cr6.eq) goto loc_82E1CC68;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82e1cd14
	if (!cr6.lt) goto loc_82E1CD14;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e1cc08
	goto loc_82E1CC08;
loc_82E1CC68:
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r26,12(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// ble cr6,0x82e1ccc8
	if (!cr6.gt) goto loc_82E1CCC8;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e4d110
	sub_82E4D110(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82e1ccc4
	if (!cr6.lt) goto loc_82E1CCC4;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1ccb8
	if (cr6.eq) goto loc_82E1CCB8;
loc_82E1CCB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e1cc14
	goto loc_82E1CC14;
loc_82E1CCB8:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82E1CCBC:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82e1cc14
	goto loc_82E1CC14;
loc_82E1CCC4:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
loc_82E1CCC8:
	// bge cr6,0x82e1cd14
	if (!cr6.lt) goto loc_82E1CD14;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830c8360
	sub_830C8360(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, r25.u32, xer);
	// beq cr6,0x82e1ccf0
	if (cr6.eq) goto loc_82E1CCF0;
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x82e1cd14
	if (!cr6.lt) goto loc_82E1CD14;
loc_82E1CCF0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1ccbc
	if (cr6.eq) goto loc_82E1CCBC;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// b 0x82e1ccb0
	goto loc_82E1CCB0;
loc_82E1CD14:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e1cae8
	sub_82E1CAE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82E1CD30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E1CD40"))) PPC_WEAK_FUNC(sub_82E1CD40);
PPC_FUNC_IMPL(__imp__sub_82E1CD40) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,4(r6)
	r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r26,0(r6)
	r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// beq cr6,0x82e1cd90
	if (cr6.eq) goto loc_82E1CD90;
	// addi r11,r23,4
	r11.s64 = r23.s64 + 4;
loc_82E1CD74:
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
	// bne 0x82e1cd74
	if (!cr0.eq) goto loc_82E1CD74;
loc_82E1CD90:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e1cda8
	if (!cr6.eq) goto loc_82E1CDA8;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// b 0x82e1cdb4
	goto loc_82E1CDB4;
loc_82E1CDA8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r9,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r9.s64 = r11.s32 >> 3;
loc_82E1CDB4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82e1d048
	if (cr6.eq) goto loc_82E1D048;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e1cdcc
	if (!cr6.eq) goto loc_82E1CDCC;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x82e1cdd8
	goto loc_82E1CDD8;
loc_82E1CDCC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1CDD8:
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x82e1cdf4
	if (!cr6.lt) goto loc_82E1CDF4;
	// bl 0x82e706c8
	sub_82E706C8(ctx, base);
	// b 0x82e1d048
	goto loc_82E1D048;
loc_82E1CDF4:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e1ce04
	if (!cr6.eq) goto loc_82E1CE04;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x82e1ce10
	goto loc_82E1CE10;
loc_82E1CE04:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1CE10:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x82e1cf68
	if (!cr6.lt) goto loc_82E1CF68;
	// rlwinm r11,r9,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e1ce34
	if (!cr6.lt) goto loc_82E1CE34;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x82e1ce38
	goto loc_82E1CE38;
loc_82E1CE34:
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_82E1CE38:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e1ce48
	if (!cr6.eq) goto loc_82E1CE48;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// b 0x82e1ce54
	goto loc_82E1CE54;
loc_82E1CE48:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
loc_82E1CE54:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e1ce80
	if (!cr6.lt) goto loc_82E1CE80;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e1ce70
	if (!cr6.eq) goto loc_82E1CE70;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x82e1ce7c
	goto loc_82E1CE7C;
loc_82E1CE70:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1CE7C:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
loc_82E1CE80:
	// rlwinm r25,r11,3,0,28
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r26,-31946
	r26.s64 = -2093613056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r24,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r24.u8);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e3b508
	sub_82E3B508(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82e4e490
	sub_82E4E490(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r5,r11,r29
	ctx.r5.u64 = r11.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r24,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r24.u8);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e3b508
	sub_82E3B508(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82e1cf1c
	if (!cr6.eq) goto loc_82E1CF1C;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x82e1cf28
	goto loc_82E1CF28;
loc_82E1CF1C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1CF28:
	// add r30,r11,r27
	r30.u64 = r11.u64 + r27.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1cf4c
	if (cr6.eq) goto loc_82E1CF4C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82e4e4f0
	sub_82E4E4F0(ctx, base);
	// lwz r3,6512(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 6512);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82E1CF4C:
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// add r10,r25,r28
	ctx.r10.u64 = r25.u64 + r28.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82e1d048
	goto loc_82E1D048;
loc_82E1CF68:
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r28,r27,3,0,28
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r24,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r24.u8);
	// bge cr6,0x82e1cff4
	if (!cr6.lt) goto loc_82E1CFF4;
	// add r5,r28,r30
	ctx.r5.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e3b508
	sub_82E3B508(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// subf r11,r30,r3
	r11.s64 = ctx.r3.s64 - r30.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// subf r4,r11,r27
	ctx.r4.s64 = r27.s64 - r11.s64;
	// bl 0x82e4e490
	sub_82E4E490(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// subf r29,r28,r11
	r29.s64 = r11.s64 - r28.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82e1cfe8
	goto loc_82E1CFE8;
loc_82E1CFD4:
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
loc_82E1CFE8:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82e1cfd4
	if (!cr6.eq) goto loc_82E1CFD4;
	// b 0x82e1d048
	goto loc_82E1D048;
loc_82E1CFF4:
	// subf r27,r28,r29
	r27.s64 = r29.s64 - r28.s64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e3b508
	sub_82E3B508(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1c738
	sub_82E1C738(ctx, base);
	// add r29,r28,r30
	r29.u64 = r28.u64 + r30.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x82e1d048
	if (cr6.eq) goto loc_82E1D048;
loc_82E1D02C:
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82e1d02c
	if (!cr6.eq) goto loc_82E1D02C;
loc_82E1D048:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82e1d058
	if (cr6.eq) goto loc_82E1D058;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1D058:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82E1D060"))) PPC_WEAK_FUNC(sub_82E1D060);
PPC_FUNC_IMPL(__imp__sub_82E1D060) {
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
	// bl 0x82e06bf8
	sub_82E06BF8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-12704
	ctx.r10.s64 = ctx.r10.s64 + -12704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
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

__attribute__((alias("__imp__sub_82E1D0B0"))) PPC_WEAK_FUNC(sub_82E1D0B0);
PPC_FUNC_IMPL(__imp__sub_82E1D0B0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e1d100
	if (!cr6.eq) goto loc_82E1D100;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82E1D0D8:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e1d0ec
	if (!cr6.lt) goto loc_82E1D0EC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82e1d0f4
	goto loc_82E1D0F4;
loc_82E1D0EC:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82E1D0F4:
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e1d0d8
	if (cr6.eq) goto loc_82E1D0D8;
loc_82E1D100:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82e1d120
	if (cr6.eq) goto loc_82E1D120;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e1d160
	if (!cr6.lt) goto loc_82E1D160;
loc_82E1D120:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82e1cbd8
	sub_82E1CBD8(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1d160
	if (cr6.eq) goto loc_82E1D160;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1D160:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
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

__attribute__((alias("__imp__sub_82E1D178"))) PPC_WEAK_FUNC(sub_82E1D178);
PPC_FUNC_IMPL(__imp__sub_82E1D178) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1d1a4
	if (!cr6.eq) goto loc_82E1D1A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e1d1b0
	goto loc_82E1D1B0;
loc_82E1D1A4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
loc_82E1D1B0:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e1d1e4
	if (!cr6.lt) goto loc_82E1D1E4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1d1cc
	if (cr6.eq) goto loc_82E1D1CC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1D1CC:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - r11.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e1cd40
	sub_82E1CD40(ctx, base);
	// b 0x82e1d22c
	goto loc_82E1D22C;
loc_82E1D1E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1d22c
	if (cr6.eq) goto loc_82E1D22C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e1d22c
	if (!cr6.lt) goto loc_82E1D22C;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82e1d22c
	if (cr6.eq) goto loc_82E1D22C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e0bc28
	sub_82E0BC28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82e4e4f0
	sub_82E4E4F0(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
loc_82E1D22C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1d23c
	if (cr6.eq) goto loc_82E1D23C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1D23C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1D248"))) PPC_WEAK_FUNC(sub_82E1D248);
PPC_FUNC_IMPL(__imp__sub_82E1D248) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r27.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r30,372
	r28.s64 = r30.s64 + 372;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e71308
	sub_82E71308(ctx, base);
	// lwz r10,376(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 376);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e1d2c8
	if (cr6.eq) goto loc_82E1D2C8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// beq cr6,0x82e1d394
	if (cr6.eq) goto loc_82E1D394;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E1D2A8:
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
	// bne 0x82e1d2a8
	if (!cr0.eq) goto loc_82E1D2A8;
	// b 0x82e1d394
	goto loc_82E1D394;
loc_82E1D2C8:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-12696
	ctx.r4.s64 = r11.s64 + -12696;
	// li r5,196
	ctx.r5.s64 = 196;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e1d2fc
	if (cr0.eq) goto loc_82E1D2FC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e32a60
	sub_82E32A60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82e1d300
	goto loc_82E1D300;
loc_82E1D2FC:
	// li r31,0
	r31.s64 = 0;
loc_82E1D300:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e1c4d8
	sub_82E1C4D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r30,348
	ctx.r4.s64 = r30.s64 + 348;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e32ca8
	sub_82E32CA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e1d0b0
	sub_82E1D0B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82e1d394
	if (cr6.eq) goto loc_82E1D394;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82E1D374:
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
	// bne 0x82e1d374
	if (!cr0.eq) goto loc_82E1D374;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1D394:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E1D3A0"))) PPC_WEAK_FUNC(sub_82E1D3A0);
PPC_FUNC_IMPL(__imp__sub_82E1D3A0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r27,r29,384
	r27.s64 = r29.s64 + 384;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e4def8
	sub_82E4DEF8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,388(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 388);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e1d41c
	if (cr6.eq) goto loc_82E1D41C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// beq cr6,0x82e1d52c
	if (cr6.eq) goto loc_82E1D52C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E1D3FC:
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
	// bne 0x82e1d3fc
	if (!cr0.eq) goto loc_82E1D3FC;
	// b 0x82e1d52c
	goto loc_82E1D52C;
loc_82E1D41C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1d460
	if (cr0.eq) goto loc_82E1D460;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e2ef40
	sub_82E2EF40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82e1d460
	if (!cr0.lt) goto loc_82E1D460;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x82e1d52c
	goto loc_82E1D52C;
loc_82E1D460:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-12696
	ctx.r4.s64 = r11.s64 + -12696;
	// li r5,230
	ctx.r5.s64 = 230;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e1d494
	if (cr0.eq) goto loc_82E1D494;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e32bb8
	sub_82E32BB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82e1d498
	goto loc_82E1D498;
loc_82E1D494:
	// li r31,0
	r31.s64 = 0;
loc_82E1D498:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e1c4d8
	sub_82E1C4D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r29,348
	ctx.r4.s64 = r29.s64 + 348;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e32ca8
	sub_82E32CA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 356);
	// bl 0x82e1b810
	sub_82E1B810(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e15b28
	sub_82E15B28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82e1d52c
	if (cr6.eq) goto loc_82E1D52C;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82E1D50C:
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
	// bne 0x82e1d50c
	if (!cr0.eq) goto loc_82E1D50C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1D52C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E1D538"))) PPC_WEAK_FUNC(sub_82E1D538);
PPC_FUNC_IMPL(__imp__sub_82E1D538) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b00
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lwz r10,368(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 368);
	// lwz r27,80(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// blt cr6,0x82e1d628
	if (cr6.lt) goto loc_82E1D628;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// li r24,0
	r24.s64 = 0;
	// lwz r21,84(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mr r23,r24
	r23.u64 = r24.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e1d65c
	if (cr6.eq) goto loc_82E1D65C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82e1d65c
	if (cr6.eq) goto loc_82E1D65C;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r25,r24
	r25.u64 = r24.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// addi r28,r10,4
	r28.s64 = ctx.r10.s64 + 4;
	// addi r26,r11,-21148
	r26.s64 = r11.s64 + -21148;
loc_82E1D598:
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82E1D5A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e1d5e0
	if (!cr0.eq) goto loc_82E1D5E0;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// blt cr6,0x82e1d5a0
	if (cr6.lt) goto loc_82E1D5A0;
	// b 0x82e1d5e8
	goto loc_82E1D5E8;
loc_82E1D5E0:
	// mr r23,r29
	r23.u64 = r29.u64;
	// li r25,1
	r25.s64 = 1;
loc_82E1D5E8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// blt cr6,0x82e1d598
	if (cr6.lt) goto loc_82E1D598;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1d648
	if (cr0.eq) goto loc_82E1D648;
	// mr r11,r24
	r11.u64 = r24.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82e1d628
	if (cr6.eq) goto loc_82E1D628;
loc_82E1D60C:
	// lbzx r10,r11,r21
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r21.u32);
	// cmplw cr6,r10,r23
	cr6.compare<uint32_t>(ctx.r10.u32, r23.u32, xer);
	// bne cr6,0x82e1d61c
	if (!cr6.eq) goto loc_82E1D61C;
	// stw r11,368(r22)
	PPC_STORE_U32(r22.u32 + 368, r11.u32);
loc_82E1D61C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// blt cr6,0x82e1d60c
	if (cr6.lt) goto loc_82E1D60C;
loc_82E1D628:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,368(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + 368);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82e1d248
	sub_82E1D248(ctx, base);
loc_82E1D63C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b50
	return;
loc_82E1D648:
	// subfic r11,r27,1
	xer.ca = r27.u32 <= 1;
	r11.s64 = 1 - r27.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// stw r11,368(r22)
	PPC_STORE_U32(r22.u32 + 368, r11.u32);
	// b 0x82e1d628
	goto loc_82E1D628;
loc_82E1D65C:
	// stw r24,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r24.u32);
	// stw r24,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r24.u32);
	// b 0x82e1d63c
	goto loc_82E1D63C;
}

__attribute__((alias("__imp__sub_82E1D668"))) PPC_WEAK_FUNC(sub_82E1D668);
PPC_FUNC_IMPL(__imp__sub_82E1D668) {
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
	// addi r11,r11,-12596
	r11.s64 = r11.s64 + -12596;
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1d6a0
	if (cr6.eq) goto loc_82E1D6A0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e1aa70
	sub_82E1AA70(ctx, base);
loc_82E1D6A0:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 416);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1d6b0
	if (cr6.eq) goto loc_82E1D6B0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1D6B0:
	// addi r3,r31,396
	ctx.r3.s64 = r31.s64 + 396;
	// bl 0x82e9c9d0
	sub_82E9C9D0(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x82e1b0a8
	sub_82E1B0A8(ctx, base);
	// addi r3,r31,372
	ctx.r3.s64 = r31.s64 + 372;
	// bl 0x82e089e0
	sub_82E089E0(ctx, base);
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1d6d8
	if (cr6.eq) goto loc_82E1D6D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1D6D8:
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1d6e8
	if (cr6.eq) goto loc_82E1D6E8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1D6E8:
	// addi r30,r31,320
	r30.s64 = r31.s64 + 320;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82e9c9d0
	sub_82E9C9D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// addi r11,r11,-23076
	r11.s64 = r11.s64 + -23076;
	// stw r11,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r11.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,-19232
	r11.s64 = r11.s64 + -19232;
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

__attribute__((alias("__imp__sub_82E1D730"))) PPC_WEAK_FUNC(sub_82E1D730);
PPC_FUNC_IMPL(__imp__sub_82E1D730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r30,r31,396
	r30.s64 = r31.s64 + 396;
	// lwz r11,400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// li r26,0
	r26.s64 = 0;
	// lwz r3,348(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// addi r27,r31,348
	r27.s64 = r31.s64 + 348;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1d770
	if (!cr6.eq) goto loc_82E1D770;
	// mr r29,r26
	r29.u64 = r26.u64;
	// b 0x82e1d77c
	goto loc_82E1D77C;
loc_82E1D770:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r29,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r29.s64 = r11.s32 >> 3;
loc_82E1D77C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bge cr6,0x82e1d7c0
	if (!cr6.lt) goto loc_82E1D7C0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1d178
	sub_82E1D178(ctx, base);
loc_82E1D7C0:
	// lwz r11,400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// rlwinm r29,r28,3,0,28
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e1d858
	if (!cr6.eq) goto loc_82E1D858;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-12696
	ctx.r4.s64 = r11.s64 + -12696;
	// li r5,335
	ctx.r5.s64 = 335;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e1d824
	if (cr0.eq) goto loc_82E1D824;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82e32f20
	sub_82E32F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82e1d828
	goto loc_82E1D828;
loc_82E1D824:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82E1D828:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e1c6c8
	sub_82E1C6C8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e33048
	sub_82E33048(ctx, base);
	// lwz r11,400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
loc_82E1D858:
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// beq cr6,0x82e1d88c
	if (cr6.eq) goto loc_82E1D88C;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82E1D870:
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
	// bne 0x82e1d870
	if (!cr0.eq) goto loc_82E1D870;
loc_82E1D88C:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-21132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -21132);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e1b100
	sub_82E1B100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1d8c4
	if (cr6.eq) goto loc_82E1D8C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1D8C4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1d8d4
	if (cr6.eq) goto loc_82E1D8D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1D8D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E1D8E0"))) PPC_WEAK_FUNC(sub_82E1D8E0);
PPC_FUNC_IMPL(__imp__sub_82E1D8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r26,r28,396
	r26.s64 = r28.s64 + 396;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 400);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1d914
	if (!cr6.eq) goto loc_82E1D914;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x82e1d920
	goto loc_82E1D920;
loc_82E1D914:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r31,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r31.s64 = r11.s32 >> 3;
loc_82E1D920:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// bge cr6,0x82e1d964
	if (!cr6.lt) goto loc_82E1D964;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e1d178
	sub_82E1D178(ctx, base);
loc_82E1D964:
	// lwz r29,376(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 376);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82e1d9d4
	goto loc_82E1D9D4;
loc_82E1D974:
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1d9a4
	if (cr6.eq) goto loc_82E1D9A4;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82E1D988:
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
	// bne 0x82e1d988
	if (!cr0.eq) goto loc_82E1D988;
loc_82E1D9A4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e32ca8
	sub_82E32CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1a7a8
	sub_82E1A7A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830c8360
	sub_830C8360(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1d9d0
	if (cr6.eq) goto loc_82E1D9D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1D9D0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E1D9D4:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82e1d974
	if (!cr6.eq) goto loc_82E1D974;
	// lwz r29,388(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 388);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82e1da4c
	goto loc_82E1DA4C;
loc_82E1D9EC:
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1da1c
	if (cr6.eq) goto loc_82E1DA1C;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82E1DA00:
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
	// bne 0x82e1da00
	if (!cr0.eq) goto loc_82E1DA00;
loc_82E1DA1C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e32ca8
	sub_82E32CA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1a7a8
	sub_82E1A7A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830c8360
	sub_830C8360(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1da48
	if (cr6.eq) goto loc_82E1DA48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1DA48:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82E1DA4C:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82e1d9ec
	if (!cr6.eq) goto loc_82E1D9EC;
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82E1DA5C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1dae0
	if (cr6.eq) goto loc_82E1DAE0;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82e1dae0
	if (!cr6.lt) goto loc_82E1DAE0;
	// lwz r11,400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 400);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1dab4
	if (cr6.eq) goto loc_82E1DAB4;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82E1DA98:
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
	// bne 0x82e1da98
	if (!cr0.eq) goto loc_82E1DA98;
loc_82E1DAB4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1dac4
	if (cr6.eq) goto loc_82E1DAC4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e33048
	sub_82E33048(ctx, base);
loc_82E1DAC4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1dad4
	if (cr6.eq) goto loc_82E1DAD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1DAD4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// b 0x82e1da5c
	goto loc_82E1DA5C;
loc_82E1DAE0:
	// lwz r3,348(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 348);
	// addi r31,r28,348
	r31.s64 = r28.s64 + 348;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1db04
	if (cr6.eq) goto loc_82E1DB04;
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
loc_82E1DB04:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r27,4
	ctx.r4.s64 = r27.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1db38
	if (cr6.eq) goto loc_82E1DB38;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E1DB38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E1DB40"))) PPC_WEAK_FUNC(sub_82E1DB40);
PPC_FUNC_IMPL(__imp__sub_82E1DB40) {
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
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lbz r11,420(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 420);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e1dca0
	if (cr6.eq) goto loc_82E1DCA0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82e1dca0
	if (cr6.eq) goto loc_82E1DCA0;
	// addi r11,r5,16
	r11.s64 = ctx.r5.s64 + 16;
	// lfs f0,32(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	f0.f64 = double(temp.f32);
	// li r10,304
	ctx.r10.s64 = 304;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lvx128 v62,r31,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vaddfp128 v62,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_add_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lhz r11,434(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 434);
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne 0x82e1dbd0
	if (!cr0.eq) goto loc_82E1DBD0;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
loc_82E1DBD0:
	// lbz r10,422(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 422);
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82e1dc30
	if (!cr0.eq) goto loc_82E1DC30;
	// clrlwi. r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82e1dc30
	if (!cr0.eq) goto loc_82E1DC30;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e1dc10
	if (cr0.eq) goto loc_82E1DC10;
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 1);
	// divw r9,r28,r11
	ctx.r9.s32 = r28.s32 / r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// twllei r11,0
	// andc r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	// subf. r9,r9,r28
	ctx.r9.s64 = r28.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// twlgei r11,-1
	// beq 0x82e1dc30
	if (cr0.eq) goto loc_82E1DC30;
loc_82E1DC10:
	// li r11,0
	r11.s64 = 0;
	// lbz r4,421(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 421);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r31,332
	ctx.r3.s64 = r31.s64 + 332;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82e1d178
	sub_82E1D178(ctx, base);
	// b 0x82e1dc80
	goto loc_82E1DC80;
loc_82E1DC30:
	// addi r30,r31,332
	r30.s64 = r31.s64 + 332;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e0c0c0
	sub_82E0C0C0(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// bl 0x82e31b20
	sub_82E31B20(ctx, base);
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1dc70
	if (cr6.eq) goto loc_82E1DC70;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
loc_82E1DC70:
	// lbz r10,422(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 422);
	// stb r11,421(r31)
	PPC_STORE_U8(r31.u32 + 421, r11.u8);
	// andi. r10,r10,245
	ctx.r10.u64 = ctx.r10.u64 & 245;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,422(r31)
	PPC_STORE_U8(r31.u32 + 422, ctx.r10.u8);
loc_82E1DC80:
	// lbz r11,421(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 421);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subfic r8,r11,4
	xer.ca = r11.u32 <= 4;
	ctx.r8.s64 = 4 - r11.s64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,320
	ctx.r4.s64 = r31.s64 + 320;
	// bl 0x82e31b20
	sub_82E31B20(ctx, base);
loc_82E1DCA0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1dd3c
	if (cr6.eq) goto loc_82E1DD3C;
	// lhz r11,432(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 432);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e1dcbc
	if (!cr0.eq) goto loc_82E1DCBC;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
loc_82E1DCBC:
	// lbz r10,422(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 422);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e1dd00
	if (!cr0.eq) goto loc_82E1DD00;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e1dd00
	if (!cr0.eq) goto loc_82E1DD00;
	// lbz r10,422(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 422);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e1dd3c
	if (cr0.eq) goto loc_82E1DD3C;
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 1);
	// divw r9,r28,r11
	ctx.r9.s32 = r28.s32 / r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// twllei r11,0
	// andc r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	// subf. r9,r9,r28
	ctx.r9.s64 = r28.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// twlgei r11,-1
	// bne 0x82e1dd3c
	if (!cr0.eq) goto loc_82E1DD3C;
loc_82E1DD00:
	// addi r5,r31,144
	ctx.r5.s64 = r31.s64 + 144;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e84a10
	sub_82E84A10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f2,428(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 428);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// lbz r7,423(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 423);
	// lfs f1,424(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 424);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82e2b8a8
	sub_82E2B8A8(ctx, base);
	// lbz r11,422(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 422);
	// andi. r11,r11,250
	r11.u64 = r11.u64 & 250;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,422(r31)
	PPC_STORE_U8(r31.u32 + 422, r11.u8);
loc_82E1DD3C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E1DD48"))) PPC_WEAK_FUNC(sub_82E1DD48);
PPC_FUNC_IMPL(__imp__sub_82E1DD48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
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
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r5,r10,-12596
	ctx.r5.s64 = ctx.r10.s64 + -12596;
	// addi r6,r11,29088
	ctx.r6.s64 = r11.s64 + 29088;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// li r30,0
	r30.s64 = 0;
	// lis r4,-31943
	ctx.r4.s64 = -2093416448;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lvlx128 v63,r7,r6
	temp.u32 = ctx.r7.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lvlx128 v62,r8,r6
	temp.u32 = ctx.r8.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r4,29232
	ctx.r4.s64 = ctx.r4.s64 + 29232;
	// lvlx128 v61,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r28,160
	r28.s64 = 160;
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,304
	r27.s64 = 304;
	// stvx128 v63,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r31,320
	ctx.r3.s64 = r31.s64 + 320;
	// stvx128 v62,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r7,r6
	temp.u32 = ctx.r7.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r8,r6
	temp.u32 = ctx.r8.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r9,r6
	temp.u32 = ctx.r9.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,2240(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f31,2244(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 2244);
	f31.f64 = double(temp.f32);
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f31,148(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r28
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r27
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82e1d060
	sub_82E1D060(ctx, base);
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(r31.u32 + 352, r30.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r30,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = r31.s64 + 372;
	// stw r30,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r30.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r30.u32);
	// stw r11,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r11.u32);
	// bl 0x830cbe68
	sub_830CBE68(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = r31.s64 + 384;
	// bl 0x830cbe68
	sub_830CBE68(ctx, base);
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// stw r30,400(r31)
	PPC_STORE_U32(r31.u32 + 400, r30.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r30,404(r31)
	PPC_STORE_U32(r31.u32 + 404, r30.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r30,408(r31)
	PPC_STORE_U32(r31.u32 + 408, r30.u32);
	// addi r10,r31,180
	ctx.r10.s64 = r31.s64 + 180;
	// stw r30,412(r31)
	PPC_STORE_U32(r31.u32 + 412, r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r30.u32);
	// lbz r11,28244(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 28244);
	// stb r11,420(r31)
	PPC_STORE_U8(r31.u32 + 420, r11.u8);
	// lbz r11,28244(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 28244);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,28244(r8)
	PPC_STORE_U8(ctx.r8.u32 + 28244, r11.u8);
	// stfs f31,424(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 424, temp.u32);
	// stfs f31,428(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 428, temp.u32);
	// stb r30,421(r31)
	PPC_STORE_U8(r31.u32 + 421, r30.u8);
	// stb r7,422(r31)
	PPC_STORE_U8(r31.u32 + 422, ctx.r7.u8);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stb r6,423(r31)
	PPC_STORE_U8(r31.u32 + 423, ctx.r6.u8);
	// sth r30,432(r31)
	PPC_STORE_U16(r31.u32 + 432, r30.u16);
	// sth r30,434(r31)
	PPC_STORE_U16(r31.u32 + 434, r30.u16);
	// lfs f0,-28612(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28612);
	f0.f64 = double(temp.f32);
loc_82E1DEA0:
	// stfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f31,8(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82e1dea0
	if (!cr0.eq) goto loc_82E1DEA0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,332
	ctx.r3.s64 = r31.s64 + 332;
	// bl 0x82e3c438
	sub_82E3C438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E1DED8"))) PPC_WEAK_FUNC(sub_82E1DED8);
PPC_FUNC_IMPL(__imp__sub_82E1DED8) {
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
	// bl 0x82e1d668
	sub_82E1D668(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1df08
	if (cr0.eq) goto loc_82E1DF08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82E1DF08:
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

__attribute__((alias("__imp__sub_82E1DF28"))) PPC_WEAK_FUNC(sub_82E1DF28);
PPC_FUNC_IMPL(__imp__sub_82E1DF28) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82e31f08
	sub_82E31F08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1df64
	if (cr0.eq) goto loc_82E1DF64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r5,116(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// bl 0x82e1db40
	sub_82E1DB40(ctx, base);
loc_82E1DF64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1DF70"))) PPC_WEAK_FUNC(sub_82E1DF70);
PPC_FUNC_IMPL(__imp__sub_82E1DF70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1DF78"))) PPC_WEAK_FUNC(sub_82E1DF78);
PPC_FUNC_IMPL(__imp__sub_82E1DF78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// b 0x82e1c3b8
	sub_82E1C3B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1DF80"))) PPC_WEAK_FUNC(sub_82E1DF80);
PPC_FUNC_IMPL(__imp__sub_82E1DF80) {
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
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82e1d8e0
	sub_82E1D8E0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
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

__attribute__((alias("__imp__sub_82E1DFD8"))) PPC_WEAK_FUNC(sub_82E1DFD8);
PPC_FUNC_IMPL(__imp__sub_82E1DFD8) {
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
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e2ef40
	sub_82E2EF40(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82E1E028"))) PPC_WEAK_FUNC(sub_82E1E028);
PPC_FUNC_IMPL(__imp__sub_82E1E028) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// b 0x82e1c398
	sub_82E1C398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1E030"))) PPC_WEAK_FUNC(sub_82E1E030);
PPC_FUNC_IMPL(__imp__sub_82E1E030) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// b 0x82e1c2b0
	sub_82E1C2B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1E038"))) PPC_WEAK_FUNC(sub_82E1E038);
PPC_FUNC_IMPL(__imp__sub_82E1E038) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// b 0x82e1c2d0
	sub_82E1C2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1E040"))) PPC_WEAK_FUNC(sub_82E1E040);
PPC_FUNC_IMPL(__imp__sub_82E1E040) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// bl 0x82e1d3a0
	sub_82E1D3A0(ctx, base);
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

__attribute__((alias("__imp__sub_82E1E080"))) PPC_WEAK_FUNC(sub_82E1E080);
PPC_FUNC_IMPL(__imp__sub_82E1E080) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// bl 0x82e1d538
	sub_82E1D538(ctx, base);
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

__attribute__((alias("__imp__sub_82E1E0C0"))) PPC_WEAK_FUNC(sub_82E1E0C0);
PPC_FUNC_IMPL(__imp__sub_82E1E0C0) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82e1c888
	sub_82E1C888(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1e0ec
	if (cr6.eq) goto loc_82E1E0EC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1E0EC:
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

__attribute__((alias("__imp__sub_82E1E100"))) PPC_WEAK_FUNC(sub_82E1E100);
PPC_FUNC_IMPL(__imp__sub_82E1E100) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82e1c960
	sub_82E1C960(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1e12c
	if (cr6.eq) goto loc_82E1E12C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1E12C:
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

__attribute__((alias("__imp__sub_82E1E140"))) PPC_WEAK_FUNC(sub_82E1E140);
PPC_FUNC_IMPL(__imp__sub_82E1E140) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x82e1e188
	if (cr6.eq) goto loc_82E1E188;
loc_82E1E168:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x827e1578
	sub_827E1578(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82e1e168
	if (!cr6.eq) goto loc_82E1E168;
loc_82E1E188:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1E1A0"))) PPC_WEAK_FUNC(sub_82E1E1A0);
PPC_FUNC_IMPL(__imp__sub_82E1E1A0) {
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
	// beq 0x82e1e1f8
	if (cr0.eq) goto loc_82E1E1F8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-9108
	ctx.r9.s64 = r11.s64 + -9108;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82e1e1fc
	goto loc_82E1E1FC;
loc_82E1E1F8:
	// li r11,0
	r11.s64 = 0;
loc_82E1E1FC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1e248
	if (!cr6.eq) goto loc_82E1E248;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1e228
	if (cr6.eq) goto loc_82E1E228;
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
loc_82E1E228:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-21128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21128);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82E1E248:
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

__attribute__((alias("__imp__sub_82E1E268"))) PPC_WEAK_FUNC(sub_82E1E268);
PPC_FUNC_IMPL(__imp__sub_82E1E268) {
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
	// bl 0x82e1a4d0
	sub_82E1A4D0(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-12572
	ctx.r9.s64 = ctx.r10.s64 + -12572;
	// addi r10,r31,28
	ctx.r10.s64 = r31.s64 + 28;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_82E1E2A8:
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
	// bge 0x82e1e2a8
	if (!cr0.lt) goto loc_82E1E2A8;
	// addi r10,r31,68
	ctx.r10.s64 = r31.s64 + 68;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82E1E2C4:
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
	// bge 0x82e1e2c4
	if (!cr0.lt) goto loc_82E1E2C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r11.u8);
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

__attribute__((alias("__imp__sub_82E1E2F8"))) PPC_WEAK_FUNC(sub_82E1E2F8);
PPC_FUNC_IMPL(__imp__sub_82E1E2F8) {
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
	// bl 0x825b90d0
	sub_825B90D0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1e328
	if (cr0.eq) goto loc_82E1E328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82E1E328:
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

__attribute__((alias("__imp__sub_82E1E348"))) PPC_WEAK_FUNC(sub_82E1E348);
PPC_FUNC_IMPL(__imp__sub_82E1E348) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// bl 0x82e1d248
	sub_82E1D248(ctx, base);
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

__attribute__((alias("__imp__sub_82E1E388"))) PPC_WEAK_FUNC(sub_82E1E388);
PPC_FUNC_IMPL(__imp__sub_82E1E388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r10,r10,-12484
	ctx.r10.s64 = ctx.r10.s64 + -12484;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82595ee0
	sub_82595EE0(ctx, base);
	// lis r11,1023
	r11.s64 = 67043328;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// rlwinm r3,r29,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82e1e3e8
	if (!cr6.gt) goto loc_82E1E3E8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E1E3E8:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-12552
	ctx.r4.s64 = r11.s64 + -12552;
	// li r5,33
	ctx.r5.s64 = 33;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82596100
	sub_82596100(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e1e470
	if (!cr6.gt) goto loc_82E1E470;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r10,r11,29088
	ctx.r10.s64 = r11.s64 + 29088;
loc_82E1E434:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r5,r10
	temp.u32 = ctx.r5.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lvlx128 v61,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r7,r10
	temp.u32 = ctx.r7.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x82e1e434
	if (cr6.lt) goto loc_82E1E434;
loc_82E1E470:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1E480"))) PPC_WEAK_FUNC(sub_82E1E480);
PPC_FUNC_IMPL(__imp__sub_82E1E480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// li r7,16
	ctx.r7.s64 = 16;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lvlx128 v62,r7,r5
	temp.u32 = ctx.r7.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1E4C0"))) PPC_WEAK_FUNC(sub_82E1E4C0);
PPC_FUNC_IMPL(__imp__sub_82E1E4C0) {
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
	// addi r11,r11,-12484
	r11.s64 = r11.s64 + -12484;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1e4f0
	if (cr6.eq) goto loc_82E1E4F0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1E4F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e31c00
	sub_82E31C00(ctx, base);
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

__attribute__((alias("__imp__sub_82E1E510"))) PPC_WEAK_FUNC(sub_82E1E510);
PPC_FUNC_IMPL(__imp__sub_82E1E510) {
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
	// bl 0x82e1e4c0
	sub_82E1E4C0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1e540
	if (cr0.eq) goto loc_82E1E540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82E1E540:
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

__attribute__((alias("__imp__sub_82E1E560"))) PPC_WEAK_FUNC(sub_82E1E560);
PPC_FUNC_IMPL(__imp__sub_82E1E560) {
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
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r11,348(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 348);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1e5fc
	if (!cr6.eq) goto loc_82E1E5FC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-12552
	ctx.r4.s64 = r11.s64 + -12552;
	// li r5,536
	ctx.r5.s64 = 536;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e1e5bc
	if (cr0.eq) goto loc_82E1E5BC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// bl 0x82e1e388
	sub_82E1E388(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82e1e5c0
	goto loc_82E1E5C0;
loc_82E1E5BC:
	// li r30,0
	r30.s64 = 0;
loc_82E1E5C0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e1e1a0
	sub_82E1E1A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e1df80
	sub_82E1DF80(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1e5fc
	if (cr6.eq) goto loc_82E1E5FC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1E5FC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r6,r11,100
	ctx.r6.s64 = r11.s64 + 100;
	// bl 0x82e1d730
	sub_82E1D730(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1e62c
	if (cr6.eq) goto loc_82E1E62C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1E62C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E1E638"))) PPC_WEAK_FUNC(sub_82E1E638);
PPC_FUNC_IMPL(__imp__sub_82E1E638) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r31,8(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e2ef40
	sub_82E2EF40(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge 0x82e1e684
	if (!cr0.lt) goto loc_82E1E684;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1e67c
	if (cr6.eq) goto loc_82E1E67C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1E67C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e1e6e0
	goto loc_82E1E6E0;
loc_82E1E684:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82e1e6c0
	if (cr6.eq) goto loc_82E1E6C0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E1E6A4:
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
	// bne 0x82e1e6a4
	if (!cr0.eq) goto loc_82E1E6A4;
loc_82E1E6C0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e1e560
	sub_82E1E560(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1e6dc
	if (cr6.eq) goto loc_82E1E6DC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1E6DC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E1E6E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E1E6E8"))) PPC_WEAK_FUNC(sub_82E1E6E8);
PPC_FUNC_IMPL(__imp__sub_82E1E6E8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1e738
	if (cr6.eq) goto loc_82E1E738;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r31,140
	ctx.r4.s64 = r31.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e71308
	sub_82E71308(ctx, base);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e1e738
	if (cr6.eq) goto loc_82E1E738;
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_82E1E738:
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

__attribute__((alias("__imp__sub_82E1E758"))) PPC_WEAK_FUNC(sub_82E1E758);
PPC_FUNC_IMPL(__imp__sub_82E1E758) {
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
	// beq 0x82e1e7b8
	if (cr0.eq) goto loc_82E1E7B8;
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
	// bl 0x830c8760
	sub_830C8760(ctx, base);
loc_82E1E7B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E1E7C8"))) PPC_WEAK_FUNC(sub_82E1E7C8);
PPC_FUNC_IMPL(__imp__sub_82E1E7C8) {
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
	// bl 0x82e1e1a0
	sub_82E1E1A0(ctx, base);
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
	// beq cr6,0x82e1e820
	if (cr6.eq) goto loc_82E1E820;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1E820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1E838"))) PPC_WEAK_FUNC(sub_82E1E838);
PPC_FUNC_IMPL(__imp__sub_82E1E838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// lwz r28,0(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// lwz r21,4(r23)
	r21.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// beq cr6,0x82e1ecdc
	if (cr6.eq) goto loc_82E1ECDC;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e1e87c
	if (!cr6.eq) goto loc_82E1E87C;
	// li r19,0
	r19.s64 = 0;
	// b 0x82e1e888
	goto loc_82E1E888;
loc_82E1E87C:
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r19,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r19.s64 = r11.s32 >> 3;
loc_82E1E888:
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82e1ecdc
	if (cr6.eq) goto loc_82E1ECDC;
	// li r25,0
	r25.s64 = 0;
	// lis r18,-31943
	r18.s64 = -2093416448;
	// lis r17,-31943
	r17.s64 = -2093416448;
loc_82E1E8A0:
	// lwz r11,132(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 132);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r26,348(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 348);
	// lwzx r27,r25,r10
	r27.u64 = PPC_LOAD_U32(r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82e1e93c
	if (cr6.eq) goto loc_82E1E93C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82e1e93c
	if (!cr0.gt) goto loc_82E1E93C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r31,24(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lwz r30,28(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82e1e90c
	if (cr0.eq) goto loc_82E1E90C;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82e18420
	sub_82E18420(ctx, base);
loc_82E1E90C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82e1e93c
	if (cr0.eq) goto loc_82E1E93C;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82e18420
	sub_82E18420(ctx, base);
loc_82E1E93C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,60(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// bl 0x82e1e6e8
	sub_82E1E6E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1ecdc
	if (cr0.eq) goto loc_82E1ECDC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1ea7c
	if (cr6.eq) goto loc_82E1EA7C;
	// lwz r4,16(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 16);
	// bl 0x82e20a90
	sub_82E20A90(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,0(r16)
	r31.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1e994
	if (cr6.eq) goto loc_82E1E994;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82e31c88
	sub_82E31C88(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1e994
	if (cr0.eq) goto loc_82E1E994;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
loc_82E1E994:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,28260(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 28260);
	// bl 0x82e20a58
	sub_82E20A58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82e206f8
	sub_82E206F8(ctx, base);
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
	// beq cr6,0x82e1e9e4
	if (cr6.eq) goto loc_82E1E9E4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82E1E9C8:
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
	// bne 0x82e1e9c8
	if (!cr0.eq) goto loc_82E1E9C8;
loc_82E1E9E4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82e20840
	sub_82E20840(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// beq cr6,0x82e1ea2c
	if (cr6.eq) goto loc_82E1EA2C;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82E1EA0C:
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
	// bne 0x82e1ea0c
	if (!cr0.eq) goto loc_82E1EA0C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82E1EA2C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1ea60
	if (cr6.eq) goto loc_82E1EA60;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e1ea60
	if (cr6.eq) goto loc_82E1EA60;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e16f70
	sub_82E16F70(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e17068
	sub_82E17068(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82E1EA60:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1ea6c
	if (cr6.eq) goto loc_82E1EA6C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1EA6C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1ea7c
	if (cr6.eq) goto loc_82E1EA7C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1EA7C:
	// lbz r11,78(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 78);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne 0x82e1eac0
	if (!cr0.eq) goto loc_82E1EAC0;
	// lwz r11,28252(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 28252);
	// cmplw cr6,r15,r11
	cr6.compare<uint32_t>(r15.u32, r11.u32, xer);
	// beq cr6,0x82e1eaa4
	if (cr6.eq) goto loc_82E1EAA4;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82E1EAA4:
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// b 0x82e1eae8
	goto loc_82E1EAE8;
loc_82E1EAC0:
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r11,28252(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 28252);
	// li r4,72
	ctx.r4.s64 = 72;
	// cmplw cr6,r15,r11
	cr6.compare<uint32_t>(r15.u32, r11.u32, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// beq cr6,0x82e1eae0
	if (cr6.eq) goto loc_82E1EAE0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E1EAE0:
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
loc_82E1EAE8:
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r30,28(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// beq cr6,0x82e1eb28
	if (cr6.eq) goto loc_82E1EB28;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82E1EB08:
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
	// bne 0x82e1eb08
	if (!cr0.eq) goto loc_82E1EB08;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1EB28:
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r31,20(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e1eb5c
	if (cr6.eq) goto loc_82E1EB5C;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82E1EB3C:
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
	// bne 0x82e1eb3c
	if (!cr0.eq) goto loc_82E1EB3C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E1EB5C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lis r9,-16512
	ctx.r9.s64 = -1082130432;
	// li r10,16
	ctx.r10.s64 = 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82E1EB6C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82e1eb6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E1EB6C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e1eb90
	if (cr6.eq) goto loc_82E1EB90;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1a258
	sub_82E1A258(ctx, base);
loc_82E1EB90:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e1eba8
	if (cr6.eq) goto loc_82E1EBA8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e23180
	sub_82E23180(ctx, base);
loc_82E1EBA8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82e1ebd0
	if (cr6.eq) goto loc_82E1EBD0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt 0x82e1ebd4
	if (cr0.gt) goto loc_82E1EBD4;
loc_82E1EBD0:
	// li r11,0
	r11.s64 = 0;
loc_82E1EBD4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// bl 0x822c6518
	sub_822C6518(ctx, base);
	// lbz r11,77(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 77);
	// li r4,56
	ctx.r4.s64 = 56;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r11,38(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 38);
	// beq 0x82e1ec28
	if (cr0.eq) goto loc_82E1EC28;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e1ec08
	if (!cr0.eq) goto loc_82E1EC08;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82e1ec5c
	goto loc_82E1EC5C;
loc_82E1EC08:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,48(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r5,52(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// b 0x82e1ec54
	goto loc_82E1EC54;
loc_82E1EC28:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e1ec38
	if (!cr0.eq) goto loc_82E1EC38;
	// li r5,6
	ctx.r5.s64 = 6;
	// b 0x82e1ec5c
	goto loc_82E1EC5C;
loc_82E1EC38:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r4,208
	ctx.r4.s64 = 208;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,40(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r5,44(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 44);
loc_82E1EC54:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,204
	ctx.r4.s64 = 204;
loc_82E1EC5C:
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r4,48(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// beq cr6,0x82e1ec80
	if (cr6.eq) goto loc_82E1EC80;
	// stw r4,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be02e0
	sub_82BE02E0(ctx, base);
loc_82E1EC80:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,20(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,44(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bdd0f8
	sub_82BDD0F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,40(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// bl 0x82bdd218
	sub_82BDD218(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,132(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 132);
	// bl 0x82e1c3d8
	sub_82E1C3D8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be5cf0
	sub_82BE5CF0(ctx, base);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// cmplw cr6,r24,r19
	cr6.compare<uint32_t>(r24.u32, r19.u32, xer);
	// blt cr6,0x82e1e8a0
	if (cr6.lt) goto loc_82E1E8A0;
loc_82E1ECDC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_82E1ECE8"))) PPC_WEAK_FUNC(sub_82E1ECE8);
PPC_FUNC_IMPL(__imp__sub_82E1ECE8) {
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
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,28248(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28248);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82e1ed90
	if (!cr6.eq) goto loc_82E1ED90;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e1eeac
	if (!cr6.gt) goto loc_82E1EEAC;
	// li r29,0
	r29.s64 = 0;
loc_82E1ED54:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// bl 0x82e1e838
	sub_82E1E838(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e1ed54
	if (cr6.lt) goto loc_82E1ED54;
	// b 0x82e1eeac
	goto loc_82E1EEAC;
loc_82E1ED90:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r11,28252(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28252);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82e1ee10
	if (!cr6.eq) goto loc_82E1EE10;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e1eeac
	if (!cr6.gt) goto loc_82E1EEAC;
	// li r29,0
	r29.s64 = 0;
loc_82E1EDD4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r4,r11,28
	ctx.r4.s64 = r11.s64 + 28;
	// bl 0x82e1e838
	sub_82E1E838(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e1edd4
	if (cr6.lt) goto loc_82E1EDD4;
	// b 0x82e1eeac
	goto loc_82E1EEAC;
loc_82E1EE10:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r11,28256(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28256);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82e1eeac
	if (!cr6.eq) goto loc_82E1EEAC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,104
	ctx.r4.s64 = 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82e1eeac
	if (!cr6.gt) goto loc_82E1EEAC;
	// li r29,0
	r29.s64 = 0;
loc_82E1EE74:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r4,r11,44
	ctx.r4.s64 = r11.s64 + 44;
	// bl 0x82e1e838
	sub_82E1E838(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e1ee74
	if (cr6.lt) goto loc_82E1EE74;
loc_82E1EEAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E1EEB8"))) PPC_WEAK_FUNC(sub_82E1EEB8);
PPC_FUNC_IMPL(__imp__sub_82E1EEB8) {
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
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,28248(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28248);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e1ef1c
	if (!cr6.eq) goto loc_82E1EF1C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// b 0x82e1efa8
	goto loc_82E1EFA8;
loc_82E1EF1C:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r11,28252(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28252);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e1ef54
	if (!cr6.eq) goto loc_82E1EF54;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// b 0x82e1efa8
	goto loc_82E1EFA8;
loc_82E1EF54:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r11,28256(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28256);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e1efa8
	if (!cr6.eq) goto loc_82E1EFA8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,104
	ctx.r4.s64 = 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// addi r4,r29,64
	ctx.r4.s64 = r29.s64 + 64;
loc_82E1EFA8:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e1e838
	sub_82E1E838(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E1EFC8"))) PPC_WEAK_FUNC(sub_82E1EFC8);
PPC_FUNC_IMPL(__imp__sub_82E1EFC8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// bl 0x82e31f08
	sub_82E31F08(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1f1d0
	if (cr0.eq) goto loc_82E1F1D0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82e1f0d8
	if (!cr6.gt) goto loc_82E1F0D8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r26,r11,-1
	r26.s64 = r11.s64 + -1;
	// addi r25,r10,144
	r25.s64 = ctx.r10.s64 + 144;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f31,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82e1f0dc
	if (cr6.eq) goto loc_82E1F0DC;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r29,r31,108
	r29.s64 = r31.s64 + 108;
	// vspltisw128 v126,0
	simde_mm_store_si128((simde__m128i*)v126.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r28,r31,28
	r28.s64 = r31.s64 + 28;
	// vcsxwfp128 v127,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
loc_82E1F044:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// bl 0x82e86620
	sub_82E86620(ctx, base);
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v13,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// vrsqrtefp128 v0,v63
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v63.f32))));
	// vor128 v12,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v63.u8));
	// vmulfp128 v62,v63,v127
	simde_mm_store_ps(v62.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v127.f32)));
	// vcmpeqfp128 v11,v63,v126
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v126.f32)));
	// vmulfp128 v61,v0,v0
	simde_mm_store_ps(v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v13,v62,v61,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v61.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v63,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x82e1f0b0
	if (cr6.gt) goto loc_82E1F0B0;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82e1f0d0
	if (cr6.lt) goto loc_82E1F0D0;
loc_82E1F0B0:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e1f044
	if (cr6.lt) goto loc_82E1F044;
	// b 0x82e1f0dc
	goto loc_82E1F0DC;
loc_82E1F0D0:
	// mr r26,r30
	r26.u64 = r30.u64;
	// b 0x82e1f0dc
	goto loc_82E1F0DC;
loc_82E1F0D8:
	// li r26,0
	r26.s64 = 0;
loc_82E1F0DC:
	// rlwinm r11,r26,3,0,28
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r28,0(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r30,4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r29,28(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x82e9a228
	sub_82E9A228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e17e60
	sub_82E17E60(ctx, base);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82e1c2a8
	sub_82E1C2A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x82e1f130
	if (!cr0.eq) goto loc_82E1F130;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82e17af0
	sub_82E17AF0(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,80
	ctx.r4.s64 = r11.s64 + 80;
	// b 0x82e1f144
	goto loc_82E1F144;
loc_82E1F130:
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r26,r11,29088
	r26.s64 = r11.s64 + 29088;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82e17af0
	sub_82E17AF0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82E1F144:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e17cb0
	sub_82E17CB0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82e1c4b0
	sub_82E1C4B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1f16c
	if (cr0.eq) goto loc_82E1F16C;
	// li r11,6
	r11.s64 = 6;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82E1F16C:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,328
	ctx.r4.s64 = 328;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,332
	ctx.r4.s64 = 332;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822e6f00
	sub_822E6F00(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ble cr6,0x82e1f1cc
	if (!cr6.gt) goto loc_82E1F1CC;
	// bl 0x82e1ece8
	sub_82E1ECE8(ctx, base);
	// b 0x82e1f1d0
	goto loc_82E1F1D0;
loc_82E1F1CC:
	// bl 0x82e1eeb8
	sub_82E1EEB8(ctx, base);
loc_82E1F1D0:
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

__attribute__((alias("__imp__sub_82E1F1F0"))) PPC_WEAK_FUNC(sub_82E1F1F0);
PPC_FUNC_IMPL(__imp__sub_82E1F1F0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,5461
	r11.s64 = 357892096;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r11,r11,21844
	r11.u64 = r11.u64 | 21844;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e1f268
	if (cr6.lt) goto loc_82E1F268;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23004
	ctx.r4.s64 = r11.s64 + -23004;
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
loc_82E1F268:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e1e758
	sub_82E1E758(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82e1f2b4
	if (!cr6.eq) goto loc_82E1F2B4;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82e1f2ec
	goto loc_82E1F2EC;
loc_82E1F2B4:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e1f2d8
	if (cr0.eq) goto loc_82E1F2D8;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e1f2f0
	if (!cr6.eq) goto loc_82E1F2F0;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// b 0x82e1f2f0
	goto loc_82E1F2F0;
loc_82E1F2D8:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e1f2f0
	if (!cr6.eq) goto loc_82E1F2F0;
loc_82E1F2EC:
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_82E1F2F0:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// li r29,1
	r29.s64 = 1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e1f3f8
	if (!cr6.eq) goto loc_82E1F3F8;
	// li r27,0
	r27.s64 = 0;
loc_82E1F310:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e1f374
	if (!cr6.eq) goto loc_82E1F374;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82e1f384
	if (cr6.eq) goto loc_82E1F384;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e1f34c
	if (!cr6.eq) goto loc_82E1F34C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x827e1e60
	sub_827E1E60(ctx, base);
loc_82E1F34C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x827e1ec8
	sub_827E1EC8(ctx, base);
	// b 0x82e1f3e4
	goto loc_82E1F3E4;
loc_82E1F374:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e1f3a8
	if (!cr6.eq) goto loc_82E1F3A8;
loc_82E1F384:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,24(r9)
	PPC_STORE_U8(ctx.r9.u32 + 24, r29.u8);
	// stb r29,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r27,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, r27.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82e1f3e4
	goto loc_82E1F3E4;
loc_82E1F3A8:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e1f3c0
	if (!cr6.eq) goto loc_82E1F3C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x827e1ec8
	sub_827E1EC8(ctx, base);
loc_82E1F3C0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x827e1e60
	sub_827E1E60(ctx, base);
loc_82E1F3E4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e1f310
	if (cr6.eq) goto loc_82E1F310;
loc_82E1F3F8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b70
	return;
}

