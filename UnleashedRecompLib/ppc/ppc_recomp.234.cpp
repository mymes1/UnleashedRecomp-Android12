#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8312FEB8"))) PPC_WEAK_FUNC(sub_8312FEB8);
PPC_FUNC_IMPL(__imp__sub_8312FEB8) {
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
	// bne cr6,0x8312fee0
	if (!cr6.eq) goto loc_8312FEE0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2752
	ctx.r3.s64 = r11.s64 + 2752;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8312ff24
	goto loc_8312FF24;
loc_8312FEE0:
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
	// bne cr6,0x8312ff04
	if (!cr6.eq) goto loc_8312FF04;
	// li r11,-1
	r11.s64 = -1;
	// b 0x8312ff1c
	goto loc_8312FF1C;
loc_8312FF04:
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
loc_8312FF1C:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8312FF24:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8312FF38"))) PPC_WEAK_FUNC(sub_8312FF38);
PPC_FUNC_IMPL(__imp__sub_8312FF38) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312ff70
	if (!cr0.lt) goto loc_8312FF70;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312FF70:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8312ff8c
	if (!cr6.eq) goto loc_8312FF8C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2832
	ctx.r3.s64 = r11.s64 + 2832;
loc_8312FF80:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// b 0x8312ffb0
	goto loc_8312FFB0;
loc_8312FF8C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8312ffa4
	if (!cr6.eq) goto loc_8312FFA4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2792
	ctx.r3.s64 = r11.s64 + 2792;
	// b 0x8312ff80
	goto loc_8312FF80;
loc_8312FFA4:
	// ld r11,280(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 280);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8312FFB0:
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// extsw r31,r11
	r31.s64 = r11.s32;
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8312ffd0
	if (!cr0.lt) goto loc_8312FFD0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8312FFD0:
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

__attribute__((alias("__imp__sub_8312FFF0"))) PPC_WEAK_FUNC(sub_8312FFF0);
PPC_FUNC_IMPL(__imp__sub_8312FFF0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r26,0
	r26.s64 = 0;
	// addi r29,r11,-4344
	r29.s64 = r11.s64 + -4344;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_83130014:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8313003c
	if (cr6.eq) goto loc_8313003C;
	// addis r9,r29,1
	ctx.r9.s64 = r29.s64 + 65536;
	// addi r11,r11,440
	r11.s64 = r11.s64 + 440;
	// addi r9,r9,-30336
	ctx.r9.s64 = ctx.r9.s64 + -30336;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83130014
	if (cr6.lt) goto loc_83130014;
loc_8313003C:
	// cmpwi cr6,r10,80
	cr6.compare<int32_t>(ctx.r10.s32, 80, xer);
	// bne cr6,0x83130058
	if (!cr6.eq) goto loc_83130058;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3032
	ctx.r3.s64 = r11.s64 + 3032;
loc_8313004C:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130050:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831301ec
	goto loc_831301EC;
loc_83130058:
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83137e98
	sub_83137E98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83138020
	sub_83138020(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// bne 0x83130098
	if (!cr0.eq) goto loc_83130098;
	// addi r11,r11,30876
	r11.s64 = r11.s64 + 30876;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// b 0x8313009c
	goto loc_8313009C;
loc_83130098:
	// lwz r11,30876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 30876);
loc_8313009C:
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cd558
	sub_831CD558(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,372(r31)
	PPC_STORE_U32(r31.u32 + 372, ctx.r3.u32);
	// bne 0x831300cc
	if (!cr0.eq) goto loc_831300CC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3116
	ctx.r3.s64 = r11.s64 + 3116;
	// b 0x8313004c
	goto loc_8313004C;
loc_831300CC:
	// stw r28,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r28.u32);
	// addi r27,r31,320
	r27.s64 = r31.s64 + 320;
	// stw r26,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r26.u32);
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
	// stw r26,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r26.u32);
	// std r26,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r26.u64);
	// stw r26,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r26.u32);
loc_831300E8:
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83130120
	if (cr6.eq) goto loc_83130120;
	// lwz r11,264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83130120
	if (cr6.eq) goto loc_83130120;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83130120
	if (!cr6.eq) goto loc_83130120;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x831b6fa0
	sub_831B6FA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83130138
	if (cr0.eq) goto loc_83130138;
loc_83130120:
	// addis r11,r29,1
	r11.s64 = r29.s64 + 65536;
	// addi r30,r30,440
	r30.s64 = r30.s64 + 440;
	// addi r11,r11,-30324
	r11.s64 = r11.s64 + -30324;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x831300e8
	if (cr6.lt) goto loc_831300E8;
	// b 0x83130150
	goto loc_83130150;
loc_83130138:
	// lwz r11,264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// ld r11,268(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 268);
	// std r11,280(r31)
	PPC_STORE_U64(r31.u32 + 280, r11.u64);
	// lwz r11,276(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 276);
	// stw r11,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r11.u32);
loc_83130150:
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831301c8
	if (!cr6.eq) goto loc_831301C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8312e870
	sub_8312E870(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831301c8
	if (cr6.eq) goto loc_831301C8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8312f740
	sub_8312F740(ctx, base);
	// lwz r11,344(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831301b0
	if (cr6.eq) goto loc_831301B0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r29,-448
	ctx.r3.s64 = r29.s64 + -448;
	// addi r4,r11,3076
	ctx.r4.s64 = r11.s64 + 3076;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// addi r3,r29,-448
	ctx.r3.s64 = r29.s64 + -448;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// b 0x83130050
	goto loc_83130050;
loc_831301B0:
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// ld r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 328);
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// std r10,280(r31)
	PPC_STORE_U64(r31.u32 + 280, ctx.r10.u64);
	// stw r9,288(r31)
	PPC_STORE_U32(r31.u32 + 288, ctx.r9.u32);
loc_831301C8:
	// li r11,1
	r11.s64 = 1;
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne cr6,0x831301e8
	if (!cr6.eq) goto loc_831301E8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_831301E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831301EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831301F8"))) PPC_WEAK_FUNC(sub_831301F8);
PPC_FUNC_IMPL(__imp__sub_831301F8) {
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
	// li r28,0
	r28.s64 = 0;
	// addi r10,r11,-4344
	ctx.r10.s64 = r11.s64 + -4344;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8313021C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83130244
	if (cr6.eq) goto loc_83130244;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,440
	r11.s64 = r11.s64 + 440;
	// addi r8,r8,-30336
	ctx.r8.s64 = ctx.r8.s64 + -30336;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8313021c
	if (cr6.lt) goto loc_8313021C;
loc_83130244:
	// cmpwi cr6,r9,80
	cr6.compare<int32_t>(ctx.r9.s32, 80, xer);
	// bne cr6,0x83130260
	if (!cr6.eq) goto loc_83130260;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3032
	ctx.r3.s64 = r11.s64 + 3032;
loc_83130254:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831302f8
	goto loc_831302F8;
loc_83130260:
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83137e98
	sub_83137E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83138020
	sub_83138020(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8313029c
	if (!cr0.eq) goto loc_8313029C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3152
	ctx.r3.s64 = r11.s64 + 3152;
	// b 0x83130254
	goto loc_83130254;
loc_8313029C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,30876(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 30876);
	// stw r11,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r11.u32);
	// bl 0x831cd558
	sub_831CD558(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,372(r31)
	PPC_STORE_U32(r31.u32 + 372, ctx.r3.u32);
	// bne 0x831302d4
	if (!cr0.eq) goto loc_831302D4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3116
	ctx.r3.s64 = r11.s64 + 3116;
	// b 0x83130254
	goto loc_83130254;
loc_831302D4:
	// li r11,1
	r11.s64 = 1;
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_831302F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83130300"))) PPC_WEAK_FUNC(sub_83130300);
PPC_FUNC_IMPL(__imp__sub_83130300) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83130330
	if (!cr6.eq) goto loc_83130330;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3232
	ctx.r3.s64 = r11.s64 + 3232;
loc_83130328:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x831303fc
	goto loc_831303FC;
loc_83130330:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83130348
	if (!cr6.eq) goto loc_83130348;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3192
	ctx.r3.s64 = r11.s64 + 3192;
	// b 0x83130328
	goto loc_83130328;
loc_83130348:
	// li r11,1
	r11.s64 = 1;
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// li r30,0
	r30.s64 = 0;
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r11.u32);
	// ble 0x83130370
	if (!cr0.gt) goto loc_83130370;
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 436);
	// bl 0x83138b28
	sub_83138B28(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r30.u32);
loc_83130370:
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83130380
	if (cr0.eq) goto loc_83130380;
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
loc_83130380:
	// lwz r3,372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83130394
	if (cr0.eq) goto loc_83130394;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r30.u32);
loc_83130394:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r9,r11,-4344
	ctx.r9.s64 = r11.s64 + -4344;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_831303A0:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x831303c4
	if (cr6.eq) goto loc_831303C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831303c4
	if (cr6.eq) goto loc_831303C4;
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// lwz r8,276(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x831303ec
	if (cr6.eq) goto loc_831303EC;
loc_831303C4:
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// addi r11,r11,440
	r11.s64 = r11.s64 + 440;
	// addi r10,r10,-30336
	ctx.r10.s64 = ctx.r10.s64 + -30336;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831303a0
	if (cr6.lt) goto loc_831303A0;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831303ec
	if (cr0.eq) goto loc_831303EC;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
loc_831303EC:
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_831303FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130418"))) PPC_WEAK_FUNC(sub_83130418);
PPC_FUNC_IMPL(__imp__sub_83130418) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83130554
	if (cr6.eq) goto loc_83130554;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83130554
	if (cr6.eq) goto loc_83130554;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83130450
	if (!cr6.eq) goto loc_83130450;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3568
	ctx.r3.s64 = r11.s64 + 3568;
	// b 0x8313055c
	goto loc_8313055C;
loc_83130450:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x83130464
	if (!cr6.lt) goto loc_83130464;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3532
	ctx.r3.s64 = r11.s64 + 3532;
	// b 0x8313055c
	goto loc_8313055C;
loc_83130464:
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x83130560
	if (cr0.eq) goto loc_83130560;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83130488
	if (cr6.eq) goto loc_83130488;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3472
	ctx.r3.s64 = r11.s64 + 3472;
	// b 0x8313055c
	goto loc_8313055C;
loc_83130488:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83130560
	if (!cr6.eq) goto loc_83130560;
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// blt cr6,0x831304b0
	if (cr6.lt) goto loc_831304B0;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_831304B0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// bne cr6,0x831304d0
	if (!cr6.eq) goto loc_831304D0;
	// li r11,1
	r11.s64 = 1;
	// stw r29,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r29.u32);
	// std r29,304(r31)
	PPC_STORE_U64(r31.u32 + 304, r29.u64);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x83130560
	goto loc_83130560;
loc_831304D0:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stw r9,352(r31)
	PPC_STORE_U32(r31.u32 + 352, ctx.r9.u32);
	// rlwinm r8,r30,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 11) & 0xFFFFF800;
	// stw r5,384(r31)
	PPC_STORE_U32(r31.u32 + 384, ctx.r5.u32);
	// rldicr r10,r10,11,52
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0xFFFFFFFFFFFFF800;
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 436);
	// addi r11,r31,352
	r11.s64 = r31.s64 + 352;
	// stw r29,396(r31)
	PPC_STORE_U32(r31.u32 + 396, r29.u32);
	// stw r29,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r29.u32);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// stw r8,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r8.u32);
	// std r10,376(r31)
	PPC_STORE_U64(r31.u32 + 376, ctx.r10.u64);
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// lwz r9,380(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 380);
	// lwz r7,376(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 376);
	// addi r4,r10,-1872
	ctx.r4.s64 = ctx.r10.s64 + -1872;
	// stw r9,364(r31)
	PPC_STORE_U32(r31.u32 + 364, ctx.r9.u32);
	// stw r7,368(r31)
	PPC_STORE_U32(r31.u32 + 368, ctx.r7.u32);
	// bl 0x83138790
	sub_83138790(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,312(r31)
	PPC_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// blt 0x83130560
	if (cr0.lt) goto loc_83130560;
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// std r29,304(r31)
	PPC_STORE_U64(r31.u32 + 304, r29.u64);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
	// b 0x83130564
	goto loc_83130564;
loc_83130554:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3432
	ctx.r3.s64 = r11.s64 + 3432;
loc_8313055C:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130560:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83130564:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83130570"))) PPC_WEAK_FUNC(sub_83130570);
PPC_FUNC_IMPL(__imp__sub_83130570) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83130680
	if (cr6.eq) goto loc_83130680;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83130680
	if (cr6.eq) goto loc_83130680;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831305a8
	if (!cr6.eq) goto loc_831305A8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3744
	ctx.r3.s64 = r11.s64 + 3744;
	// b 0x83130688
	goto loc_83130688;
loc_831305A8:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bge cr6,0x831305bc
	if (!cr6.lt) goto loc_831305BC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3708
	ctx.r3.s64 = r11.s64 + 3708;
	// b 0x83130688
	goto loc_83130688;
loc_831305BC:
	// lwz r8,276(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x8313068c
	if (cr0.eq) goto loc_8313068C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x831305e0
	if (cr6.eq) goto loc_831305E0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3648
	ctx.r3.s64 = r11.s64 + 3648;
	// b 0x83130688
	goto loc_83130688;
loc_831305E0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8313068c
	if (!cr6.eq) goto loc_8313068C;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// std r10,304(r11)
	PPC_STORE_U64(r11.u32 + 304, ctx.r10.u64);
	// bne cr6,0x83130608
	if (!cr6.eq) goto loc_83130608;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,296(r11)
	PPC_STORE_U32(r11.u32 + 296, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x8313068c
	goto loc_8313068C;
loc_83130608:
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// rlwinm r7,r4,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 11) & 0xFFFFF800;
	// stw r10,396(r11)
	PPC_STORE_U32(r11.u32 + 396, ctx.r10.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,392(r11)
	PPC_STORE_U32(r11.u32 + 392, ctx.r10.u32);
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// stw r8,352(r11)
	PPC_STORE_U32(r11.u32 + 352, ctx.r8.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r6,288(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 288);
	// rldicr r9,r9,11,52
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 11) & 0xFFFFFFFFFFFFF800;
	// stw r7,388(r11)
	PPC_STORE_U32(r11.u32 + 388, ctx.r7.u32);
	// stw r5,384(r11)
	PPC_STORE_U32(r11.u32 + 384, ctx.r5.u32);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// stw r4,296(r11)
	PPC_STORE_U32(r11.u32 + 296, ctx.r4.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// std r9,376(r11)
	PPC_STORE_U64(r11.u32 + 376, ctx.r9.u64);
	// lwz r9,380(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 380);
	// lwz r8,376(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 376);
	// stw r10,292(r11)
	PPC_STORE_U32(r11.u32 + 292, ctx.r10.u32);
	// stw r9,364(r11)
	PPC_STORE_U32(r11.u32 + 364, ctx.r9.u32);
	// stw r8,368(r11)
	PPC_STORE_U32(r11.u32 + 368, ctx.r8.u32);
	// ble cr6,0x83130678
	if (!cr6.gt) goto loc_83130678;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// stw r10,288(r11)
	PPC_STORE_U32(r11.u32 + 288, ctx.r10.u32);
	// rldicr r9,r9,11,52
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 11) & 0xFFFFFFFFFFFFF800;
	// std r9,280(r11)
	PPC_STORE_U64(r11.u32 + 280, ctx.r9.u64);
loc_83130678:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83130690
	goto loc_83130690;
loc_83130680:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3608
	ctx.r3.s64 = r11.s64 + 3608;
loc_83130688:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8313068C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83130690:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831306A0"))) PPC_WEAK_FUNC(sub_831306A0);
PPC_FUNC_IMPL(__imp__sub_831306A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4240
	ctx.r3.s64 = r11.s64 + 4240;
	// b 0x8312eb48
	sub_8312EB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831306B0"))) PPC_WEAK_FUNC(sub_831306B0);
PPC_FUNC_IMPL(__imp__sub_831306B0) {
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
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831306e8
	if (!cr0.lt) goto loc_831306E8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831306E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83138088
	sub_83138088(ctx, base);
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8313070c
	if (!cr0.lt) goto loc_8313070C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8313070C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130728"))) PPC_WEAK_FUNC(sub_83130728);
PPC_FUNC_IMPL(__imp__sub_83130728) {
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
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130760
	if (!cr0.lt) goto loc_83130760;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130760:
	// li r11,1
	r11.s64 = 1;
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// stw r11,396(r30)
	PPC_STORE_U32(r30.u32 + 396, r11.u32);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130784
	if (!cr0.lt) goto loc_83130784;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130784:
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

__attribute__((alias("__imp__sub_831307A0"))) PPC_WEAK_FUNC(sub_831307A0);
PPC_FUNC_IMPL(__imp__sub_831307A0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r10,-4468
	ctx.r3.s64 = ctx.r10.s64 + -4468;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r11,r11,1920
	r11.s64 = r11.s64 + 1920;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r31,r10,30864
	r31.s64 = ctx.r10.s64 + 30864;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
loc_831307D4:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwcx. r8,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x831307d4
	if (!cr0.eq) goto loc_831307D4;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83130854
	if (!cr6.eq) goto loc_83130854;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8313081c
	if (!cr0.eq) goto loc_8313081C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4604
	ctx.r3.s64 = r11.s64 + 4604;
	// b 0x83130850
	goto loc_83130850;
loc_8313081C:
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130834
	if (!cr0.lt) goto loc_83130834;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130834:
	// bl 0x8312fcd8
	sub_8312FCD8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130854
	if (!cr0.lt) goto loc_83130854;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
loc_83130850:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130854:
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

__attribute__((alias("__imp__sub_83130868"))) PPC_WEAK_FUNC(sub_83130868);
PPC_FUNC_IMPL(__imp__sub_83130868) {
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
	// addi r28,r11,30884
	r28.s64 = r11.s64 + 30884;
	// lwz r3,-12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -12);
	// bl 0x831386f8
	sub_831386F8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -8);
	// bl 0x831386f8
	sub_831386F8(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x831308a0
	if (!cr6.eq) goto loc_831308A0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83130c28
	if (cr6.eq) goto loc_83130C28;
loc_831308A0:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r26,3
	r26.s64 = 3;
	// addi r27,r11,-4344
	r27.s64 = r11.s64 + -4344;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r27,324
	r31.s64 = r27.s64 + 324;
	// addi r29,r11,-4792
	r29.s64 = r11.s64 + -4792;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r24,0
	r24.s64 = 0;
	// addi r30,r11,2416
	r30.s64 = r11.s64 + 2416;
loc_831308C4:
	// lwz r11,-324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -324);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8313095c
	if (!cr6.eq) goto loc_8313095C;
	// lwz r11,-316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -316);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8313095c
	if (!cr6.eq) goto loc_8313095C;
	// lwz r4,-12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble 0x83130948
	if (!cr0.gt) goto loc_83130948;
	// bl 0x83138948
	sub_83138948(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8313095c
	if (!cr6.eq) goto loc_8313095C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83130920
	if (!cr6.eq) goto loc_83130920;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ld r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 4);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,-48(r31)
	PPC_STORE_U32(r31.u32 + -48, r11.u32);
	// std r10,-44(r31)
	PPC_STORE_U64(r31.u32 + -44, ctx.r10.u64);
	// stw r9,-36(r31)
	PPC_STORE_U32(r31.u32 + -36, ctx.r9.u32);
	// b 0x8313093c
	goto loc_8313093C;
loc_83130920:
	// addi r5,r31,-308
	ctx.r5.s64 = r31.s64 + -308;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// stw r26,-320(r31)
	PPC_STORE_U32(r31.u32 + -320, r26.u32);
loc_8313093C:
	// stw r24,-316(r31)
	PPC_STORE_U32(r31.u32 + -316, r24.u32);
	// stw r24,-12(r31)
	PPC_STORE_U32(r31.u32 + -12, r24.u32);
	// b 0x8313095c
	goto loc_8313095C;
loc_83130948:
	// lis r11,-31981
	r11.s64 = -2095906816;
	// addi r5,r31,-4
	ctx.r5.s64 = r31.s64 + -4;
	// addi r4,r11,-2240
	ctx.r4.s64 = r11.s64 + -2240;
	// bl 0x83138790
	sub_83138790(ctx, base);
	// stw r3,-12(r31)
	PPC_STORE_U32(r31.u32 + -12, ctx.r3.u32);
loc_8313095C:
	// addis r11,r27,1
	r11.s64 = r27.s64 + 65536;
	// addi r31,r31,440
	r31.s64 = r31.s64 + 440;
	// addi r11,r11,-30012
	r11.s64 = r11.s64 + -30012;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x831308c4
	if (cr6.lt) goto loc_831308C4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r31,r27,296
	r31.s64 = r27.s64 + 296;
	// addi r30,r11,2456
	r30.s64 = r11.s64 + 2456;
	// li r25,1
	r25.s64 = 1;
loc_83130980:
	// lwz r11,-296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -296);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83130a18
	if (!cr6.eq) goto loc_83130A18;
	// lwz r11,-288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -288);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83130a18
	if (!cr6.eq) goto loc_83130A18;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble 0x83130a04
	if (!cr0.gt) goto loc_83130A04;
	// bl 0x83138948
	sub_83138948(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83130a18
	if (!cr6.eq) goto loc_83130A18;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831309d8
	if (!cr6.eq) goto loc_831309D8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r25,-292(r31)
	PPC_STORE_U32(r31.u32 + -292, r25.u32);
	// rlwinm r11,r11,11,0,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x831309f8
	goto loc_831309F8;
loc_831309D8:
	// addi r5,r31,-280
	ctx.r5.s64 = r31.s64 + -280;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// stw r26,-292(r31)
	PPC_STORE_U32(r31.u32 + -292, r26.u32);
	// std r24,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r24.u64);
loc_831309F8:
	// stw r24,-288(r31)
	PPC_STORE_U32(r31.u32 + -288, r24.u32);
	// stw r24,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r24.u32);
	// b 0x83130a18
	goto loc_83130A18;
loc_83130A04:
	// lis r11,-31981
	r11.s64 = -2095906816;
	// addi r5,r31,56
	ctx.r5.s64 = r31.s64 + 56;
	// addi r4,r11,-1560
	ctx.r4.s64 = r11.s64 + -1560;
	// bl 0x83138790
	sub_83138790(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_83130A18:
	// addis r11,r27,1
	r11.s64 = r27.s64 + 65536;
	// addi r31,r31,440
	r31.s64 = r31.s64 + 440;
	// addi r11,r11,-30040
	r11.s64 = r11.s64 + -30040;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83130980
	if (cr6.lt) goto loc_83130980;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r31,r27,324
	r31.s64 = r27.s64 + 324;
	// addi r30,r11,2500
	r30.s64 = r11.s64 + 2500;
loc_83130A38:
	// lwz r11,-324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -324);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83130ad0
	if (!cr6.eq) goto loc_83130AD0;
	// lwz r11,-316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -316);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83130ad0
	if (!cr6.eq) goto loc_83130AD0;
	// lwz r4,-12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble 0x83130abc
	if (!cr0.gt) goto loc_83130ABC;
	// bl 0x83138948
	sub_83138948(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83130ad0
	if (!cr6.eq) goto loc_83130AD0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83130a94
	if (!cr6.eq) goto loc_83130A94;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ld r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 4);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,-48(r31)
	PPC_STORE_U32(r31.u32 + -48, r11.u32);
	// std r10,-44(r31)
	PPC_STORE_U64(r31.u32 + -44, ctx.r10.u64);
	// stw r9,-36(r31)
	PPC_STORE_U32(r31.u32 + -36, ctx.r9.u32);
	// b 0x83130ab0
	goto loc_83130AB0;
loc_83130A94:
	// addi r5,r31,-308
	ctx.r5.s64 = r31.s64 + -308;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// stw r26,-320(r31)
	PPC_STORE_U32(r31.u32 + -320, r26.u32);
loc_83130AB0:
	// stw r24,-316(r31)
	PPC_STORE_U32(r31.u32 + -316, r24.u32);
	// stw r24,-12(r31)
	PPC_STORE_U32(r31.u32 + -12, r24.u32);
	// b 0x83130ad0
	goto loc_83130AD0;
loc_83130ABC:
	// lis r11,-31981
	r11.s64 = -2095906816;
	// addi r5,r31,-4
	ctx.r5.s64 = r31.s64 + -4;
	// addi r4,r11,-2008
	ctx.r4.s64 = r11.s64 + -2008;
	// bl 0x83138790
	sub_83138790(ctx, base);
	// stw r3,-12(r31)
	PPC_STORE_U32(r31.u32 + -12, ctx.r3.u32);
loc_83130AD0:
	// addis r11,r27,1
	r11.s64 = r27.s64 + 65536;
	// addi r31,r31,440
	r31.s64 = r31.s64 + 440;
	// addi r11,r11,-30012
	r11.s64 = r11.s64 + -30012;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83130a38
	if (cr6.lt) goto loc_83130A38;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r31,r27,408
	r31.s64 = r27.s64 + 408;
	// addi r30,r11,2540
	r30.s64 = r11.s64 + 2540;
loc_83130AF0:
	// lwz r11,-408(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -408);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83130b90
	if (!cr6.eq) goto loc_83130B90;
	// lwz r11,-400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -400);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x83130b90
	if (!cr6.eq) goto loc_83130B90;
	// lwz r4,-96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -96);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble 0x83130b7c
	if (!cr0.gt) goto loc_83130B7C;
	// bl 0x83138948
	sub_83138948(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83130b90
	if (!cr6.eq) goto loc_83130B90;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83130b54
	if (!cr6.eq) goto loc_83130B54;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// lwz r9,-116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + -116);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// stw r11,-120(r31)
	PPC_STORE_U32(r31.u32 + -120, r11.u32);
	// std r10,-128(r31)
	PPC_STORE_U64(r31.u32 + -128, ctx.r10.u64);
	// ble cr6,0x83130b70
	if (!cr6.gt) goto loc_83130B70;
	// stw r11,-116(r31)
	PPC_STORE_U32(r31.u32 + -116, r11.u32);
	// b 0x83130b70
	goto loc_83130B70;
loc_83130B54:
	// addi r5,r31,-392
	ctx.r5.s64 = r31.s64 + -392;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// stw r26,-404(r31)
	PPC_STORE_U32(r31.u32 + -404, r26.u32);
loc_83130B70:
	// stw r24,-400(r31)
	PPC_STORE_U32(r31.u32 + -400, r24.u32);
	// stw r24,-96(r31)
	PPC_STORE_U32(r31.u32 + -96, r24.u32);
	// b 0x83130b90
	goto loc_83130B90;
loc_83130B7C:
	// lis r11,-31981
	r11.s64 = -2095906816;
	// addi r5,r31,-8
	ctx.r5.s64 = r31.s64 + -8;
	// addi r4,r11,-1272
	ctx.r4.s64 = r11.s64 + -1272;
	// bl 0x83138790
	sub_83138790(ctx, base);
	// stw r3,-96(r31)
	PPC_STORE_U32(r31.u32 + -96, ctx.r3.u32);
loc_83130B90:
	// addis r11,r27,1
	r11.s64 = r27.s64 + 65536;
	// addi r31,r31,440
	r31.s64 = r31.s64 + 440;
	// addi r11,r11,-29928
	r11.s64 = r11.s64 + -29928;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83130af0
	if (cr6.lt) goto loc_83130AF0;
	// lwz r5,-4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83130c28
	if (cr6.eq) goto loc_83130C28;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,-8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -8);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83130c18
	if (!cr6.gt) goto loc_83130C18;
	// bl 0x83138948
	sub_83138948(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83130c28
	if (!cr6.eq) goto loc_83130C28;
	// lwz r11,-4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83130c00
	if (cr6.eq) goto loc_83130C00;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,2580
	ctx.r4.s64 = ctx.r10.s64 + 2580;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// lwz r11,-4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -4);
loc_83130C00:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r11,r24
	r11.u64 = r24.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r11,-4(r28)
	PPC_STORE_U32(r28.u32 + -4, r11.u32);
	// b 0x83130c28
	goto loc_83130C28;
loc_83130C18:
	// lis r11,-31981
	r11.s64 = -2095906816;
	// addi r4,r11,-1104
	ctx.r4.s64 = r11.s64 + -1104;
	// bl 0x83138790
	sub_83138790(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_83130C28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83130C30"))) PPC_WEAK_FUNC(sub_83130C30);
PPC_FUNC_IMPL(__imp__sub_83130C30) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130c68
	if (!cr0.lt) goto loc_83130C68;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130C68:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83130c84
	if (!cr6.eq) goto loc_83130C84;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2632
	ctx.r3.s64 = r11.s64 + 2632;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130C7C:
	// li r31,0
	r31.s64 = 0;
	// b 0x83130ca8
	goto loc_83130CA8;
loc_83130C84:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137e98
	sub_83137E98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cd6e8
	sub_831CD6E8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83130c7c
	if (cr6.eq) goto loc_83130C7C;
	// not r11,r3
	r11.u64 = ~ctx.r3.u64;
	// rlwinm r31,r11,28,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
loc_83130CA8:
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130cc4
	if (!cr0.lt) goto loc_83130CC4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130CC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130CE0"))) PPC_WEAK_FUNC(sub_83130CE0);
PPC_FUNC_IMPL(__imp__sub_83130CE0) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130d18
	if (!cr0.lt) goto loc_83130D18;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130D18:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83130d34
	if (!cr6.eq) goto loc_83130D34;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2832
	ctx.r3.s64 = r11.s64 + 2832;
loc_83130D28:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x83130d58
	goto loc_83130D58;
loc_83130D34:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83130d4c
	if (!cr6.eq) goto loc_83130D4C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2792
	ctx.r3.s64 = r11.s64 + 2792;
	// b 0x83130d28
	goto loc_83130D28;
loc_83130D4C:
	// ld r11,280(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 280);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83130D58:
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130d74
	if (!cr0.lt) goto loc_83130D74;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130D74:
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

__attribute__((alias("__imp__sub_83130D90"))) PPC_WEAK_FUNC(sub_83130D90);
PPC_FUNC_IMPL(__imp__sub_83130D90) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130dc8
	if (!cr0.lt) goto loc_83130DC8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130DC8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83130de4
	if (!cr6.eq) goto loc_83130DE4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2912
	ctx.r3.s64 = r11.s64 + 2912;
loc_83130DD8:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x83130e08
	goto loc_83130E08;
loc_83130DE4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83130dfc
	if (!cr6.eq) goto loc_83130DFC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2872
	ctx.r3.s64 = r11.s64 + 2872;
	// b 0x83130dd8
	goto loc_83130DD8;
loc_83130DFC:
	// ld r11,280(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 280);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83130E08:
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130e24
	if (!cr0.lt) goto loc_83130E24;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130E24:
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

__attribute__((alias("__imp__sub_83130E40"))) PPC_WEAK_FUNC(sub_83130E40);
PPC_FUNC_IMPL(__imp__sub_83130E40) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130e78
	if (!cr0.lt) goto loc_83130E78;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130E78:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83130e94
	if (!cr6.eq) goto loc_83130E94;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2992
	ctx.r3.s64 = r11.s64 + 2992;
loc_83130E88:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x83130eb8
	goto loc_83130EB8;
loc_83130E94:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83130eac
	if (!cr6.eq) goto loc_83130EAC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2952
	ctx.r3.s64 = r11.s64 + 2952;
	// b 0x83130e88
	goto loc_83130E88;
loc_83130EAC:
	// ld r11,280(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 280);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83130EB8:
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130ed4
	if (!cr0.lt) goto loc_83130ED4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130ED4:
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

__attribute__((alias("__imp__sub_83130EF0"))) PPC_WEAK_FUNC(sub_83130EF0);
PPC_FUNC_IMPL(__imp__sub_83130EF0) {
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
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130f28
	if (!cr0.lt) goto loc_83130F28;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130F28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83130300
	sub_83130300(ctx, base);
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130f4c
	if (!cr0.lt) goto loc_83130F4C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130F4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83130F68"))) PPC_WEAK_FUNC(sub_83130F68);
PPC_FUNC_IMPL(__imp__sub_83130F68) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,30864(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83130fa0
	if (!cr0.lt) goto loc_83130FA0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83130FA0:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83130fc0
	if (!cr6.eq) goto loc_83130FC0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3312
	ctx.r3.s64 = r11.s64 + 3312;
loc_83130FB4:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// b 0x8313102c
	goto loc_8313102C;
loc_83130FC0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83130fd8
	if (!cr6.eq) goto loc_83130FD8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3272
	ctx.r3.s64 = r11.s64 + 3272;
	// b 0x83130fb4
	goto loc_83130FB4;
loc_83130FD8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x83130fe8
	if (!cr6.eq) goto loc_83130FE8;
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x83131008
	goto loc_83131008;
loc_83130FE8:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x83130ff8
	if (!cr6.eq) goto loc_83130FF8;
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// b 0x83131004
	goto loc_83131004;
loc_83130FF8:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x83131008
	if (!cr6.eq) goto loc_83131008;
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
loc_83131004:
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
loc_83131008:
	// lwz r10,288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83131018
	if (cr6.lt) goto loc_83131018;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_83131018:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x83131024
	if (cr6.gt) goto loc_83131024;
	// li r11,0
	r11.s64 = 0;
loc_83131024:
	// mr r30,r11
	r30.u64 = r11.u64;
	// stw r11,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r11.u32);
loc_8313102C:
	// lwz r3,30864(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131048
	if (!cr0.lt) goto loc_83131048;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131048:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83131058"))) PPC_WEAK_FUNC(sub_83131058);
PPC_FUNC_IMPL(__imp__sub_83131058) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131090
	if (!cr0.lt) goto loc_83131090;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131090:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831310ac
	if (!cr6.eq) goto loc_831310AC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3392
	ctx.r3.s64 = r11.s64 + 3392;
loc_831310A0:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x831310c8
	goto loc_831310C8;
loc_831310AC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831310c4
	if (!cr6.eq) goto loc_831310C4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3352
	ctx.r3.s64 = r11.s64 + 3352;
	// b 0x831310a0
	goto loc_831310A0;
loc_831310C4:
	// lwz r31,292(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 292);
loc_831310C8:
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831310e4
	if (!cr0.lt) goto loc_831310E4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831310E4:
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

__attribute__((alias("__imp__sub_83131100"))) PPC_WEAK_FUNC(sub_83131100);
PPC_FUNC_IMPL(__imp__sub_83131100) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131138
	if (!cr0.lt) goto loc_83131138;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131138:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83130418
	sub_83130418(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131168
	if (!cr0.lt) goto loc_83131168;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131168:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83131178"))) PPC_WEAK_FUNC(sub_83131178);
PPC_FUNC_IMPL(__imp__sub_83131178) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831311b0
	if (!cr0.lt) goto loc_831311B0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831311B0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83130570
	sub_83130570(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831311e0
	if (!cr0.lt) goto loc_831311E0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831311E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831311F0"))) PPC_WEAK_FUNC(sub_831311F0);
PPC_FUNC_IMPL(__imp__sub_831311F0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,30864(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131224
	if (!cr0.lt) goto loc_83131224;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131224:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83131240
	if (!cr6.eq) goto loc_83131240;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3920
	ctx.r3.s64 = r11.s64 + 3920;
loc_83131234:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131238:
	// li r30,-1
	r30.s64 = -1;
	// b 0x831312c8
	goto loc_831312C8;
loc_83131240:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83131258
	if (!cr6.eq) goto loc_83131258;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3880
	ctx.r3.s64 = r11.s64 + 3880;
	// b 0x83131234
	goto loc_83131234;
loc_83131258:
	// cmpdi cr6,r29,0
	cr6.compare<int64_t>(r29.s64, 0, xer);
	// bge cr6,0x8313126c
	if (!cr6.lt) goto loc_8313126C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3844
	ctx.r3.s64 = r11.s64 + 3844;
	// b 0x83131234
	goto loc_83131234;
loc_8313126C:
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83131238
	if (cr0.eq) goto loc_83131238;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83131298
	if (cr6.eq) goto loc_83131298;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3784
	ctx.r3.s64 = r11.s64 + 3784;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131290:
	// li r30,0
	r30.s64 = 0;
	// b 0x831312c8
	goto loc_831312C8;
loc_83131298:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83131290
	if (!cr6.eq) goto loc_83131290;
	// ld r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 280);
	// li r30,0
	r30.s64 = 0;
	// cmpd cr6,r10,r29
	cr6.compare<int64_t>(ctx.r10.s64, r29.s64, xer);
	// beq cr6,0x831312c8
	if (cr6.eq) goto loc_831312C8;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,400(r31)
	PPC_STORE_U32(r31.u32 + 400, r11.u32);
	// std r29,408(r31)
	PPC_STORE_U64(r31.u32 + 408, r29.u64);
	// stw r30,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r30.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_831312C8:
	// lwz r3,30864(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831312e4
	if (!cr0.lt) goto loc_831312E4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831312E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831312F0"))) PPC_WEAK_FUNC(sub_831312F0);
PPC_FUNC_IMPL(__imp__sub_831312F0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,30864(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131324
	if (!cr0.lt) goto loc_83131324;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131324:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83131340
	if (!cr6.eq) goto loc_83131340;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4000
	ctx.r3.s64 = r11.s64 + 4000;
loc_83131334:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131338:
	// li r30,-1
	r30.s64 = -1;
	// b 0x83131388
	goto loc_83131388;
loc_83131340:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83131358
	if (!cr6.eq) goto loc_83131358;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,3960
	ctx.r3.s64 = r11.s64 + 3960;
	// b 0x83131334
	goto loc_83131334;
loc_83131358:
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83131338
	if (cr0.eq) goto loc_83131338;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83131388
	if (!cr6.eq) goto loc_83131388;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,424(r31)
	PPC_STORE_U32(r31.u32 + 424, r11.u32);
	// stw r29,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r29.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r30.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_83131388:
	// lwz r3,30864(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831313a4
	if (!cr0.lt) goto loc_831313A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831313A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831313B0"))) PPC_WEAK_FUNC(sub_831313B0);
PPC_FUNC_IMPL(__imp__sub_831313B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,30880
	r30.s64 = r11.s64 + 30880;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831313e4
	if (!cr0.lt) goto loc_831313E4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831313E4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83131400
	if (!cr6.eq) goto loc_83131400;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4040
	ctx.r3.s64 = r11.s64 + 4040;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831313F8:
	// li r29,-1
	r29.s64 = -1;
	// b 0x8313141c
	goto loc_8313141C;
loc_83131400:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831313f8
	if (!cr6.eq) goto loc_831313F8;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8313141C:
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -16);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131438
	if (!cr0.lt) goto loc_83131438;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131438:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83131448"))) PPC_WEAK_FUNC(sub_83131448);
PPC_FUNC_IMPL(__imp__sub_83131448) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131478
	if (!cr0.lt) goto loc_83131478;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131478:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83131490
	if (!cr6.eq) goto loc_83131490;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4120
	ctx.r3.s64 = r11.s64 + 4120;
loc_83131488:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x831314d0
	goto loc_831314D0;
loc_83131490:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831314a8
	if (!cr6.eq) goto loc_831314A8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4080
	ctx.r3.s64 = r11.s64 + 4080;
	// b 0x83131488
	goto loc_83131488;
loc_831314A8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x831314cc
	if (!cr6.eq) goto loc_831314CC;
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 436);
	// bl 0x83138b28
	sub_83138B28(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r30.u32);
loc_831314CC:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_831314D0:
	// lwz r3,30864(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831314ec
	if (!cr0.lt) goto loc_831314EC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831314EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831314F8"))) PPC_WEAK_FUNC(sub_831314F8);
PPC_FUNC_IMPL(__imp__sub_831314F8) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131530
	if (!cr0.lt) goto loc_83131530;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131530:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313154c
	if (!cr6.eq) goto loc_8313154C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4200
	ctx.r3.s64 = r11.s64 + 4200;
loc_83131540:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x83131568
	goto loc_83131568;
loc_8313154C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83131564
	if (!cr6.eq) goto loc_83131564;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4160
	ctx.r3.s64 = r11.s64 + 4160;
	// b 0x83131540
	goto loc_83131540;
loc_83131564:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_83131568:
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131584
	if (!cr0.lt) goto loc_83131584;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131584:
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

__attribute__((alias("__imp__sub_831315A0"))) PPC_WEAK_FUNC(sub_831315A0);
PPC_FUNC_IMPL(__imp__sub_831315A0) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831315d8
	if (!cr0.lt) goto loc_831315D8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831315D8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831315f4
	if (!cr6.eq) goto loc_831315F4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4324
	ctx.r3.s64 = r11.s64 + 4324;
loc_831315E8:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x83131618
	goto loc_83131618;
loc_831315F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313160c
	if (!cr6.eq) goto loc_8313160C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4284
	ctx.r3.s64 = r11.s64 + 4284;
	// b 0x831315e8
	goto loc_831315E8;
loc_8313160C:
	// ld r11,304(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 304);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83131618:
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131634
	if (!cr0.lt) goto loc_83131634;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131634:
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

__attribute__((alias("__imp__sub_83131650"))) PPC_WEAK_FUNC(sub_83131650);
PPC_FUNC_IMPL(__imp__sub_83131650) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131688
	if (!cr0.lt) goto loc_83131688;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131688:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831316a4
	if (!cr6.eq) goto loc_831316A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4404
	ctx.r3.s64 = r11.s64 + 4404;
loc_83131698:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x831316c8
	goto loc_831316C8;
loc_831316A4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831316bc
	if (!cr6.eq) goto loc_831316BC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4364
	ctx.r3.s64 = r11.s64 + 4364;
	// b 0x83131698
	goto loc_83131698;
loc_831316BC:
	// ld r11,304(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 304);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831316C8:
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831316e4
	if (!cr0.lt) goto loc_831316E4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831316E4:
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

__attribute__((alias("__imp__sub_83131700"))) PPC_WEAK_FUNC(sub_83131700);
PPC_FUNC_IMPL(__imp__sub_83131700) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131738
	if (!cr0.lt) goto loc_83131738;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131738:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83131754
	if (!cr6.eq) goto loc_83131754;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4484
	ctx.r3.s64 = r11.s64 + 4484;
loc_83131748:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x83131778
	goto loc_83131778;
loc_83131754:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313176c
	if (!cr6.eq) goto loc_8313176C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4444
	ctx.r3.s64 = r11.s64 + 4444;
	// b 0x83131748
	goto loc_83131748;
loc_8313176C:
	// ld r11,304(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 304);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_83131778:
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131794
	if (!cr0.lt) goto loc_83131794;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131794:
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

__attribute__((alias("__imp__sub_831317B0"))) PPC_WEAK_FUNC(sub_831317B0);
PPC_FUNC_IMPL(__imp__sub_831317B0) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831317e8
	if (!cr0.lt) goto loc_831317E8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831317E8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83131804
	if (!cr6.eq) goto loc_83131804;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4564
	ctx.r3.s64 = r11.s64 + 4564;
loc_831317F8:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x8313182c
	goto loc_8313182C;
loc_83131804:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313181c
	if (!cr6.eq) goto loc_8313181C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4524
	ctx.r3.s64 = r11.s64 + 4524;
	// b 0x831317f8
	goto loc_831317F8;
loc_8313181C:
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r31,r11,1
	r31.u64 = r11.u64 ^ 1;
loc_8313182C:
	// lwz r3,30864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131848
	if (!cr0.lt) goto loc_83131848;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131848:
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

__attribute__((alias("__imp__sub_83131868"))) PPC_WEAK_FUNC(sub_83131868);
PPC_FUNC_IMPL(__imp__sub_83131868) {
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
	// addi r31,r11,30876
	r31.s64 = r11.s64 + 30876;
	// addi r8,r31,-16
	ctx.r8.s64 = r31.s64 + -16;
loc_83131880:
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
	// bne 0x83131880
	if (!cr0.eq) goto loc_83131880;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83131968
	if (!cr6.eq) goto loc_83131968;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831318c4
	if (!cr0.lt) goto loc_831318C4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831318C4:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r29,r11,-4344
	r29.s64 = r11.s64 + -4344;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_831318D0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831318e4
	if (cr6.eq) goto loc_831318E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83130300
	sub_83130300(ctx, base);
loc_831318E4:
	// addis r11,r29,1
	r11.s64 = r29.s64 + 65536;
	// addi r30,r30,440
	r30.s64 = r30.s64 + 440;
	// addi r11,r11,-30336
	r11.s64 = r11.s64 + -30336;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x831318d0
	if (cr6.lt) goto loc_831318D0;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83131910
	if (cr6.eq) goto loc_83131910;
	// bl 0x83138b68
	sub_83138B68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r11.u32);
loc_83131910:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83131928
	if (cr6.eq) goto loc_83131928;
	// bl 0x83138b68
	sub_83138B68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83131928:
	// bl 0x83138488
	sub_83138488(ctx, base);
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131948
	if (!cr0.lt) goto loc_83131948;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131948:
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83131960
	if (cr6.eq) goto loc_83131960;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-12(r31)
	PPC_STORE_U32(r31.u32 + -12, r11.u32);
loc_83131960:
	// bl 0x8312e690
	sub_8312E690(ctx, base);
	// bl 0x83137e50
	sub_83137E50(ctx, base);
loc_83131968:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83131970"))) PPC_WEAK_FUNC(sub_83131970);
PPC_FUNC_IMPL(__imp__sub_83131970) {
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
	// lis r26,-31942
	r26.s64 = -2093350912;
	// lwz r3,30864(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8313199c
	if (!cr0.lt) goto loc_8313199C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_8313199C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,-4344
	r27.s64 = r11.s64 + -4344;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r27,392
	r31.s64 = r27.s64 + 392;
	// addi r30,r11,-4792
	r30.s64 = r11.s64 + -4792;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r28,r11,2372
	r28.s64 = r11.s64 + 2372;
loc_831319BC:
	// lwz r11,-392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -392);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83131a3c
	if (!cr6.eq) goto loc_83131A3C;
	// lwz r11,-384(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -384);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83131a3c
	if (!cr6.eq) goto loc_83131A3C;
	// lwz r4,-80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -80);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x83138948
	sub_83138948(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83131a3c
	if (!cr6.eq) goto loc_83131A3C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83131a10
	if (!cr6.eq) goto loc_83131A10;
	// lwz r11,-96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -96);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,11,0,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// stw r10,-388(r31)
	PPC_STORE_U32(r31.u32 + -388, ctx.r10.u32);
	// std r11,-88(r31)
	PPC_STORE_U64(r31.u32 + -88, r11.u64);
	// b 0x83131a34
	goto loc_83131A34;
loc_83131A10:
	// addi r5,r31,-376
	ctx.r5.s64 = r31.s64 + -376;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// std r29,-88(r31)
	PPC_STORE_U64(r31.u32 + -88, r29.u64);
	// stw r11,-388(r31)
	PPC_STORE_U32(r31.u32 + -388, r11.u32);
loc_83131A34:
	// stw r29,-384(r31)
	PPC_STORE_U32(r31.u32 + -384, r29.u32);
	// stw r29,-80(r31)
	PPC_STORE_U32(r31.u32 + -80, r29.u32);
loc_83131A3C:
	// addis r11,r27,1
	r11.s64 = r27.s64 + 65536;
	// addi r31,r31,440
	r31.s64 = r31.s64 + 440;
	// addi r11,r11,-29944
	r11.s64 = r11.s64 + -29944;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x831319bc
	if (cr6.lt) goto loc_831319BC;
	// lwz r3,30864(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131a6c
	if (!cr0.lt) goto loc_83131A6C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131A6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83131A78"))) PPC_WEAK_FUNC(sub_83131A78);
PPC_FUNC_IMPL(__imp__sub_83131A78) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131aa8
	if (!cr0.lt) goto loc_83131AA8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131AA8:
	// bl 0x83130868
	sub_83130868(ctx, base);
	// lwz r3,30864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131ac8
	if (!cr0.lt) goto loc_83131AC8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131AC8:
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

__attribute__((alias("__imp__sub_83131AE0"))) PPC_WEAK_FUNC(sub_83131AE0);
PPC_FUNC_IMPL(__imp__sub_83131AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,301
	cr6.compare<int32_t>(ctx.r4.s32, 301, xer);
	// bgt cr6,0x83131b50
	if (cr6.gt) goto loc_83131B50;
	// beq cr6,0x83131b48
	if (cr6.eq) goto loc_83131B48;
	// cmpwi cr6,r4,200
	cr6.compare<int32_t>(ctx.r4.s32, 200, xer);
	// beq cr6,0x83131b40
	if (cr6.eq) goto loc_83131B40;
	// cmpwi cr6,r4,201
	cr6.compare<int32_t>(ctx.r4.s32, 201, xer);
	// beq cr6,0x83131b38
	if (cr6.eq) goto loc_83131B38;
	// cmpwi cr6,r4,202
	cr6.compare<int32_t>(ctx.r4.s32, 202, xer);
	// beq cr6,0x83131b30
	if (cr6.eq) goto loc_83131B30;
	// cmpwi cr6,r4,203
	cr6.compare<int32_t>(ctx.r4.s32, 203, xer);
	// beq cr6,0x83131b28
	if (cr6.eq) goto loc_83131B28;
	// cmpwi cr6,r4,300
	cr6.compare<int32_t>(ctx.r4.s32, 300, xer);
	// bne cr6,0x83131b70
	if (!cr6.eq) goto loc_83131B70;
	// bl 0x83130ce0
	sub_83130CE0(ctx, base);
	// b 0x83131b98
	goto loc_83131B98;
loc_83131B28:
	// bl 0x8312feb8
	sub_8312FEB8(ctx, base);
	// b 0x83131b98
	goto loc_83131B98;
loc_83131B30:
	// bl 0x8312fe38
	sub_8312FE38(ctx, base);
	// b 0x83131b98
	goto loc_83131B98;
loc_83131B38:
	// bl 0x83131700
	sub_83131700(ctx, base);
	// b 0x83131b98
	goto loc_83131B98;
loc_83131B40:
	// bl 0x83131650
	sub_83131650(ctx, base);
	// b 0x83131b98
	goto loc_83131B98;
loc_83131B48:
	// bl 0x83130d90
	sub_83130D90(ctx, base);
	// b 0x83131b98
	goto loc_83131B98;
loc_83131B50:
	// cmpwi cr6,r4,302
	cr6.compare<int32_t>(ctx.r4.s32, 302, xer);
	// beq cr6,0x83131b94
	if (cr6.eq) goto loc_83131B94;
	// cmpwi cr6,r4,500
	cr6.compare<int32_t>(ctx.r4.s32, 500, xer);
	// beq cr6,0x83131b88
	if (cr6.eq) goto loc_83131B88;
	// cmpwi cr6,r4,501
	cr6.compare<int32_t>(ctx.r4.s32, 501, xer);
	// beq cr6,0x83131b80
	if (cr6.eq) goto loc_83131B80;
	// cmpwi cr6,r4,600
	cr6.compare<int32_t>(ctx.r4.s32, 600, xer);
	// beq cr6,0x83131b78
	if (cr6.eq) goto loc_83131B78;
loc_83131B70:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83131b98
	goto loc_83131B98;
loc_83131B78:
	// bl 0x831317b0
	sub_831317B0(ctx, base);
	// b 0x83131b98
	goto loc_83131B98;
loc_83131B80:
	// bl 0x83130728
	sub_83130728(ctx, base);
	// b 0x83131b98
	goto loc_83131B98;
loc_83131B88:
	// bl 0x83131a78
	sub_83131A78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83131b98
	goto loc_83131B98;
loc_83131B94:
	// bl 0x83130e40
	sub_83130E40(ctx, base);
loc_83131B98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131BA8"))) PPC_WEAK_FUNC(sub_83131BA8);
PPC_FUNC_IMPL(__imp__sub_83131BA8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,30864(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 30864);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131bdc
	if (!cr0.lt) goto loc_83131BDC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2104
	ctx.r3.s64 = r11.s64 + 2104;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131BDC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83131bf8
	if (!cr6.eq) goto loc_83131BF8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4696
	ctx.r3.s64 = r11.s64 + 4696;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// b 0x83131c30
	goto loc_83131C30;
loc_83131BF8:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// blt cr6,0x83131c24
	if (cr6.lt) goto loc_83131C24;
	// beq cr6,0x83131c18
	if (cr6.eq) goto loc_83131C18;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4652
	ctx.r3.s64 = r11.s64 + 4652;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x83131c30
	goto loc_83131C30;
loc_83131C18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831301f8
	sub_831301F8(ctx, base);
	// b 0x83131c2c
	goto loc_83131C2C;
loc_83131C24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8312fff0
	sub_8312FFF0(ctx, base);
loc_83131C2C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_83131C30:
	// lwz r3,30864(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 30864);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83131c4c
	if (!cr0.lt) goto loc_83131C4C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,2200
	ctx.r3.s64 = r11.s64 + 2200;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83131C4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83131C58"))) PPC_WEAK_FUNC(sub_83131C58);
PPC_FUNC_IMPL(__imp__sub_83131C58) {
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
	// addi r8,r11,30892
	ctx.r8.s64 = r11.s64 + 30892;
loc_83131C6C:
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
	// bne 0x83131c6c
	if (!cr0.eq) goto loc_83131C6C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83131c9c
	if (!cr6.eq) goto loc_83131C9C;
	// bl 0x8312f5b8
	sub_8312F5B8(ctx, base);
	// bl 0x83138ea8
	sub_83138EA8(ctx, base);
loc_83131C9C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131CB0"))) PPC_WEAK_FUNC(sub_83131CB0);
PPC_FUNC_IMPL(__imp__sub_83131CB0) {
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
	// addi r8,r11,30892
	ctx.r8.s64 = r11.s64 + 30892;
loc_83131CC4:
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
	// bne 0x83131cc4
	if (!cr0.eq) goto loc_83131CC4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83131cf4
	if (!cr6.eq) goto loc_83131CF4;
	// bl 0x83139140
	sub_83139140(ctx, base);
	// bl 0x8312f638
	sub_8312F638(ctx, base);
loc_83131CF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131D08"))) PPC_WEAK_FUNC(sub_83131D08);
PPC_FUNC_IMPL(__imp__sub_83131D08) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// bl 0x83139230
	sub_83139230(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131D30"))) PPC_WEAK_FUNC(sub_83131D30);
PPC_FUNC_IMPL(__imp__sub_83131D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32372
	r11.s64 = r11.s64 + 32372;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83131D58"))) PPC_WEAK_FUNC(sub_83131D58);
PPC_FUNC_IMPL(__imp__sub_83131D58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131D60"))) PPC_WEAK_FUNC(sub_83131D60);
PPC_FUNC_IMPL(__imp__sub_83131D60) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// lwz r30,32376(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 32376);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x83131dbc
	if (!cr6.eq) goto loc_83131DBC;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r5,640
	ctx.r5.s64 = 640;
	// addi r31,r11,30896
	r31.s64 = r11.s64 + 30896;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r3,r31,960
	ctx.r3.s64 = r31.s64 + 960;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_83131DBC:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// stw r11,32376(r29)
	PPC_STORE_U32(r29.u32 + 32376, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83131DD0"))) PPC_WEAK_FUNC(sub_83131DD0);
PPC_FUNC_IMPL(__imp__sub_83131DD0) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32376(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32376);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,32376(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32376, r11.u32);
	// bne 0x83131e6c
	if (!cr0.eq) goto loc_83131E6C;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,30896
	r30.s64 = r11.s64 + 30896;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
loc_83131E04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83131e20
	if (cr0.eq) goto loc_83131E20;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83131E20:
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r11,r11,640
	r11.s64 = r11.s64 + 640;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83131e04
	if (cr6.lt) goto loc_83131E04;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r3,r30,960
	ctx.r3.s64 = r30.s64 + 960;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
loc_83131E6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83131E88"))) PPC_WEAK_FUNC(sub_83131E88);
PPC_FUNC_IMPL(__imp__sub_83131E88) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83131EA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83131ea0
	if (!cr6.eq) goto loc_83131EA0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r29,r10,31856
	r29.s64 = ctx.r10.s64 + 31856;
	// rotlwi r28,r11,0
	r28.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r30,0
	r30.s64 = 0;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
loc_83131ECC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83131f00
	if (cr0.eq) goto loc_83131F00;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(r30.u32, 32, xer);
	// blt cr6,0x83131ecc
	if (cr6.lt) goto loc_83131ECC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83131EF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83131F00:
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// b 0x83131ef8
	goto loc_83131EF8;
}

__attribute__((alias("__imp__sub_83131F10"))) PPC_WEAK_FUNC(sub_83131F10);
PPC_FUNC_IMPL(__imp__sub_83131F10) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8313205c
	if (cr6.eq) goto loc_8313205C;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// subf r7,r5,r31
	ctx.r7.s64 = r31.s64 - ctx.r5.s64;
loc_83131F44:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,58
	cr6.compare<int32_t>(ctx.r8.s32, 58, xer);
	// beq cr6,0x83131f70
	if (cr6.eq) goto loc_83131F70;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83131f70
	if (cr6.eq) goto loc_83131F70;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stbx r9,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,297
	cr6.compare<int32_t>(r11.s32, 297, xer);
	// blt cr6,0x83131f44
	if (cr6.lt) goto loc_83131F44;
loc_83131F70:
	// lbzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r5.u32);
	// stbx r30,r11,r31
	PPC_STORE_U8(r11.u32 + r31.u32, r30.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83131fb8
	if (!cr6.eq) goto loc_83131FB8;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_83131F88:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83131f88
	if (!cr6.eq) goto loc_83131F88;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// b 0x8313205c
	goto loc_8313205C;
loc_83131FB8:
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x83131fcc
	if (!cr6.eq) goto loc_83131FCC;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
loc_83131FCC:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,297
	cr6.compare<int32_t>(ctx.r9.s32, 297, xer);
	// bge cr6,0x83131ff8
	if (!cr6.lt) goto loc_83131FF8;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
loc_83131FDC:
	// lbzx r11,r10,r5
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83131ff8
	if (cr0.eq) goto loc_83131FF8;
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,297
	cr6.compare<int32_t>(ctx.r10.s32, 297, xer);
	// blt cr6,0x83131fdc
	if (cr6.lt) goto loc_83131FDC;
loc_83131FF8:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stbx r30,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, r30.u8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83132008:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83132008
	if (!cr6.eq) goto loc_83132008;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addic. r9,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r9.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8313205c
	if (cr0.eq) goto loc_8313205C;
loc_83132030:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x83132050
	if (cr6.lt) goto loc_83132050;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x83132050
	if (cr6.gt) goto loc_83132050;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stbx r10,r11,r31
	PPC_STORE_U8(r11.u32 + r31.u32, ctx.r10.u8);
loc_83132050:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83132030
	if (cr6.lt) goto loc_83132030;
loc_8313205C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132078"))) PPC_WEAK_FUNC(sub_83132078);
PPC_FUNC_IMPL(__imp__sub_83132078) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831320b4
	if (!cr6.eq) goto loc_831320B4;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132110
	if (cr6.eq) goto loc_83132110;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,4812
	ctx.r4.s64 = ctx.r10.s64 + 4812;
	// b 0x831320fc
	goto loc_831320FC;
loc_831320B4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831320e0
	if (cr0.eq) goto loc_831320E0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x83132110
	goto loc_83132110;
loc_831320E0:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132110
	if (cr6.eq) goto loc_83132110;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,4788
	ctx.r4.s64 = ctx.r10.s64 + 4788;
loc_831320FC:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132110:
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

__attribute__((alias("__imp__sub_83132128"))) PPC_WEAK_FUNC(sub_83132128);
PPC_FUNC_IMPL(__imp__sub_83132128) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83132178
	if (!cr6.eq) goto loc_83132178;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132170
	if (cr6.eq) goto loc_83132170;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4864
	ctx.r4.s64 = ctx.r10.s64 + 4864;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132170:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831321d4
	goto loc_831321D4;
loc_83132178:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313219c
	if (cr0.eq) goto loc_8313219C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x831321d0
	goto loc_831321D0;
loc_8313219C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831321d0
	if (cr6.eq) goto loc_831321D0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4840
	ctx.r4.s64 = ctx.r10.s64 + 4840;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831321D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831321D4:
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

__attribute__((alias("__imp__sub_831321E8"))) PPC_WEAK_FUNC(sub_831321E8);
PPC_FUNC_IMPL(__imp__sub_831321E8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83132238
	if (!cr6.eq) goto loc_83132238;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132230
	if (cr6.eq) goto loc_83132230;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4916
	ctx.r4.s64 = ctx.r10.s64 + 4916;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132230:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83132294
	goto loc_83132294;
loc_83132238:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313225c
	if (cr0.eq) goto loc_8313225C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x83132290
	goto loc_83132290;
loc_8313225C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132290
	if (cr6.eq) goto loc_83132290;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4892
	ctx.r4.s64 = ctx.r10.s64 + 4892;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132290:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83132294:
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

__attribute__((alias("__imp__sub_831322A8"))) PPC_WEAK_FUNC(sub_831322A8);
PPC_FUNC_IMPL(__imp__sub_831322A8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831322f8
	if (!cr6.eq) goto loc_831322F8;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831322f0
	if (cr6.eq) goto loc_831322F0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4968
	ctx.r4.s64 = ctx.r10.s64 + 4968;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831322F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83132354
	goto loc_83132354;
loc_831322F8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313231c
	if (cr0.eq) goto loc_8313231C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x83132350
	goto loc_83132350;
loc_8313231C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132350
	if (cr6.eq) goto loc_83132350;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4944
	ctx.r4.s64 = ctx.r10.s64 + 4944;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132350:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83132354:
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

__attribute__((alias("__imp__sub_83132368"))) PPC_WEAK_FUNC(sub_83132368);
PPC_FUNC_IMPL(__imp__sub_83132368) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,31856
	r30.s64 = r11.s64 + 31856;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_83132388:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831323a8
	if (cr0.eq) goto loc_831323A8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831323a8
	if (cr0.eq) goto loc_831323A8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831323A8:
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r11,r30,512
	r11.s64 = r30.s64 + 512;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83132388
	if (cr6.lt) goto loc_83132388;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831323D0"))) PPC_WEAK_FUNC(sub_831323D0);
PPC_FUNC_IMPL(__imp__sub_831323D0) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,31856
	r30.s64 = r11.s64 + 31856;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_831323F0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83132420
	if (cr0.eq) goto loc_83132420;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83132420
	if (cr0.eq) goto loc_83132420;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,500
	ctx.r4.s64 = 500;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132420:
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r11,r30,512
	r11.s64 = r30.s64 + 512;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x831323f0
	if (cr6.lt) goto loc_831323F0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132448"))) PPC_WEAK_FUNC(sub_83132448);
PPC_FUNC_IMPL(__imp__sub_83132448) {
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
	// li r31,3
	r31.s64 = 3;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313249c
	if (!cr6.eq) goto loc_8313249C;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132494
	if (cr6.eq) goto loc_83132494;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,5024
	ctx.r4.s64 = ctx.r10.s64 + 5024;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132494:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x831324f4
	goto loc_831324F4;
loc_8313249C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x831324c0
	if (cr0.eq) goto loc_831324C0;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x831324f0
	goto loc_831324F0;
loc_831324C0:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831324f0
	if (cr6.eq) goto loc_831324F0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4996
	ctx.r4.s64 = ctx.r10.s64 + 4996;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831324F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831324F4:
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

__attribute__((alias("__imp__sub_83132508"))) PPC_WEAK_FUNC(sub_83132508);
PPC_FUNC_IMPL(__imp__sub_83132508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83132558
	if (!cr6.eq) goto loc_83132558;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132550
	if (cr6.eq) goto loc_83132550;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,5052
	ctx.r4.s64 = ctx.r10.s64 + 5052;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132550:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83132584
	goto loc_83132584;
loc_83132558:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83132584
	if (cr0.eq) goto loc_83132584;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,600
	ctx.r4.s64 = 600;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132584:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132598"))) PPC_WEAK_FUNC(sub_83132598);
PPC_FUNC_IMPL(__imp__sub_83132598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,501
	ctx.r4.s64 = 501;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831325D0"))) PPC_WEAK_FUNC(sub_831325D0);
PPC_FUNC_IMPL(__imp__sub_831325D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831325D8"))) PPC_WEAK_FUNC(sub_831325D8);
PPC_FUNC_IMPL(__imp__sub_831325D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r11,32372
	r11.s64 = r11.s64 + 32372;
	// bne cr6,0x831325f8
	if (!cr6.eq) goto loc_831325F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_831325F8:
	// stw r3,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r3.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132608"))) PPC_WEAK_FUNC(sub_83132608);
PPC_FUNC_IMPL(__imp__sub_83132608) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r30,r11,30896
	r30.s64 = r11.s64 + 30896;
	// bne cr6,0x83132630
	if (!cr6.eq) goto loc_83132630;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_83132630:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83131e88
	sub_83131E88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83132698
	if (cr0.eq) goto loc_83132698;
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83132664
	if (cr0.eq) goto loc_83132664;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132664:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83132698
	if (!cr6.eq) goto loc_83132698;
	// addi r3,r30,656
	ctx.r3.s64 = r30.s64 + 656;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,297
	ctx.r4.s64 = 297;
	// bl 0x83138218
	sub_83138218(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r7,r30,656
	ctx.r7.s64 = r30.s64 + 656;
	// addi r5,r11,5092
	ctx.r5.s64 = r11.s64 + 5092;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,297
	ctx.r4.s64 = 297;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831382d8
	sub_831382D8(ctx, base);
loc_83132698:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831326A0"))) PPC_WEAK_FUNC(sub_831326A0);
PPC_FUNC_IMPL(__imp__sub_831326A0) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831326f8
	if (!cr6.eq) goto loc_831326F8;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831326f0
	if (cr6.eq) goto loc_831326F0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,5100
	ctx.r4.s64 = ctx.r10.s64 + 5100;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831326F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83132758
	goto loc_83132758;
loc_831326F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83132758
	if (cr0.eq) goto loc_83132758;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,301
	ctx.r4.s64 = 301;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,302
	ctx.r4.s64 = 302;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rldicr r10,r30,32,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_83132758:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132770"))) PPC_WEAK_FUNC(sub_83132770);
PPC_FUNC_IMPL(__imp__sub_83132770) {
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
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83132790:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83132790
	if (!cr6.eq) goto loc_83132790;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addic. r9,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r9.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x831327e4
	if (cr0.eq) goto loc_831327E4;
loc_831327B8:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x831327d8
	if (cr6.lt) goto loc_831327D8;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x831327d8
	if (cr6.gt) goto loc_831327D8;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stbx r10,r11,r31
	PPC_STORE_U8(r11.u32 + r31.u32, ctx.r10.u8);
loc_831327D8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x831327b8
	if (cr6.lt) goto loc_831327B8;
loc_831327E4:
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83131e88
	sub_83131E88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83132880
	if (!cr0.eq) goto loc_83132880;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r10,r11,31856
	ctx.r10.s64 = r11.s64 + 31856;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_83132810:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83132830
	if (cr6.eq) goto loc_83132830;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r8,r10,516
	ctx.r8.s64 = ctx.r10.s64 + 516;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x83132810
	if (cr6.lt) goto loc_83132810;
loc_83132830:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bne cr6,0x83132840
	if (!cr6.eq) goto loc_83132840;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83132884
	goto loc_83132884;
loc_83132840:
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
loc_83132850:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83132850
	if (!cr6.eq) goto loc_83132850;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_83132880:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83132884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831328A0"))) PPC_WEAK_FUNC(sub_831328A0);
PPC_FUNC_IMPL(__imp__sub_831328A0) {
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
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x831328e4
	if (!cr6.eq) goto loc_831328E4;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,30896
	r11.s64 = r11.s64 + 30896;
	// lwz r10,1472(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1472);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831329e0
	if (cr6.eq) goto loc_831329E0;
	// addi r9,r11,1472
	ctx.r9.s64 = r11.s64 + 1472;
	// lwz r3,1476(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1476);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,5188
	ctx.r4.s64 = ctx.r10.s64 + 5188;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x831329d4
	goto loc_831329D4;
loc_831328E4:
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_831328EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831328ec
	if (!cr6.eq) goto loc_831328EC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r28,r11,0
	r28.u64 = __builtin_rotateleft32(r11.u32, 0);
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x8313291c
	if (!cr0.eq) goto loc_8313291C;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// li r11,0
	r11.s64 = 0;
	// stb r11,30896(r10)
	PPC_STORE_U8(ctx.r10.u32 + 30896, r11.u8);
	// b 0x831329e0
	goto loc_831329E0;
loc_8313291C:
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83132924:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83132924
	if (!cr6.eq) goto loc_83132924;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addic. r9,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r9.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83132978
	if (cr0.eq) goto loc_83132978;
loc_8313294C:
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,97
	cr6.compare<int32_t>(ctx.r10.s32, 97, xer);
	// blt cr6,0x8313296c
	if (cr6.lt) goto loc_8313296C;
	// cmpwi cr6,r10,122
	cr6.compare<int32_t>(ctx.r10.s32, 122, xer);
	// bgt cr6,0x8313296c
	if (cr6.gt) goto loc_8313296C;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// stbx r10,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, ctx.r10.u8);
loc_8313296C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8313294c
	if (cr6.lt) goto loc_8313294C;
loc_83132978:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,30896
	r31.s64 = r11.s64 + 30896;
	// addi r11,r31,960
	r11.s64 = r31.s64 + 960;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_83132988:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x831329e8
	if (cr0.eq) goto loc_831329E8;
	// addi r11,r31,960
	r11.s64 = r31.s64 + 960;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r11,r11,516
	r11.s64 = r11.s64 + 516;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83132988
	if (cr6.lt) goto loc_83132988;
	// lwz r11,1472(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1472);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831329e0
	if (cr6.eq) goto loc_831329E0;
	// addi r10,r31,1472
	ctx.r10.s64 = r31.s64 + 1472;
	// lwz r3,1476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1476);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,5148
	ctx.r4.s64 = r11.s64 + 5148;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_831329D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831329E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_831329E8:
	// addi r5,r28,1
	ctx.r5.s64 = r28.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x831329e0
	goto loc_831329E0;
}

__attribute__((alias("__imp__sub_83132A00"))) PPC_WEAK_FUNC(sub_83132A00);
PPC_FUNC_IMPL(__imp__sub_83132A00) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,30896
	r31.s64 = r11.s64 + 30896;
	// bne cr6,0x83132a8c
	if (!cr6.eq) goto loc_83132A8C;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83132A38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83132a38
	if (!cr6.eq) goto loc_83132A38;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bne 0x83132a68
	if (!cr0.eq) goto loc_83132A68;
	// stb r27,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r27.u8);
	// b 0x83132a78
	goto loc_83132A78;
loc_83132A68:
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_83132A78:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83132a8c
	if (!cr6.eq) goto loc_83132A8C;
loc_83132A84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83132b14
	goto loc_83132B14;
loc_83132A8C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83132608
	sub_83132608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83131e88
	sub_83131E88(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83132b10
	if (!cr0.eq) goto loc_83132B10;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83132AB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83132ab0
	if (!cr6.eq) goto loc_83132AB0;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bne 0x83132ae0
	if (!cr0.eq) goto loc_83132AE0;
	// stb r27,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r27.u8);
	// b 0x83132af0
	goto loc_83132AF0;
loc_83132AE0:
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_83132AF0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83131e88
	sub_83131E88(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x83132a84
	if (cr0.eq) goto loc_83132A84;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,297
	ctx.r4.s64 = 297;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83138218
	sub_83138218(ctx, base);
loc_83132B10:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_83132B14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83132B20"))) PPC_WEAK_FUNC(sub_83132B20);
PPC_FUNC_IMPL(__imp__sub_83132B20) {
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
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83132b6c
	if (!cr6.eq) goto loc_83132B6C;
	// lis r11,-31942
	r11.s64 = -2093350912;
loc_83132B44:
	// addi r11,r11,30912
	r11.s64 = r11.s64 + 30912;
	// lwz r10,1456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1456);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132cac
	if (cr6.eq) goto loc_83132CAC;
	// addi r9,r11,1456
	ctx.r9.s64 = r11.s64 + 1456;
	// lwz r3,1460(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1460);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,5352
	ctx.r4.s64 = ctx.r10.s64 + 5352;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x83132ca0
	goto loc_83132CA0;
loc_83132B6C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83131f10
	sub_83131F10(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// beq 0x83132b44
	if (cr0.eq) goto loc_83132B44;
	// addi r31,r11,30912
	r31.s64 = r11.s64 + 30912;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_83132B9C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83132bbc
	if (cr6.eq) goto loc_83132BBC;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r9,r31,644
	ctx.r9.s64 = r31.s64 + 644;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83132b9c
	if (cr6.lt) goto loc_83132B9C;
loc_83132BBC:
	// cmpwi cr6,r10,80
	cr6.compare<int32_t>(ctx.r10.s32, 80, xer);
	// beq cr6,0x83132bd0
	if (cr6.eq) goto loc_83132BD0;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x83132be8
	if (!cr0.eq) goto loc_83132BE8;
loc_83132BD0:
	// lwz r11,1456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1456);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83132cac
	if (cr6.eq) goto loc_83132CAC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,5316
	ctx.r4.s64 = r11.s64 + 5316;
	// b 0x83132c94
	goto loc_83132C94;
loc_83132BE8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83132a00
	sub_83132A00(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bne 0x83132c24
	if (!cr0.eq) goto loc_83132C24;
	// lwz r11,1456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1456);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// beq cr6,0x83132cac
	if (cr6.eq) goto loc_83132CAC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,5284
	ctx.r4.s64 = r11.s64 + 5284;
	// b 0x83132c94
	goto loc_83132C94;
loc_83132C24:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83132c78
	if (cr0.eq) goto loc_83132C78;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// bne 0x83132c70
	if (!cr0.eq) goto loc_83132C70;
	// lwz r11,1456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1456);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// beq cr6,0x83132cac
	if (cr6.eq) goto loc_83132CAC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,5252
	ctx.r4.s64 = r11.s64 + 5252;
	// b 0x83132c94
	goto loc_83132C94;
loc_83132C70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83132cb0
	goto loc_83132CB0;
loc_83132C78:
	// lwz r11,1456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1456);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// beq cr6,0x83132cac
	if (cr6.eq) goto loc_83132CAC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,5228
	ctx.r4.s64 = r11.s64 + 5228;
loc_83132C94:
	// addi r10,r31,1456
	ctx.r10.s64 = r31.s64 + 1456;
	// lwz r3,1460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1460);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_83132CA0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132CAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83132CB0:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83132CB8"))) PPC_WEAK_FUNC(sub_83132CB8);
PPC_FUNC_IMPL(__imp__sub_83132CB8) {
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
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83132d00
	if (!cr6.eq) goto loc_83132D00;
loc_83132CD8:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132da8
	if (cr6.eq) goto loc_83132DA8;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,5452
	ctx.r4.s64 = ctx.r10.s64 + 5452;
	// b 0x83132d9c
	goto loc_83132D9C;
loc_83132D00:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83131f10
	sub_83131F10(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83132cd8
	if (cr0.eq) goto loc_83132CD8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83132a00
	sub_83132A00(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,32368
	r31.s64 = r11.s64 + 32368;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x83132d64
	if (!cr0.eq) goto loc_83132D64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83132d64
	if (cr6.eq) goto loc_83132D64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5416
	ctx.r4.s64 = r11.s64 + 5416;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132D64:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83132d80
	if (cr0.eq) goto loc_83132D80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83132dac
	goto loc_83132DAC;
loc_83132D80:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83132da8
	if (cr6.eq) goto loc_83132DA8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,5384
	ctx.r4.s64 = r11.s64 + 5384;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_83132D9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132DA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83132DAC:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132DC8"))) PPC_WEAK_FUNC(sub_83132DC8);
PPC_FUNC_IMPL(__imp__sub_83132DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83132e10
	if (!cr6.eq) goto loc_83132E10;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132e84
	if (cr6.eq) goto loc_83132E84;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,5564
	ctx.r4.s64 = ctx.r10.s64 + 5564;
loc_83132DF8:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83132e84
	goto loc_83132E84;
loc_83132E10:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83132e38
	if (!cr6.eq) goto loc_83132E38;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132e84
	if (cr6.eq) goto loc_83132E84;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,5528
	ctx.r4.s64 = ctx.r10.s64 + 5528;
	// b 0x83132df8
	goto loc_83132DF8;
loc_83132E38:
	// bl 0x83132770
	sub_83132770(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83132e64
	if (!cr0.eq) goto loc_83132E64;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,32368
	r11.s64 = r11.s64 + 32368;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132e84
	if (cr6.eq) goto loc_83132E84;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,5492
	ctx.r4.s64 = ctx.r10.s64 + 5492;
	// b 0x83132df8
	goto loc_83132DF8;
loc_83132E64:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83132e84
	if (cr0.eq) goto loc_83132E84;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,7472
	ctx.r3.s64 = ctx.r10.s64 + 7472;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132E84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132E98"))) PPC_WEAK_FUNC(sub_83132E98);
PPC_FUNC_IMPL(__imp__sub_83132E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,25120
	ctx.r3.s64 = r11.s64 + 25120;
	// lwz r11,5652(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5652);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132EB0"))) PPC_WEAK_FUNC(sub_83132EB0);
PPC_FUNC_IMPL(__imp__sub_83132EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83132EB8:
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x83132ed8
	if (cr6.lt) goto loc_83132ED8;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x83132ed8
	if (cr6.gt) goto loc_83132ED8;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// b 0x83132f04
	goto loc_83132F04;
loc_83132ED8:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x83132ef0
	if (cr6.lt) goto loc_83132EF0;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// bgt cr6,0x83132ef0
	if (cr6.gt) goto loc_83132EF0;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
	// b 0x83132f04
	goto loc_83132F04;
loc_83132EF0:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x83132f14
	if (cr6.lt) goto loc_83132F14;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(r11.s32, 70, xer);
	// bgt cr6,0x83132f14
	if (cr6.gt) goto loc_83132F14;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
loc_83132F04:
	// mullw r10,r3,r5
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x83132eb8
	goto loc_83132EB8;
loc_83132F14:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83132F20"))) PPC_WEAK_FUNC(sub_83132F20);
PPC_FUNC_IMPL(__imp__sub_83132F20) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83132F3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83132f3c
	if (!cr6.eq) goto loc_83132F3C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// blt cr6,0x83132fb0
	if (cr6.lt) goto loc_83132FB0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r7,18
	ctx.r7.s64 = 18;
	// addi r5,r11,5656
	ctx.r5.s64 = r11.s64 + 5656;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r31,r11,-29440
	r31.s64 = r11.s64 + -29440;
	// li r4,300
	ctx.r4.s64 = 300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831382d8
	sub_831382D8(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r10,32380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32380);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132fb0
	if (cr6.eq) goto loc_83132FB0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32380);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32384(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32384);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83132FB0:
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83132eb0
	sub_83132EB0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83132fe0
	if (cr6.eq) goto loc_83132FE0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_83132FE0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83132ffc
	if (cr6.eq) goto loc_83132FFC;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x831b2fe0
	sub_831B2FE0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_83132FFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83133008"))) PPC_WEAK_FUNC(sub_83133008);
PPC_FUNC_IMPL(__imp__sub_83133008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r3,32380(r11)
	PPC_STORE_U32(r11.u32 + 32380, ctx.r3.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// stw r4,32384(r11)
	PPC_STORE_U32(r11.u32 + 32384, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133020"))) PPC_WEAK_FUNC(sub_83133020);
PPC_FUNC_IMPL(__imp__sub_83133020) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83132f20
	sub_83132F20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133048"))) PPC_WEAK_FUNC(sub_83133048);
PPC_FUNC_IMPL(__imp__sub_83133048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-29120
	r11.s64 = r11.s64 + -29120;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8313305C:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83133080
	if (cr6.eq) goto loc_83133080;
	// addi r10,r10,56
	ctx.r10.s64 = ctx.r10.s64 + 56;
	// addi r8,r11,4480
	ctx.r8.s64 = r11.s64 + 4480;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x8313305c
	if (cr6.lt) goto loc_8313305C;
	// blr 
	return;
loc_83133080:
	// mulli r10,r9,56
	ctx.r10.s64 = ctx.r9.s64 * 56;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133090"))) PPC_WEAK_FUNC(sub_83133090);
PPC_FUNC_IMPL(__imp__sub_83133090) {
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
	// li r11,2048
	r11.s64 = 2048;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x83132f20
	sub_83132F20(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stb r8,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r8.u8);
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
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

__attribute__((alias("__imp__sub_83133108"))) PPC_WEAK_FUNC(sub_83133108);
PPC_FUNC_IMPL(__imp__sub_83133108) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8313315c
	if (!cr6.eq) goto loc_8313315C;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83133154
	if (cr6.eq) goto loc_83133154;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,5804
	ctx.r4.s64 = r11.s64 + 5804;
loc_8313313C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,32384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32384);
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83133154:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831331c4
	goto loc_831331C4;
loc_8313315C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83133180
	if (cr6.eq) goto loc_83133180;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83133154
	if (cr6.eq) goto loc_83133154;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,5768
	ctx.r4.s64 = r11.s64 + 5768;
	// b 0x8313313c
	goto loc_8313313C;
loc_83133180:
	// bl 0x83133048
	sub_83133048(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x831331a8
	if (!cr0.eq) goto loc_831331A8;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83133154
	if (cr6.eq) goto loc_83133154;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,5720
	ctx.r4.s64 = r11.s64 + 5720;
	// b 0x8313313c
	goto loc_8313313C;
loc_831331A8:
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x83138218
	sub_83138218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83133090
	sub_83133090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831331C4:
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

__attribute__((alias("__imp__sub_831331D8"))) PPC_WEAK_FUNC(sub_831331D8);
PPC_FUNC_IMPL(__imp__sub_831331D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83133230
	if (!cr6.eq) goto loc_83133230;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83133228
	if (cr6.eq) goto loc_83133228;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5840
	ctx.r4.s64 = r11.s64 + 5840;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,32384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32384);
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83133228:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8313329c
	goto loc_8313329C;
loc_83133230:
	// bl 0x8312ec30
	sub_8312EC30(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x83133244
	if (!cr6.eq) goto loc_83133244;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// b 0x8313326c
	goto loc_8313326C;
loc_83133244:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x83133258
	if (!cr6.eq) goto loc_83133258;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// b 0x83133268
	goto loc_83133268;
loc_83133258:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x8313326c
	if (!cr6.eq) goto loc_8313326C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
loc_83133268:
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_8313326C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x83133280
	if (cr6.lt) goto loc_83133280;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_83133280:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bgt cr6,0x83133290
	if (cr6.gt) goto loc_83133290;
	// li r11,0
	r11.s64 = 0;
loc_83133290:
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x8312f0f8
	sub_8312F0F8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_8313329C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831332A8"))) PPC_WEAK_FUNC(sub_831332A8);
PPC_FUNC_IMPL(__imp__sub_831332A8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831332f4
	if (!cr6.eq) goto loc_831332F4;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831332ec
	if (cr6.eq) goto loc_831332EC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5868
	ctx.r4.s64 = r11.s64 + 5868;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,32384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32384);
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831332EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831332f8
	goto loc_831332F8;
loc_831332F4:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_831332F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133308"))) PPC_WEAK_FUNC(sub_83133308);
PPC_FUNC_IMPL(__imp__sub_83133308) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83133360
	if (!cr6.eq) goto loc_83133360;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83133358
	if (cr6.eq) goto loc_83133358;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5964
	ctx.r4.s64 = r11.s64 + 5964;
loc_83133344:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,32384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32384);
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83133358:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831334b0
	goto loc_831334B0;
loc_83133360:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x83133388
	if (!cr6.lt) goto loc_83133388;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83133358
	if (cr6.eq) goto loc_83133358;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,5932
	ctx.r4.s64 = r11.s64 + 5932;
loc_83133380:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x83133344
	goto loc_83133344;
loc_83133388:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x831333ac
	if (!cr6.eq) goto loc_831333AC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83133358
	if (cr6.eq) goto loc_83133358;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,5896
	ctx.r4.s64 = r11.s64 + 5896;
	// b 0x83133380
	goto loc_83133380;
loc_831333AC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x831333c4
	if (!cr6.eq) goto loc_831333C4;
	// li r11,1
	r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// b 0x831334b0
	goto loc_831334B0;
loc_831333C4:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x83133358
	if (cr6.eq) goto loc_83133358;
	// bl 0x8312ec30
	sub_8312EC30(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// subf r10,r9,r11
	ctx.r10.s64 = r11.s64 - ctx.r9.s64;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// bge cr6,0x831333f4
	if (!cr6.lt) goto loc_831333F4;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_831333F4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// mullw. r10,r11,r10
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// bne 0x83133418
	if (!cr0.eq) goto loc_83133418;
	// li r11,1
	r11.s64 = 1;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// bl 0x8312f0f8
	sub_8312F0F8(ctx, base);
	// b 0x83133358
	goto loc_83133358;
loc_83133418:
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// stb r9,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r9.u8);
	// bl 0x83132f20
	sub_83132F20(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// subf r30,r10,r9
	r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bgt cr6,0x83133454
	if (cr6.gt) goto loc_83133454;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_83133454:
	// bl 0x8312f0f8
	sub_8312F0F8(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r5,r30,r11
	ctx.r5.s64 = r11.s64 - r30.s64;
	// add r3,r30,r28
	ctx.r3.u64 = r30.u64 + r28.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// bl 0x8312ec30
	sub_8312EC30(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stb r9,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r9.u8);
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x8312f0f8
	sub_8312F0F8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_831334B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831334B8"))) PPC_WEAK_FUNC(sub_831334B8);
PPC_FUNC_IMPL(__imp__sub_831334B8) {
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
	// bne cr6,0x83133508
	if (!cr6.eq) goto loc_83133508;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83133518
	if (cr6.eq) goto loc_83133518;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5992
	ctx.r4.s64 = r11.s64 + 5992;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,32384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32384);
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83133518
	goto loc_83133518;
loc_83133508:
	// bl 0x8312ec30
	sub_8312EC30(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// bl 0x8312f0f8
	sub_8312F0F8(ctx, base);
loc_83133518:
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

__attribute__((alias("__imp__sub_83133530"))) PPC_WEAK_FUNC(sub_83133530);
PPC_FUNC_IMPL(__imp__sub_83133530) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313357c
	if (!cr6.eq) goto loc_8313357C;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83133574
	if (cr6.eq) goto loc_83133574;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5992
	ctx.r4.s64 = r11.s64 + 5992;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,32384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32384);
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83133574:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83133584
	goto loc_83133584;
loc_8313357C:
	// lbz r11,1(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
loc_83133584:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133598"))) PPC_WEAK_FUNC(sub_83133598);
PPC_FUNC_IMPL(__imp__sub_83133598) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831335e4
	if (!cr6.eq) goto loc_831335E4;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831335dc
	if (cr6.eq) goto loc_831335DC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,6016
	ctx.r4.s64 = r11.s64 + 6016;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,32384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32384);
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831335DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831335e8
	goto loc_831335E8;
loc_831335E4:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_831335E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831335F8"))) PPC_WEAK_FUNC(sub_831335F8);
PPC_FUNC_IMPL(__imp__sub_831335F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83133630
	if (!cr6.eq) goto loc_83133630;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,6040
	ctx.r4.s64 = r11.s64 + 6040;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,32384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32384);
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_83133630:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// divw r10,r10,r4
	ctx.r10.s32 = ctx.r10.s32 / ctx.r4.s32;
	// divw r11,r11,r4
	r11.s32 = r11.s32 / ctx.r4.s32;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133670"))) PPC_WEAK_FUNC(sub_83133670);
PPC_FUNC_IMPL(__imp__sub_83133670) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831336bc
	if (!cr6.eq) goto loc_831336BC;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831336b4
	if (cr6.eq) goto loc_831336B4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5992
	ctx.r4.s64 = r11.s64 + 5992;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,32384(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32384);
	// lwz r11,32380(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32380);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831336B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831336c0
	goto loc_831336C0;
loc_831336BC:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_831336C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831336D0"))) PPC_WEAK_FUNC(sub_831336D0);
PPC_FUNC_IMPL(__imp__sub_831336D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83133718
	if (cr6.eq) goto loc_83133718;
	// cmpwi cr6,r4,205
	cr6.compare<int32_t>(ctx.r4.s32, 205, xer);
	// bgt cr6,0x83133744
	if (cr6.gt) goto loc_83133744;
	// beq cr6,0x83133734
	if (cr6.eq) goto loc_83133734;
	// cmpwi cr6,r4,200
	cr6.compare<int32_t>(ctx.r4.s32, 200, xer);
	// beq cr6,0x83133718
	if (cr6.eq) goto loc_83133718;
	// cmpwi cr6,r4,201
	cr6.compare<int32_t>(ctx.r4.s32, 201, xer);
	// beq cr6,0x8313372c
	if (cr6.eq) goto loc_8313372C;
	// cmpwi cr6,r4,202
	cr6.compare<int32_t>(ctx.r4.s32, 202, xer);
	// beq cr6,0x83133718
	if (cr6.eq) goto loc_83133718;
	// cmpwi cr6,r4,203
	cr6.compare<int32_t>(ctx.r4.s32, 203, xer);
	// beq cr6,0x83133734
	if (cr6.eq) goto loc_83133734;
	// cmpwi cr6,r4,204
	cr6.compare<int32_t>(ctx.r4.s32, 204, xer);
	// bne cr6,0x8313376c
	if (!cr6.eq) goto loc_8313376C;
loc_83133718:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313371C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8313372C:
	// bl 0x83133670
	sub_83133670(ctx, base);
	// b 0x8313371c
	goto loc_8313371C;
loc_83133734:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83132f20
	sub_83132F20(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8313371c
	goto loc_8313371C;
loc_83133744:
	// cmpwi cr6,r4,299
	cr6.compare<int32_t>(ctx.r4.s32, 299, xer);
	// beq cr6,0x83133718
	if (cr6.eq) goto loc_83133718;
	// cmpwi cr6,r4,300
	cr6.compare<int32_t>(ctx.r4.s32, 300, xer);
	// beq cr6,0x8313377c
	if (cr6.eq) goto loc_8313377C;
	// cmpwi cr6,r4,301
	cr6.compare<int32_t>(ctx.r4.s32, 301, xer);
	// beq cr6,0x83133718
	if (cr6.eq) goto loc_83133718;
	// cmpwi cr6,r4,302
	cr6.compare<int32_t>(ctx.r4.s32, 302, xer);
	// beq cr6,0x8313377c
	if (cr6.eq) goto loc_8313377C;
	// cmpwi cr6,r4,600
	cr6.compare<int32_t>(ctx.r4.s32, 600, xer);
	// beq cr6,0x83133774
	if (cr6.eq) goto loc_83133774;
loc_8313376C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8313371c
	goto loc_8313371C;
loc_83133774:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8313371c
	goto loc_8313371C;
loc_8313377C:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8313371c
	goto loc_8313371C;
}

__attribute__((alias("__imp__sub_83133788"))) PPC_WEAK_FUNC(sub_83133788);
PPC_FUNC_IMPL(__imp__sub_83133788) {
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
	// beq cr6,0x831337cc
	if (cr6.eq) goto loc_831337CC;
	// bl 0x831334b8
	sub_831334B8(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x831337cc
	if (!cr6.eq) goto loc_831337CC;
	// li r11,0
	r11.s64 = 0;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_831337CC:
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

__attribute__((alias("__imp__sub_831337E0"))) PPC_WEAK_FUNC(sub_831337E0);
PPC_FUNC_IMPL(__imp__sub_831337E0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x831392e0
	sub_831392E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831337E8"))) PPC_WEAK_FUNC(sub_831337E8);
PPC_FUNC_IMPL(__imp__sub_831337E8) {
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
	// bl 0x83136408
	sub_83136408(ctx, base);
	// bl 0x83139598
	sub_83139598(ctx, base);
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

__attribute__((alias("__imp__sub_83133810"))) PPC_WEAK_FUNC(sub_83133810);
PPC_FUNC_IMPL(__imp__sub_83133810) {
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
	// bl 0x83139610
	sub_83139610(ctx, base);
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

__attribute__((alias("__imp__sub_83133838"))) PPC_WEAK_FUNC(sub_83133838);
PPC_FUNC_IMPL(__imp__sub_83133838) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r11,r11,6064
	r11.s64 = r11.s64 + 6064;
	// stw r11,32388(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32388, r11.u32);
	// bl 0x83138200
	sub_83138200(ctx, base);
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r11,32392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32392);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313395c
	if (!cr6.eq) goto loc_8313395C;
	// bl 0x8312f5b8
	sub_8312F5B8(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// bl 0x8313d5c0
	sub_8313D5C0(ctx, base);
	// bl 0x8313ca00
	sub_8313CA00(ctx, base);
	// bl 0x8313bcc0
	sub_8313BCC0(ctx, base);
	// bl 0x83139298
	sub_83139298(ctx, base);
	// bl 0x8313ac68
	sub_8313AC68(ctx, base);
	// bl 0x83139a88
	sub_83139A88(ctx, base);
	// bl 0x831398e8
	sub_831398E8(ctx, base);
	// bl 0x83136ec8
	sub_83136EC8(ctx, base);
	// bl 0x831397d0
	sub_831397D0(ctx, base);
	// bl 0x8312ee58
	sub_8312EE58(ctx, base);
	// lis r11,-31981
	r11.s64 = -2095906816;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,14304
	ctx.r3.s64 = r11.s64 + 14304;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r11,-31981
	r11.s64 = -2095906816;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,14304
	ctx.r3.s64 = r11.s64 + 14304;
	// bl 0x83139708
	sub_83139708(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,6272
	ctx.r5.s64 = 6272;
	// addi r3,r11,29824
	ctx.r3.s64 = r11.s64 + 29824;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,6180
	ctx.r7.s64 = r11.s64 + 6180;
	// lis r11,-31981
	r11.s64 = -2095906816;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,14312
	ctx.r5.s64 = r11.s64 + 14312;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8312f430
	sub_8312F430(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,6164
	ctx.r6.s64 = r11.s64 + 6164;
	// lis r11,-31981
	r11.s64 = -2095906816;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r4,r11,14352
	ctx.r4.s64 = r11.s64 + 14352;
	// bl 0x8312f2a8
	sub_8312F2A8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r6,r11,6144
	ctx.r6.s64 = r11.s64 + 6144;
	// lis r11,-32025
	r11.s64 = -2098790400;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,7768
	ctx.r4.s64 = r11.s64 + 7768;
	// stw r3,32408(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32408, ctx.r3.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8312f2a8
	sub_8312F2A8(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lis r9,-31942
	ctx.r9.s64 = -2093350912;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r3,32400(r11)
	PPC_STORE_U32(r11.u32 + 32400, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r11,32404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32404, r11.u32);
	// stw r11,32412(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32412, r11.u32);
	// bl 0x83136328
	sub_83136328(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lwz r11,32392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32392);
loc_8313395C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,32392(r31)
	PPC_STORE_U32(r31.u32 + 32392, r11.u32);
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

__attribute__((alias("__imp__sub_83133978"))) PPC_WEAK_FUNC(sub_83133978);
PPC_FUNC_IMPL(__imp__sub_83133978) {
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
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lwz r11,32392(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32392);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x831339a4
	if (cr6.gt) goto loc_831339A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6240
	ctx.r3.s64 = r11.s64 + 6240;
	// bl 0x8312ecf0
	sub_8312ECF0(ctx, base);
	// b 0x83133a68
	goto loc_83133A68;
loc_831339A4:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,32392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32392, r11.u32);
	// bne 0x83133a68
	if (!cr0.eq) goto loc_83133A68;
	// bl 0x83136ab8
	sub_83136AB8(ctx, base);
	// bl 0x831376f0
	sub_831376F0(ctx, base);
	// bl 0x831399c8
	sub_831399C8(ctx, base);
	// bl 0x8313acb8
	sub_8313ACB8(ctx, base);
	// bl 0x83139850
	sub_83139850(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8312f380
	sub_8312F380(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,32408(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32408);
	// bl 0x8312f380
	sub_8312F380(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r4,32400(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32400);
	// bl 0x8312f380
	sub_8312F380(ctx, base);
	// bl 0x8312eed8
	sub_8312EED8(ctx, base);
	// bl 0x83139ae0
	sub_83139AE0(ctx, base);
	// bl 0x83139298
	sub_83139298(ctx, base);
	// bl 0x8313bd28
	sub_8313BD28(ctx, base);
	// bl 0x8313ca68
	sub_8313CA68(ctx, base);
	// bl 0x8313d628
	sub_8313D628(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r31,1024
	r31.s64 = 1024;
loc_83133A14:
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83133a14
	if (!cr0.eq) goto loc_83133A14;
	// bl 0x8312f638
	sub_8312F638(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r30,r11,29824
	r30.s64 = r11.s64 + 29824;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r31,r30
	r31.u64 = r30.u64;
	// addi r29,r11,6196
	r29.s64 = r11.s64 + 6196;
loc_83133A3C:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83133a58
	if (cr6.eq) goto loc_83133A58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8312ecf0
	sub_8312ECF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83136a80
	sub_83136A80(ctx, base);
loc_83133A58:
	// addi r31,r31,196
	r31.s64 = r31.s64 + 196;
	// addi r11,r30,6272
	r11.s64 = r30.s64 + 6272;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83133a3c
	if (cr6.lt) goto loc_83133A3C;
loc_83133A68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83133A70"))) PPC_WEAK_FUNC(sub_83133A70);
PPC_FUNC_IMPL(__imp__sub_83133A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,32392(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32392);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133A88"))) PPC_WEAK_FUNC(sub_83133A88);
PPC_FUNC_IMPL(__imp__sub_83133A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,24
	ctx.r10.u64 = ctx.r10.u64 | 24;
	// ldx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + ctx.r10.u32);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addis r11,r11,2
	r11.s64 = r11.s64 + 131072;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
loc_83133AA8:
	// mfmsr r9
	// mtmsrd r13,1
	// ldarx r10,0,r11
	reserved.u64 = *(uint64_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap64(reserved.u64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stdcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + r11.u32), reserved.s64, __builtin_bswap64(ctx.r10.s64));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x83133aa8
	if (!cr0.eq) goto loc_83133AA8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83133AC8"))) PPC_WEAK_FUNC(sub_83133AC8);
PPC_FUNC_IMPL(__imp__sub_83133AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r11,2
	r11.s64 = 131072;
	// addis r28,r31,2
	r28.s64 = r31.s64 + 131072;
	// addis r27,r31,2
	r27.s64 = r31.s64 + 131072;
	// addi r28,r28,76
	r28.s64 = r28.s64 + 76;
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r11,r11,80
	r11.u64 = r11.u64 | 80;
	// ori r29,r8,16
	r29.u64 = ctx.r8.u64 | 16;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x83133b1c
	if (!cr6.eq) goto loc_83133B1C;
	// lfsx f0,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r31,r29
	temp.u32 = PPC_LOAD_U32(r31.u32 + r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x83133b80
	if (cr6.eq) goto loc_83133B80;
loc_83133B1C:
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// add r30,r31,r11
	r30.u64 = r31.u64 + r11.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f0,6464(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 6464);
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * f0.f64;
	// bl 0x831b6d80
	sub_831B6D80(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfd f1,-18480(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -18480);
	// bl 0x831b6d80
	sub_831B6D80(ctx, base);
	// fdiv f13,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64 / ctx.f1.f64;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x831e0a58
	sub_831E0A58(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfsx f0,r31,r29
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + r29.u32, temp.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_83133B80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83133B90"))) PPC_WEAK_FUNC(sub_83133B90);
PPC_FUNC_IMPL(__imp__sub_83133B90) {
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
	// lis r11,2
	r11.s64 = 131072;
	// addis r28,r3,2
	r28.s64 = ctx.r3.s64 + 131072;
	// ori r11,r11,68
	r11.u64 = r11.u64 | 68;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwzx r30,r3,r11
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83133c04
	if (!cr6.gt) goto loc_83133C04;
	// addis r31,r3,2
	r31.s64 = ctx.r3.s64 + 131072;
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
loc_83133BCC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x83133bf0
	if (cr6.lt) goto loc_83133BF0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_83133BF0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83133bcc
	if (cr6.lt) goto loc_83133BCC;
loc_83133C04:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83133c14
	if (!cr6.gt) goto loc_83133C14;
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// b 0x83133c1c
	goto loc_83133C1C;
loc_83133C14:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_83133C1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83133C28"))) PPC_WEAK_FUNC(sub_83133C28);
PPC_FUNC_IMPL(__imp__sub_83133C28) {
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
	// addi r31,r11,32708
	r31.s64 = r11.s64 + 32708;
	// addi r8,r31,-4
	ctx.r8.s64 = r31.s64 + -4;
loc_83133C44:
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
	// bne 0x83133c44
	if (!cr0.eq) goto loc_83133C44;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83133c84
	if (!cr6.eq) goto loc_83133C84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83133c84
	if (cr6.eq) goto loc_83133C84;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83133C84:
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

__attribute__((alias("__imp__sub_83133CA0"))) PPC_WEAK_FUNC(sub_83133CA0);
PPC_FUNC_IMPL(__imp__sub_83133CA0) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// addis r27,r24,2
	r27.s64 = r24.s64 + 131072;
	// rlwinm r11,r21,10,0,21
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 10) & 0xFFFFFC00;
	// addi r27,r27,64
	r27.s64 = r27.s64 + 64;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// addi r19,r11,8
	r19.s64 = r11.s64 + 8;
	// mr r23,r20
	r23.u64 = r20.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r25,r19
	r25.u64 = r19.u64;
	// rlwinm. r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x83133ebc
	if (!cr0.gt) goto loc_83133EBC;
	// addis r22,r24,2
	r22.s64 = r24.s64 + 131072;
	// mr r18,r11
	r18.u64 = r11.u64;
	// addi r22,r22,56
	r22.s64 = r22.s64 + 56;
loc_83133CEC:
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// rlwinm r28,r23,1,0,30
	r28.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x83133d6c
	if (!cr6.gt) goto loc_83133D6C;
	// addis r29,r24,2
	r29.s64 = r24.s64 + 131072;
	// addi r31,r1,108
	r31.s64 = ctx.r1.s64 + 108;
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
loc_83133D30:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r31,-4
	ctx.r6.s64 = r31.s64 + -4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x83133d30
	if (cr6.lt) goto loc_83133D30;
loc_83133D6C:
	// rlwinm r26,r11,31,1,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpw cr6,r26,r23
	cr6.compare<int32_t>(r26.s32, r23.s32, xer);
	// blt cr6,0x83133d7c
	if (cr6.lt) goto loc_83133D7C;
	// mr r26,r23
	r26.u64 = r23.u64;
loc_83133D7C:
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x83133dac
	if (!cr0.gt) goto loc_83133DAC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_83133D94:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83133d94
	if (!cr0.eq) goto loc_83133D94;
loc_83133DAC:
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beq cr6,0x83133dfc
	if (cr6.eq) goto loc_83133DFC;
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83133e30
	if (!cr6.eq) goto loc_83133E30;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x83133e30
	if (!cr6.gt) goto loc_83133E30;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_83133DD4:
	// lhzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r9,0(r25)
	PPC_STORE_U16(r25.u32 + 0, ctx.r9.u16);
	// addi r9,r25,2
	ctx.r9.s64 = r25.s64 + 2;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r25,r9,2
	r25.s64 = ctx.r9.s64 + 2;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// bne 0x83133dd4
	if (!cr0.eq) goto loc_83133DD4;
	// b 0x83133e30
	goto loc_83133E30;
loc_83133DFC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x83133e30
	if (!cr6.gt) goto loc_83133E30;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r26
	r11.u64 = r26.u64;
loc_83133E0C:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sth r9,0(r25)
	PPC_STORE_U16(r25.u32 + 0, ctx.r9.u16);
	// addi r9,r25,2
	ctx.r9.s64 = r25.s64 + 2;
	// addi r25,r9,2
	r25.s64 = ctx.r9.s64 + 2;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// bne 0x83133e0c
	if (!cr0.eq) goto loc_83133E0C;
loc_83133E30:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r28,r26,1,0,30
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83133eb0
	if (!cr6.gt) goto loc_83133EB0;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_83133E4C:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
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
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83133e4c
	if (cr6.lt) goto loc_83133E4C;
loc_83133EB0:
	// addic. r18,r18,-1
	xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// subf r23,r26,r23
	r23.s64 = r23.s64 - r26.s64;
	// bne 0x83133cec
	if (!cr0.eq) goto loc_83133CEC;
loc_83133EBC:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83133ECC:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x83133ecc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83133ECC;
	// lis r11,2
	r11.s64 = 131072;
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r19.u32);
	// subf r10,r23,r20
	ctx.r10.s64 = r20.s64 - r23.s64;
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r21.u32);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwzx r3,r24,r11
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + r11.u32);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x831e0830
	sub_831E0830(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x83133f34
	if (!cr0.lt) goto loc_83133F34;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,6848
	ctx.r4.s64 = r11.s64 + 6848;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,32448
	r31.s64 = r11.s64 + 32448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83133f38
	goto loc_83133F38;
loc_83133F34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83133F38:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_83133F40"))) PPC_WEAK_FUNC(sub_83133F40);
PPC_FUNC_IMPL(__imp__sub_83133F40) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// bl 0x831e0c28
	sub_831E0C28(ctx, base);
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
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

__attribute__((alias("__imp__sub_83133F80"))) PPC_WEAK_FUNC(sub_83133F80);
PPC_FUNC_IMPL(__imp__sub_83133F80) {
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
	// bne cr6,0x83133fb0
	if (!cr6.eq) goto loc_83133FB0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7200
	ctx.r3.s64 = r11.s64 + 7200;
loc_83133FA4:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83134024
	goto loc_83134024;
loc_83133FB0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83133fc8
	if (!cr6.eq) goto loc_83133FC8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7160
	ctx.r3.s64 = r11.s64 + 7160;
	// b 0x83133fa4
	goto loc_83133FA4;
loc_83133FC8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83134020
	if (cr6.eq) goto loc_83134020;
	// lis r11,2
	r11.s64 = 131072;
	// addis r30,r31,2
	r30.s64 = r31.s64 + 131072;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// ld r29,0(r30)
	r29.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// bl 0x831e0988
	sub_831E0988(ctx, base);
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpd cr6,r11,r29
	cr6.compare<int64_t>(r11.s64, r29.s64, xer);
	// bne cr6,0x83134004
	if (!cr6.eq) goto loc_83134004;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83134004:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rldicl r10,r10,62,34
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 62) & 0x3FFFFFFF;
	// ori r9,r9,72
	ctx.r9.u64 = ctx.r9.u64 | 72;
	// lwax r9,r31,r9
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(r31.u32 + ctx.r9.u32));
	// mulld r11,r9,r11
	r11.s64 = ctx.r9.s64 * r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,0(r28)
	PPC_STORE_U64(r28.u32 + 0, r11.u64);
loc_83134020:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83134024:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83134030"))) PPC_WEAK_FUNC(sub_83134030);
PPC_FUNC_IMPL(__imp__sub_83134030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83134064
	if (!cr6.eq) goto loc_83134064;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7768
	ctx.r3.s64 = r11.s64 + 7768;
	// b 0x8313412c
	goto loc_8313412C;
loc_83134064:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313407c
	if (!cr6.eq) goto loc_8313407C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7728
	ctx.r3.s64 = r11.s64 + 7728;
	// b 0x8313412c
	goto loc_8313412C;
loc_8313407C:
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// bgt cr6,0x83134124
	if (cr6.gt) goto loc_83134124;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(r29.u32, 6, xer);
	// bgt cr6,0x83134124
	if (cr6.gt) goto loc_83134124;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfd f1,-8272(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -8272);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfd f0,-10856(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -10856);
	// fmul f2,f31,f0
	ctx.f2.f64 = f31.f64 * f0.f64;
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f0,6472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6472);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// frsp f31,f1
	f31.f64 = double(float(ctx.f1.f64));
	// bgt cr6,0x831340c0
	if (cr6.gt) goto loc_831340C0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_831340C0:
	// mulli r11,r31,6
	r11.s64 = r31.s64 * 6;
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// lis r11,2
	r11.s64 = 131072;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// ori r10,r11,8
	ctx.r10.u64 = r11.u64 | 8;
	// li r11,1
	r11.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r31.u8);
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// stb r9,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r9.u8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x831e0780
	sub_831E0780(ctx, base);
	// addi r11,r31,16395
	r11.s64 = r31.s64 + 16395;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stfsx f31,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + r30.u32, temp.u32);
	// b 0x83134134
	goto loc_83134134;
loc_83134124:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7684
	ctx.r3.s64 = r11.s64 + 7684;
loc_8313412C:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83134134:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83134140"))) PPC_WEAK_FUNC(sub_83134140);
PPC_FUNC_IMPL(__imp__sub_83134140) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfd f1,-8272(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -8272);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfd f0,-10856(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -10856);
	// fmul f2,f31,f0
	ctx.f2.f64 = f31.f64 * f0.f64;
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfs f0,6472(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6472);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x831341a0
	if (cr6.gt) goto loc_831341A0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
loc_831341A0:
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x831e09e0
	sub_831E09E0(ctx, base);
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_831341D8"))) PPC_WEAK_FUNC(sub_831341D8);
PPC_FUNC_IMPL(__imp__sub_831341D8) {
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
	// addi r31,r11,32416
	r31.s64 = r11.s64 + 32416;
	// addi r8,r31,288
	ctx.r8.s64 = r31.s64 + 288;
loc_831341F4:
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
	// bne 0x831341f4
	if (!cr0.eq) goto loc_831341F4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83134248
	if (!cr6.eq) goto loc_83134248;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// stw r3,292(r31)
	PPC_STORE_U32(r31.u32 + 292, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83134248
	if (!cr0.eq) goto loc_83134248;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6476
	ctx.r3.s64 = r11.s64 + 6476;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8313424c
	goto loc_8313424C;
loc_83134248:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313424C:
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

__attribute__((alias("__imp__sub_83134260"))) PPC_WEAK_FUNC(sub_83134260);
PPC_FUNC_IMPL(__imp__sub_83134260) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x8313428c
	if (!cr6.eq) goto loc_8313428C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8048
	ctx.r3.s64 = r11.s64 + 8048;
loc_83134280:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831344ac
	goto loc_831344AC;
loc_8313428C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r25,0
	r25.s64 = 0;
	// addi r30,r11,32712
	r30.s64 = r11.s64 + 32712;
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831342d8
	if (!cr6.eq) goto loc_831342D8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831342c4
	if (!cr6.eq) goto loc_831342C4;
	// bl 0x82bd92e8
	sub_82BD92E8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83134300
	if (cr0.eq) goto loc_83134300;
loc_831342C4:
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,8
	ctx.r4.s64 = 8;
	// ori r5,r5,192
	ctx.r5.u64 = ctx.r5.u64 | 192;
	// bl 0x82bd7d30
	sub_82BD7D30(ctx, base);
	// b 0x831342f4
	goto loc_831342F4;
loc_831342D8:
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,192
	ctx.r4.u64 = ctx.r4.u64 | 192;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831342F4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313430c
	if (!cr6.eq) goto loc_8313430C;
loc_83134300:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8008
	ctx.r3.s64 = r11.s64 + 8008;
	// b 0x83134280
	goto loc_83134280;
loc_8313430C:
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,192
	ctx.r5.u64 = ctx.r5.u64 | 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r11,11
	r11.s64 = 11;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_83134330:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x83134330
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83134330;
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r31.u32);
	// addi r7,r30,12
	ctx.r7.s64 = r30.s64 + 12;
	// addi r11,r11,25244
	r11.s64 = r11.s64 + 25244;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r26,2
	r26.s64 = 2;
	// li r27,1
	r27.s64 = 1;
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stb r10,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r10.u8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r26.u8);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r27.u8);
	// stb r10,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r10.u8);
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// stb r8,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r8.u8);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r10,14984
	ctx.r10.s64 = ctx.r10.s64 + 14984;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// ori r29,r8,48000
	r29.u64 = ctx.r8.u64 | 48000;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// stb r8,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r8.u8);
	// bge cr6,0x831343d0
	if (!cr6.lt) goto loc_831343D0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// b 0x831343d4
	goto loc_831343D4;
loc_831343D0:
	// li r10,12
	ctx.r10.s64 = 12;
loc_831343D4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addis r4,r31,2
	ctx.r4.s64 = r31.s64 + 131072;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// addi r28,r11,6368
	r28.s64 = r11.s64 + 6368;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r27.u8);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// bl 0x831e0ca8
	sub_831E0CA8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge 0x83134434
	if (!cr0.lt) goto loc_83134434;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r30,-264
	ctx.r3.s64 = r30.s64 + -264;
	// addi r4,r11,7944
	ctx.r4.s64 = r11.s64 + 7944;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// addi r3,r30,-264
	ctx.r3.s64 = r30.s64 + -264;
	// b 0x83134280
	goto loc_83134280;
loc_83134434:
	// addis r3,r31,2
	ctx.r3.s64 = r31.s64 + 131072;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bl 0x831ccd60
	sub_831CCD60(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r11,r11,48
	r11.u64 = r11.u64 | 48;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// clrldi r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r8,r8,12
	ctx.r8.u64 = ctx.r8.u64 | 12;
	// stwx r26,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r26.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stdx r10,r31,r11
	PPC_STORE_U64(r31.u32 + r11.u32, ctx.r10.u64);
	// lis r11,2
	r11.s64 = 131072;
	// ori r7,r7,76
	ctx.r7.u64 = ctx.r7.u64 | 76;
	// ori r11,r11,20
	r11.u64 = r11.u64 | 20;
	// stwx r29,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r29.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r9,72
	ctx.r9.u64 = ctx.r9.u64 | 72;
	// li r8,256
	ctx.r8.s64 = 256;
	// stwx r29,r31,r7
	PPC_STORE_U32(r31.u32 + ctx.r7.u32, r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
	// stwx r8,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
loc_831344AC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_831344B8"))) PPC_WEAK_FUNC(sub_831344B8);
PPC_FUNC_IMPL(__imp__sub_831344B8) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831344ec
	if (!cr6.eq) goto loc_831344EC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8128
	ctx.r3.s64 = r11.s64 + 8128;
loc_831344E0:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x831345a8
	goto loc_831345A8;
loc_831344EC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134504
	if (!cr6.eq) goto loc_83134504;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8088
	ctx.r3.s64 = r11.s64 + 8088;
	// b 0x831344e0
	goto loc_831344E0;
loc_83134504:
	// addis r31,r30,2
	r31.s64 = r30.s64 + 131072;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83134538
	if (cr0.eq) goto loc_83134538;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831e0930
	sub_831E0930(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831e0890
	sub_831E0890(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831e0718
	sub_831E0718(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83134538:
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,192
	ctx.r5.u64 = ctx.r5.u64 | 192;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,32712
	r31.s64 = r11.s64 + 32712;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8313458c
	if (!cr6.eq) goto loc_8313458C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8313457c
	if (!cr6.eq) goto loc_8313457C;
	// bl 0x82bd92e8
	sub_82BD92E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831345a4
	if (cr0.eq) goto loc_831345A4;
loc_8313457C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd8600
	sub_82BD8600(ctx, base);
	// b 0x831345a4
	goto loc_831345A4;
loc_8313458C:
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831345A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831345A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831345C0"))) PPC_WEAK_FUNC(sub_831345C0);
PPC_FUNC_IMPL(__imp__sub_831345C0) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831345f8
	if (!cr6.eq) goto loc_831345F8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6568
	ctx.r3.s64 = r11.s64 + 6568;
loc_831345EC:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r30,-1
	r30.s64 = -1;
	// b 0x8313464c
	goto loc_8313464C;
loc_831345F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134610
	if (!cr6.eq) goto loc_83134610;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6528
	ctx.r3.s64 = r11.s64 + 6528;
	// b 0x831345ec
	goto loc_831345EC;
loc_83134610:
	// lis r11,2
	r11.s64 = 131072;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stdx r30,r31,r11
	PPC_STORE_U64(r31.u32 + r11.u32, r30.u64);
	// ori r9,r9,40
	ctx.r9.u64 = ctx.r9.u64 | 40;
	// ori r8,r8,184
	ctx.r8.u64 = ctx.r8.u64 | 184;
	// li r11,1
	r11.s64 = 1;
	// stdx r30,r31,r10
	PPC_STORE_U64(r31.u32 + ctx.r10.u32, r30.u64);
	// stdx r30,r31,r9
	PPC_STORE_U64(r31.u32 + ctx.r9.u32, r30.u64);
	// stwx r30,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8313464C:
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83134660"))) PPC_WEAK_FUNC(sub_83134660);
PPC_FUNC_IMPL(__imp__sub_83134660) {
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
	// lis r28,-31942
	r28.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32708(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83134698
	if (!cr6.eq) goto loc_83134698;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6648
	ctx.r3.s64 = r11.s64 + 6648;
loc_8313468C:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x831346e4
	goto loc_831346E4;
loc_83134698:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831346b0
	if (!cr6.eq) goto loc_831346B0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6608
	ctx.r3.s64 = r11.s64 + 6608;
	// b 0x8313468c
	goto loc_8313468C;
loc_831346B0:
	// lis r11,2
	r11.s64 = 131072;
	// addis r30,r31,2
	r30.s64 = r31.s64 + 131072;
	// ori r11,r11,24
	r11.u64 = r11.u64 | 24;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// stdx r29,r31,r11
	PPC_STORE_U64(r31.u32 + r11.u32, r29.u64);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// bl 0x831e0930
	sub_831E0930(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831e0890
	sub_831E0890(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
loc_831346E4:
	// lwz r3,32708(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831346F8"))) PPC_WEAK_FUNC(sub_831346F8);
PPC_FUNC_IMPL(__imp__sub_831346F8) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83134730
	if (!cr6.eq) goto loc_83134730;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6728
	ctx.r3.s64 = r11.s64 + 6728;
loc_83134724:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x8313475c
	goto loc_8313475C;
loc_83134730:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134748
	if (!cr6.eq) goto loc_83134748;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6688
	ctx.r3.s64 = r11.s64 + 6688;
	// b 0x83134724
	goto loc_83134724;
loc_83134748:
	// lis r11,2
	r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,180
	r11.u64 = r11.u64 | 180;
	// li r31,0
	r31.s64 = 0;
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
loc_8313475C:
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83134770"))) PPC_WEAK_FUNC(sub_83134770);
PPC_FUNC_IMPL(__imp__sub_83134770) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831347a8
	if (!cr6.eq) goto loc_831347A8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6808
	ctx.r3.s64 = r11.s64 + 6808;
loc_8313479C:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x831347d0
	goto loc_831347D0;
loc_831347A8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831347c0
	if (!cr6.eq) goto loc_831347C0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6768
	ctx.r3.s64 = r11.s64 + 6768;
	// b 0x8313479c
	goto loc_8313479C;
loc_831347C0:
	// lis r11,2
	r11.s64 = 131072;
	// li r31,0
	r31.s64 = 0;
	// ori r11,r11,180
	r11.u64 = r11.u64 | 180;
	// stwx r31,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r31.u32);
loc_831347D0:
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831347E8"))) PPC_WEAK_FUNC(sub_831347E8);
PPC_FUNC_IMPL(__imp__sub_831347E8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// srawi r11,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r11.s64 = ctx.r4.s32 >> 1;
	// addis r24,r29,2
	r24.s64 = r29.s64 + 131072;
	// addis r25,r29,2
	r25.s64 = r29.s64 + 131072;
	// addi r24,r24,184
	r24.s64 = r24.s64 + 184;
	// addi r25,r25,72
	r25.s64 = r25.s64 + 72;
	// addze r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// divw r10,r31,r11
	ctx.r10.s32 = r31.s32 / r11.s32;
	// extsw r27,r10
	r27.s64 = ctx.r10.s32;
	// beq cr6,0x8313483c
	if (cr6.eq) goto loc_8313483C;
	// divw r10,r31,r11
	ctx.r10.s32 = r31.s32 / r11.s32;
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// subf. r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x8313483c
	if (!cr0.gt) goto loc_8313483C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_8313483C:
	// addis r30,r29,2
	r30.s64 = r29.s64 + 131072;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// subfic r11,r11,128
	xer.ca = r11.u32 <= 128;
	r11.s64 = 128 - r11.s64;
	// cmpd cr6,r27,r11
	cr6.compare<int64_t>(r27.s64, r11.s64, xer);
	// blt cr6,0x83134858
	if (cr6.lt) goto loc_83134858;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_83134858:
	// li r26,0
	r26.s64 = 0;
	// cmpdi cr6,r27,0
	cr6.compare<int64_t>(r27.s64, 0, xer);
	// ble cr6,0x83134900
	if (!cr6.gt) goto loc_83134900;
loc_83134864:
	// lwz r28,0(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// bgt cr6,0x83134874
	if (cr6.gt) goto loc_83134874;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_83134874:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134898
	if (!cr6.eq) goto loc_83134898;
	// lis r11,2
	r11.s64 = 131072;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// ori r11,r11,48
	r11.u64 = r11.u64 | 48;
	// ldx r11,r29,r11
	r11.u64 = PPC_LOAD_U64(r29.u32 + r11.u32);
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, r11.s64, xer);
	// bge cr6,0x83134900
	if (!cr6.lt) goto loc_83134900;
loc_83134898:
	// lis r11,2
	r11.s64 = 131072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x831e07d8
	sub_831E07D8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83134900
	if (cr0.eq) goto loc_83134900;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sradi r10,r11,7
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x7F) != 0);
	ctx.r10.s64 = r11.s64 >> 7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rldicr r10,r10,7,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 7) & 0xFFFFFFFFFFFFFF80;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// bl 0x83133ca0
	sub_83133CA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83134900
	if (cr0.lt) goto loc_83134900;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// subf r31,r28,r31
	r31.s64 = r31.s64 - r28.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpd cr6,r26,r27
	cr6.compare<int64_t>(r26.s64, r27.s64, xer);
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
	// blt cr6,0x83134864
	if (cr6.lt) goto loc_83134864;
loc_83134900:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83134910"))) PPC_WEAK_FUNC(sub_83134910);
PPC_FUNC_IMPL(__imp__sub_83134910) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// srawi r11,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r11.s64 = ctx.r4.s32 >> 1;
	// addis r22,r29,2
	r22.s64 = r29.s64 + 131072;
	// addis r23,r29,2
	r23.s64 = r29.s64 + 131072;
	// addi r22,r22,184
	r22.s64 = r22.s64 + 184;
	// addi r23,r23,72
	r23.s64 = r23.s64 + 72;
	// addze r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// divw r10,r30,r11
	ctx.r10.s32 = r30.s32 / r11.s32;
	// extsw r26,r10
	r26.s64 = ctx.r10.s32;
	// beq cr6,0x83134964
	if (cr6.eq) goto loc_83134964;
	// divw r10,r30,r11
	ctx.r10.s32 = r30.s32 / r11.s32;
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// subf. r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x83134964
	if (!cr0.gt) goto loc_83134964;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_83134964:
	// lis r11,2
	r11.s64 = 131072;
	// addis r25,r29,2
	r25.s64 = r29.s64 + 131072;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// addi r25,r25,40
	r25.s64 = r25.s64 + 40;
	// ldx r11,r29,r11
	r11.u64 = PPC_LOAD_U64(r29.u32 + r11.u32);
	// ld r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U64(r25.u32 + 0);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(r11.s32, 128, xer);
	// blt cr6,0x83134994
	if (cr6.lt) goto loc_83134994;
	// li r11,128
	r11.s64 = 128;
loc_83134994:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// cmpd cr6,r26,r11
	cr6.compare<int64_t>(r26.s64, r11.s64, xer);
	// blt cr6,0x831349a4
	if (cr6.lt) goto loc_831349A4;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_831349A4:
	// li r27,0
	r27.s64 = 0;
	// cmpdi cr6,r26,0
	cr6.compare<int64_t>(r26.s64, 0, xer);
	// ble cr6,0x83134a64
	if (!cr6.gt) goto loc_83134A64;
	// lis r11,2
	r11.s64 = 131072;
	// ori r24,r11,24
	r24.u64 = r11.u64 | 24;
loc_831349B8:
	// lwz r28,0(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// bgt cr6,0x831349c8
	if (cr6.gt) goto loc_831349C8;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_831349C8:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831349ec
	if (!cr6.eq) goto loc_831349EC;
	// lis r11,2
	r11.s64 = 131072;
	// ldx r10,r29,r24
	ctx.r10.u64 = PPC_LOAD_U64(r29.u32 + r24.u32);
	// ori r11,r11,48
	r11.u64 = r11.u64 | 48;
	// ldx r11,r29,r11
	r11.u64 = PPC_LOAD_U64(r29.u32 + r11.u32);
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, r11.s64, xer);
	// bge cr6,0x83134a64
	if (!cr6.lt) goto loc_83134A64;
loc_831349EC:
	// lis r11,2
	r11.s64 = 131072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x831e07d8
	sub_831E07D8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83134a64
	if (cr0.eq) goto loc_83134A64;
	// add r31,r29,r24
	r31.u64 = r29.u64 + r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// sradi r10,r11,7
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x7F) != 0);
	ctx.r10.s64 = r11.s64 >> 7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rldicr r10,r10,7,56
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 7) & 0xFFFFFFFFFFFFFF80;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// bl 0x83133ca0
	sub_83133CA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83134a64
	if (cr0.lt) goto loc_83134A64;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// ld r11,0(r25)
	r11.u64 = PPC_LOAD_U64(r25.u32 + 0);
	// subf r30,r28,r30
	r30.s64 = r30.s64 - r28.s64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpd cr6,r27,r26
	cr6.compare<int64_t>(r27.s64, r26.s64, xer);
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// std r11,0(r25)
	PPC_STORE_U64(r25.u32 + 0, r11.u64);
	// blt cr6,0x831349b8
	if (cr6.lt) goto loc_831349B8;
loc_83134A64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83134A70"))) PPC_WEAK_FUNC(sub_83134A70);
PPC_FUNC_IMPL(__imp__sub_83134A70) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83134aa8
	if (!cr6.eq) goto loc_83134AA8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6960
	ctx.r3.s64 = r11.s64 + 6960;
loc_83134A9C:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83134ad4
	goto loc_83134AD4;
loc_83134AA8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134ac0
	if (!cr6.eq) goto loc_83134AC0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,6920
	ctx.r3.s64 = r11.s64 + 6920;
	// b 0x83134a9c
	goto loc_83134A9C;
loc_83134AC0:
	// lis r11,2
	r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,184
	r11.u64 = r11.u64 | 184;
	// li r31,0
	r31.s64 = 0;
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
loc_83134AD4:
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83134AE8"))) PPC_WEAK_FUNC(sub_83134AE8);
PPC_FUNC_IMPL(__imp__sub_83134AE8) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83134b24
	if (!cr6.eq) goto loc_83134B24;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7040
	ctx.r3.s64 = r11.s64 + 7040;
loc_83134B18:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83134b50
	goto loc_83134B50;
loc_83134B24:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134b3c
	if (!cr6.eq) goto loc_83134B3C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7000
	ctx.r3.s64 = r11.s64 + 7000;
	// b 0x83134b18
	goto loc_83134B18;
loc_83134B3C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83134b4c
	if (cr6.eq) goto loc_83134B4C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83134B4C:
	// li r31,0
	r31.s64 = 0;
loc_83134B50:
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83134B68"))) PPC_WEAK_FUNC(sub_83134B68);
PPC_FUNC_IMPL(__imp__sub_83134B68) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83134ba4
	if (!cr6.eq) goto loc_83134BA4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7120
	ctx.r3.s64 = r11.s64 + 7120;
loc_83134B98:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83134bd8
	goto loc_83134BD8;
loc_83134BA4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134bbc
	if (!cr6.eq) goto loc_83134BBC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7080
	ctx.r3.s64 = r11.s64 + 7080;
	// b 0x83134b98
	goto loc_83134B98;
loc_83134BBC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83134bd4
	if (cr6.eq) goto loc_83134BD4;
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,12
	r11.u64 = r11.u64 | 12;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83134BD4:
	// li r31,0
	r31.s64 = 0;
loc_83134BD8:
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83134BF0"))) PPC_WEAK_FUNC(sub_83134BF0);
PPC_FUNC_IMPL(__imp__sub_83134BF0) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83133f80
	sub_83133F80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83134C38"))) PPC_WEAK_FUNC(sub_83134C38);
PPC_FUNC_IMPL(__imp__sub_83134C38) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83134c74
	if (!cr6.eq) goto loc_83134C74;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7280
	ctx.r3.s64 = r11.s64 + 7280;
loc_83134C68:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83134cb8
	goto loc_83134CB8;
loc_83134C74:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134c8c
	if (!cr6.eq) goto loc_83134C8C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7240
	ctx.r3.s64 = r11.s64 + 7240;
	// b 0x83134c68
	goto loc_83134C68;
loc_83134C8C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83134cb4
	if (cr6.eq) goto loc_83134CB4;
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,72
	r11.u64 = r11.u64 | 72;
	// ori r10,r10,24
	ctx.r10.u64 = ctx.r10.u64 | 24;
	// ldx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + ctx.r10.u32);
	// lwax r11,r31,r11
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + r11.u32));
	// mulld r11,r11,r10
	r11.s64 = r11.s64 * ctx.r10.s64;
	// std r11,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r11.u64);
loc_83134CB4:
	// li r31,0
	r31.s64 = 0;
loc_83134CB8:
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83134CD0"))) PPC_WEAK_FUNC(sub_83134CD0);
PPC_FUNC_IMPL(__imp__sub_83134CD0) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83134d0c
	if (!cr6.eq) goto loc_83134D0C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7360
	ctx.r3.s64 = r11.s64 + 7360;
loc_83134D00:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83134d40
	goto loc_83134D40;
loc_83134D0C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134d24
	if (!cr6.eq) goto loc_83134D24;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7320
	ctx.r3.s64 = r11.s64 + 7320;
	// b 0x83134d00
	goto loc_83134D00;
loc_83134D24:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83134d3c
	if (cr6.eq) goto loc_83134D3C;
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
loc_83134D3C:
	// li r31,0
	r31.s64 = 0;
loc_83134D40:
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83134D58"))) PPC_WEAK_FUNC(sub_83134D58);
PPC_FUNC_IMPL(__imp__sub_83134D58) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83134d94
	if (!cr6.eq) goto loc_83134D94;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7440
	ctx.r3.s64 = r11.s64 + 7440;
loc_83134D88:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83134dc8
	goto loc_83134DC8;
loc_83134D94:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134dac
	if (!cr6.eq) goto loc_83134DAC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7400
	ctx.r3.s64 = r11.s64 + 7400;
	// b 0x83134d88
	goto loc_83134D88;
loc_83134DAC:
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// addi r11,r11,76
	r11.s64 = r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// beq cr6,0x83134dc4
	if (cr6.eq) goto loc_83134DC4;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_83134DC4:
	// li r31,0
	r31.s64 = 0;
loc_83134DC8:
	// lwz r3,32708(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83134DE0"))) PPC_WEAK_FUNC(sub_83134DE0);
PPC_FUNC_IMPL(__imp__sub_83134DE0) {
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
	// lis r28,-31942
	r28.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,32708(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83134e14
	if (!cr6.eq) goto loc_83134E14;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7564
	ctx.r3.s64 = r11.s64 + 7564;
	// b 0x83134e54
	goto loc_83134E54;
loc_83134E14:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134e2c
	if (!cr6.eq) goto loc_83134E2C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7524
	ctx.r3.s64 = r11.s64 + 7524;
	// b 0x83134e54
	goto loc_83134E54;
loc_83134E2C:
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x83134e4c
	if (cr6.gt) goto loc_83134E4C;
	// lis r11,2
	r11.s64 = 131072;
	// li r31,0
	r31.s64 = 0;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stwx r29,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r29.u32);
	// b 0x83134e5c
	goto loc_83134E5C;
loc_83134E4C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7480
	ctx.r3.s64 = r11.s64 + 7480;
loc_83134E54:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
loc_83134E5C:
	// lwz r3,32708(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83134E70"))) PPC_WEAK_FUNC(sub_83134E70);
PPC_FUNC_IMPL(__imp__sub_83134E70) {
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
	// lis r28,-31942
	r28.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,32708(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83134eac
	if (!cr6.eq) goto loc_83134EAC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7644
	ctx.r3.s64 = r11.s64 + 7644;
loc_83134EA0:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r30,-1
	r30.s64 = -1;
	// b 0x83134ee4
	goto loc_83134EE4;
loc_83134EAC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134ec4
	if (!cr6.eq) goto loc_83134EC4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7604
	ctx.r3.s64 = r11.s64 + 7604;
	// b 0x83134ea0
	goto loc_83134EA0;
loc_83134EC4:
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,72
	r11.u64 = r11.u64 | 72;
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// li r30,0
	r30.s64 = 0;
	// lwax r11,r31,r11
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + r11.u32));
	// divd r11,r29,r11
	r11.s64 = r29.s64 / r11.s64;
	// stdx r11,r31,r10
	PPC_STORE_U64(r31.u32 + ctx.r10.u32, r11.u64);
loc_83134EE4:
	// lwz r3,32708(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83134EF8"))) PPC_WEAK_FUNC(sub_83134EF8);
PPC_FUNC_IMPL(__imp__sub_83134EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32708(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83134f40
	if (!cr6.eq) goto loc_83134F40;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7644
	ctx.r3.s64 = r11.s64 + 7644;
loc_83134F34:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83134f74
	goto loc_83134F74;
loc_83134F40:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83134f58
	if (!cr6.eq) goto loc_83134F58;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7604
	ctx.r3.s64 = r11.s64 + 7604;
	// b 0x83134f34
	goto loc_83134F34;
loc_83134F58:
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x83134f70
	if (cr6.eq) goto loc_83134F70;
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
loc_83134F70:
	// li r31,0
	r31.s64 = 0;
loc_83134F74:
	// lwz r3,32708(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
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

__attribute__((alias("__imp__sub_83134FA0"))) PPC_WEAK_FUNC(sub_83134FA0);
PPC_FUNC_IMPL(__imp__sub_83134FA0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31942
	r31.s64 = -2093350912;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83134030
	sub_83134030(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83135000"))) PPC_WEAK_FUNC(sub_83135000);
PPC_FUNC_IMPL(__imp__sub_83135000) {
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
	// lis r27,-31942
	r27.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r3,32708(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831350fc
	if (cr6.eq) goto loc_831350FC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831350fc
	if (cr6.eq) goto loc_831350FC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83135050
	if (!cr6.eq) goto loc_83135050;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7904
	ctx.r3.s64 = r11.s64 + 7904;
	// b 0x83135104
	goto loc_83135104;
loc_83135050:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x831350f0
	if (cr6.eq) goto loc_831350F0;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bgt cr6,0x831350f0
	if (cr6.gt) goto loc_831350F0;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x831350a0
	if (!cr6.gt) goto loc_831350A0;
	// addis r8,r31,2
	ctx.r8.s64 = r31.s64 + 131072;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r8,r8,56
	ctx.r8.s64 = ctx.r8.s64 + 56;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_83135080:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x83135080
	if (!cr0.eq) goto loc_83135080;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bge cr6,0x831350d0
	if (!cr6.lt) goto loc_831350D0;
loc_831350A0:
	// subfic r10,r11,2
	xer.ca = r11.u32 <= 2;
	ctx.r10.s64 = 2 - r11.s64;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-32754
	r11.s64 = r11.s64 + -32754;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// beq 0x831350d0
	if (cr0.eq) goto loc_831350D0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831350C4:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x831350c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831350C4;
loc_831350D0:
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// ori r10,r10,68
	ctx.r10.u64 = ctx.r10.u64 | 68;
	// li r30,0
	r30.s64 = 0;
	// stwx r29,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r29.u32);
	// stwx r28,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r28.u32);
	// b 0x8313510c
	goto loc_8313510C;
loc_831350F0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7848
	ctx.r3.s64 = r11.s64 + 7848;
	// b 0x83135104
	goto loc_83135104;
loc_831350FC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,7808
	ctx.r3.s64 = r11.s64 + 7808;
loc_83135104:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r30,-1
	r30.s64 = -1;
loc_8313510C:
	// lwz r3,32708(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83135120"))) PPC_WEAK_FUNC(sub_83135120);
PPC_FUNC_IMPL(__imp__sub_83135120) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83134260
	sub_83134260(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
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

__attribute__((alias("__imp__sub_83135178"))) PPC_WEAK_FUNC(sub_83135178);
PPC_FUNC_IMPL(__imp__sub_83135178) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831344b8
	sub_831344B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,32708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
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

__attribute__((alias("__imp__sub_831351D0"))) PPC_WEAK_FUNC(sub_831351D0);
PPC_FUNC_IMPL(__imp__sub_831351D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r29,r31,2
	r29.s64 = r31.s64 + 131072;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x831e0930
	sub_831E0930(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x831e0890
	sub_831E0890(ctx, base);
	// addis r28,r31,2
	r28.s64 = r31.s64 + 131072;
	// addi r28,r28,180
	r28.s64 = r28.s64 + 180;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831352f8
	if (!cr6.eq) goto loc_831352F8;
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,76
	r11.u64 = r11.u64 | 76;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83135250
	if (!cr6.eq) goto loc_83135250;
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,80
	r11.u64 = r11.u64 | 80;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r31,r10
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x83135258
	if (cr6.eq) goto loc_83135258;
loc_83135250:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83133ac8
	sub_83133AC8(ctx, base);
loc_83135258:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83133b90
	sub_83133B90(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r11,r11,184
	r11.u64 = r11.u64 | 184;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313529c
	if (!cr6.eq) goto loc_8313529C;
	// lis r11,2
	r11.s64 = 131072;
	// li r10,10
	ctx.r10.s64 = 10;
	// ori r11,r11,68
	r11.u64 = r11.u64 | 68;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// blt cr6,0x831352f8
	if (cr6.lt) goto loc_831352F8;
loc_8313529C:
	// addis r30,r31,2
	r30.s64 = r31.s64 + 131072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// cmpdi cr6,r11,128
	cr6.compare<int64_t>(r11.s64, 128, xer);
	// bge cr6,0x831352bc
	if (!cr6.lt) goto loc_831352BC;
	// bl 0x831347e8
	sub_831347E8(ctx, base);
	// b 0x831352c0
	goto loc_831352C0;
loc_831352BC:
	// bl 0x83134910
	sub_83134910(ctx, base);
loc_831352C0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831352f0
	if (!cr6.eq) goto loc_831352F0;
	// lis r11,2
	r11.s64 = 131072;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// ldx r11,r31,r11
	r11.u64 = PPC_LOAD_U64(r31.u32 + r11.u32);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(r11.s64, ctx.r10.s64, xer);
	// bge cr6,0x831352f0
	if (!cr6.lt) goto loc_831352F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x831e08e8
	sub_831E08E8(ctx, base);
loc_831352F0:
	// li r11,2
	r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_831352F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83135308"))) PPC_WEAK_FUNC(sub_83135308);
PPC_FUNC_IMPL(__imp__sub_83135308) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83133b90
	sub_83133B90(ctx, base);
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,2
	r11.s64 = 131072;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ori r29,r11,24
	r29.u64 = r11.u64 | 24;
	// ble cr6,0x83135354
	if (!cr6.gt) goto loc_83135354;
	// ldx r11,r31,r29
	r11.u64 = PPC_LOAD_U64(r31.u32 + r29.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpdi cr6,r11,128
	cr6.compare<int64_t>(r11.s64, 128, xer);
	// bge cr6,0x83135350
	if (!cr6.lt) goto loc_83135350;
	// bl 0x831347e8
	sub_831347E8(ctx, base);
	// b 0x83135354
	goto loc_83135354;
loc_83135350:
	// bl 0x83134910
	sub_83134910(ctx, base);
loc_83135354:
	// addis r30,r31,2
	r30.s64 = r31.s64 + 131072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831e07d8
	sub_831E07D8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,180
	r11.u64 = r11.u64 | 180;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x831353b0
	if (!cr0.eq) goto loc_831353B0;
	// bne cr6,0x831353c0
	if (!cr6.eq) goto loc_831353C0;
	// lis r11,2
	r11.s64 = 131072;
	// ldx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + r29.u32);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// ldx r11,r31,r11
	r11.u64 = PPC_LOAD_U64(r31.u32 + r11.u32);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(r11.s64, ctx.r10.s64, xer);
	// bge cr6,0x831353c0
	if (!cr6.lt) goto loc_831353C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831e08e8
	sub_831E08E8(ctx, base);
	// b 0x831353c0
	goto loc_831353C0;
loc_831353B0:
	// beq cr6,0x831353c0
	if (cr6.eq) goto loc_831353C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831e0930
	sub_831E0930(ctx, base);
loc_831353C0:
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,76
	r11.u64 = r11.u64 | 76;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83135400
	if (!cr6.eq) goto loc_83135400;
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,80
	r11.u64 = r11.u64 | 80;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// lfsx f13,r31,r10
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x83135408
	if (cr6.eq) goto loc_83135408;
loc_83135400:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83133ac8
	sub_83133AC8(ctx, base);
loc_83135408:
	// addis r30,r31,2
	r30.s64 = r31.s64 + 131072;
	// addi r30,r30,184
	r30.s64 = r30.s64 + 184;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83135460
	if (cr6.eq) goto loc_83135460;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bgt cr6,0x83135460
	if (cr6.gt) goto loc_83135460;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83133f80
	sub_83133F80(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// ldx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + r29.u32);
	// ori r11,r11,72
	r11.u64 = r11.u64 | 72;
	// lwax r11,r31,r11
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + r11.u32));
	// mulld r11,r11,r10
	r11.s64 = r11.s64 * ctx.r10.s64;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, r11.s64, xer);
	// blt cr6,0x83135460
	if (cr6.lt) goto loc_83135460;
	// li r11,3
	r11.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_83135460:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83135470"))) PPC_WEAK_FUNC(sub_83135470);
PPC_FUNC_IMPL(__imp__sub_83135470) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32708(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32708);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831354b0
	if (!cr6.eq) goto loc_831354B0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8208
	ctx.r3.s64 = r11.s64 + 8208;
loc_831354A4:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x831354f4
	goto loc_831354F4;
loc_831354B0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831354c8
	if (!cr6.eq) goto loc_831354C8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8168
	ctx.r3.s64 = r11.s64 + 8168;
	// b 0x831354a4
	goto loc_831354A4;
loc_831354C8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831354e8
	if (cr6.eq) goto loc_831354E8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x831354f0
	if (!cr6.eq) goto loc_831354F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83135308
	sub_83135308(ctx, base);
	// b 0x831354f0
	goto loc_831354F0;
loc_831354E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831351d0
	sub_831351D0(ctx, base);
loc_831354F0:
	// li r31,0
	r31.s64 = 0;
loc_831354F4:
	// lwz r3,32708(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32708);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
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

__attribute__((alias("__imp__sub_83135518"))) PPC_WEAK_FUNC(sub_83135518);
PPC_FUNC_IMPL(__imp__sub_83135518) {
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
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x83137018
	sub_83137018(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x83137030
	sub_83137030(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x83137050
	sub_83137050(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83139be8
	sub_83139BE8(ctx, base);
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8313558c
	if (!cr6.eq) goto loc_8313558C;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8313558c
	if (cr0.eq) goto loc_8313558C;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313558C:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8313559c
	if (cr0.eq) goto loc_8313559C;
	// bl 0x8320cfe0
	sub_8320CFE0(ctx, base);
loc_8313559C:
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stb r30,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r30.u8);
	// stb r30,168(r31)
	PPC_STORE_U8(r31.u32 + 168, r30.u8);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831355C8"))) PPC_WEAK_FUNC(sub_831355C8);
PPC_FUNC_IMPL(__imp__sub_831355C8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831355f4
	if (!cr6.eq) goto loc_831355F4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8248
	ctx.r3.s64 = r11.s64 + 8248;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// b 0x83135640
	goto loc_83135640;
loc_831355F4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83135604
	if (cr0.eq) goto loc_83135604;
	// bl 0x8313ba70
	sub_8313BA70(ctx, base);
loc_83135604:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x83135638
	if (!cr6.eq) goto loc_83135638;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x8313e4d0
	sub_8313E4D0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83135638
	if (cr6.eq) goto loc_83135638;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83135638:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83135518
	sub_83135518(ctx, base);
loc_83135640:
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

__attribute__((alias("__imp__sub_83135658"))) PPC_WEAK_FUNC(sub_83135658);
PPC_FUNC_IMPL(__imp__sub_83135658) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x831356dc
	if (cr6.eq) goto loc_831356DC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x831356dc
	if (cr6.eq) goto loc_831356DC;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x831356c8
	if (!cr6.eq) goto loc_831356C8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8313a288
	sub_8313A288(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8313a268
	sub_8313A268(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8313a278
	sub_8313A278(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// divw r10,r10,r3
	ctx.r10.s32 = ctx.r10.s32 / ctx.r3.s32;
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x831356ec
	goto loc_831356EC;
loc_831356C8:
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x831356ec
	goto loc_831356EC;
loc_831356DC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83137070
	sub_83137070(ctx, base);
loc_831356EC:
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83135708"))) PPC_WEAK_FUNC(sub_83135708);
PPC_FUNC_IMPL(__imp__sub_83135708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8313597c
	if (cr6.eq) goto loc_8313597C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8313597c
	if (cr6.eq) goto loc_8313597C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8313597c
	if (cr6.eq) goto loc_8313597C;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r11,-32744(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -32744);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83135750
	if (!cr6.eq) goto loc_83135750;
	// bl 0x83135658
	sub_83135658(ctx, base);
	// b 0x83135988
	goto loc_83135988;
loc_83135750:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r28,-31931
	r28.s64 = -2092630016;
	// lis r29,-31931
	r29.s64 = -2092630016;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,29792(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 29792, temp.u32);
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x83135828
	if (cr6.eq) goto loc_83135828;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83135828
	if (cr6.eq) goto loc_83135828;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x8313581c
	if (!cr6.eq) goto loc_8313581C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313a288
	sub_8313A288(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313a268
	sub_8313A268(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313a278
	sub_8313A278(ctx, base);
	// li r11,16
	r11.s64 = 16;
	// divw r9,r11,r3
	ctx.r9.s32 = r11.s32 / ctx.r3.s32;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// lwa r10,88(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 88));
	// lwa r8,29796(r29)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(r29.u32 + 29796));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x83135820
	goto loc_83135820;
loc_8313581C:
	// li r11,0
	r11.s64 = 0;
loc_83135820:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83135960
	goto loc_83135960;
loc_83135828:
	// lbz r11,114(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 114);
	// lis r27,-31942
	r27.s64 = -2093350912;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83135854
	if (!cr6.eq) goto loc_83135854;
	// lwz r9,160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r11,32412(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 32412);
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// mulli r11,r11,100
	r11.s64 = r11.s64 * 100;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x83135858
	goto loc_83135858;
loc_83135854:
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
loc_83135858:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83135658
	sub_83135658(ctx, base);
	// lwa r10,80(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lwa r9,88(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 88));
	// lwa r8,0(r30)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 0));
	// lwa r11,29796(r29)
	r11.s64 = int32_t(PPC_LOAD_U32(r29.u32 + 29796));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fdivs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f0,-5316(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5316);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,-24700(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24700);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,29792(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 29792, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x831358f8
	if (cr6.gt) goto loc_831358F8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,-31784(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31784);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x83135960
	if (!cr6.lt) goto loc_83135960;
loc_831358F8:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83137070
	sub_83137070(ctx, base);
	// lwa r10,80(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lwa r9,88(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 88));
	// lwa r11,29796(r29)
	r11.s64 = int32_t(PPC_LOAD_U32(r29.u32 + 29796));
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// li r12,156
	r12.s64 = 156;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(r31.u32 + r12.u32, f0.u32);
	// lwz r11,32412(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 32412);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
loc_83135960:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,29796(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 29796);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// b 0x83135988
	goto loc_83135988;
loc_8313597C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8328
	ctx.r3.s64 = r11.s64 + 8328;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
loc_83135988:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83135990"))) PPC_WEAK_FUNC(sub_83135990);
PPC_FUNC_IMPL(__imp__sub_83135990) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x831359bc
	if (!cr6.eq) goto loc_831359BC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8588
	ctx.r3.s64 = r11.s64 + 8588;
	// b 0x83135aac
	goto loc_83135AAC;
loc_831359BC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x831359d8
	if (cr6.eq) goto loc_831359D8;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// beq cr6,0x831359d8
	if (cr6.eq) goto loc_831359D8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8544
	ctx.r3.s64 = r11.s64 + 8544;
	// b 0x83135aac
	goto loc_83135AAC;
loc_831359D8:
	// cmpwi cr6,r28,-128
	cr6.compare<int32_t>(r28.s32, -128, xer);
	// beq cr6,0x831359fc
	if (cr6.eq) goto loc_831359FC;
	// cmpwi cr6,r28,-15
	cr6.compare<int32_t>(r28.s32, -15, xer);
	// bge cr6,0x831359f0
	if (!cr6.lt) goto loc_831359F0;
	// li r28,-15
	r28.s64 = -15;
	// b 0x831359fc
	goto loc_831359FC;
loc_831359F0:
	// cmpwi cr6,r28,15
	cr6.compare<int32_t>(r28.s32, 15, xer);
	// ble cr6,0x831359fc
	if (!cr6.gt) goto loc_831359FC;
	// li r28,15
	r28.s64 = 15;
loc_831359FC:
	// lbz r11,169(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 169);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83135a20
	if (!cr6.eq) goto loc_83135A20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x8313a328
	sub_8313A328(ctx, base);
	// extsh r31,r3
	r31.s64 = ctx.r3.s16;
	// cmpwi cr6,r31,-128
	cr6.compare<int32_t>(r31.s32, -128, xer);
	// bne cr6,0x83135a24
	if (!cr6.eq) goto loc_83135A24;
loc_83135A20:
	// li r31,0
	r31.s64 = 0;
loc_83135A24:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,32404(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32404);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83135a74
	if (!cr6.eq) goto loc_83135A74;
	// cmpwi cr6,r28,-128
	cr6.compare<int32_t>(r28.s32, -128, xer);
	// bne cr6,0x83135a6c
	if (!cr6.eq) goto loc_83135A6C;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x8313a270
	sub_8313A270(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83135a60
	if (!cr6.eq) goto loc_83135A60;
	// subfic r11,r30,0
	xer.ca = r30.u32 <= 0;
	r11.s64 = 0 - r30.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,27,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1E;
	// addi r11,r11,-15
	r11.s64 = r11.s64 + -15;
	// b 0x83135a64
	goto loc_83135A64;
loc_83135A60:
	// li r11,0
	r11.s64 = 0;
loc_83135A64:
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
	// b 0x83135a78
	goto loc_83135A78;
loc_83135A6C:
	// add r5,r31,r28
	ctx.r5.u64 = r31.u64 + r28.u64;
	// b 0x83135a78
	goto loc_83135A78;
loc_83135A74:
	// li r5,0
	ctx.r5.s64 = 0;
loc_83135A78:
	// addi r11,r30,33
	r11.s64 = r30.s64 + 33;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r29
	PPC_STORE_U16(r11.u32 + r29.u32, r28.u16);
	// lbz r11,3(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 3);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x83135aa4
	if (!cr6.lt) goto loc_83135AA4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x83137370
	sub_83137370(ctx, base);
	// b 0x83135ab0
	goto loc_83135AB0;
loc_83135AA4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8500
	ctx.r3.s64 = r11.s64 + 8500;
loc_83135AAC:
	// bl 0x831392e0
	sub_831392E0(ctx, base);
loc_83135AB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83135AB8"))) PPC_WEAK_FUNC(sub_83135AB8);
PPC_FUNC_IMPL(__imp__sub_83135AB8) {
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
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r28,-31941
	r28.s64 = -2093285376;
	// lwz r11,-32740(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -32740);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83135ae0
	if (cr6.eq) goto loc_83135AE0;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// b 0x83135bc4
	goto loc_83135BC4;
loc_83135AE0:
	// li r11,1
	r11.s64 = 1;
	// stw r11,-32740(r28)
	PPC_STORE_U32(r28.u32 + -32740, r11.u32);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r11,-32764
	r31.s64 = r11.s64 + -32764;
	// lwz r11,-12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83135b14
	if (cr6.eq) goto loc_83135B14;
	// addi r11,r31,-12
	r11.s64 = r31.s64 + -12;
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83135B14:
	// bl 0x8313abd8
	sub_8313ABD8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r29,r11,29824
	r29.s64 = r11.s64 + 29824;
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,-32740(r28)
	PPC_STORE_U32(r28.u32 + -32740, ctx.r10.u32);
loc_83135B2C:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83135b40
	if (!cr6.eq) goto loc_83135B40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313f8e8
	sub_8313F8E8(ctx, base);
loc_83135B40:
	// addi r30,r30,196
	r30.s64 = r30.s64 + 196;
	// addi r11,r29,6272
	r11.s64 = r29.s64 + 6272;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83135b2c
	if (cr6.lt) goto loc_83135B2C;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,-32740(r28)
	PPC_STORE_U32(r28.u32 + -32740, ctx.r10.u32);
	// beq cr6,0x83135b78
	if (cr6.eq) goto loc_83135B78;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83135B78:
	// bl 0x83137158
	sub_83137158(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83135b9c
	if (cr6.eq) goto loc_83135B9C;
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83135B9C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,-32740(r28)
	PPC_STORE_U32(r28.u32 + -32740, ctx.r10.u32);
	// beq cr6,0x83135bc4
	if (cr6.eq) goto loc_83135BC4;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83135BC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83135BD0"))) PPC_WEAK_FUNC(sub_83135BD0);
PPC_FUNC_IMPL(__imp__sub_83135BD0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x83135bf4
	if (!cr6.lt) goto loc_83135BF4;
loc_83135BEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83135c40
	goto loc_83135C40;
loc_83135BF4:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// bne cr6,0x83135bec
	if (!cr6.eq) goto loc_83135BEC;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r11,r1,104
	r11.s64 = ctx.r1.s64 + 104;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,97
	ctx.r8.s64 = ctx.r1.s64 + 97;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r1,98
	ctx.r7.s64 = ctx.r1.s64 + 98;
	// addi r6,r1,99
	ctx.r6.s64 = ctx.r1.s64 + 99;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// bl 0x8313e778
	sub_8313E778(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83135bec
	if (cr0.lt) goto loc_83135BEC;
	// lha r11,100(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 100));
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_83135C40:
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

__attribute__((alias("__imp__sub_83135C58"))) PPC_WEAK_FUNC(sub_83135C58);
PPC_FUNC_IMPL(__imp__sub_83135C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x83135c68
	if (!cr6.lt) goto loc_83135C68;
loc_83135C60:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83135C68:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32769
	cr6.compare<uint32_t>(r11.u32, 32769, xer);
	// bne cr6,0x83135c60
	if (!cr6.eq) goto loc_83135C60;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83135C80"))) PPC_WEAK_FUNC(sub_83135C80);
PPC_FUNC_IMPL(__imp__sub_83135C80) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x83135ca0
	if (!cr0.eq) goto loc_83135CA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83135dd0
	goto loc_83135DD0;
loc_83135CA0:
	// srawi r10,r5,5
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 5;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r30,r4,18
	r30.s64 = ctx.r4.s64 * 18;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r28,r10,r30
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divw r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	// mullw r29,r11,r30
	r29.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r27,r29
	r27.u64 = r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r5,r29,r28
	ctx.r5.s64 = r28.s64 - r29.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divw r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	// mullw r29,r11,r30
	r29.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r11,r29,r27
	r11.u64 = r29.u64 + r27.u64;
	// divw r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	// rlwinm r3,r11,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
loc_83135DD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83135DD8"))) PPC_WEAK_FUNC(sub_83135DD8);
PPC_FUNC_IMPL(__imp__sub_83135DD8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83135e00
	if (!cr6.eq) goto loc_83135E00;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8984
	ctx.r3.s64 = r11.s64 + 8984;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// b 0x83135f78
	goto loc_83135F78;
loc_83135E00:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r10,-32728(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -32728);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83135e20
	if (cr6.eq) goto loc_83135E20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83135E20:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83135e34
	if (!cr6.eq) goto loc_83135E34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831355c8
	sub_831355C8(ctx, base);
loc_83135E34:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83135e4c
	if (cr0.eq) goto loc_83135E4C;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// bl 0x83137690
	sub_83137690(ctx, base);
loc_83135E4C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83135e60
	if (cr0.eq) goto loc_83135E60;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// bl 0x83139b18
	sub_83139B18(ctx, base);
loc_83135E60:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83135e88
	if (cr0.eq) goto loc_83135E88;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313b080
	sub_8313B080(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313bb40
	sub_8313BB40(ctx, base);
loc_83135E88:
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83135e9c
	if (cr0.eq) goto loc_83135E9C;
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// bl 0x8313e568
	sub_8313E568(ctx, base);
loc_83135E9C:
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83135ec0
	if (cr0.eq) goto loc_83135EC0;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83135EC0:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// mr r28,r29
	r28.u64 = r29.u64;
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x83135f4c
	if (!cr0.gt) goto loc_83135F4C;
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
loc_83135ED4:
	// lwz r3,-96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -96);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83135ef4
	if (cr0.eq) goto loc_83135EF4;
	// stw r29,-96(r30)
	PPC_STORE_U32(r30.u32 + -96, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83135EF4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83135f14
	if (cr0.eq) goto loc_83135F14;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83135F14:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83135f34
	if (cr0.eq) goto loc_83135F34;
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83135F34:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x83135ed4
	if (cr6.lt) goto loc_83135ED4;
loc_83135F4C:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83135f60
	if (cr0.eq) goto loc_83135F60;
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// bl 0x8313dc60
	sub_8313DC60(ctx, base);
loc_83135F60:
	// li r5,196
	ctx.r5.s64 = 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
loc_83135F78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83135F80"))) PPC_WEAK_FUNC(sub_83135F80);
PPC_FUNC_IMPL(__imp__sub_83135F80) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831355c8
	sub_831355C8(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_83135FB8"))) PPC_WEAK_FUNC(sub_83135FB8);
PPC_FUNC_IMPL(__imp__sub_83135FB8) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83135fec
	if (!cr6.eq) goto loc_83135FEC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8288
	ctx.r3.s64 = r11.s64 + 8288;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83135ff4
	goto loc_83135FF4;
loc_83135FEC:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r31,r11
	r31.s64 = r11.s8;
loc_83135FF4:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_83136010"))) PPC_WEAK_FUNC(sub_83136010);
PPC_FUNC_IMPL(__imp__sub_83136010) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83135708
	sub_83135708(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83136048"))) PPC_WEAK_FUNC(sub_83136048);
PPC_FUNC_IMPL(__imp__sub_83136048) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313607c
	if (!cr6.eq) goto loc_8313607C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8368
	ctx.r3.s64 = r11.s64 + 8368;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x831360a0
	goto loc_831360A0;
loc_8313607C:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x8313609c
	if (cr6.lt) goto loc_8313609C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313a288
	sub_8313A288(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x831360a0
	goto loc_831360A0;
loc_8313609C:
	// li r31,0
	r31.s64 = 0;
loc_831360A0:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_831360C0"))) PPC_WEAK_FUNC(sub_831360C0);
PPC_FUNC_IMPL(__imp__sub_831360C0) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831360f4
	if (!cr6.eq) goto loc_831360F4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8412
	ctx.r3.s64 = r11.s64 + 8412;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83136118
	goto loc_83136118;
loc_831360F4:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x83136114
	if (cr6.lt) goto loc_83136114;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313a268
	sub_8313A268(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x83136118
	goto loc_83136118;
loc_83136114:
	// li r31,0
	r31.s64 = 0;
loc_83136118:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_83136138"))) PPC_WEAK_FUNC(sub_83136138);
PPC_FUNC_IMPL(__imp__sub_83136138) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313616c
	if (!cr6.eq) goto loc_8313616C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8456
	ctx.r3.s64 = r11.s64 + 8456;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83136190
	goto loc_83136190;
loc_8313616C:
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x8313618c
	if (cr6.lt) goto loc_8313618C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313a270
	sub_8313A270(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x83136190
	goto loc_83136190;
loc_8313618C:
	// li r31,0
	r31.s64 = 0;
loc_83136190:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_831361B0"))) PPC_WEAK_FUNC(sub_831361B0);
PPC_FUNC_IMPL(__imp__sub_831361B0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83135990
	sub_83135990(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831361E8"))) PPC_WEAK_FUNC(sub_831361E8);
PPC_FUNC_IMPL(__imp__sub_831361E8) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83136220
	if (!cr6.eq) goto loc_83136220;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8640
	ctx.r3.s64 = r11.s64 + 8640;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// b 0x8313622c
	goto loc_8313622C;
loc_83136220:
	// addi r11,r30,33
	r11.s64 = r30.s64 + 33;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r31,r11,r31
	r31.s64 = int16_t(PPC_LOAD_U16(r11.u32 + r31.u32));
loc_8313622C:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_83136250"))) PPC_WEAK_FUNC(sub_83136250);
PPC_FUNC_IMPL(__imp__sub_83136250) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83136288
	if (!cr6.eq) goto loc_83136288;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8684
	ctx.r3.s64 = r11.s64 + 8684;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// b 0x831362bc
	goto loc_831362BC;
loc_83136288:
	// lbz r10,169(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 169);
	// sth r30,64(r31)
	PPC_STORE_U16(r31.u32 + 64, r30.u16);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x831362a8
	if (!cr6.eq) goto loc_831362A8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8313a2c8
	sub_8313A2C8(ctx, base);
	// extsh r11,r3
	r11.s64 = ctx.r3.s16;
	// b 0x831362ac
	goto loc_831362AC;
loc_831362A8:
	// li r11,0
	r11.s64 = 0;
loc_831362AC:
	// lha r10,64(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 64));
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x83137308
	sub_83137308(ctx, base);
loc_831362BC:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831362D8"))) PPC_WEAK_FUNC(sub_831362D8);
PPC_FUNC_IMPL(__imp__sub_831362D8) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83136308
	if (!cr6.eq) goto loc_83136308;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8728
	ctx.r3.s64 = r11.s64 + 8728;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// b 0x8313630c
	goto loc_8313630C;
loc_83136308:
	// lha r31,64(r31)
	r31.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 64));
loc_8313630C:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_83136328"))) PPC_WEAK_FUNC(sub_83136328);
PPC_FUNC_IMPL(__imp__sub_83136328) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r31,-32736(r11)
	PPC_STORE_U32(r11.u32 + -32736, r31.u32);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r31,-32732(r11)
	PPC_STORE_U32(r11.u32 + -32732, r31.u32);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_83136368"))) PPC_WEAK_FUNC(sub_83136368);
PPC_FUNC_IMPL(__imp__sub_83136368) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831363a0
	if (!cr6.eq) goto loc_831363A0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8772
	ctx.r3.s64 = r11.s64 + 8772;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// b 0x831363ac
	goto loc_831363AC;
loc_831363A0:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r31,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r31.u32);
	// stw r31,-32732(r11)
	PPC_STORE_U32(r11.u32 + -32732, r31.u32);
loc_831363AC:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831363C8"))) PPC_WEAK_FUNC(sub_831363C8);
PPC_FUNC_IMPL(__imp__sub_831363C8) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// stb r30,109(r31)
	PPC_STORE_U8(r31.u32 + 109, r30.u8);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136408"))) PPC_WEAK_FUNC(sub_83136408);
PPC_FUNC_IMPL(__imp__sub_83136408) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// bl 0x83135ab8
	sub_83135AB8(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136430"))) PPC_WEAK_FUNC(sub_83136430);
PPC_FUNC_IMPL(__imp__sub_83136430) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83136464
	if (!cr6.eq) goto loc_83136464;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8816
	ctx.r3.s64 = r11.s64 + 8816;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83136468
	goto loc_83136468;
loc_83136464:
	// lha r31,96(r31)
	r31.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 96));
loc_83136468:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_83136488"))) PPC_WEAK_FUNC(sub_83136488);
PPC_FUNC_IMPL(__imp__sub_83136488) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831364b8
	if (!cr6.eq) goto loc_831364B8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8860
	ctx.r3.s64 = r11.s64 + 8860;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// b 0x83136570
	goto loc_83136570;
loc_831364B8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831364cc
	if (!cr0.eq) goto loc_831364CC;
	// li r30,0
	r30.s64 = 0;
	// b 0x831364e4
	goto loc_831364E4;
loc_831364CC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_831364E4:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x8313656c
	if (cr6.eq) goto loc_8313656C;
	// lbz r11,108(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 108);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8313656c
	if (!cr6.eq) goto loc_8313656C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x8313656c
	if (!cr6.eq) goto loc_8313656C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83159448
	sub_83159448(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// bl 0x8313a2a0
	sub_8313A2A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,2047
	r11.s64 = r11.s64 + 2047;
	// srawi r11,r11,11
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FF) != 0);
	r11.s64 = r11.s32 >> 11;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r30,r11,11,0,20
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// bl 0x8313a2c0
	sub_8313A2C0(ctx, base);
	// addi r11,r3,2047
	r11.s64 = ctx.r3.s64 + 2047;
	// srawi r11,r11,11
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FF) != 0);
	r11.s64 = r11.s32 >> 11;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,11,0,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// subf. r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x83136558
	if (cr0.gt) goto loc_83136558;
	// li r11,0
	r11.s64 = 0;
	// b 0x83136568
	goto loc_83136568;
loc_83136558:
	// subf r10,r30,r29
	ctx.r10.s64 = r29.s64 - r30.s64;
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / r11.s32;
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
loc_83136568:
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
loc_8313656C:
	// stb r28,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r28.u8);
loc_83136570:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83136580"))) PPC_WEAK_FUNC(sub_83136580);
PPC_FUNC_IMPL(__imp__sub_83136580) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831374d0
	sub_831374D0(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831365C8"))) PPC_WEAK_FUNC(sub_831365C8);
PPC_FUNC_IMPL(__imp__sub_831365C8) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831365fc
	if (!cr6.eq) goto loc_831365FC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8904
	ctx.r3.s64 = r11.s64 + 8904;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// b 0x8313660c
	goto loc_8313660C;
loc_831365FC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831371e8
	sub_831371E8(ctx, base);
loc_8313660C:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83136618"))) PPC_WEAK_FUNC(sub_83136618);
PPC_FUNC_IMPL(__imp__sub_83136618) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313664c
	if (!cr6.eq) goto loc_8313664C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,8944
	ctx.r3.s64 = r11.s64 + 8944;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
	// b 0x8313665c
	goto loc_8313665C;
loc_8313664C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83137258
	sub_83137258(ctx, base);
loc_8313665C:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83136668"))) PPC_WEAK_FUNC(sub_83136668);
PPC_FUNC_IMPL(__imp__sub_83136668) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83139b98
	sub_83139B98(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_831366A0"))) PPC_WEAK_FUNC(sub_831366A0);
PPC_FUNC_IMPL(__imp__sub_831366A0) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831366E0"))) PPC_WEAK_FUNC(sub_831366E0);
PPC_FUNC_IMPL(__imp__sub_831366E0) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r30,152(r31)
	PPC_STORE_U8(r31.u32 + 152, r30.u8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83136718
	if (cr0.eq) goto loc_83136718;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8313a228
	sub_8313A228(ctx, base);
loc_83136718:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136738"))) PPC_WEAK_FUNC(sub_83136738);
PPC_FUNC_IMPL(__imp__sub_83136738) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8313a230
	sub_8313A230(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83136770"))) PPC_WEAK_FUNC(sub_83136770);
PPC_FUNC_IMPL(__imp__sub_83136770) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83135c80
	sub_83135C80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831367B0"))) PPC_WEAK_FUNC(sub_831367B0);
PPC_FUNC_IMPL(__imp__sub_831367B0) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,63
	r11.s64 = ctx.r4.s64 + 63;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r29,r11,0,0,25
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// subf r11,r29,r4
	r11.s64 = ctx.r4.s64 - r29.s64;
	// add r28,r11,r5
	r28.u64 = r11.u64 + ctx.r5.u64;
	// blt cr6,0x83136a68
	if (cr6.lt) goto loc_83136A68;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83136a68
	if (cr6.eq) goto loc_83136A68;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x83136a68
	if (cr6.lt) goto loc_83136A68;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r27,0
	r27.s64 = 0;
	// addi r10,r11,29824
	ctx.r10.s64 = r11.s64 + 29824;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_831367FC:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8313681c
	if (cr6.eq) goto loc_8313681C;
	// addi r9,r9,196
	ctx.r9.s64 = ctx.r9.s64 + 196;
	// addi r8,r10,6272
	ctx.r8.s64 = ctx.r10.s64 + 6272;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x831367fc
	if (cr6.lt) goto loc_831367FC;
loc_8313681C:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bne cr6,0x83136830
	if (!cr6.eq) goto loc_83136830;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9112
	ctx.r3.s64 = r11.s64 + 9112;
	// b 0x83136a70
	goto loc_83136A70;
loc_83136830:
	// mulli r11,r11,196
	r11.s64 = r11.s64 * 196;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// li r5,196
	ctx.r5.s64 = 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mulli r11,r30,16576
	r11.s64 = r30.s64 * 16576;
	// stb r30,3(r31)
	PPC_STORE_U8(r31.u32 + 3, r30.u8);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// addi r11,r10,-292
	r11.s64 = ctx.r10.s64 + -292;
	// srawi r11,r11,11
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FF) != 0);
	r11.s64 = r11.s32 >> 11;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// rlwinm. r4,r11,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r4,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// bge 0x83136880
	if (!cr0.lt) goto loc_83136880;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9064
	ctx.r3.s64 = r11.s64 + 9064;
	// b 0x83136a70
	goto loc_83136A70;
loc_83136880:
	// add r11,r4,r3
	r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// li r9,8192
	ctx.r9.s64 = 8192;
	// li r8,8288
	ctx.r8.s64 = 8288;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r8,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r8.u32);
	// bl 0x8313d0e0
	sub_8313D0E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bne 0x831368cc
	if (!cr0.eq) goto loc_831368CC;
loc_831368C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83135dd8
	sub_83135DD8(ctx, base);
	// b 0x83136a74
	goto loc_83136A74;
loc_831368CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8313b7e8
	sub_8313B7E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq 0x831368c0
	if (cr0.eq) goto loc_831368C0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83136934
	if (!cr6.gt) goto loc_83136934;
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
loc_831368F0:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mullw r9,r11,r29
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8313d0e0
	sub_8313D0E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// beq 0x831368c0
	if (cr0.eq) goto loc_831368C0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x831368f0
	if (cr6.lt) goto loc_831368F0;
loc_83136934:
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8313a3b0
	sub_8313A3B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x831368c0
	if (cr0.eq) goto loc_831368C0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83136f38
	sub_83136F38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// beq 0x831368c0
	if (cr0.eq) goto loc_831368C0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8313e0e8
	sub_8313E0E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// beq 0x831368c0
	if (cr0.eq) goto loc_831368C0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8313e128
	sub_8313E128(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// sth r27,64(r31)
	PPC_STORE_U16(r31.u32 + 64, r27.u16);
	// lwz r10,-32736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -32736);
	// srawi r11,r9,11
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	r11.s64 = ctx.r9.s32 >> 11;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sth r11,60(r31)
	PPC_STORE_U16(r31.u32 + 60, r11.u16);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,16280(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16280);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lhz r11,86(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,62(r31)
	PPC_STORE_U16(r31.u32 + 62, r11.u16);
	// ble cr6,0x83136a08
	if (!cr6.gt) goto loc_83136A08;
	// addi r11,r31,66
	r11.s64 = r31.s64 + 66;
	// li r10,-128
	ctx.r10.s64 = -128;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83136a08
	if (cr0.eq) goto loc_83136A08;
	// mtctr r30
	ctr.u64 = r30.u64;
loc_831369FC:
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bdnz 0x831369fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831369FC;
loc_83136A08:
	// li r30,1
	r30.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// sth r27,70(r31)
	PPC_STORE_U16(r31.u32 + 70, r27.u16);
	// stw r27,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r27.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// stb r30,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r30.u8);
	// sth r27,96(r31)
	PPC_STORE_U16(r31.u32 + 96, r27.u16);
	// stw r27,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r27.u32);
	// sth r27,104(r31)
	PPC_STORE_U16(r31.u32 + 104, r27.u16);
	// sth r27,106(r31)
	PPC_STORE_U16(r31.u32 + 106, r27.u16);
	// stb r30,109(r31)
	PPC_STORE_U8(r31.u32 + 109, r30.u8);
	// stb r27,114(r31)
	PPC_STORE_U8(r31.u32 + 114, r27.u8);
	// stw r27,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r27.u32);
	// stb r27,152(r31)
	PPC_STORE_U8(r31.u32 + 152, r27.u8);
	// beq 0x83136a54
	if (cr0.eq) goto loc_83136A54;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8313a228
	sub_8313A228(ctx, base);
loc_83136A54:
	// stb r30,169(r31)
	PPC_STORE_U8(r31.u32 + 169, r30.u8);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x83136a78
	goto loc_83136A78;
loc_83136A68:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9024
	ctx.r3.s64 = r11.s64 + 9024;
loc_83136A70:
	// bl 0x831392e0
	sub_831392E0(ctx, base);
loc_83136A74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83136A78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83136A80"))) PPC_WEAK_FUNC(sub_83136A80);
PPC_FUNC_IMPL(__imp__sub_83136A80) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83135dd8
	sub_83135DD8(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_83136AB8"))) PPC_WEAK_FUNC(sub_83136AB8);
PPC_FUNC_IMPL(__imp__sub_83136AB8) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r30,r11,29824
	r30.s64 = r11.s64 + 29824;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_83136ADC:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83136af0
	if (!cr6.eq) goto loc_83136AF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83135dd8
	sub_83135DD8(ctx, base);
loc_83136AF0:
	// addi r31,r31,196
	r31.s64 = r31.s64 + 196;
	// addi r11,r30,6272
	r11.s64 = r30.s64 + 6272;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83136adc
	if (cr6.lt) goto loc_83136ADC;
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136B20"))) PPC_WEAK_FUNC(sub_83136B20);
PPC_FUNC_IMPL(__imp__sub_83136B20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x83136b78
	if (!cr0.gt) goto loc_83136B78;
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
loc_83136B4C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83136b4c
	if (cr6.lt) goto loc_83136B4C;
loc_83136B78:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83139b78
	sub_83139B78(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// bl 0x83139ba0
	sub_83139BA0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// stb r30,113(r31)
	PPC_STORE_U8(r31.u32 + 113, r30.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// stw r8,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r8.u32);
	// stw r9,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r9.u32);
	// lwz r11,32412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32412);
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// bne cr6,0x83136be4
	if (!cr6.eq) goto loc_83136BE4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83136488
	sub_83136488(ctx, base);
loc_83136BE4:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83136bf4
	if (cr0.eq) goto loc_83136BF4;
	// bl 0x8313dca8
	sub_8313DCA8(ctx, base);
loc_83136BF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83136C00"))) PPC_WEAK_FUNC(sub_83136C00);
PPC_FUNC_IMPL(__imp__sub_83136C00) {
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lha r11,60(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 60));
	// lha r10,62(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 62));
	// rlwinm r5,r11,11,0,20
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r4,r10,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// bl 0x8313b778
	sub_8313B778(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,25248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 25248);
	// bl 0x8313b0b0
	sub_8313B0B0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8313b080
	sub_8313B080(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8313afd8
	sub_8313AFD8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8313b920
	sub_8313B920(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8313ba70
	sub_8313BA70(ctx, base);
	// extsw r11,r27
	r11.s64 = r27.s32;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rldicr r7,r11,11,52
	ctx.r7.u64 = __builtin_rotateleft64(r11.u64, 11) & 0xFFFFFFFFFFFFF800;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8313b838
	sub_8313B838(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8313b8a0
	sub_8313B8A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x83136b20
	sub_83136B20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83136CB0"))) PPC_WEAK_FUNC(sub_83136CB0);
PPC_FUNC_IMPL(__imp__sub_83136CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lbz r11,114(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 114);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83136cdc
	if (!cr6.eq) goto loc_83136CDC;
	// li r29,0
	r29.s64 = 0;
	// b 0x83136d7c
	goto loc_83136D7C;
loc_83136CDC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// bl 0x83135ab8
	sub_83135AB8(ctx, base);
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// lis r30,-31941
	r30.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,-32744(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + -32744);
	// stw r11,-32744(r30)
	PPC_STORE_U32(r30.u32 + -32744, r11.u32);
	// bl 0x83135708
	sub_83135708(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// stw r28,-32744(r30)
	PPC_STORE_U32(r30.u32 + -32744, r28.u32);
	// addi r8,r31,156
	ctx.r8.s64 = r31.s64 + 156;
	// lwa r10,80(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 80));
	// lwa r9,88(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 88));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwa r11,29796(r11)
	r11.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 29796));
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, f0.u32);
	// lwz r11,32412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32412);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
loc_83136D7C:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83136D90"))) PPC_WEAK_FUNC(sub_83136D90);
PPC_FUNC_IMPL(__imp__sub_83136D90) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831367b0
	sub_831367B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83136DD0"))) PPC_WEAK_FUNC(sub_83136DD0);
PPC_FUNC_IMPL(__imp__sub_83136DD0) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831367b0
	sub_831367B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_83136E28"))) PPC_WEAK_FUNC(sub_83136E28);
PPC_FUNC_IMPL(__imp__sub_83136E28) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83136e9c
	if (cr6.eq) goto loc_83136E9C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83136e9c
	if (cr6.eq) goto loc_83136E9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831355c8
	sub_831355C8(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,2(r31)
	PPC_STORE_U8(r31.u32 + 2, r11.u8);
	// bl 0x83136b20
	sub_83136B20(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r11,152(r31)
	PPC_STORE_U8(r31.u32 + 152, r11.u8);
	// beq 0x83136e94
	if (cr0.eq) goto loc_83136E94;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8313a228
	sub_8313A228(ctx, base);
loc_83136E94:
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// b 0x83136ea8
	goto loc_83136EA8;
loc_83136E9C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9156
	ctx.r3.s64 = r11.s64 + 9156;
	// bl 0x831392e0
	sub_831392E0(ctx, base);
loc_83136EA8:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83136EC8"))) PPC_WEAK_FUNC(sub_83136EC8);
PPC_FUNC_IMPL(__imp__sub_83136EC8) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r11,-32696
	r31.s64 = r11.s64 + -32696;
	// addi r8,r31,1280
	ctx.r8.s64 = r31.s64 + 1280;
loc_83136EE4:
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
	// bne 0x83136ee4
	if (!cr0.eq) goto loc_83136EE4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83136f20
	if (!cr6.eq) goto loc_83136F20;
	// bl 0x831341d8
	sub_831341D8(ctx, base);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_83136F20:
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

__attribute__((alias("__imp__sub_83136F38"))) PPC_WEAK_FUNC(sub_83136F38);
PPC_FUNC_IMPL(__imp__sub_83136F38) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r11,-32696
	ctx.r10.s64 = r11.s64 + -32696;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_83136F5C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x83136f80
	if (cr6.eq) goto loc_83136F80;
	// addi r11,r11,40
	r11.s64 = r11.s64 + 40;
	// addi r8,r10,1280
	ctx.r8.s64 = ctx.r10.s64 + 1280;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x83136f5c
	if (cr6.lt) goto loc_83136F5C;
loc_83136F80:
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x83137008
	if (cr6.eq) goto loc_83137008;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83135120
	sub_83135120(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83137008
	if (cr0.lt) goto loc_83137008;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83137008
	if (cr0.eq) goto loc_83137008;
	// li r6,8224
	ctx.r6.s64 = 8224;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83135000
	sub_83135000(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x83136ff4
	if (!cr6.gt) goto loc_83136FF4;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// addi r9,r29,24
	ctx.r9.s64 = r29.s64 + 24;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_83136FDC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83136fdc
	if (!cr0.eq) goto loc_83136FDC;
loc_83136FF4:
	// li r11,1
	r11.s64 = 1;
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8313700c
	goto loc_8313700C;
loc_83137008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8313700C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83137018"))) PPC_WEAK_FUNC(sub_83137018);
PPC_FUNC_IMPL(__imp__sub_83137018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// b 0x83134660
	sub_83134660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83137028"))) PPC_WEAK_FUNC(sub_83137028);
PPC_FUNC_IMPL(__imp__sub_83137028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137030"))) PPC_WEAK_FUNC(sub_83137030);
PPC_FUNC_IMPL(__imp__sub_83137030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83134660
	sub_83134660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83137048"))) PPC_WEAK_FUNC(sub_83137048);
PPC_FUNC_IMPL(__imp__sub_83137048) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137050"))) PPC_WEAK_FUNC(sub_83137050);
PPC_FUNC_IMPL(__imp__sub_83137050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bne cr6,0x83137068
	if (!cr6.eq) goto loc_83137068;
	// b 0x831345c0
	sub_831345C0(ctx, base);
	return;
loc_83137068:
	// b 0x83134660
	sub_83134660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8313706C"))) PPC_WEAK_FUNC(sub_8313706C);
PPC_FUNC_IMPL(__imp__sub_8313706C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137070"))) PPC_WEAK_FUNC(sub_83137070);
PPC_FUNC_IMPL(__imp__sub_83137070) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831370b8
	if (cr0.eq) goto loc_831370B8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x83134bf0
	sub_83134BF0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83134b68
	sub_83134B68(ctx, base);
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_831370B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831370C0"))) PPC_WEAK_FUNC(sub_831370C0);
PPC_FUNC_IMPL(__imp__sub_831370C0) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r3,r3,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831370F8"))) PPC_WEAK_FUNC(sub_831370F8);
PPC_FUNC_IMPL(__imp__sub_831370F8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137108"))) PPC_WEAK_FUNC(sub_83137108);
PPC_FUNC_IMPL(__imp__sub_83137108) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r31,0
	r31.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83137140
	if (cr0.eq) goto loc_83137140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83134ae8
	sub_83134AE8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83137140
	if (!cr6.eq) goto loc_83137140;
	// li r31,2
	r31.s64 = 2;
loc_83137140:
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

__attribute__((alias("__imp__sub_83137158"))) PPC_WEAK_FUNC(sub_83137158);
PPC_FUNC_IMPL(__imp__sub_83137158) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,-32696
	r30.s64 = r11.s64 + -32696;
	// addi r31,r30,32
	r31.s64 = r30.s64 + 32;
loc_83137174:
	// lwz r11,-32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83137194
	if (cr6.eq) goto loc_83137194;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83137190
	if (cr0.eq) goto loc_83137190;
	// bl 0x83135470
	sub_83135470(ctx, base);
loc_83137190:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_83137194:
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// addi r11,r30,1312
	r11.s64 = r30.s64 + 1312;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83137174
	if (cr6.lt) goto loc_83137174;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x831371b0
	if (!cr6.gt) goto loc_831371B0;
	// bl 0x83133f40
	sub_83133F40(ctx, base);
loc_831371B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831371B8"))) PPC_WEAK_FUNC(sub_831371B8);
PPC_FUNC_IMPL(__imp__sub_831371B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// b 0x83134de0
	sub_83134DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831371C8"))) PPC_WEAK_FUNC(sub_831371C8);
PPC_FUNC_IMPL(__imp__sub_831371C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831371D0"))) PPC_WEAK_FUNC(sub_831371D0);
PPC_FUNC_IMPL(__imp__sub_831371D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// b 0x83134d58
	sub_83134D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831371E0"))) PPC_WEAK_FUNC(sub_831371E0);
PPC_FUNC_IMPL(__imp__sub_831371E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831371E8"))) PPC_WEAK_FUNC(sub_831371E8);
PPC_FUNC_IMPL(__imp__sub_831371E8) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83137244
	if (cr0.eq) goto loc_83137244;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f0,9288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9288);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,-24796(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24796);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// bl 0x83134ef8
	sub_83134EF8(ctx, base);
loc_83137244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137258"))) PPC_WEAK_FUNC(sub_83137258);
PPC_FUNC_IMPL(__imp__sub_83137258) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83137290
	if (cr0.eq) goto loc_83137290;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83134cd0
	sub_83134CD0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// b 0x83137298
	goto loc_83137298;
loc_83137290:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
loc_83137298:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831372b4
	if (cr6.eq) goto loc_831372B4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,-24688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24688);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r31
	PPC_STORE_U32(r31.u32, ctx.f13.u32);
loc_831372B4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831372ec
	if (cr6.eq) goto loc_831372EC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,1200
	ctx.r10.s64 = 1200;
	// lfs f13,9292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9292);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divw r10,r11,r10
	ctx.r10.s32 = r11.s32 / ctx.r10.s32;
	// mulli r10,r10,1200
	ctx.r10.s64 = ctx.r10.s64 * 1200;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_831372EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137308"))) PPC_WEAK_FUNC(sub_83137308);
PPC_FUNC_IMPL(__imp__sub_83137308) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83137354
	if (cr0.eq) goto loc_83137354;
	// extsw r11,r31
	r11.s64 = r31.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-24412(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x83134140
	sub_83134140(ctx, base);
loc_83137354:
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137370"))) PPC_WEAK_FUNC(sub_83137370);
PPC_FUNC_IMPL(__imp__sub_83137370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r5.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83137498
	if (!cr6.eq) goto loc_83137498;
	// addic. r11,r5,15
	xer.ca = ctx.r5.u32 > 4294967280;
	r11.s64 = ctx.r5.s64 + 15;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subfic r9,r5,-15
	xer.ca = ctx.r5.u32 <= 4294967281;
	ctx.r9.s64 = -15 - ctx.r5.s64;
	// blt 0x831373bc
	if (cr0.lt) goto loc_831373BC;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_831373BC:
	// addic. r11,r5,-15
	xer.ca = ctx.r5.u32 > 14;
	r11.s64 = ctx.r5.s64 + -15;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subfic r10,r5,15
	xer.ca = ctx.r5.u32 <= 15;
	ctx.r10.s64 = 15 - ctx.r5.s64;
	// blt 0x831373cc
	if (cr0.lt) goto loc_831373CC;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_831373CC:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge cr6,0x831373d8
	if (!cr6.lt) goto loc_831373D8;
	// neg r5,r5
	ctx.r5.s64 = -ctx.r5.s64;
loc_831373D8:
	// cmpwi cr6,r9,15
	cr6.compare<int32_t>(ctx.r9.s32, 15, xer);
	// blt cr6,0x831373e4
	if (cr6.lt) goto loc_831373E4;
	// li r9,15
	ctx.r9.s64 = 15;
loc_831373E4:
	// cmpwi cr6,r10,15
	cr6.compare<int32_t>(ctx.r10.s32, 15, xer);
	// blt cr6,0x831373f0
	if (cr6.lt) goto loc_831373F0;
	// li r10,15
	ctx.r10.s64 = 15;
loc_831373F0:
	// cmpwi cr6,r5,15
	cr6.compare<int32_t>(ctx.r5.s32, 15, xer);
	// blt cr6,0x831373fc
	if (cr6.lt) goto loc_831373FC;
	// li r5,15
	ctx.r5.s64 = 15;
loc_831373FC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,9200
	r11.s64 = r11.s64 + 9200;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfsx f30,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	f30.f64 = double(temp.f32);
	// lfsx f31,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f31.f64 = double(temp.f32);
	// lfsx f1,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f31,6472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6472);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
loc_83137498:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_831374B8"))) PPC_WEAK_FUNC(sub_831374B8);
PPC_FUNC_IMPL(__imp__sub_831374B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// b 0x83134a70
	sub_83134A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831374C8"))) PPC_WEAK_FUNC(sub_831374C8);
PPC_FUNC_IMPL(__imp__sub_831374C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831374D0"))) PPC_WEAK_FUNC(sub_831374D0);
PPC_FUNC_IMPL(__imp__sub_831374D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x831374e0
	if (cr6.eq) goto loc_831374E0;
	// b 0x831346f8
	sub_831346F8(ctx, base);
	return;
loc_831374E0:
	// b 0x83134770
	sub_83134770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831374E8"))) PPC_WEAK_FUNC(sub_831374E8);
PPC_FUNC_IMPL(__imp__sub_831374E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8313753c
	if (cr0.eq) goto loc_8313753C;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,9264
	r11.s64 = r11.s64 + 9264;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-24412(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
loc_8313753C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
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

__attribute__((alias("__imp__sub_83137558"))) PPC_WEAK_FUNC(sub_83137558);
PPC_FUNC_IMPL(__imp__sub_83137558) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r31,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83137614
	if (cr6.eq) goto loc_83137614;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f31,6472(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6472);
	f31.f64 = double(temp.f32);
loc_83137590:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x83134fa0
	sub_83134FA0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// blt cr6,0x83137590
	if (cr6.lt) goto loc_83137590;
loc_83137614:
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

__attribute__((alias("__imp__sub_83137630"))) PPC_WEAK_FUNC(sub_83137630);
PPC_FUNC_IMPL(__imp__sub_83137630) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83134c38
	sub_83134C38(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r11,r3,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_83137688"))) PPC_WEAK_FUNC(sub_83137688);
PPC_FUNC_IMPL(__imp__sub_83137688) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x83134e70
	sub_83134E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83137690"))) PPC_WEAK_FUNC(sub_83137690);
PPC_FUNC_IMPL(__imp__sub_83137690) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831376b4
	if (cr0.eq) goto loc_831376B4;
	// bl 0x83134660
	sub_83134660(ctx, base);
loc_831376B4:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x831376cc
	if (cr0.eq) goto loc_831376CC;
	// bl 0x83135178
	sub_83135178(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_831376CC:
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
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

__attribute__((alias("__imp__sub_831376F0"))) PPC_WEAK_FUNC(sub_831376F0);
PPC_FUNC_IMPL(__imp__sub_831376F0) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r30,r11,-32696
	r30.s64 = r11.s64 + -32696;
	// addi r8,r30,1280
	ctx.r8.s64 = r30.s64 + 1280;
loc_83137710:
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
	// bne 0x83137710
	if (!cr0.eq) goto loc_83137710;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83137774
	if (!cr6.eq) goto loc_83137774;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8313773C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83137750
	if (cr6.eq) goto loc_83137750;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137690
	sub_83137690(ctx, base);
loc_83137750:
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// addi r11,r30,1280
	r11.s64 = r30.s64 + 1280;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8313773c
	if (cr6.lt) goto loc_8313773C;
	// bl 0x83133c28
	sub_83133C28(ctx, base);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_83137774:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137798"))) PPC_WEAK_FUNC(sub_83137798);
PPC_FUNC_IMPL(__imp__sub_83137798) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r11,r11,9296
	r11.s64 = r11.s64 + 9296;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,-31412(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31412, r11.u32);
	// bne cr6,0x831377dc
	if (!cr6.eq) goto loc_831377DC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9476
	ctx.r3.s64 = r11.s64 + 9476;
loc_831377D0:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83137848
	goto loc_83137848;
loc_831377DC:
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bge cr6,0x831377f0
	if (!cr6.lt) goto loc_831377F0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9428
	ctx.r3.s64 = r11.s64 + 9428;
	// b 0x831377d0
	goto loc_831377D0;
loc_831377F0:
	// addi r11,r3,3
	r11.s64 = ctx.r3.s64 + 3;
	// li r5,28
	ctx.r5.s64 = 28;
	// rlwinm r30,r11,0,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83137844
	goto loc_83137844;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9376
	ctx.r3.s64 = r11.s64 + 9376;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,80(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x83137848
	goto loc_83137848;
loc_83137844:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83137848:
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

__attribute__((alias("__imp__sub_83137860"))) PPC_WEAK_FUNC(sub_83137860);
PPC_FUNC_IMPL(__imp__sub_83137860) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137878"))) PPC_WEAK_FUNC(sub_83137878);
PPC_FUNC_IMPL(__imp__sub_83137878) {
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
	// addi r31,r1,-96
	r31.s64 = ctx.r1.s64 + -96;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831378a8
	if (!cr6.eq) goto loc_831378A8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9572
	ctx.r3.s64 = r11.s64 + 9572;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x831378e0
	goto loc_831378E0;
loc_831378A8:
	// nop 
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
	// b 0x831378d4
	goto loc_831378D4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9524
	ctx.r3.s64 = r11.s64 + 9524;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
loc_831378D4:
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_831378E0:
	// addi r1,r31,96
	ctx.r1.s64 = r31.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831378F4"))) PPC_WEAK_FUNC(sub_831378F4);
PPC_FUNC_IMPL(__imp__sub_831378F4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137908"))) PPC_WEAK_FUNC(sub_83137908);
PPC_FUNC_IMPL(__imp__sub_83137908) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83137940
	if (!cr6.eq) goto loc_83137940;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9660
	ctx.r3.s64 = r11.s64 + 9660;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83137974
	goto loc_83137974;
loc_83137940:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83137970
	goto loc_83137970;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9616
	ctx.r3.s64 = r11.s64 + 9616;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r30,-1
	r30.s64 = -1;
loc_83137970:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83137974:
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

__attribute__((alias("__imp__sub_8313798C"))) PPC_WEAK_FUNC(sub_8313798C);
PPC_FUNC_IMPL(__imp__sub_8313798C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831379A0"))) PPC_WEAK_FUNC(sub_831379A0);
PPC_FUNC_IMPL(__imp__sub_831379A0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831379d8
	if (!cr6.eq) goto loc_831379D8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9744
	ctx.r3.s64 = r11.s64 + 9744;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83137a0c
	goto loc_83137A0C;
loc_831379D8:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83137a08
	goto loc_83137A08;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9700
	ctx.r3.s64 = r11.s64 + 9700;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r30,-1
	r30.s64 = -1;
loc_83137A08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83137A0C:
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

__attribute__((alias("__imp__sub_83137A24"))) PPC_WEAK_FUNC(sub_83137A24);
PPC_FUNC_IMPL(__imp__sub_83137A24) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137A30"))) PPC_WEAK_FUNC(sub_83137A30);
PPC_FUNC_IMPL(__imp__sub_83137A30) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83137aa4
	if (cr6.eq) goto loc_83137AA4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83137aa4
	if (cr6.eq) goto loc_83137AA4;
	// cmplwi cr6,r4,280
	cr6.compare<uint32_t>(ctx.r4.u32, 280, xer);
	// blt cr6,0x83137a8c
	if (cr6.lt) goto loc_83137A8C;
	// addi r11,r3,3
	r11.s64 = ctx.r3.s64 + 3;
	// li r5,280
	ctx.r5.s64 = 280;
	// rlwinm r31,r11,0,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x83137ab4
	goto loc_83137AB4;
loc_83137A8C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9824
	ctx.r3.s64 = r11.s64 + 9824;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83137ab0
	goto loc_83137AB0;
loc_83137AA4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9784
	ctx.r3.s64 = r11.s64 + 9784;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_83137AB0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83137AB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137AD0"))) PPC_WEAK_FUNC(sub_83137AD0);
PPC_FUNC_IMPL(__imp__sub_83137AD0) {
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
	// li r5,280
	ctx.r5.s64 = 280;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
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

__attribute__((alias("__imp__sub_83137B00"))) PPC_WEAK_FUNC(sub_83137B00);
PPC_FUNC_IMPL(__imp__sub_83137B00) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83137b2c
	if (!cr6.eq) goto loc_83137B2C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9864
	ctx.r3.s64 = r11.s64 + 9864;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83137b34
	goto loc_83137B34;
loc_83137B2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
loc_83137B34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137B48"))) PPC_WEAK_FUNC(sub_83137B48);
PPC_FUNC_IMPL(__imp__sub_83137B48) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83137b74
	if (!cr6.eq) goto loc_83137B74;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9904
	ctx.r3.s64 = r11.s64 + 9904;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83137b80
	goto loc_83137B80;
loc_83137B74:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
loc_83137B80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137B90"))) PPC_WEAK_FUNC(sub_83137B90);
PPC_FUNC_IMPL(__imp__sub_83137B90) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// lwz r28,272(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmpwi cr6,r28,258
	cr6.compare<int32_t>(r28.s32, 258, xer);
	// blt cr6,0x83137bcc
	if (cr6.lt) goto loc_83137BCC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9948
	ctx.r3.s64 = r11.s64 + 9948;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83137d48
	goto loc_83137D48;
loc_83137BCC:
	// add r30,r28,r29
	r30.u64 = r28.u64 + r29.u64;
	// li r23,92
	r23.s64 = 92;
	// li r24,42
	r24.s64 = 42;
	// li r26,0
	r26.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stbx r23,r28,r29
	PPC_STORE_U8(r28.u32 + r29.u32, r23.u8);
	// stb r24,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r24.u8);
	// stb r26,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r26.u8);
	// bl 0x831cdc58
	sub_831CDC58(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// beq cr6,0x83137d44
	if (cr6.eq) goto loc_83137D44;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r25,r11,9944
	r25.s64 = r11.s64 + 9944;
loc_83137C08:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83137ccc
	if (cr0.eq) goto loc_83137CCC;
	// lbz r11,124(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// beq cr6,0x83137d28
	if (cr6.eq) goto loc_83137D28;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83137C38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83137c38
	if (!cr6.eq) goto loc_83137C38;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x83137c98
	if (cr0.eq) goto loc_83137C98;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83137c98
	if (cr0.eq) goto loc_83137C98;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83137d48
	if (cr0.lt) goto loc_83137D48;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83137c98
	if (cr6.eq) goto loc_83137C98;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_83137C98:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x83137cb8
	if (cr6.eq) goto loc_83137CB8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r21,-1
	ctx.r4.s64 = r21.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137b90
	sub_83137B90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83137d48
	if (cr0.lt) goto loc_83137D48;
loc_83137CB8:
	// stb r23,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r23.u8);
	// stb r24,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r24.u8);
	// stb r26,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r26.u8);
	// stw r28,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r28.u32);
	// b 0x83137d28
	goto loc_83137D28;
loc_83137CCC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83137d28
	if (cr0.eq) goto loc_83137D28;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83137d28
	if (cr6.eq) goto loc_83137D28;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83137d48
	if (cr0.lt) goto loc_83137D48;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stb r26,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r26.u8);
	// beq cr6,0x83137d28
	if (cr6.eq) goto loc_83137D28;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_83137D28:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x831cdc00
	sub_831CDC00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83137c08
	if (!cr0.eq) goto loc_83137C08;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
loc_83137D44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83137D48:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83137D50"))) PPC_WEAK_FUNC(sub_83137D50);
PPC_FUNC_IMPL(__imp__sub_83137D50) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83137df0
	if (cr6.eq) goto loc_83137DF0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83137df0
	if (cr6.eq) goto loc_83137DF0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83137d88
	if (cr6.eq) goto loc_83137D88;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_83137D88:
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83138218
	sub_83138218(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83137DA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83137da4
	if (!cr6.eq) goto loc_83137DA4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// lbz r9,11(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// cmplwi cr6,r9,92
	cr6.compare<uint32_t>(ctx.r9.u32, 92, xer);
	// bne cr6,0x83137dd8
	if (!cr6.eq) goto loc_83137DD8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stb r28,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, r28.u8);
loc_83137DD8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137b90
	sub_83137B90(ctx, base);
	// b 0x83137e00
	goto loc_83137E00;
loc_83137DF0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,9988
	ctx.r3.s64 = r11.s64 + 9988;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_83137E00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83137E08"))) PPC_WEAK_FUNC(sub_83137E08);
PPC_FUNC_IMPL(__imp__sub_83137E08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-31408
	ctx.r3.s64 = r11.s64 + -31408;
	// addi r8,r3,264
	ctx.r8.s64 = ctx.r3.s64 + 264;
loc_83137E14:
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
	// bne 0x83137e14
	if (!cr0.eq) goto loc_83137E14;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831b0ba0
	sub_831B0BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83137E48"))) PPC_WEAK_FUNC(sub_83137E48);
PPC_FUNC_IMPL(__imp__sub_83137E48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137E50"))) PPC_WEAK_FUNC(sub_83137E50);
PPC_FUNC_IMPL(__imp__sub_83137E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-31408
	ctx.r3.s64 = r11.s64 + -31408;
	// addi r8,r3,264
	ctx.r8.s64 = ctx.r3.s64 + 264;
loc_83137E5C:
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
	// bne 0x83137e5c
	if (!cr0.eq) goto loc_83137E5C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831b0ba0
	sub_831B0BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83137E90"))) PPC_WEAK_FUNC(sub_83137E90);
PPC_FUNC_IMPL(__imp__sub_83137E90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83137E98"))) PPC_WEAK_FUNC(sub_83137E98);
PPC_FUNC_IMPL(__imp__sub_83137E98) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83137ecc
	if (!cr6.eq) goto loc_83137ECC;
loc_83137EB4:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-31408
	ctx.r5.s64 = r11.s64 + -31408;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83138218
	sub_83138218(ctx, base);
	// b 0x83138018
	goto loc_83138018;
loc_83137ECC:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x83137eb4
	if (cr0.eq) goto loc_83137EB4;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83137EE0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83137ee0
	if (!cr6.eq) goto loc_83137EE0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x83137f14
	if (!cr0.gt) goto loc_83137F14;
loc_83137F00:
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,58
	cr6.compare<uint32_t>(ctx.r10.u32, 58, xer);
	// beq cr6,0x83137f14
	if (cr6.eq) goto loc_83137F14;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x83137f00
	if (cr0.gt) goto loc_83137F00;
loc_83137F14:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83137f88
	if (!cr6.eq) goto loc_83137F88;
	// cmpwi cr6,r9,92
	cr6.compare<int32_t>(ctx.r9.s32, 92, xer);
	// beq cr6,0x83137f44
	if (cr6.eq) goto loc_83137F44;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// beq cr6,0x83137f44
	if (cr6.eq) goto loc_83137F44;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-31408
	ctx.r5.s64 = r11.s64 + -31408;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83138218
	sub_83138218(ctx, base);
	// b 0x83137f74
	goto loc_83137F74;
loc_83137F44:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r31,r11,-31408
	r31.s64 = r11.s64 + -31408;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// bl 0x83138248
	sub_83138248(ctx, base);
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
loc_83137F74:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x831382a8
	sub_831382A8(ctx, base);
	// b 0x83137fcc
	goto loc_83137FCC;
loc_83137F88:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r11,10028
	ctx.r3.s64 = r11.s64 + 10028;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x831b8aa8
	sub_831B8AA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83137fbc
	if (!cr0.eq) goto loc_83137FBC;
	// li r11,68
	r11.s64 = 68;
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// li r4,259
	ctx.r4.s64 = 259;
	// addi r3,r30,1
	ctx.r3.s64 = r30.s64 + 1;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// b 0x83137fc8
	goto loc_83137FC8;
loc_83137FBC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83137FC8:
	// bl 0x83138218
	sub_83138218(ctx, base);
loc_83137FCC:
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83137FD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83137fd4
	if (!cr6.eq) goto loc_83137FD4;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi. r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x83138018
	if (cr0.lt) goto loc_83138018;
loc_83137FF8:
	// lbzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// cmplwi cr6,r9,47
	cr6.compare<uint32_t>(ctx.r9.u32, 47, xer);
	// bne cr6,0x8313800c
	if (!cr6.eq) goto loc_8313800C;
	// li r9,92
	ctx.r9.s64 = 92;
	// stbx r9,r11,r30
	PPC_STORE_U8(r11.u32 + r30.u32, ctx.r9.u8);
loc_8313800C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x83137ff8
	if (!cr6.gt) goto loc_83137FF8;
loc_83138018:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83138020"))) PPC_WEAK_FUNC(sub_83138020);
PPC_FUNC_IMPL(__imp__sub_83138020) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r11,10036
	ctx.r3.s64 = r11.s64 + 10036;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831b8aa8
	sub_831B8AA8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83138070
	if (cr0.eq) goto loc_83138070;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r11,10028
	ctx.r3.s64 = r11.s64 + 10028;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831b8aa8
	sub_831B8AA8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_83138070:
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

__attribute__((alias("__imp__sub_83138088"))) PPC_WEAK_FUNC(sub_83138088);
PPC_FUNC_IMPL(__imp__sub_83138088) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-31408
	r30.s64 = r11.s64 + -31408;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x831380d4
	if (!cr6.eq) goto loc_831380D4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,10128
	ctx.r4.s64 = r11.s64 + 10128;
	// bl 0x82bd4ae8
	sub_82BD4AE8(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r11,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r11.u32);
	// b 0x831381f4
	goto loc_831381F4;
loc_831380D4:
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_831380DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831380dc
	if (!cr6.eq) goto loc_831380DC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r31,r11,0
	r31.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// bge cr6,0x83138110
	if (!cr6.lt) goto loc_83138110;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10092
	ctx.r3.s64 = r11.s64 + 10092;
loc_83138108:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x831381f4
	goto loc_831381F4;
loc_83138110:
	// li r11,0
	r11.s64 = 0;
	// li r28,92
	r28.s64 = 92;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x83138160
	if (cr6.lt) goto loc_83138160;
loc_83138120:
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// bne cr6,0x83138130
	if (!cr6.eq) goto loc_83138130;
	// stbx r28,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, r28.u8);
loc_83138130:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// ble cr6,0x83138120
	if (!cr6.gt) goto loc_83138120;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x83138160
	if (cr6.lt) goto loc_83138160;
loc_83138144:
	// lbzx r11,r31,r29
	r11.u64 = PPC_LOAD_U8(r31.u32 + r29.u32);
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// beq cr6,0x83138158
	if (cr6.eq) goto loc_83138158;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x83138144
	if (!cr0.lt) goto loc_83138144;
loc_83138158:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x8313816c
	if (cr6.gt) goto loc_8313816C;
loc_83138160:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10040
	ctx.r3.s64 = r11.s64 + 10040;
	// b 0x83138108
	goto loc_83138108;
loc_8313816C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83138020
	sub_83138020(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8313819c
	if (!cr0.eq) goto loc_8313819C;
	// li r11,68
	r11.s64 = 68;
	// add r5,r31,r29
	ctx.r5.u64 = r31.u64 + r29.u64;
	// li r4,259
	ctx.r4.s64 = 259;
	// addi r3,r30,1
	ctx.r3.s64 = r30.s64 + 1;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// bl 0x83138218
	sub_83138218(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// b 0x831381ac
	goto loc_831381AC;
loc_8313819C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83138218
	sub_83138218(ctx, base);
loc_831381AC:
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_831381B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831381b4
	if (!cr6.eq) goto loc_831381B4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,92
	cr6.compare<uint32_t>(ctx.r9.u32, 92, xer);
	// beq cr6,0x831381f0
	if (cr6.eq) goto loc_831381F0;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r28.u8);
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_831381F0:
	// stw r31,260(r30)
	PPC_STORE_U32(r30.u32 + 260, r31.u32);
loc_831381F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83138200"))) PPC_WEAK_FUNC(sub_83138200);
PPC_FUNC_IMPL(__imp__sub_83138200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10136
	ctx.r3.s64 = r11.s64 + 10136;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r3,-31140(r11)
	PPC_STORE_U32(r11.u32 + -31140, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138218"))) PPC_WEAK_FUNC(sub_83138218);
PPC_FUNC_IMPL(__imp__sub_83138218) {
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
	// bl 0x831b9530
	sub_831B9530(ctx, base);
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

__attribute__((alias("__imp__sub_83138248"))) PPC_WEAK_FUNC(sub_83138248);
PPC_FUNC_IMPL(__imp__sub_83138248) {
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
	// bl 0x831bb708
	sub_831BB708(ctx, base);
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

__attribute__((alias("__imp__sub_83138278"))) PPC_WEAK_FUNC(sub_83138278);
PPC_FUNC_IMPL(__imp__sub_83138278) {
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
	// bl 0x831bb878
	sub_831BB878(ctx, base);
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

__attribute__((alias("__imp__sub_831382A8"))) PPC_WEAK_FUNC(sub_831382A8);
PPC_FUNC_IMPL(__imp__sub_831382A8) {
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
	// bl 0x831bb5f8
	sub_831BB5F8(ctx, base);
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

__attribute__((alias("__imp__sub_831382D8"))) PPC_WEAK_FUNC(sub_831382D8);
PPC_FUNC_IMPL(__imp__sub_831382D8) {
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
	// bl 0x831bb5e8
	sub_831BB5E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138320"))) PPC_WEAK_FUNC(sub_83138320);
PPC_FUNC_IMPL(__imp__sub_83138320) {
	PPC_FUNC_PROLOGUE();
	// b 0x831bb5e8
	sub_831BB5E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83138328"))) PPC_WEAK_FUNC(sub_83138328);
PPC_FUNC_IMPL(__imp__sub_83138328) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83138384
	if (cr6.eq) goto loc_83138384;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83138384
	if (cr6.eq) goto loc_83138384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bd4600
	sub_82BD4600(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x83138370
	if (!cr6.eq) goto loc_83138370;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83138384
	if (!cr0.eq) goto loc_83138384;
loc_83138370:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x83138388
	goto loc_83138388;
loc_83138384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83138388:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831383A0"))) PPC_WEAK_FUNC(sub_831383A0);
PPC_FUNC_IMPL(__imp__sub_831383A0) {
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
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831383cc
	if (!cr6.eq) goto loc_831383CC;
loc_831383C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83138410
	goto loc_83138410;
loc_831383CC:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831cd3e8
	sub_831CD3E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x831383f8
	if (!cr6.eq) goto loc_831383F8;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831383c4
	if (!cr0.eq) goto loc_831383C4;
loc_831383F8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8313840c
	if (cr6.eq) goto loc_8313840C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8313840C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83138410:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138428"))) PPC_WEAK_FUNC(sub_83138428);
PPC_FUNC_IMPL(__imp__sub_83138428) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r10,r11,10224
	ctx.r10.s64 = r11.s64 + 10224;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r11,-31136
	r31.s64 = r11.s64 + -31136;
	// addi r9,r31,32
	ctx.r9.s64 = r31.s64 + 32;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bne cr6,0x83138474
	if (!cr6.eq) goto loc_83138474;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
loc_83138474:
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

__attribute__((alias("__imp__sub_83138488"))) PPC_WEAK_FUNC(sub_83138488);
PPC_FUNC_IMPL(__imp__sub_83138488) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r11,-31100
	r31.s64 = r11.s64 + -31100;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x831384c8
	if (!cr0.eq) goto loc_831384C8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831384c8
	if (cr6.eq) goto loc_831384C8;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_831384C8:
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

__attribute__((alias("__imp__sub_831384E0"))) PPC_WEAK_FUNC(sub_831384E0);
PPC_FUNC_IMPL(__imp__sub_831384E0) {
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
	// li r11,1
	r11.s64 = 1;
	// li r30,-1
	r30.s64 = -1;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// b 0x8313856c
	goto loc_8313856C;
loc_83138508:
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x83138530
	if (cr6.eq) goto loc_83138530;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82bd5910
	sub_82BD5910(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83138530
	if (cr6.eq) goto loc_83138530;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
loc_83138530:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83138564
	if (!cr6.eq) goto loc_83138564;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8313855c
	if (cr0.eq) goto loc_8313855C;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8313855C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_83138564:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
loc_8313856C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82bd5710
	sub_82BD5710(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831cdae0
	sub_831CDAE0(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83138508
	if (cr6.eq) goto loc_83138508;
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

__attribute__((alias("__imp__sub_831385A8"))) PPC_WEAK_FUNC(sub_831385A8);
PPC_FUNC_IMPL(__imp__sub_831385A8) {
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
	// bne cr6,0x831385d4
	if (!cr6.eq) goto loc_831385D4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10332
	ctx.r3.s64 = r11.s64 + 10332;
loc_831385C8:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831385CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831386e4
	goto loc_831386E4;
loc_831385D4:
	// cmplwi cr6,r4,88
	cr6.compare<uint32_t>(ctx.r4.u32, 88, xer);
	// bge cr6,0x831385e8
	if (!cr6.lt) goto loc_831385E8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10488
	ctx.r3.s64 = r11.s64 + 10488;
	// b 0x831385c8
	goto loc_831385C8;
loc_831385E8:
	// addi r11,r3,3
	r11.s64 = ctx.r3.s64 + 3;
	// li r5,84
	ctx.r5.s64 = 84;
	// rlwinm r31,r11,0,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cd558
	sub_831CD558(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne 0x8313862c
	if (!cr0.eq) goto loc_8313862C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10444
	ctx.r3.s64 = r11.s64 + 10444;
	// b 0x831385c8
	goto loc_831385C8;
loc_8313862C:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bne 0x8313865c
	if (!cr0.eq) goto loc_8313865C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10396
	ctx.r3.s64 = r11.s64 + 10396;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// b 0x831385cc
	goto loc_831385CC;
loc_8313865C:
	// lis r11,-31980
	r11.s64 = -2095841280;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-31520
	ctx.r5.s64 = r11.s64 + -31520;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cd5f8
	sub_831CD5F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// bne 0x831386b0
	if (!cr0.eq) goto loc_831386B0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10356
	ctx.r3.s64 = r11.s64 + 10356;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x83137878
	sub_83137878(ctx, base);
	// b 0x831385cc
	goto loc_831385CC;
loc_831386A8:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82bd42f0
	sub_82BD42F0(ctx, base);
loc_831386B0:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831386a8
	if (cr6.eq) goto loc_831386A8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82bd57a8
	sub_82BD57A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,-1
	r11.s64 = -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_831386E4:
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

__attribute__((alias("__imp__sub_831386F8"))) PPC_WEAK_FUNC(sub_831386F8);
PPC_FUNC_IMPL(__imp__sub_831386F8) {
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
	// lis r30,-31941
	r30.s64 = -2093285376;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-31100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -31100);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83138738
	if (!cr6.eq) goto loc_83138738;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10332
	ctx.r3.s64 = r11.s64 + 10332;
loc_8313872C:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// li r31,-1
	r31.s64 = -1;
	// b 0x83138768
	goto loc_83138768;
loc_83138738:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83138750
	if (!cr6.eq) goto loc_83138750;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10304
	ctx.r3.s64 = r11.s64 + 10304;
	// b 0x8313872c
	goto loc_8313872C;
loc_83138750:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83138764
	if (!cr6.eq) goto loc_83138764;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831cdce8
	sub_831CDCE8(ctx, base);
loc_83138764:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_83138768:
	// lwz r3,-31100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -31100);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
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

__attribute__((alias("__imp__sub_83138790"))) PPC_WEAK_FUNC(sub_83138790);
PPC_FUNC_IMPL(__imp__sub_83138790) {
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
	// lis r28,-31941
	r28.s64 = -2093285376;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,-31100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -31100);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831387d0
	if (!cr6.eq) goto loc_831387D0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10332
	ctx.r3.s64 = r11.s64 + 10332;
loc_831387C4:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
loc_831387C8:
	// li r31,-1
	r31.s64 = -1;
	// b 0x83138844
	goto loc_83138844;
loc_831387D0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831387e8
	if (!cr6.eq) goto loc_831387E8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10304
	ctx.r3.s64 = r11.s64 + 10304;
	// b 0x831387c4
	goto loc_831387C4;
loc_831387E8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831387c8
	if (!cr6.eq) goto loc_831387C8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,32767
	ctx.r9.s64 = 2147418112;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// bne cr6,0x8313882c
	if (!cr6.eq) goto loc_8313882C;
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
loc_8313882C:
	// lwz r30,60(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831cdce8
	sub_831CDCE8(ctx, base);
	// mr r31,r30
	r31.u64 = r30.u64;
loc_83138844:
	// lwz r3,-31100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -31100);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83138858"))) PPC_WEAK_FUNC(sub_83138858);
PPC_FUNC_IMPL(__imp__sub_83138858) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83138884
	if (!cr6.eq) goto loc_83138884;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10332
	ctx.r3.s64 = r11.s64 + 10332;
loc_8313887C:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x83138934
	goto loc_83138934;
loc_83138884:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313889c
	if (!cr6.eq) goto loc_8313889C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10304
	ctx.r3.s64 = r11.s64 + 10304;
	// b 0x8313887c
	goto loc_8313887C;
loc_8313889C:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x83138934
	if (!cr6.eq) goto loc_83138934;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83138934
	if (cr6.eq) goto loc_83138934;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831cdce8
	sub_831CDCE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831388d8
	if (!cr6.eq) goto loc_831388D8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10304
	ctx.r3.s64 = r11.s64 + 10304;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x831388f8
	goto loc_831388F8;
loc_831388D8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831388ec
	if (!cr6.eq) goto loc_831388EC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831cdce8
	sub_831CDCE8(ctx, base);
loc_831388EC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83138934
	if (cr0.eq) goto loc_83138934;
loc_831388F8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8313892c
	if (!cr6.eq) goto loc_8313892C;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83138924
	if (cr0.eq) goto loc_83138924;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83138924:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8313892C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
loc_83138934:
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

__attribute__((alias("__imp__sub_83138948"))) PPC_WEAK_FUNC(sub_83138948);
PPC_FUNC_IMPL(__imp__sub_83138948) {
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
	// lis r29,-31941
	r29.s64 = -2093285376;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-31100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -31100);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83138980
	if (!cr6.eq) goto loc_83138980;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10332
	ctx.r3.s64 = r11.s64 + 10332;
loc_83138978:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x831389c0
	goto loc_831389C0;
loc_83138980:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83138998
	if (!cr6.eq) goto loc_83138998;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10304
	ctx.r3.s64 = r11.s64 + 10304;
	// b 0x83138978
	goto loc_83138978;
loc_83138998:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x831389ac
	if (cr6.eq) goto loc_831389AC;
loc_831389A4:
	// li r31,1
	r31.s64 = 1;
	// b 0x831389c4
	goto loc_831389C4;
loc_831389AC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831389a4
	if (cr6.eq) goto loc_831389A4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831cdce8
	sub_831CDCE8(ctx, base);
loc_831389C0:
	// li r31,0
	r31.s64 = 0;
loc_831389C4:
	// lwz r3,-31100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -31100);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831389D8"))) PPC_WEAK_FUNC(sub_831389D8);
PPC_FUNC_IMPL(__imp__sub_831389D8) {
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
	// lis r29,-31941
	r29.s64 = -2093285376;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-31100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -31100);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83138a10
	if (!cr6.eq) goto loc_83138A10;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10332
	ctx.r3.s64 = r11.s64 + 10332;
loc_83138A08:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x83138a4c
	goto loc_83138A4C;
loc_83138A10:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83138a28
	if (!cr6.eq) goto loc_83138A28;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10304
	ctx.r3.s64 = r11.s64 + 10304;
	// b 0x83138a08
	goto loc_83138A08;
loc_83138A28:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x83138a4c
	if (cr6.eq) goto loc_83138A4C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82bd5728
	sub_82BD5728(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82bd57a8
	sub_82BD57A8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
loc_83138A4C:
	// lwz r3,-31100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -31100);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83138A60"))) PPC_WEAK_FUNC(sub_83138A60);
PPC_FUNC_IMPL(__imp__sub_83138A60) {
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
	// lis r29,-31941
	r29.s64 = -2093285376;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,-31100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -31100);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83138a98
	if (!cr6.eq) goto loc_83138A98;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10332
	ctx.r3.s64 = r11.s64 + 10332;
loc_83138A90:
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x83138ad0
	goto loc_83138AD0;
loc_83138A98:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83138ab0
	if (!cr6.eq) goto loc_83138AB0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10304
	ctx.r3.s64 = r11.s64 + 10304;
	// b 0x83138a90
	goto loc_83138A90;
loc_83138AB0:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x83138ad0
	if (cr6.eq) goto loc_83138AD0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// bl 0x831cdce8
	sub_831CDCE8(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82bd42f0
	sub_82BD42F0(ctx, base);
loc_83138AD0:
	// lwz r3,-31100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -31100);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83138AE0"))) PPC_WEAK_FUNC(sub_83138AE0);
PPC_FUNC_IMPL(__imp__sub_83138AE0) {
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
	// lis r31,-31941
	r31.s64 = -2093285376;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,-31100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -31100);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831385a8
	sub_831385A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-31100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -31100);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83138B28"))) PPC_WEAK_FUNC(sub_83138B28);
PPC_FUNC_IMPL(__imp__sub_83138B28) {
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
	// lis r31,-31941
	r31.s64 = -2093285376;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,-31100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -31100);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83138858
	sub_83138858(ctx, base);
	// lwz r3,-31100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -31100);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83138B68"))) PPC_WEAK_FUNC(sub_83138B68);
PPC_FUNC_IMPL(__imp__sub_83138B68) {
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
	// lis r29,-31941
	r29.s64 = -2093285376;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-31100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -31100);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83138b9c
	if (cr6.eq) goto loc_83138B9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x83138858
	sub_83138858(ctx, base);
loc_83138B9C:
	// li r30,1
	r30.s64 = 1;
	// b 0x83138bb8
	goto loc_83138BB8;
loc_83138BA4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,259
	cr6.compare<uint32_t>(r11.u32, 259, xer);
	// bne cr6,0x83138bd8
	if (!cr6.eq) goto loc_83138BD8;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82bd42f0
	sub_82BD42F0(ctx, base);
loc_83138BB8:
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831cdce8
	sub_831CDCE8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82bd5868
	sub_82BD5868(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83138ba4
	if (!cr0.eq) goto loc_83138BA4;
loc_83138BD8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82bd5710
	sub_82BD5710(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x831cdae0
	sub_831CDAE0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83138c04
	if (cr0.eq) goto loc_83138C04;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_83138C04:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83138c18
	if (cr0.eq) goto loc_83138C18;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_83138C18:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83138c2c
	if (cr0.eq) goto loc_83138C2C;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_83138C2C:
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r3,-31100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -31100);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83138C50"))) PPC_WEAK_FUNC(sub_83138C50);
PPC_FUNC_IMPL(__imp__sub_83138C50) {
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
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// bl 0x831314f8
	sub_831314F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// bl 0x831314f8
	sub_831314F8(ctx, base);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// beq cr6,0x83138d60
	if (cr6.eq) goto loc_83138D60;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83138d60
	if (cr6.eq) goto loc_83138D60;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// beq cr6,0x83138d00
	if (cr6.eq) goto loc_83138D00;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83138d00
	if (cr6.eq) goto loc_83138D00;
	// lwz r11,832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// lwz r4,828(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 828);
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,209
	r11.s64 = r11.s64 + 209;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x83131178
	sub_83131178(ctx, base);
	// lwz r11,832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,209
	r11.s64 = r11.s64 + 209;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r31
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x83131100
	sub_83131100(ctx, base);
	// lwz r11,832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// stw r3,828(r31)
	PPC_STORE_U32(r31.u32 + 828, ctx.r3.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,832(r31)
	PPC_STORE_U32(r31.u32 + 832, r11.u32);
loc_83138D00:
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// bl 0x83131058
	sub_83131058(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// bl 0x83131058
	sub_83131058(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// extsw r11,r30
	r11.s64 = r30.s32;
	// rldicr r11,r11,11,52
	r11.u64 = __builtin_rotateleft64(r11.u64, 11) & 0xFFFFFFFFFFFFF800;
	// std r11,816(r31)
	PPC_STORE_U64(r31.u32 + 816, r11.u64);
	// bl 0x831314f8
	sub_831314F8(ctx, base);
	// lwz r11,824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 824);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83138d68
	if (cr6.lt) goto loc_83138D68;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83138d68
	if (cr6.lt) goto loc_83138D68;
	// lwz r11,828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 828);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x83138d68
	if (cr6.gt) goto loc_83138D68;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83138d68
	if (!cr6.eq) goto loc_83138D68;
	// li r11,3
	r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x83138d68
	goto loc_83138D68;
loc_83138D60:
	// li r11,4
	r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_83138D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83138D70"))) PPC_WEAK_FUNC(sub_83138D70);
PPC_FUNC_IMPL(__imp__sub_83138D70) {
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
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// bl 0x831314f8
	sub_831314F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// bl 0x831314f8
	sub_831314F8(ctx, base);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// beq cr6,0x83138e04
	if (cr6.eq) goto loc_83138E04;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83138e04
	if (cr6.eq) goto loc_83138E04;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// bl 0x831317b0
	sub_831317B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83138dcc
	if (cr0.eq) goto loc_83138DCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// bl 0x831312f0
	sub_831312F0(ctx, base);
	// b 0x83138e0c
	goto loc_83138E0C;
loc_83138DCC:
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83138de4
	if (cr0.eq) goto loc_83138DE4;
	// bl 0x83130ef0
	sub_83130EF0(ctx, base);
	// stw r30,796(r31)
	PPC_STORE_U32(r31.u32 + 796, r30.u32);
loc_83138DE4:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83138df8
	if (cr0.eq) goto loc_83138DF8;
	// bl 0x83130ef0
	sub_83130EF0(ctx, base);
	// stw r30,800(r31)
	PPC_STORE_U32(r31.u32 + 800, r30.u32);
loc_83138DF8:
	// li r11,5
	r11.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x83138e0c
	goto loc_83138E0C;
loc_83138E04:
	// li r11,4
	r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_83138E0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138E28"))) PPC_WEAK_FUNC(sub_83138E28);
PPC_FUNC_IMPL(__imp__sub_83138E28) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83138e58
	if (!cr6.eq) goto loc_83138E58;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10520
	ctx.r3.s64 = r11.s64 + 10520;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x83138e8c
	goto loc_83138E8C;
loc_83138E58:
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83138e70
	if (cr0.eq) goto loc_83138E70;
	// bl 0x83130ef0
	sub_83130EF0(ctx, base);
	// stw r30,796(r31)
	PPC_STORE_U32(r31.u32 + 796, r30.u32);
loc_83138E70:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83138e84
	if (cr0.eq) goto loc_83138E84;
	// bl 0x83130ef0
	sub_83130EF0(ctx, base);
	// stw r30,800(r31)
	PPC_STORE_U32(r31.u32 + 800, r30.u32);
loc_83138E84:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_83138E8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83138EA8"))) PPC_WEAK_FUNC(sub_83138EA8);
PPC_FUNC_IMPL(__imp__sub_83138EA8) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r11,-31092
	r31.s64 = r11.s64 + -31092;
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
loc_83138EC4:
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
	// bne 0x83138ec4
	if (!cr0.eq) goto loc_83138EC4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83138f20
	if (!cr6.eq) goto loc_83138F20;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83138f14
	if (!cr0.eq) goto loc_83138F14;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,4604
	ctx.r3.s64 = r11.s64 + 4604;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x83138f20
	goto loc_83138F20;
loc_83138F14:
	// bl 0x83137908
	sub_83137908(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
loc_83138F20:
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

__attribute__((alias("__imp__sub_83138F38"))) PPC_WEAK_FUNC(sub_83138F38);
PPC_FUNC_IMPL(__imp__sub_83138F38) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8313905c
	if (cr6.eq) goto loc_8313905C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x83139000
	if (cr6.eq) goto loc_83139000;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83138ff4
	if (cr6.eq) goto loc_83138FF4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x83139064
	if (!cr6.eq) goto loc_83139064;
	// addi r30,r31,276
	r30.s64 = r31.s64 + 276;
	// addi r29,r31,536
	r29.s64 = r31.s64 + 536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831cd800
	sub_831CD800(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83138fec
	if (cr0.eq) goto loc_83138FEC;
	// lwz r11,844(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 844);
	// addi r3,r31,844
	ctx.r3.s64 = r31.s64 + 844;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83138fa4
	if (cr6.eq) goto loc_83138FA4;
	// lwz r11,848(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 848);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83138fc0
	if (!cr6.eq) goto loc_83138FC0;
loc_83138FA4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r30,848(r31)
	PPC_STORE_U32(r31.u32 + 848, r30.u32);
loc_83138FC0:
	// lwz r11,868(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 868);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83138fe0
	if (!cr6.eq) goto loc_83138FE0;
	// bl 0x831313b0
	sub_831313B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x83139064
	if (cr0.lt) goto loc_83139064;
	// li r11,1
	r11.s64 = 1;
	// stw r11,868(r31)
	PPC_STORE_U32(r31.u32 + 868, r11.u32);
loc_83138FE0:
	// lwz r11,852(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 852);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83139064
	if (cr6.eq) goto loc_83139064;
loc_83138FEC:
	// li r11,3
	r11.s64 = 3;
	// b 0x83139054
	goto loc_83139054;
loc_83138FF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83138d70
	sub_83138D70(ctx, base);
	// b 0x83139064
	goto loc_83139064;
loc_83139000:
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// bl 0x831314f8
	sub_831314F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// bl 0x831314f8
	sub_831314F8(ctx, base);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// beq cr6,0x83139050
	if (cr6.eq) goto loc_83139050;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x83139050
	if (cr6.eq) goto loc_83139050;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// bl 0x8312ff38
	sub_8312FF38(ctx, base);
	// ld r4,808(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 808);
	// cmpd cr6,r3,r4
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r4.s64, xer);
	// beq cr6,0x83139044
	if (cr6.eq) goto loc_83139044;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// bl 0x831311f0
	sub_831311F0(ctx, base);
	// b 0x83139064
	goto loc_83139064;
loc_83139044:
	// li r11,4
	r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x83139064
	goto loc_83139064;
loc_83139050:
	// li r11,4
	r11.s64 = 4;
loc_83139054:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x83139064
	goto loc_83139064;
loc_8313905C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83138c50
	sub_83138C50(ctx, base);
loc_83139064:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83139070"))) PPC_WEAK_FUNC(sub_83139070);
PPC_FUNC_IMPL(__imp__sub_83139070) {
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
	// bne cr6,0x8313909c
	if (!cr6.eq) goto loc_8313909C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,10600
	ctx.r3.s64 = r11.s64 + 10600;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// b 0x8313912c
	goto loc_8313912C;
loc_8313909C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313912c
	if (!cr6.eq) goto loc_8313912C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831390c8
	if (cr6.eq) goto loc_831390C8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8313912c
	if (!cr6.eq) goto loc_8313912C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83138f38
	sub_83138F38(ctx, base);
	// b 0x8313912c
	goto loc_8313912C;
loc_831390C8:
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// bl 0x831317b0
	sub_831317B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8313912c
	if (cr0.eq) goto loc_8313912C;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 800);
	// bl 0x831317b0
	sub_831317B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8313912c
	if (cr0.eq) goto loc_8313912C;
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// bl 0x8312ff38
	sub_8312FF38(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r5,836(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 796);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// sradi r10,r11,10
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x3FF) != 0);
	ctx.r10.s64 = r11.s64 >> 10;
	// std r11,808(r31)
	PPC_STORE_U64(r31.u32 + 808, r11.u64);
	// rldicl r10,r10,11,53
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 11) & 0x7FF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// sradi r11,r11,11
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x7FF) != 0);
	r11.s64 = r11.s64 >> 11;
	// stw r11,824(r31)
	PPC_STORE_U32(r31.u32 + 824, r11.u32);
	// bl 0x83131100
	sub_83131100(ctx, base);
	// stw r3,828(r31)
	PPC_STORE_U32(r31.u32 + 828, ctx.r3.u32);
loc_8313912C:
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

__attribute__((alias("__imp__sub_83139140"))) PPC_WEAK_FUNC(sub_83139140);
PPC_FUNC_IMPL(__imp__sub_83139140) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r30,r11,-31052
	r30.s64 = r11.s64 + -31052;
	// addi r8,r30,-8
	ctx.r8.s64 = r30.s64 + -8;
loc_83139158:
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
	// bne 0x83139158
	if (!cr0.eq) goto loc_83139158;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83139228
	if (!cr6.eq) goto loc_83139228;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83139208
	if (cr6.eq) goto loc_83139208;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r28,r11,10560
	r28.s64 = r11.s64 + 10560;
loc_8313919C:
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831391b8
	if (!cr6.eq) goto loc_831391B8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8312eb48
	sub_8312EB48(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x83139200
	goto loc_83139200;
loc_831391B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83138e28
	sub_83138E28(ctx, base);
	// lwz r10,872(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 872);
	// lwz r11,876(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 876);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x831391dc
	if (cr0.eq) goto loc_831391DC;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 876, r11.u32);
	// b 0x831391e4
	goto loc_831391E4;
loc_831391DC:
	// mr r31,r11
	r31.u64 = r11.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_831391E4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831391f0
	if (cr6.eq) goto loc_831391F0;
	// stw r10,872(r11)
	PPC_STORE_U32(r11.u32 + 872, ctx.r10.u32);
loc_831391F0:
	// li r5,880
	ctx.r5.s64 = 880;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_83139200:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8313919c
	if (!cr6.eq) goto loc_8313919C;
loc_83139208:
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83139228
	if (cr6.eq) goto loc_83139228;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-4(r30)
	PPC_STORE_U32(r30.u32 + -4, r11.u32);
loc_83139228:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83139230"))) PPC_WEAK_FUNC(sub_83139230);
PPC_FUNC_IMPL(__imp__sub_83139230) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r11,-31052
	r31.s64 = r11.s64 + -31052;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83139274
	if (cr6.eq) goto loc_83139274;
loc_83139260:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83139070
	sub_83139070(ctx, base);
	// lwz r30,876(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 876);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x83139260
	if (!cr0.eq) goto loc_83139260;
loc_83139274:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139298"))) PPC_WEAK_FUNC(sub_83139298);
PPC_FUNC_IMPL(__imp__sub_83139298) {
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
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r11,29536
	ctx.r3.s64 = r11.s64 + 29536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-31016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31016, r11.u32);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,-31012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31012, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831392E0"))) PPC_WEAK_FUNC(sub_831392E0);
PPC_FUNC_IMPL(__imp__sub_831392E0) {
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
	// bne cr6,0x83139308
	if (!cr6.eq) goto loc_83139308;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-944
	ctx.r3.s64 = r11.s64 + -944;
	// b 0x8313934c
	goto loc_8313934C;
loc_83139308:
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r31,r11,29536
	r31.s64 = r11.s64 + 29536;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83138248
	sub_83138248(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r10,-31016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -31016);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83139348
	if (cr6.eq) goto loc_83139348;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-31016(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -31016);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,-31012(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31012);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83139348:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8313934C:
	// bl 0x8312ec38
	sub_8312EC38(ctx, base);
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

__attribute__((alias("__imp__sub_83139368"))) PPC_WEAK_FUNC(sub_83139368);
PPC_FUNC_IMPL(__imp__sub_83139368) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831393f0
	if (cr6.eq) goto loc_831393F0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831393f0
	if (cr6.eq) goto loc_831393F0;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r31,r11,29536
	r31.s64 = r11.s64 + 29536;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83138248
	sub_83138248(ctx, base);
	// li r6,255
	ctx.r6.s64 = 255;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83138278
	sub_83138278(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r10,-31016(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -31016);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831393e8
	if (cr6.eq) goto loc_831393E8;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-31016(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -31016);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,-31012(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31012);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831393E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x831393f8
	goto loc_831393F8;
loc_831393F0:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-944
	ctx.r3.s64 = r11.s64 + -944;
loc_831393F8:
	// bl 0x8312ec38
	sub_8312EC38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139418"))) PPC_WEAK_FUNC(sub_83139418);
PPC_FUNC_IMPL(__imp__sub_83139418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_83139424:
	// divw r9,r3,r10
	ctx.r9.s32 = ctx.r3.s32 / ctx.r10.s32;
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// subf r9,r9,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divw. r3,r3,r10
	ctx.r3.s32 = ctx.r3.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stbx r9,r11,r4
	PPC_STORE_U8(r11.u32 + ctx.r4.u32, ctx.r9.u8);
	// beq 0x8313944c
	if (cr0.eq) goto loc_8313944C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x83139424
	if (cr6.lt) goto loc_83139424;
	// b 0x83139450
	goto loc_83139450;
loc_8313944C:
	// stbx r8,r11,r4
	PPC_STORE_U8(r11.u32 + ctx.r4.u32, ctx.r8.u8);
loc_83139450:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r9,r11,-31048
	ctx.r9.s64 = r11.s64 + -31048;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_83139460:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x83139460
	if (!cr6.eq) goto loc_83139460;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8313948c
	if (cr6.lt) goto loc_8313948C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8313948C:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831394b8
	if (!cr6.gt) goto loc_831394B8;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_831394A0:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stbx r7,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x831394a0
	if (cr6.lt) goto loc_831394A0;
loc_831394B8:
	// stbx r8,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831394C0"))) PPC_WEAK_FUNC(sub_831394C0);
PPC_FUNC_IMPL(__imp__sub_831394C0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83139418
	sub_83139418(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_831394F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x831394f0
	if (!cr6.eq) goto loc_831394F0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r10,-21712
	ctx.r5.s64 = ctx.r10.s64 + -21712;
	// subf r11,r11,r6
	r11.s64 = ctx.r6.s64 - r11.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// bl 0x83138278
	sub_83138278(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_83139530:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83139530
	if (!cr6.eq) goto loc_83139530;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_83139554:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83139554
	if (!cr6.eq) goto loc_83139554;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfic r5,r9,4
	xer.ca = ctx.r9.u32 <= 4;
	ctx.r5.s64 = 4 - ctx.r9.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// bl 0x83139418
	sub_83139418(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139598"))) PPC_WEAK_FUNC(sub_83139598);
PPC_FUNC_IMPL(__imp__sub_83139598) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r31,r11,-31008
	r31.s64 = r11.s64 + -31008;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831395d0
	if (cr6.eq) goto loc_831395D0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831395D0:
	// bl 0x8313e280
	sub_8313E280(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831395f4
	if (cr6.eq) goto loc_831395F4;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831395F4:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
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

__attribute__((alias("__imp__sub_83139610"))) PPC_WEAK_FUNC(sub_83139610);
PPC_FUNC_IMPL(__imp__sub_83139610) {
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
	// bl 0x8312f6b0
	sub_8312F6B0(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r31,-31941
	r31.s64 = -2093285376;
	// lwz r11,-30992(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -30992);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83139644
	if (cr6.eq) goto loc_83139644;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// b 0x831396e8
	goto loc_831396E8;
loc_83139644:
	// li r11,1
	r11.s64 = 1;
	// stw r11,-30992(r31)
	PPC_STORE_U32(r31.u32 + -30992, r11.u32);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r30,r11,-30972
	r30.s64 = r11.s64 + -30972;
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83139678
	if (cr6.eq) goto loc_83139678;
	// addi r11,r30,-12
	r11.s64 = r30.s64 + -12;
	// lwz r3,-8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83139678:
	// li r11,3
	r11.s64 = 3;
	// stw r11,-30992(r31)
	PPC_STORE_U32(r31.u32 + -30992, r11.u32);
	// bl 0x8313b750
	sub_8313B750(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r11,-30992(r31)
	PPC_STORE_U32(r31.u32 + -30992, r11.u32);
	// bl 0x8313b9a0
	sub_8313B9A0(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,-30992(r31)
	PPC_STORE_U32(r31.u32 + -30992, r11.u32);
	// bl 0x8313fe78
	sub_8313FE78(ctx, base);
	// li r11,6
	r11.s64 = 6;
	// stw r11,-30992(r31)
	PPC_STORE_U32(r31.u32 + -30992, r11.u32);
	// bl 0x8313b9a0
	sub_8313B9A0(ctx, base);
	// li r11,7
	r11.s64 = 7;
	// stw r11,-30992(r31)
	PPC_STORE_U32(r31.u32 + -30992, r11.u32);
	// bl 0x8313b750
	sub_8313B750(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,-30992(r31)
	PPC_STORE_U32(r31.u32 + -30992, r11.u32);
	// bl 0x8313ad50
	sub_8313AD50(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,-30992(r31)
	PPC_STORE_U32(r31.u32 + -30992, ctx.r10.u32);
	// beq cr6,0x831396e8
	if (cr6.eq) goto loc_831396E8;
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831396E8:
	// bl 0x8312f6f0
	sub_8312F6F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139708"))) PPC_WEAK_FUNC(sub_83139708);
PPC_FUNC_IMPL(__imp__sub_83139708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83139728
	if (!cr6.eq) goto loc_83139728;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-30968(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30968, r11.u32);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r11,-30964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30964, r11.u32);
	// blr 
	return;
loc_83139728:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r3,-30968(r11)
	PPC_STORE_U32(r11.u32 + -30968, ctx.r3.u32);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// stw r4,-30964(r11)
	PPC_STORE_U32(r11.u32 + -30964, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83139740"))) PPC_WEAK_FUNC(sub_83139740);
PPC_FUNC_IMPL(__imp__sub_83139740) {
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
	// lis r11,-31931
	r11.s64 = -2092630016;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r31,r11,29280
	r31.s64 = r11.s64 + 29280;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83138320
	sub_83138320(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r10,-30968(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -30968);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831397bc
	if (cr6.eq) goto loc_831397BC;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30968(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30968);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,-30964(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30964);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831397BC:
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

__attribute__((alias("__imp__sub_831397D0"))) PPC_WEAK_FUNC(sub_831397D0);
PPC_FUNC_IMPL(__imp__sub_831397D0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,10692(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 10692);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r31,-31941
	r31.s64 = -2093285376;
	// lwz r11,-30960(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -30960);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8313982c
	if (!cr6.eq) goto loc_8313982C;
	// bl 0x8312f5b8
	sub_8312F5B8(ctx, base);
	// lis r11,-31931
	r11.s64 = -2092630016;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-7072
	ctx.r3.s64 = r11.s64 + -7072;
	// ori r5,r5,36352
	ctx.r5.u64 = ctx.r5.u64 | 36352;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83139708
	sub_83139708(ctx, base);
	// lwz r11,-30960(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -30960);
loc_8313982C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-30960(r31)
	PPC_STORE_U32(r31.u32 + -30960, r11.u32);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
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

