#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E714E0"))) PPC_WEAK_FUNC(sub_82E714E0);
PPC_FUNC_IMPL(__imp__sub_82E714E0) {
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
	// beq cr6,0x82e7154c
	if (cr6.eq) goto loc_82E7154C;
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
loc_82E7154C:
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// mr r27,r31
	r27.u64 = r31.u64;
	// bl 0x830c8360
	sub_830C8360(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,260(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// beq cr6,0x82e71574
	if (cr6.eq) goto loc_82E71574;
	// lwz r28,8(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// b 0x82e71598
	goto loc_82E71598;
loc_82E71574:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lbz r10,25(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e7158c
	if (cr6.eq) goto loc_82E7158C;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x82e71598
	goto loc_82E71598;
loc_82E7158C:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r27
	cr6.compare<uint32_t>(r25.u32, r27.u32, xer);
	// bne cr6,0x82e71670
	if (!cr6.eq) goto loc_82E71670;
loc_82E71598:
	// lbz r11,25(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 25);
	// lwz r31,4(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e715ac
	if (!cr6.eq) goto loc_82E715AC;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82E715AC:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x82e715c4
	if (!cr6.eq) goto loc_82E715C4;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x82e715dc
	goto loc_82E715DC;
loc_82E715C4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82e715d8
	if (!cr6.eq) goto loc_82E715D8;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x82e715dc
	goto loc_82E715DC;
loc_82E715D8:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_82E715DC:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82e71624
	if (!cr6.eq) goto loc_82E71624;
	// lbz r11,25(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e71600
	if (cr6.eq) goto loc_82E71600;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82e71620
	goto loc_82E71620;
loc_82E71600:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82e71614
	goto loc_82E71614;
loc_82E7160C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82E71614:
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e7160c
	if (cr6.eq) goto loc_82E7160C;
loc_82E71620:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82E71624:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82e71704
	if (!cr6.eq) goto loc_82E71704;
	// lbz r11,25(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e71648
	if (cr6.eq) goto loc_82E71648;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82e71668
	goto loc_82E71668;
loc_82E71648:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82e7165c
	goto loc_82E7165C;
loc_82E71654:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82E7165C:
	// lbz r8,25(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e71654
	if (cr6.eq) goto loc_82E71654;
loc_82E71668:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82e71704
	goto loc_82E71704;
loc_82E71670:
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
	// bne cr6,0x82e71690
	if (!cr6.eq) goto loc_82E71690;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x82e716b8
	goto loc_82E716B8;
loc_82E71690:
	// lbz r11,25(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 25);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e716a4
	if (!cr6.eq) goto loc_82E716A4;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82E716A4:
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
loc_82E716B8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x82e716d0
	if (!cr6.eq) goto loc_82E716D0;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x82e716ec
	goto loc_82E716EC;
loc_82E716D0:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x82e716e8
	if (!cr6.eq) goto loc_82E716E8;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x82e716ec
	goto loc_82E716EC;
loc_82E716E8:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_82E716EC:
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
loc_82E71704:
	// lbz r11,24(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e718a4
	if (!cr6.eq) goto loc_82E718A4;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82e718a0
	if (cr6.eq) goto loc_82E718A0;
	// li r29,0
	r29.s64 = 0;
loc_82E71728:
	// lbz r11,24(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e718a0
	if (!cr6.eq) goto loc_82E718A0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82e717e4
	if (!cr6.eq) goto loc_82E717E4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e71768
	if (!cr6.eq) goto loc_82E71768;
	// stb r30,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82dfc9b8
	sub_82DFC9B8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82E71768:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e71838
	if (!cr6.eq) goto loc_82E71838;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e71794
	if (!cr6.eq) goto loc_82E71794;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82e71834
	if (cr6.eq) goto loc_82E71834;
loc_82E71794:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e717c0
	if (!cr6.eq) goto loc_82E717C0;
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
	// bl 0x82e1a828
	sub_82E1A828(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82E717C0:
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
	// bl 0x82dfc9b8
	sub_82DFC9B8(ctx, base);
	// b 0x82e718a0
	goto loc_82E718A0;
loc_82E717E4:
	// lbz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e71808
	if (!cr6.eq) goto loc_82E71808;
	// stb r30,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e1a828
	sub_82E1A828(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82E71808:
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e71838
	if (!cr6.eq) goto loc_82E71838;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e71854
	if (!cr6.eq) goto loc_82E71854;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e71854
	if (!cr6.eq) goto loc_82E71854;
loc_82E71834:
	// stb r29,24(r11)
	PPC_STORE_U8(r11.u32 + 24, r29.u8);
loc_82E71838:
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
	// bne cr6,0x82e71728
	if (!cr6.eq) goto loc_82E71728;
	// b 0x82e718a0
	goto loc_82E718A0;
loc_82E71854:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e71880
	if (!cr6.eq) goto loc_82E71880;
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
	// bl 0x82dfc9b8
	sub_82DFC9B8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82E71880:
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
	// bl 0x82e1a828
	sub_82E1A828(ctx, base);
loc_82E718A0:
	// stb r30,24(r28)
	PPC_STORE_U8(r28.u32 + 24, r30.u8);
loc_82E718A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82dfa670
	sub_82DFA670(ctx, base);
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
	// beq cr6,0x82e718d4
	if (cr6.eq) goto loc_82E718D4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
loc_82E718D4:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E718E8"))) PPC_WEAK_FUNC(sub_82E718E8);
PPC_FUNC_IMPL(__imp__sub_82E718E8) {
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
	// bne cr6,0x82e71954
	if (!cr6.eq) goto loc_82E71954;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e71954
	if (!cr6.eq) goto loc_82E71954;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e1ca90
	sub_82E1CA90(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82e71960
	goto loc_82E71960;
loc_82E71934:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x830c8360
	sub_830C8360(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e714e0
	sub_82E714E0(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82E71954:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x82e71934
	if (!cr6.eq) goto loc_82E71934;
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
loc_82E71960:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E71970"))) PPC_WEAK_FUNC(sub_82E71970);
PPC_FUNC_IMPL(__imp__sub_82E71970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82e1ca90
	sub_82E1CA90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E71988"))) PPC_WEAK_FUNC(sub_82E71988);
PPC_FUNC_IMPL(__imp__sub_82E71988) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e1ca90
	sub_82E1CA90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e089e0
	sub_82E089E0(ctx, base);
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

__attribute__((alias("__imp__sub_82E719C8"))) PPC_WEAK_FUNC(sub_82E719C8);
PPC_FUNC_IMPL(__imp__sub_82E719C8) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830cbe68
	sub_830CBE68(ctx, base);
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

__attribute__((alias("__imp__sub_82E71A08"))) PPC_WEAK_FUNC(sub_82E71A08);
PPC_FUNC_IMPL(__imp__sub_82E71A08) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r11,r11,-7564
	r11.s64 = r11.s64 + -7564;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e71a50
	if (cr0.eq) goto loc_82E71A50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82E71A50:
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

__attribute__((alias("__imp__sub_82E71A70"))) PPC_WEAK_FUNC(sub_82E71A70);
PPC_FUNC_IMPL(__imp__sub_82E71A70) {
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
	// bl 0x832048a8
	sub_832048A8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-7524
	r11.s64 = r11.s64 + -7524;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82E71AB8"))) PPC_WEAK_FUNC(sub_82E71AB8);
PPC_FUNC_IMPL(__imp__sub_82E71AB8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e77c78
	sub_82E77C78(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// bl 0x82e720e0
	sub_82E720E0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// stb r31,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r31.u8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82e720e0
	sub_82E720E0(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// stb r31,25(r30)
	PPC_STORE_U8(r30.u32 + 25, r31.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E71B10"))) PPC_WEAK_FUNC(sub_82E71B10);
PPC_FUNC_IMPL(__imp__sub_82E71B10) {
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
	// addi r11,r11,-7524
	r11.s64 = r11.s64 + -7524;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e71b40
	if (cr6.eq) goto loc_82E71B40;
	// bl 0x82e78270
	sub_82E78270(ctx, base);
loc_82E71B40:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r11,r11,-7564
	r11.s64 = r11.s64 + -7564;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
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

__attribute__((alias("__imp__sub_82E71B70"))) PPC_WEAK_FUNC(sub_82E71B70);
PPC_FUNC_IMPL(__imp__sub_82E71B70) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e723a8
	sub_82E723A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e723f8
	sub_82E723F8(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e725b8
	sub_82E725B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E71BD8"))) PPC_WEAK_FUNC(sub_82E71BD8);
PPC_FUNC_IMPL(__imp__sub_82E71BD8) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e723a8
	sub_82E723A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e72500
	sub_82E72500(ctx, base);
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e725b8
	sub_82E725B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E71C38"))) PPC_WEAK_FUNC(sub_82E71C38);
PPC_FUNC_IMPL(__imp__sub_82E71C38) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82e72520
	sub_82E72520(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82e721c0
	sub_82E721C0(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82e71ca8
	if (!cr6.eq) goto loc_82E71CA8;
	// li r31,1
	r31.s64 = 1;
loc_82E71C80:
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82e72160
	sub_82E72160(ctx, base);
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
loc_82E71CA8:
	// li r31,0
	r31.s64 = 0;
	// b 0x82e71c80
	goto loc_82E71C80;
}

__attribute__((alias("__imp__sub_82E71CB0"))) PPC_WEAK_FUNC(sub_82E71CB0);
PPC_FUNC_IMPL(__imp__sub_82E71CB0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e72520
	sub_82E72520(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e721c0
	sub_82E721C0(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82e71d00
	if (!cr6.eq) goto loc_82E71D00;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e72608
	sub_82E72608(ctx, base);
loc_82E71D00:
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

__attribute__((alias("__imp__sub_82E71D18"))) PPC_WEAK_FUNC(sub_82E71D18);
PPC_FUNC_IMPL(__imp__sub_82E71D18) {
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
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e71dac
	if (!cr6.eq) goto loc_82E71DAC;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e72680
	sub_82E72680(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,-10002
	ctx.r4.s64 = -10002;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82e72520
	sub_82E72520(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82e721c0
	sub_82E721C0(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82e71dc8
	if (!cr6.eq) goto loc_82E71DC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82e736a8
	sub_82E736A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e71da4
	if (!cr0.eq) goto loc_82E71DA4;
	// li r11,0
	r11.s64 = 0;
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
loc_82E71DA4:
	// li r11,1
	r11.s64 = 1;
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
loc_82E71DAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E71DB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82E71DC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e71db0
	goto loc_82E71DB0;
}

__attribute__((alias("__imp__sub_82E71DD0"))) PPC_WEAK_FUNC(sub_82E71DD0);
PPC_FUNC_IMPL(__imp__sub_82E71DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E71DE8"))) PPC_WEAK_FUNC(sub_82E71DE8);
PPC_FUNC_IMPL(__imp__sub_82E71DE8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e71e38
	if (cr0.eq) goto loc_82E71E38;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
loc_82E71E38:
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

__attribute__((alias("__imp__sub_82E71E58"))) PPC_WEAK_FUNC(sub_82E71E58);
PPC_FUNC_IMPL(__imp__sub_82E71E58) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E71E60"))) PPC_WEAK_FUNC(sub_82E71E60);
PPC_FUNC_IMPL(__imp__sub_82E71E60) {
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
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
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

__attribute__((alias("__imp__sub_82E71E98"))) PPC_WEAK_FUNC(sub_82E71E98);
PPC_FUNC_IMPL(__imp__sub_82E71E98) {
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
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e71ef0
	if (!cr6.eq) goto loc_82E71EF0;
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e71ecc
	if (!cr6.eq) goto loc_82E71ECC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82E71ECC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82e724d0
	sub_82E724D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82e736a8
	sub_82E736A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e71ef0
	if (!cr0.eq) goto loc_82E71EF0;
	// li r11,0
	r11.s64 = 0;
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
loc_82E71EF0:
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

__attribute__((alias("__imp__sub_82E71F08"))) PPC_WEAK_FUNC(sub_82E71F08);
PPC_FUNC_IMPL(__imp__sub_82E71F08) {
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
	// bl 0x82e71b10
	sub_82E71B10(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e71f38
	if (cr0.eq) goto loc_82E71F38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82E71F38:
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

__attribute__((alias("__imp__sub_82E71F58"))) PPC_WEAK_FUNC(sub_82E71F58);
PPC_FUNC_IMPL(__imp__sub_82E71F58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e53520
	sub_82E53520(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7484
	ctx.r4.s64 = r11.s64 + -7484;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82e77b98
	sub_82E77B98(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e72680
	sub_82E72680(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// beq cr6,0x82e71fec
	if (cr6.eq) goto loc_82E71FEC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E71FEC:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82E72008"))) PPC_WEAK_FUNC(sub_82E72008);
PPC_FUNC_IMPL(__imp__sub_82E72008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82e7203c
	if (!cr6.gt) goto loc_82E7203C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r3,r8
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_82E72030:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-6872
	ctx.r3.s64 = r11.s64 + -6872;
	// blr 
	return;
loc_82E7203C:
	// cmpwi cr6,r4,-10000
	cr6.compare<int32_t>(ctx.r4.s32, -10000, xer);
	// ble cr6,0x82e72054
	if (!cr6.gt) goto loc_82E72054;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82E72054:
	// cmpwi cr6,r4,-10002
	cr6.compare<int32_t>(ctx.r4.s32, -10002, xer);
	// beq cr6,0x82e720c8
	if (cr6.eq) goto loc_82E720C8;
	// cmpwi cr6,r4,-10001
	cr6.compare<int32_t>(ctx.r4.s32, -10001, xer);
	// beq cr6,0x82e720a4
	if (cr6.eq) goto loc_82E720A4;
	// cmpwi cr6,r4,-10000
	cr6.compare<int32_t>(ctx.r4.s32, -10000, xer);
	// beq cr6,0x82e72098
	if (cr6.eq) goto loc_82E72098;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// subfic r11,r4,-10002
	xer.ca = ctx.r4.u32 <= 4294957294;
	r11.s64 = -10002 - ctx.r4.s64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,7(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82e72030
	if (cr6.gt) goto loc_82E72030;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// blr 
	return;
loc_82E72098:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,96
	ctx.r3.s64 = r11.s64 + 96;
	// blr 
	return;
loc_82E720A4:
	// addi r3,r11,88
	ctx.r3.s64 = r11.s64 + 88;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
loc_82E720C8:
	// addi r3,r11,72
	ctx.r3.s64 = r11.s64 + 72;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E720D0"))) PPC_WEAK_FUNC(sub_82E720D0);
PPC_FUNC_IMPL(__imp__sub_82E720D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// stw r4,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E720E0"))) PPC_WEAK_FUNC(sub_82E720E0);
PPC_FUNC_IMPL(__imp__sub_82E720E0) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e7210c
	if (cr6.lt) goto loc_82E7210C;
	// bl 0x82e79c30
	sub_82E79C30(ctx, base);
loc_82E7210C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e77f18
	sub_82E77F18(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82E72148"))) PPC_WEAK_FUNC(sub_82E72148);
PPC_FUNC_IMPL(__imp__sub_82E72148) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r3,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r3.s64 = r11.s32 >> 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72160"))) PPC_WEAK_FUNC(sub_82E72160);
PPC_FUNC_IMPL(__imp__sub_82E72160) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82e721a8
	if (cr6.lt) goto loc_82E721A8;
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82e72188
	goto loc_82E72188;
loc_82E72170:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82E72188:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e72170
	if (cr6.lt) goto loc_82E72170;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82e721b8
	goto loc_82E721B8;
loc_82E721A8:
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82E721B8:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E721C0"))) PPC_WEAK_FUNC(sub_82E721C0);
PPC_FUNC_IMPL(__imp__sub_82E721C0) {
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
	// bl 0x82e72008
	sub_82E72008(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-6872
	r11.s64 = r11.s64 + -6872;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e721e8
	if (!cr6.eq) goto loc_82E721E8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82e721ec
	goto loc_82E721EC;
loc_82E721E8:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82E721EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72200"))) PPC_WEAK_FUNC(sub_82E72200);
PPC_FUNC_IMPL(__imp__sub_82E72200) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e72008
	sub_82E72008(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82e72238
	if (cr6.eq) goto loc_82E72238;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e7a9d8
	sub_82E7A9D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e72238
	if (!cr0.eq) goto loc_82E72238;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f1,-8872(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -8872);
	// b 0x82e7223c
	goto loc_82E7223C;
loc_82E72238:
	// lfd f1,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
loc_82E7223C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72250"))) PPC_WEAK_FUNC(sub_82E72250);
PPC_FUNC_IMPL(__imp__sub_82E72250) {
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
	// bl 0x82e72008
	sub_82E72008(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82e722cc
	if (cr6.eq) goto loc_82E722CC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7aa48
	sub_82E7AA48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e722a4
	if (!cr0.eq) goto loc_82E722A4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e7229c
	if (cr6.eq) goto loc_82E7229C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82E7229C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e722e8
	goto loc_82E722E8;
loc_82E722A4:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e722c0
	if (cr6.lt) goto loc_82E722C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e79c30
	sub_82E79C30(ctx, base);
loc_82E722C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72008
	sub_82E72008(ctx, base);
loc_82E722CC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e722e0
	if (cr6.eq) goto loc_82E722E0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82E722E0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
loc_82E722E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E722F0"))) PPC_WEAK_FUNC(sub_82E722F0);
PPC_FUNC_IMPL(__imp__sub_82E722F0) {
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
	// bl 0x82e72008
	sub_82E72008(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82e72328
	if (cr6.eq) goto loc_82E72328;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x82e7231c
	if (cr6.eq) goto loc_82E7231C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e7232c
	goto loc_82E7232C;
loc_82E7231C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// b 0x82e7232c
	goto loc_82E7232C;
loc_82E72328:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E7232C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72340"))) PPC_WEAK_FUNC(sub_82E72340);
PPC_FUNC_IMPL(__imp__sub_82E72340) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e72370
	if (cr6.lt) goto loc_82E72370;
	// bl 0x82e79c30
	sub_82E79C30(ctx, base);
loc_82E72370:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7d4b8
	sub_82E7D4B8(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E723A8"))) PPC_WEAK_FUNC(sub_82E723A8);
PPC_FUNC_IMPL(__imp__sub_82E723A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82e723cc
	if (!cr6.eq) goto loc_82E723CC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
loc_82E723CC:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82E723D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e723d4
	if (!cr6.eq) goto loc_82E723D4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x82e72340
	sub_82E72340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E723F8"))) PPC_WEAK_FUNC(sub_82E723F8);
PPC_FUNC_IMPL(__imp__sub_82E723F8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e72428
	if (cr6.lt) goto loc_82E72428;
	// bl 0x82e79c30
	sub_82E79C30(ctx, base);
loc_82E72428:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e72440
	if (!cr6.eq) goto loc_82E72440;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// b 0x82e7244c
	goto loc_82E7244C;
loc_82E72440:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_82E7244C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7d688
	sub_82E7D688(ctx, base);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x82e724a8
	if (cr6.eq) goto loc_82E724A8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// subfic r9,r3,-24
	xer.ca = ctx.r3.u32 <= 4294967272;
	ctx.r9.s64 = -24 - ctx.r3.s64;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
loc_82E72480:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82e72480
	if (!cr0.eq) goto loc_82E72480;
loc_82E724A8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E724D0"))) PPC_WEAK_FUNC(sub_82E724D0);
PPC_FUNC_IMPL(__imp__sub_82E724D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72500"))) PPC_WEAK_FUNC(sub_82E72500);
PPC_FUNC_IMPL(__imp__sub_82E72500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72520"))) PPC_WEAK_FUNC(sub_82E72520);
PPC_FUNC_IMPL(__imp__sub_82E72520) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e72008
	sub_82E72008(ctx, base);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82E72548:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e72548
	if (!cr6.eq) goto loc_82E72548;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82e7d4b8
	sub_82E7D4B8(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82e7abc0
	sub_82E7ABC0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82E725B8"))) PPC_WEAK_FUNC(sub_82E725B8);
PPC_FUNC_IMPL(__imp__sub_82E725B8) {
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
	// bl 0x82e72008
	sub_82E72008(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r11,-16
	ctx.r6.s64 = r11.s64 + -16;
	// addi r5,r11,-32
	ctx.r5.s64 = r11.s64 + -32;
	// bl 0x82e7acd8
	sub_82E7ACD8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
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

__attribute__((alias("__imp__sub_82E72608"))) PPC_WEAK_FUNC(sub_82E72608);
PPC_FUNC_IMPL(__imp__sub_82E72608) {
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
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x82e73540
	sub_82E73540(ctx, base);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x82e72658
	if (!cr6.eq) goto loc_82E72658;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e72658
	if (cr6.lt) goto loc_82E72658;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_82E72658:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72670"))) PPC_WEAK_FUNC(sub_82E72670);
PPC_FUNC_IMPL(__imp__sub_82E72670) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82e73540
	sub_82E73540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E72680"))) PPC_WEAK_FUNC(sub_82E72680);
PPC_FUNC_IMPL(__imp__sub_82E72680) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82e726a8
	if (!cr6.eq) goto loc_82E726A8;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82e726bc
	goto loc_82E726BC;
loc_82E726A8:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72008
	sub_82E72008(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r7,r11,r3
	ctx.r7.s64 = ctx.r3.s64 - r11.s64;
loc_82E726BC:
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-32025
	ctx.r10.s64 = -2098790400;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// addi r4,r10,9840
	ctx.r4.s64 = ctx.r10.s64 + 9840;
	// subf r6,r8,r11
	ctx.r6.s64 = r11.s64 - ctx.r8.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82e73770
	sub_82E73770(ctx, base);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x82e72710
	if (!cr6.eq) goto loc_82E72710;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e72710
	if (cr6.lt) goto loc_82E72710;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_82E72710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E72718"))) PPC_WEAK_FUNC(sub_82E72718);
PPC_FUNC_IMPL(__imp__sub_82E72718) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82e72744
	if (!cr6.eq) goto loc_82E72744;
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r31,r11,-28856
	r31.s64 = r11.s64 + -28856;
loc_82E72744:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7dc80
	sub_82E7DC80(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e73838
	sub_82E73838(ctx, base);
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

__attribute__((alias("__imp__sub_82E72780"))) PPC_WEAK_FUNC(sub_82E72780);
PPC_FUNC_IMPL(__imp__sub_82E72780) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x82e72800
	if (cr6.lt) goto loc_82E72800;
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// ble cr6,0x82e727ec
	if (!cr6.gt) goto loc_82E727EC;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// beq cr6,0x82e727dc
	if (cr6.eq) goto loc_82E727DC;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bne cr6,0x82e72800
	if (!cr6.eq) goto loc_82E72800;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r11,-7300
	ctx.r4.s64 = r11.s64 + -7300;
loc_82E727C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7d4b8
	sub_82E7D4B8(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82e727fc
	goto loc_82E727FC;
loc_82E727DC:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r4,r11,-7320
	ctx.r4.s64 = r11.s64 + -7320;
	// b 0x82e727c8
	goto loc_82E727C8;
loc_82E727EC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// ld r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// lwz r11,-8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8);
loc_82E727FC:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82E72800:
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72820"))) PPC_WEAK_FUNC(sub_82E72820);
PPC_FUNC_IMPL(__imp__sub_82E72820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCContext env{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r4,1500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1500, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,1508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1508, ctx.r5.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// stw r11,1492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1492, r11.u32);
	// stw r10,1440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1440, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r9,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r9.u32);
	// bl 0x831b6ab0
	env = ctx;
	temp.s64 = setjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32));
	if (temp.s64 != 0) ctx = env;
	ctx.r3 = temp;
	// lwz r31,1492(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1492);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e72880
	if (!cr0.eq) goto loc_82E72880;
	// lwz r11,1500(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1500);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1508);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E72880:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,1440(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1440);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E728A0"))) PPC_WEAK_FUNC(sub_82E728A0);
PPC_FUNC_IMPL(__imp__sub_82E728A0) {
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
	// addi r29,r28,6
	r29.s64 = r28.s64 + 6;
	// lis r11,4095
	r11.s64 = 268369920;
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e728e8
	if (cr6.gt) goto loc_82E728E8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r6,r29,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// b 0x82e728ec
	goto loc_82E728EC;
loc_82E728E8:
	// bl 0x82e7dda8
	sub_82E7DDA8(ctx, base);
loc_82E728EC:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
	// srawi r10,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// b 0x82e72940
	goto loc_82E72940;
loc_82E72920:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82E72940:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e72920
	if (!cr0.eq) goto loc_82E72920;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// b 0x82e729a8
	goto loc_82E729A8;
loc_82E72950:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - r30.s64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r30,r7
	ctx.r8.s64 = ctx.r7.s64 - r30.s64;
	// srawi r7,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
loc_82E729A8:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e72950
	if (!cr6.gt) goto loc_82E72950;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E729D8"))) PPC_WEAK_FUNC(sub_82E729D8);
PPC_FUNC_IMPL(__imp__sub_82E729D8) {
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
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// ori r10,r10,43690
	ctx.r10.u64 = ctx.r10.u64 | 43690;
	// lwz r29,40(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e72a1c
	if (cr6.gt) goto loc_82E72A1C;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mulli r6,r30,24
	ctx.r6.s64 = r30.s64 * 24;
	// mulli r5,r11,24
	ctx.r5.s64 = r11.s64 * 24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// b 0x82e72a20
	goto loc_82E72A20;
loc_82E72A1C:
	// bl 0x82e7dda8
	sub_82E7DDA8(ctx, base);
loc_82E72A20:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r9,24
	ctx.r9.s64 = 24;
	// mulli r11,r30,24
	r11.s64 = r30.s64 * 24;
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E72A60"))) PPC_WEAK_FUNC(sub_82E72A60);
PPC_FUNC_IMPL(__imp__sub_82E72A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bgt cr6,0x82e72a74
	if (cr6.gt) goto loc_82E72A74;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82e728a0
	sub_82E728A0(ctx, base);
	return;
loc_82E72A74:
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// b 0x82e728a0
	sub_82E728A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E72A80"))) PPC_WEAK_FUNC(sub_82E72A80);
PPC_FUNC_IMPL(__imp__sub_82E72A80) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,64(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// beq 0x82e72b64
	if (cr0.eq) goto loc_82E72B64;
	// lbz r11,55(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 55);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e72b64
	if (cr0.eq) goto loc_82E72B64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r28,0
	r28.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r30,r11,r9
	r30.s64 = ctx.r9.s64 - r11.s64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// subf r29,r11,r8
	r29.s64 = ctx.r8.s64 - r11.s64;
	// bne cr6,0x82e72adc
	if (!cr6.eq) goto loc_82E72ADC;
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r28.u32);
	// b 0x82e72af0
	goto loc_82E72AF0;
loc_82E72ADC:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r8,24
	ctx.r8.s64 = 24;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r8
	r11.s32 = r11.s32 / ctx.r8.s32;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
loc_82E72AF0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,320
	cr6.compare<int32_t>(r11.s32, 320, xer);
	// bgt cr6,0x82e72b1c
	if (cr6.gt) goto loc_82E72B1C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82e72b18
	if (!cr6.lt) goto loc_82E72B18;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
loc_82E72B18:
	// bl 0x82e728a0
	sub_82E728A0(ctx, base);
loc_82E72B1C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,320
	r11.s64 = r11.s64 + 320;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stb r28,55(r31)
	PPC_STORE_U8(r31.u32 + 55, r28.u8);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stb r10,55(r31)
	PPC_STORE_U8(r31.u32 + 55, ctx.r10.u8);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82E72B64:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E72B70"))) PPC_WEAK_FUNC(sub_82E72B70);
PPC_FUNC_IMPL(__imp__sub_82E72B70) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r24,73(r4)
	r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 73);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmpw cr6,r25,r24
	cr6.compare<int32_t>(r25.s32, r24.s32, xer);
	// bge cr6,0x82e72bbc
	if (!cr6.lt) goto loc_82E72BBC;
	// subf r11,r25,r24
	r11.s64 = r24.s64 - r25.s64;
	// add r25,r11,r25
	r25.u64 = r11.u64 + r25.u64;
loc_82E72BA0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r23,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r23.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bne 0x82e72ba0
	if (!cr0.eq) goto loc_82E72BA0;
loc_82E72BBC:
	// lbz r11,74(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 74);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e72c8c
	if (cr0.eq) goto loc_82E72C8C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r30,r24,r25
	r30.s64 = r25.s64 - r24.s64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e72be8
	if (cr6.lt) goto loc_82E72BE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e79c30
	sub_82E79C30(ctx, base);
loc_82E72BE8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7c930
	sub_82E7C930(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r11,r23
	r11.u64 = r23.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82e72c4c
	if (!cr6.gt) goto loc_82E72C4C;
	// neg r10,r30
	ctx.r10.s64 = -r30.s64;
	// rlwinm r29,r10,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
loc_82E72C10:
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r27,r29,r11
	r27.u64 = r29.u64 + r11.u64;
	// bl 0x82e7ccc8
	sub_82E7CCC8(ctx, base);
	// ld r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U64(r27.u32 + 0);
	// mr r11,r28
	r11.u64 = r28.u64;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blt cr6,0x82e72c10
	if (cr6.lt) goto loc_82E72C10;
loc_82E72C4C:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-27712
	ctx.r4.s64 = r11.s64 + -27712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7d4b8
	sub_82E7D4B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7d340
	sub_82E7D340(ctx, base);
	// extsw r11,r30
	r11.s64 = r30.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfd f0,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, f0.u64);
loc_82E72C8C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r25,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// ble cr6,0x82e72cd8
	if (!cr6.gt) goto loc_82E72CD8;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_82E72CAC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// ld r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82e72cac
	if (!cr0.eq) goto loc_82E72CAC;
loc_82E72CD8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82e72cf8
	if (cr6.eq) goto loc_82E72CF8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_82E72CF8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82E72D00"))) PPC_WEAK_FUNC(sub_82E72D00);
PPC_FUNC_IMPL(__imp__sub_82E72D00) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82e7a978
	sub_82E7A978(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r28,r11,r30
	r28.s64 = r30.s64 - r11.s64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82e72d48
	if (cr6.eq) goto loc_82E72D48;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-7688
	ctx.r5.s64 = r11.s64 + -7688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7a700
	sub_82E7A700(ctx, base);
loc_82E72D48:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x82e72d68
	goto loc_82E72D68;
loc_82E72D50:
	// ld r9,-16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82E72D68:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bgt cr6,0x82e72d50
	if (cr6.gt) goto loc_82E72D50;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bgt cr6,0x82e72da0
	if (cr6.gt) goto loc_82E72DA0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82e72d9c
	if (!cr6.lt) goto loc_82E72D9C;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
loc_82E72D9C:
	// bl 0x82e728a0
	sub_82E728A0(ctx, base);
loc_82E72DA0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// add r3,r28,r10
	ctx.r3.u64 = r28.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// ld r11,0(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E72DD0"))) PPC_WEAK_FUNC(sub_82E72DD0);
PPC_FUNC_IMPL(__imp__sub_82E72DD0) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lbz r11,54(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 54);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e72e60
	if (cr0.eq) goto loc_82E72E60;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// subf r30,r11,r9
	r30.s64 = ctx.r9.s64 - r11.s64;
	// bl 0x82e72a80
	sub_82E72A80(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e72e58
	if (!cr0.eq) goto loc_82E72E58;
	// b 0x82e72e3c
	goto loc_82E72E3C;
loc_82E72E28:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72a80
	sub_82E72A80(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_82E72E3C:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// bne cr6,0x82e72e28
	if (!cr6.eq) goto loc_82E72E28;
loc_82E72E58:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
loc_82E72E60:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r10,r11,-24
	ctx.r10.s64 = r11.s64 + -24;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r8,-24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -24);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r6,0
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// lwz r11,-12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// beq 0x82e72ec4
	if (cr0.eq) goto loc_82E72EC4;
loc_82E72E90:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82e72ec4
	if (!cr6.lt) goto loc_82E72EC4;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// ld r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r5,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r5.u64);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// bne 0x82e72e90
	if (!cr0.eq) goto loc_82E72E90;
loc_82E72EC4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e72ee0
	if (!cr6.gt) goto loc_82E72EE0;
loc_82E72ECC:
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bgt 0x82e72ecc
	if (cr0.gt) goto loc_82E72ECC;
loc_82E72EE0:
	// addi r3,r6,1
	ctx.r3.s64 = ctx.r6.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E72F00"))) PPC_WEAK_FUNC(sub_82E72F00);
PPC_FUNC_IMPL(__imp__sub_82E72F00) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r30,0(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82E72F2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e72f2c
	if (!cr6.eq) goto loc_82E72F2C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82e7d4b8
	sub_82E7D4B8(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bgt cr6,0x82e72f8c
	if (cr6.gt) goto loc_82E72F8C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82e72f88
	if (!cr6.lt) goto loc_82E72F88;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
loc_82E72F88:
	// bl 0x82e728a0
	sub_82E728A0(ctx, base);
loc_82E72F8C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82E72FB8"))) PPC_WEAK_FUNC(sub_82E72FB8);
PPC_FUNC_IMPL(__imp__sub_82E72FB8) {
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
	// lhz r11,52(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e72fec
	if (cr0.eq) goto loc_82E72FEC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,-7276
	ctx.r4.s64 = r11.s64 + -7276;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E72FEC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stb r9,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r9.u8);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E73020"))) PPC_WEAK_FUNC(sub_82E73020);
PPC_FUNC_IMPL(__imp__sub_82E73020) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82e7dc20
	sub_82E7DC20(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e7305c
	if (cr6.lt) goto loc_82E7305C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e79c30
	sub_82E79C30(ctx, base);
loc_82E7305C:
	// cmpwi cr6,r29,27
	cr6.compare<int32_t>(r29.s32, 27, xer);
	// bne cr6,0x82e73070
	if (!cr6.eq) goto loc_82E73070;
	// lis r11,-32024
	r11.s64 = -2098724864;
	// addi r11,r11,4456
	r11.s64 = r11.s64 + 4456;
	// b 0x82e73078
	goto loc_82E73078;
loc_82E73070:
	// lis r11,-32024
	r11.s64 = -2098724864;
	// addi r11,r11,2472
	r11.s64 = r11.s64 + 2472;
loc_82E73078:
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 72);
	// bl 0x82e7d6e8
	sub_82E7D6E8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// stw r30,16(r27)
	PPC_STORE_U32(r27.u32 + 16, r30.u32);
	// lbz r11,72(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e730e0
	if (cr0.eq) goto loc_82E730E0;
	// addi r28,r27,20
	r28.s64 = r27.s64 + 20;
loc_82E730C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7d768
	sub_82E7D768(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lbz r11,72(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 72);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82e730c0
	if (cr6.lt) goto loc_82E730C0;
loc_82E730E0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bgt cr6,0x82e73120
	if (cr6.gt) goto loc_82E73120;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82e7311c
	if (!cr6.lt) goto loc_82E7311C;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
loc_82E7311C:
	// bl 0x82e728a0
	sub_82E728A0(ctx, base);
loc_82E73120:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E73138"))) PPC_WEAK_FUNC(sub_82E73138);
PPC_FUNC_IMPL(__imp__sub_82E73138) {
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
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// bl 0x82e7d8c8
	sub_82E7D8C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72780
	sub_82E72780(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r10,20000
	cr6.compare<int32_t>(ctx.r10.s32, 20000, xer);
	// sth r30,52(r31)
	PPC_STORE_U16(r31.u32 + 52, r30.u16);
	// stb r11,55(r31)
	PPC_STORE_U8(r31.u32 + 55, r11.u8);
	// ble cr6,0x82e731c0
	if (!cr6.gt) goto loc_82E731C0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,20000
	cr6.compare<int32_t>(r11.s32, 20000, xer);
	// bge cr6,0x82e731c0
	if (!cr6.lt) goto loc_82E731C0;
	// li r4,20000
	ctx.r4.s64 = 20000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e729d8
	sub_82E729D8(ctx, base);
loc_82E731C0:
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E731E0"))) PPC_WEAK_FUNC(sub_82E731E0);
PPC_FUNC_IMPL(__imp__sub_82E731E0) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e73218
	if (cr0.eq) goto loc_82E73218;
	// stw r11,1360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1360, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x831b6790
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_82E73218:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// lwz r10,88(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e7324c
	if (cr6.eq) goto loc_82E7324C;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e73138
	sub_82E73138(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82E7324C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831b5630
	sub_831B5630(ctx, base);
}

__attribute__((alias("__imp__sub_82E73258"))) PPC_WEAK_FUNC(sub_82E73258);
PPC_FUNC_IMPL(__imp__sub_82E73258) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82e73280
	if (cr6.eq) goto loc_82E73280;
	// bl 0x82e72d00
	sub_82E72D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82E73280:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r27,r8,r4
	r27.s64 = ctx.r4.s64 - ctx.r8.s64;
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bne 0x82e73428
	if (!cr0.eq) goto loc_82E73428;
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// lbz r11,75(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 75);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82e732e0
	if (cr6.gt) goto loc_82E732E0;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82e732dc
	if (!cr6.gt) goto loc_82E732DC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
loc_82E732DC:
	// bl 0x82e728a0
	sub_82E728A0(ctx, base);
loc_82E732E0:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lbz r10,74(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 74);
	// add r28,r27,r11
	r28.u64 = r27.u64 + r11.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e73318
	if (!cr0.eq) goto loc_82E73318;
	// lbz r11,73(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 73);
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82e73340
	if (!cr6.gt) goto loc_82E73340;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82e73340
	goto loc_82E73340;
loc_82E73318:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// bl 0x82e72b70
	sub_82E72B70(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r28,r27,r11
	r28.u64 = r27.u64 + r11.u64;
loc_82E73340:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e73390
	if (!cr6.eq) goto loc_82E73390;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,20000
	cr6.compare<int32_t>(r11.s32, 20000, xer);
	// ble cr6,0x82e73368
	if (!cr6.gt) goto loc_82E73368;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82e731e0
	sub_82E731E0(ctx, base);
loc_82E73368:
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82e729d8
	sub_82E729D8(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,20000
	cr6.compare<int32_t>(r11.s32, 20000, xer);
	// ble cr6,0x82e7338c
	if (!cr6.gt) goto loc_82E7338C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-7224
	ctx.r4.s64 = r11.s64 + -7224;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E7338C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_82E73390:
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// lbz r10,75(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 75);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// stw r26,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r26.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x82e733d8
	goto loc_82E733D8;
loc_82E733D0:
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_82E733D8:
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e733d0
	if (cr6.lt) goto loc_82E733D0;
	// lbz r10,54(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 54);
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e73420
	if (cr0.eq) goto loc_82E73420;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bl 0x82e72a80
	sub_82E72A80(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82E73420:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e73534
	goto loc_82E73534;
loc_82E73428:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,320
	cr6.compare<int32_t>(r11.s32, 320, xer);
	// bgt cr6,0x82e73454
	if (cr6.gt) goto loc_82E73454;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82e73450
	if (!cr6.lt) goto loc_82E73450;
	// addi r4,r11,20
	ctx.r4.s64 = r11.s64 + 20;
loc_82E73450:
	// bl 0x82e728a0
	sub_82E728A0(ctx, base);
loc_82E73454:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e734a4
	if (!cr6.eq) goto loc_82E734A4;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,20000
	cr6.compare<int32_t>(r11.s32, 20000, xer);
	// ble cr6,0x82e7347c
	if (!cr6.gt) goto loc_82E7347C;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82e731e0
	sub_82E731E0(ctx, base);
loc_82E7347C:
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82e729d8
	sub_82E729D8(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,20000
	cr6.compare<int32_t>(r11.s32, 20000, xer);
	// ble cr6,0x82e734a0
	if (!cr6.gt) goto loc_82E734A0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-7224
	ctx.r4.s64 = r11.s64 + -7224;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E734A0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_82E734A4:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// stw r26,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r26.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lbz r11,54(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 54);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e734f0
	if (cr0.eq) goto loc_82E734F0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72a80
	sub_82E72A80(ctx, base);
loc_82E734F0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82e7351c
	if (!cr0.lt) goto loc_82E7351C;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82e73534
	goto loc_82E73534;
loc_82E7351C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r4,r10,r11
	ctx.r4.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x82e72dd0
	sub_82E72DD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E73534:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E73540"))) PPC_WEAK_FUNC(sub_82E73540);
PPC_FUNC_IMPL(__imp__sub_82E73540) {
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
	// lhz r11,52(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 52);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,200
	cr6.compare<uint32_t>(r11.u32, 200, xer);
	// sth r11,52(r31)
	PPC_STORE_U16(r31.u32 + 52, r11.u16);
	// blt cr6,0x82e73588
	if (cr6.lt) goto loc_82E73588;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,200
	cr6.compare<uint32_t>(r11.u32, 200, xer);
	// bne cr6,0x82e735e0
	if (!cr6.eq) goto loc_82E735E0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,-7208
	ctx.r4.s64 = r11.s64 + -7208;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E73588:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e73258
	sub_82E73258(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e735ac
	if (!cr0.eq) goto loc_82E735AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7b5d0
	sub_82E7B5D0(ctx, base);
loc_82E735AC:
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 52);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,52(r31)
	PPC_STORE_U16(r31.u32 + 52, ctx.r10.u16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e735d8
	if (cr6.lt) goto loc_82E735D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e79c30
	sub_82E79C30(ctx, base);
loc_82E735D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82E735E0:
	// lhz r11,52(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 52);
	// cmplwi cr6,r11,225
	cr6.compare<uint32_t>(r11.u32, 225, xer);
	// blt cr6,0x82e73588
	if (cr6.lt) goto loc_82E73588;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e731e0
	sub_82E731E0(ctx, base);
}

__attribute__((alias("__imp__sub_82E735F8"))) PPC_WEAK_FUNC(sub_82E735F8);
PPC_FUNC_IMPL(__imp__sub_82E735F8) {
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
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e73634
	if (!cr0.eq) goto loc_82E73634;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,-16
	ctx.r4.s64 = ctx.r4.s64 + -16;
	// bl 0x82e73258
	sub_82E73258(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e73694
	if (!cr0.eq) goto loc_82E73694;
	// b 0x82e73678
	goto loc_82E73678;
loc_82E73634:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,6(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82e73670
	if (cr0.eq) goto loc_82E73670;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72dd0
	sub_82E72DD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e73678
	if (cr0.eq) goto loc_82E73678;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82e73678
	goto loc_82E73678;
loc_82E73670:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82E73678:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// divw r4,r11,r10
	ctx.r4.s32 = r11.s32 / ctx.r10.s32;
	// bl 0x82e7b5d0
	sub_82E7B5D0(ctx, base);
loc_82E73694:
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

__attribute__((alias("__imp__sub_82E736A8"))) PPC_WEAK_FUNC(sub_82E736A8);
PPC_FUNC_IMPL(__imp__sub_82E736A8) {
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
	// lbz r11,6(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e73704
	if (cr6.eq) goto loc_82E73704;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e736e8
	if (cr6.eq) goto loc_82E736E8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,-7148
	ctx.r4.s64 = r11.s64 + -7148;
loc_82E736DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72f00
	sub_82E72F00(ctx, base);
	// b 0x82e73754
	goto loc_82E73754;
loc_82E736E8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e73704
	if (cr6.eq) goto loc_82E73704;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,-7188
	ctx.r4.s64 = r11.s64 + -7188;
	// b 0x82e736dc
	goto loc_82E736DC;
loc_82E73704:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32025
	r11.s64 = -2098790400;
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r4,r11,13816
	ctx.r4.s64 = r11.s64 + 13816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72820
	sub_82E72820(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82e7374c
	if (cr0.eq) goto loc_82E7374C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r30.u8);
	// bl 0x82e72780
	sub_82E72780(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x82e73750
	goto loc_82E73750;
loc_82E7374C:
	// lbz r30,6(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 6);
loc_82E73750:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82E73754:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E73770"))) PPC_WEAK_FUNC(sub_82E73770);
PPC_FUNC_IMPL(__imp__sub_82E73770) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r25,116(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lhz r27,52(r31)
	r27.u64 = PPC_LOAD_U16(r31.u32 + 52);
	// subf r29,r10,r11
	r29.s64 = r11.s64 - ctx.r10.s64;
	// lbz r26,55(r31)
	r26.u64 = PPC_LOAD_U8(r31.u32 + 55);
	// stw r7,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// bl 0x82e72820
	sub_82E72820(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82e73824
	if (cr0.eq) goto loc_82E73824;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82e7d8c8
	sub_82E7D8C8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72780
	sub_82E72780(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r10,20000
	cr6.compare<int32_t>(ctx.r10.s32, 20000, xer);
	// sth r27,52(r31)
	PPC_STORE_U16(r31.u32 + 52, r27.u16);
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stb r26,55(r31)
	PPC_STORE_U8(r31.u32 + 55, r26.u8);
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// ble cr6,0x82e73824
	if (!cr6.gt) goto loc_82E73824;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// li r10,24
	ctx.r10.s64 = 24;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,20000
	cr6.compare<int32_t>(r11.s32, 20000, xer);
	// bge cr6,0x82e73824
	if (!cr6.lt) goto loc_82E73824;
	// li r4,20000
	ctx.r4.s64 = 20000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e729d8
	sub_82E729D8(ctx, base);
loc_82E73824:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r25,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E73838"))) PPC_WEAK_FUNC(sub_82E73838);
PPC_FUNC_IMPL(__imp__sub_82E73838) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lis r9,-32025
	ctx.r9.s64 = -2098790400;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r9,12320
	ctx.r4.s64 = ctx.r9.s64 + 12320;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// subf r6,r6,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r6.s64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82e73770
	sub_82E73770(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82E738C0"))) PPC_WEAK_FUNC(sub_82E738C0);
PPC_FUNC_IMPL(__imp__sub_82E738C0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e73910
	sub_82E73910(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82E73910"))) PPC_WEAK_FUNC(sub_82E73910);
PPC_FUNC_IMPL(__imp__sub_82E73910) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E73918"))) PPC_WEAK_FUNC(sub_82E73918);
PPC_FUNC_IMPL(__imp__sub_82E73918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lfs f0,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E73938"))) PPC_WEAK_FUNC(sub_82E73938);
PPC_FUNC_IMPL(__imp__sub_82E73938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,-1
	r11.s64 = -1;
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E73950"))) PPC_WEAK_FUNC(sub_82E73950);
PPC_FUNC_IMPL(__imp__sub_82E73950) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82e77688
	sub_82E77688(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
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

__attribute__((alias("__imp__sub_82E73990"))) PPC_WEAK_FUNC(sub_82E73990);
PPC_FUNC_IMPL(__imp__sub_82E73990) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82e77688
	sub_82E77688(ctx, base);
	// stfs f31,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82E739E0"))) PPC_WEAK_FUNC(sub_82E739E0);
PPC_FUNC_IMPL(__imp__sub_82E739E0) {
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
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f9,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stw r5,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r5.u32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r6,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r6.u32);
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// addi r27,r31,8
	r27.s64 = r31.s64 + 8;
	// bl 0x82e776d0
	sub_82E776D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e73aec
	if (!cr0.eq) goto loc_82E73AEC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stfs f0,0(r23)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r23)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r23.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r23)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r23.u32 + 8, temp.u32);
	// b 0x82e73de8
	goto loc_82E73DE8;
loc_82E73AEC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r25,-1
	r25.s64 = -1;
	// li r26,0
	r26.s64 = 0;
	// bl 0x82e77850
	sub_82E77850(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e77850
	sub_82E77850(ctx, base);
	// vspltisw128 v62,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x1)));
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// addi r6,r1,147
	ctx.r6.s64 = ctx.r1.s64 + 147;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vcsxwfp128 v13,v62,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v62.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// mr r11,r27
	r11.u64 = r27.u64;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - r31.s64;
	// bne cr6,0x82e73c0c
	if (!cr6.eq) goto loc_82E73C0C;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lfs f10,0(r21)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r21.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - r31.s64;
loc_82E73B60:
	// lfs f11,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f9,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f8,f0,f8
	ctx.f8.f64 = double(float(f0.f64 - ctx.f8.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsx f8,r7,r11
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, temp.u32);
	// lvsl v0,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r6,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v62,v62,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// vrsqrtefp128 v0,v62
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v62.f32))));
	// vor128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vmulfp128 v11,v62,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v62,v63
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// vmulfp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v11,v9,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v62,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// blt cr6,0x82e73bf0
	if (cr6.lt) goto loc_82E73BF0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// blt cr6,0x82e73b60
	if (cr6.lt) goto loc_82E73B60;
	// b 0x82e73cb4
	goto loc_82E73CB4;
loc_82E73BF0:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-7112
	r11.s64 = r11.s64 + -7112;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// lwzx r25,r10,r11
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x82e73cb4
	goto loc_82E73CB4;
loc_82E73C0C:
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// subf r7,r31,r9
	ctx.r7.s64 = ctx.r9.s64 - r31.s64;
	// li r9,2
	ctx.r9.s64 = 2;
loc_82E73C1C:
	// lfs f11,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f10,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(f0.f64 - ctx.f11.f64));
	// fsubs f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfsx f11,r7,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, temp.u32);
	// stfs f10,0(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lvsl v0,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v61,r6,r11
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v61,v0
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v62,v62,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v62.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v62.f32), 0xEF));
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// vrsqrtefp128 v0,v62
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(v62.f32))));
	// vor128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vmulfp128 v11,v62,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v10,v62,v63
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// vmulfp128 v9,v0,v0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v11,v9,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v62,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsel v0,v0,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// stvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82e73c1c
	if (!cr0.eq) goto loc_82E73C1C;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// li r25,0
	r25.s64 = 0;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x82e73cb4
	if (cr6.lt) goto loc_82E73CB4;
	// li r25,1
	r25.s64 = 1;
loc_82E73CB4:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e73cd0
	if (!cr6.eq) goto loc_82E73CD0;
	// stfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
	// stfs f13,4(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r23.u32 + 4, temp.u32);
	// stfs f0,8(r23)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r23.u32 + 8, temp.u32);
	// b 0x82e73dd8
	goto loc_82E73DD8;
loc_82E73CD0:
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// lfs f12,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r21.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bne cr6,0x82e73d70
	if (!cr6.eq) goto loc_82E73D70;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,0(r23)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
	// stfs f13,4(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r23.u32 + 4, temp.u32);
	// stfs f12,8(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r23.u32 + 8, temp.u32);
	// beq cr6,0x82e73dd8
	if (cr6.eq) goto loc_82E73DD8;
	// lbz r11,4(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e73dd8
	if (cr0.eq) goto loc_82E73DD8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82e81460
	sub_82E81460(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82e73dc4
	goto loc_82E73DC4;
loc_82E73D70:
	// lfs f11,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,0(r23)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
	// stfs f13,4(r23)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r23.u32 + 4, temp.u32);
	// stfs f12,8(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r23.u32 + 8, temp.u32);
	// beq cr6,0x82e73dd8
	if (cr6.eq) goto loc_82E73DD8;
	// lbz r11,4(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e73dd8
	if (cr0.eq) goto loc_82E73DD8;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82e81460
	sub_82E81460(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82E73DC4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82e81438
	sub_82E81438(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82e812c8
	sub_82E812C8(ctx, base);
loc_82E73DD8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82e812d8
	sub_82E812D8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82E73DE8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82E73DF8"))) PPC_WEAK_FUNC(sub_82E73DF8);
PPC_FUNC_IMPL(__imp__sub_82E73DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
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
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831b1438
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f28,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f28.f64 = double(temp.f32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stfs f28,0(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stfs f28,4(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// stfs f28,8(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// bl 0x82e812c0
	sub_82E812C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq 0x82e7411c
	if (cr0.eq) goto loc_82E7411C;
	// bl 0x82e6f2c8
	sub_82E6F2C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// bl 0x82e77610
	sub_82E77610(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e73eac
	if (!cr6.eq) goto loc_82E73EAC;
	// lfs f29,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f30,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f31,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f31.f64 = double(temp.f32);
	// b 0x82e73eb8
	goto loc_82E73EB8;
loc_82E73EAC:
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f31.f64 = double(temp.f32);
	// lfs f30,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f30.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
loc_82E73EB8:
	// lfs f13,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f29,f0
	f0.f64 = double(float(f29.f64 - f0.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fsubs f12,f31,f12
	ctx.f12.f64 = double(float(f31.f64 - ctx.f12.f64));
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-7104
	r11.s64 = r11.s64 + -7104;
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
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
	// addi r8,r1,91
	ctx.r8.s64 = ctx.r1.s64 + 91;
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,4
	r11.s64 = 4;
	// vrefp128 v0,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(v62.f32)));
	// vor128 v12,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// vspltw128 v13,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x0));
	// vor128 v11,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v62.u8));
	// lfs f10,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// vnmsubfp v12,v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vor v9,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmaddfp v0,v0,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v11,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
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
	// vspltw128 v61,v63,1
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xAA));
	// vspltw128 v63,v63,2
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x55));
	// stvewx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r10,r11
	ea = (ctx.r10.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e6f5b8
	sub_82E6F5B8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x82e740e0
	if (cr6.eq) goto loc_82E740E0;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// beq cr6,0x82e740e0
	if (cr6.eq) goto loc_82E740E0;
	// addi r11,r1,131
	r11.s64 = ctx.r1.s64 + 131;
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,91
	ctx.r9.s64 = ctx.r1.s64 + 91;
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvsl v0,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v62,v60,v61,v7
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// blt cr6,0x82e740cc
	if (cr6.lt) goto loc_82E740CC;
loc_82E740B4:
	// fadds f13,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 + f0.f64));
loc_82E740C4:
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// b 0x82e74134
	goto loc_82E74134;
loc_82E740CC:
	// fsubs f13,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fsubs f13,f10,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 - f0.f64));
	// b 0x82e740c4
	goto loc_82E740C4;
loc_82E740E0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e812d0
	sub_82E812D0(ctx, base);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// bne 0x82e740cc
	if (!cr0.eq) goto loc_82E740CC;
	// b 0x82e740b4
	goto loc_82E740B4;
loc_82E7411C:
	// bl 0x82e73910
	sub_82E73910(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_82E74134:
	// stfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831b1484
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E74150"))) PPC_WEAK_FUNC(sub_82E74150);
PPC_FUNC_IMPL(__imp__sub_82E74150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E74170"))) PPC_WEAK_FUNC(sub_82E74170);
PPC_FUNC_IMPL(__imp__sub_82E74170) {
	PPC_FUNC_PROLOGUE();
	PPCVRegister v63{};
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E74180"))) PPC_WEAK_FUNC(sub_82E74180);
PPC_FUNC_IMPL(__imp__sub_82E74180) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// li r25,-1
	r25.s64 = -1;
	// beq 0x82e741ec
	if (cr0.eq) goto loc_82E741EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e6e3f8
	sub_82E6E3F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e741ec
	if (!cr6.eq) goto loc_82E741EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e6e3f0
	sub_82E6E3F0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// b 0x82e74208
	goto loc_82E74208;
loc_82E741EC:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e739e0
	sub_82E739E0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_82E74208:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E74218"))) PPC_WEAK_FUNC(sub_82E74218);
PPC_FUNC_IMPL(__imp__sub_82E74218) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r5,1
	r30.s64 = ctx.r5.s64 + 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stfs f0,4(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f0,8(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// bge cr6,0x82e742d8
	if (!cr6.lt) goto loc_82E742D8;
loc_82E74250:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e74268
	if (cr6.gt) goto loc_82E74268;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E74268:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e812b8
	sub_82E812B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e74298
	if (cr6.eq) goto loc_82E74298;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82e74250
	if (cr6.lt) goto loc_82E74250;
	// b 0x82e742d8
	goto loc_82E742D8;
loc_82E74298:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e742b0
	if (cr6.gt) goto loc_82E742B0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E742B0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e73910
	sub_82E73910(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
loc_82E742D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E742E8"))) PPC_WEAK_FUNC(sub_82E742E8);
PPC_FUNC_IMPL(__imp__sub_82E742E8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82e743c8
	if (cr6.eq) goto loc_82E743C8;
loc_82E74320:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82e74334
	if (!cr6.eq) goto loc_82E74334;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e76330
	sub_82E76330(ctx, base);
	// b 0x82e74378
	goto loc_82E74378;
loc_82E74334:
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e7434c
	if (!cr6.eq) goto loc_82E7434C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e76338
	sub_82E76338(ctx, base);
	// b 0x82e74378
	goto loc_82E74378;
loc_82E7434C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e74364
	if (cr6.gt) goto loc_82E74364;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E74364:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// bl 0x82e6e3f0
	sub_82E6E3F0(ctx, base);
loc_82E74378:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bgt cr6,0x82e743a8
	if (cr6.gt) goto loc_82E743A8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E743A8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e81410
	sub_82E81410(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x82e74320
	if (cr6.lt) goto loc_82E74320;
loc_82E743C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E743D0"))) PPC_WEAK_FUNC(sub_82E743D0);
PPC_FUNC_IMPL(__imp__sub_82E743D0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82e7449c
	if (cr6.eq) goto loc_82E7449C;
	// addi r28,r29,-1
	r28.s64 = r29.s64 + -1;
loc_82E7440C:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bne cr6,0x82e74420
	if (!cr6.eq) goto loc_82E74420;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e76338
	sub_82E76338(ctx, base);
	// b 0x82e7444c
	goto loc_82E7444C;
loc_82E74420:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e74438
	if (cr6.gt) goto loc_82E74438;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E74438:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e81358
	sub_82E81358(ctx, base);
loc_82E7444C:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bgt cr6,0x82e7447c
	if (cr6.gt) goto loc_82E7447C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E7447C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e81410
	sub_82E81410(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x82e7440c
	if (cr6.lt) goto loc_82E7440C;
loc_82E7449C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E744A8"))) PPC_WEAK_FUNC(sub_82E744A8);
PPC_FUNC_IMPL(__imp__sub_82E744A8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r27,16(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e76338
	sub_82E76338(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82e74680
	if (cr6.eq) goto loc_82E74680;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r25,r27,-1
	r25.s64 = r27.s64 + -1;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_82E74524:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// bne cr6,0x82e74550
	if (!cr6.eq) goto loc_82E74550;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e76338
	sub_82E76338(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82e7463c
	goto loc_82E7463C;
loc_82E74550:
	// add r11,r30,r28
	r11.u64 = r30.u64 + r28.u64;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// blt cr6,0x82e74580
	if (cr6.lt) goto loc_82E74580;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e76330
	sub_82E76330(ctx, base);
	// b 0x82e745b0
	goto loc_82E745B0;
loc_82E74580:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e7459c
	if (cr6.gt) goto loc_82E7459C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E7459C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e81358
	sub_82E81358(ctx, base);
loc_82E745B0:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bgt cr6,0x82e745e0
	if (cr6.gt) goto loc_82E745E0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82E745E0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bgt cr6,0x82e745fc
	if (cr6.gt) goto loc_82E745FC;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
loc_82E745FC:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e74180
	sub_82E74180(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e7462c
	if (cr6.gt) goto loc_82E7462C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E7462C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r3,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r3.u32);
loc_82E7463C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e74654
	if (cr6.gt) goto loc_82E74654;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E74654:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e81410
	sub_82E81410(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// blt cr6,0x82e74524
	if (cr6.lt) goto loc_82E74524;
loc_82E74680:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E74690"))) PPC_WEAK_FUNC(sub_82E74690);
PPC_FUNC_IMPL(__imp__sub_82E74690) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bne cr6,0x82e746e8
	if (!cr6.eq) goto loc_82E746E8;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82e76330
	sub_82E76330(ctx, base);
	// b 0x82e74714
	goto loc_82E74714;
loc_82E746E8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e74704
	if (cr6.gt) goto loc_82E74704;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E74704:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e73910
	sub_82E73910(ctx, base);
loc_82E74714:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82e77670
	sub_82E77670(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r23,r24,-1
	r23.s64 = r24.s64 + -1;
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(r26.s32, r24.s32, xer);
	// stw r23,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r23.u32);
	// bge cr6,0x82e748f8
	if (!cr6.lt) goto loc_82E748F8;
loc_82E7474C:
	// cmpw cr6,r28,r23
	cr6.compare<int32_t>(r28.s32, r23.s32, xer);
	// bne cr6,0x82e74760
	if (!cr6.eq) goto loc_82E74760;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82e76338
	sub_82E76338(ctx, base);
	// b 0x82e7478c
	goto loc_82E7478C;
loc_82E74760:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e74778
	if (cr6.gt) goto loc_82E74778;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E74778:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e81358
	sub_82E81358(ctx, base);
loc_82E7478C:
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f12,8(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r25.u32 + 8, temp.u32);
	// stfs f13,4(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r25.u32 + 4, temp.u32);
	// stfs f0,0(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 0, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// beq cr6,0x82e748ec
	if (cr6.eq) goto loc_82E748EC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e747d0
	if (cr6.gt) goto loc_82E747D0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E747D0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e812b0
	sub_82E812B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e748ec
	if (cr0.eq) goto loc_82E748EC;
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// li r27,0
	r27.s64 = 0;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// blt cr6,0x82e748ec
	if (cr6.lt) goto loc_82E748EC;
loc_82E747F8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e74810
	if (cr6.gt) goto loc_82E74810;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E74810:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e812b0
	sub_82E812B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e748d8
	if (cr0.eq) goto loc_82E748D8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82e74840
	if (cr6.gt) goto loc_82E74840;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_82E74840:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bgt cr6,0x82e7485c
	if (cr6.gt) goto loc_82E7485C;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
loc_82E7485C:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e74180
	sub_82E74180(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e74890
	if (cr6.gt) goto loc_82E74890;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E74890:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e81410
	sub_82E81410(ctx, base);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82e748d8
	if (cr6.eq) goto loc_82E748D8;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r30.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 0, temp.u32);
	// stfs f13,4(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r25.u32 + 4, temp.u32);
	// stfs f12,8(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r25.u32 + 8, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82E748D8:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// bge cr6,0x82e747f8
	if (!cr6.lt) goto loc_82E747F8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bgt cr6,0x82e748f8
	if (cr6.gt) goto loc_82E748F8;
loc_82E748EC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r24
	cr6.compare<int32_t>(r28.s32, r24.s32, xer);
	// blt cr6,0x82e7474c
	if (cr6.lt) goto loc_82E7474C;
loc_82E748F8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82E74908"))) PPC_WEAK_FUNC(sub_82E74908);
PPC_FUNC_IMPL(__imp__sub_82E74908) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e77670
	sub_82E77670(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// ble 0x82e74990
	if (!cr0.gt) goto loc_82E74990;
loc_82E74938:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74690
	sub_82E74690(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e7496c
	if (cr6.gt) goto loc_82E7496C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E7496C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e81410
	sub_82E81410(ctx, base);
	// addi r6,r30,1
	ctx.r6.s64 = r30.s64 + 1;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// cmpw cr6,r6,r27
	cr6.compare<int32_t>(ctx.r6.s32, r27.s32, xer);
	// blt cr6,0x82e74938
	if (cr6.lt) goto loc_82E74938;
loc_82E74990:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E74998"))) PPC_WEAK_FUNC(sub_82E74998);
PPC_FUNC_IMPL(__imp__sub_82E74998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e749e8
	if (cr6.eq) goto loc_82E749E8;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82e749e4
	if (cr6.eq) goto loc_82E749E4;
	// subf r8,r5,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r5.s64;
loc_82E749B8:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + r11.u64;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,16(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	f0.f64 = double(temp.f32);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e749b8
	if (!cr6.eq) goto loc_82E749B8;
loc_82E749E4:
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_82E749E8:
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E749F0"))) PPC_WEAK_FUNC(sub_82E749F0);
PPC_FUNC_IMPL(__imp__sub_82E749F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x82e74a08
	if (!cr6.eq) goto loc_82E74A08;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82e742e8
	sub_82E742E8(ctx, base);
	return;
loc_82E74A08:
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x82e74a18
	if (!cr6.eq) goto loc_82E74A18;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82e743d0
	sub_82E743D0(ctx, base);
	return;
loc_82E74A18:
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bne cr6,0x82e74a2c
	if (!cr6.eq) goto loc_82E74A2C;
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82e744a8
	sub_82E744A8(ctx, base);
	return;
loc_82E74A2C:
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82e74908
	sub_82E74908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E74A3C"))) PPC_WEAK_FUNC(sub_82E74A3C);
PPC_FUNC_IMPL(__imp__sub_82E74A3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E74A40"))) PPC_WEAK_FUNC(sub_82E74A40);
PPC_FUNC_IMPL(__imp__sub_82E74A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r8,48
	ctx.r8.s64 = 48;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw. r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r9,r9,r8
	ctx.r9.s32 = ctx.r9.s32 / ctx.r8.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E74A90"))) PPC_WEAK_FUNC(sub_82E74A90);
PPC_FUNC_IMPL(__imp__sub_82E74A90) {
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
	// bl 0x82633f20
	sub_82633F20(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x827f8428
	sub_827F8428(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82e74998
	sub_82E74998(ctx, base);
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

__attribute__((alias("__imp__sub_82E74AD8"))) PPC_WEAK_FUNC(sub_82E74AD8);
PPC_FUNC_IMPL(__imp__sub_82E74AD8) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10432
	ctx.r4.s64 = r11.s64 + -10432;
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E74B38"))) PPC_WEAK_FUNC(sub_82E74B38);
PPC_FUNC_IMPL(__imp__sub_82E74B38) {
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
	// lis r11,780
	r11.s64 = 51118080;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// ori r31,r11,12483
	r31.u64 = r11.u64 | 12483;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r31
	r11.s64 = r31.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x82e74b68
	if (!cr6.lt) goto loc_82E74B68;
	// bl 0x82e74ad8
	sub_82E74AD8(ctx, base);
loc_82E74B68:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x82e74b7c
	if (!cr6.lt) goto loc_82E74B7C;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82E74B7C:
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e74b94
	if (!cr6.lt) goto loc_82E74B94;
	// subf r9,r10,r31
	ctx.r9.s64 = r31.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82e74b94
	if (cr6.gt) goto loc_82E74B94;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_82E74B94:
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
	// beq 0x82e74bf4
	if (cr0.eq) goto loc_82E74BF4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x831b1570
	sub_831B1570(ctx, base);
loc_82E74BF4:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// bgt cr6,0x82e74c78
	if (cr6.gt) goto loc_82E74C78;
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
	// beq 0x82e74c24
	if (cr0.eq) goto loc_82E74C24;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b1570
	sub_831B1570(ctx, base);
loc_82E74C24:
	// subf. r11,r29,r26
	r11.s64 = r26.s64 - r29.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e74c4c
	if (cr0.eq) goto loc_82E74C4C;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e74c4c
	if (cr0.eq) goto loc_82E74C4C;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E74C40:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e74c40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E74C40;
loc_82E74C4C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e74cec
	if (cr6.eq) goto loc_82E74CEC;
	// mr r11,r27
	r11.u64 = r27.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82e74cec
	if (cr0.eq) goto loc_82E74CEC;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_82E74C68:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82e74c68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E74C68;
	// b 0x82e74cec
	goto loc_82E74CEC;
loc_82E74C78:
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
	// beq 0x82e74c9c
	if (cr0.eq) goto loc_82E74C9C;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// bl 0x831b1570
	sub_831B1570(ctx, base);
loc_82E74C9C:
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
	// beq 0x82e74cc8
	if (cr0.eq) goto loc_82E74CC8;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b1570
	sub_831B1570(ctx, base);
loc_82E74CC8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82e74cec
	if (cr6.eq) goto loc_82E74CEC;
	// li r11,0
	r11.s64 = 0;
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x82e74cec
	if (cr0.eq) goto loc_82E74CEC;
	// mtctr r26
	ctr.u64 = r26.u64;
loc_82E74CE0:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bdnz 0x82e74ce0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E74CE0;
loc_82E74CEC:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e74d00
	if (cr6.eq) goto loc_82E74D00;
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82E74D00:
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

__attribute__((alias("__imp__sub_82E74D18"))) PPC_WEAK_FUNC(sub_82E74D18);
PPC_FUNC_IMPL(__imp__sub_82E74D18) {
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
	PPCRegister f31{};
	PPCVRegister v63{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// li r12,-96
	r12.s64 = -96;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lvx128 v127,r0,r6
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r24,16(r6)
	r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// lfs f31,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	f31.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r25,48
	r25.s64 = 48;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e74d60
	if (!cr6.eq) goto loc_82E74D60;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82e74d6c
	goto loc_82E74D6C;
loc_82E74D60:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r8,r11,r25
	ctx.r8.s32 = r11.s32 / r25.s32;
loc_82E74D6C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82e750e0
	if (cr6.eq) goto loc_82E750E0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e74d84
	if (!cr6.eq) goto loc_82E74D84;
	// li r11,0
	r11.s64 = 0;
	// b 0x82e74d90
	goto loc_82E74D90;
loc_82E74D84:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
loc_82E74D90:
	// lis r9,1365
	ctx.r9.s64 = 89456640;
	// ori r9,r9,21845
	ctx.r9.u64 = ctx.r9.u64 | 21845;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x82e74dac
	if (!cr6.lt) goto loc_82E74DAC;
	// bl 0x82e706c8
	sub_82E706C8(ctx, base);
	// b 0x82e750e0
	goto loc_82E750E0;
loc_82E74DAC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e74dbc
	if (!cr6.eq) goto loc_82E74DBC;
	// li r11,0
	r11.s64 = 0;
	// b 0x82e74dc8
	goto loc_82E74DC8;
loc_82E74DBC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
loc_82E74DC8:
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82e74f68
	if (!cr6.lt) goto loc_82E74F68;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82e74dec
	if (!cr6.lt) goto loc_82E74DEC;
	// li r11,0
	r11.s64 = 0;
	// b 0x82e74df0
	goto loc_82E74DF0;
loc_82E74DEC:
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_82E74DF0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e74e00
	if (!cr6.eq) goto loc_82E74E00;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82e74e0c
	goto loc_82E74E0C;
loc_82E74E00:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r9,r25
	ctx.r9.s32 = ctx.r9.s32 / r25.s32;
loc_82E74E0C:
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e74e38
	if (!cr6.lt) goto loc_82E74E38;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e74e28
	if (!cr6.eq) goto loc_82E74E28;
	// li r11,0
	r11.s64 = 0;
	// b 0x82e74e34
	goto loc_82E74E34;
loc_82E74E28:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
loc_82E74E34:
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
loc_82E74E38:
	// mulli r27,r11,48
	r27.s64 = r11.s64 * 48;
	// lis r28,-31946
	r28.s64 = -2093613056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x82e74e90
	goto loc_82E74E90;
loc_82E74E68:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e74e88
	if (cr6.eq) goto loc_82E74E88;
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
loc_82E74E88:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
loc_82E74E90:
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bne cr6,0x82e74e68
	if (!cr6.eq) goto loc_82E74E68;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82e74ec8
	if (cr6.eq) goto loc_82E74EC8;
loc_82E74EA8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e74ebc
	if (cr6.eq) goto loc_82E74EBC;
	// stfs f31,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stw r24,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r24.u32);
	// stvx128 v127,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82E74EBC:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bne 0x82e74ea8
	if (!cr0.eq) goto loc_82E74EA8;
loc_82E74EC8:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mulli r9,r26,48
	ctx.r9.s64 = r26.s64 * 48;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// beq cr6,0x82e74f18
	if (cr6.eq) goto loc_82E74F18;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
loc_82E74EE8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e74f08
	if (cr6.eq) goto loc_82E74F08;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
loc_82E74F08:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82e74ee8
	if (!cr6.eq) goto loc_82E74EE8;
loc_82E74F18:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82e74f2c
	if (!cr6.eq) goto loc_82E74F2C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82e74f38
	goto loc_82E74F38;
loc_82E74F2C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
loc_82E74F38:
	// add r31,r11,r26
	r31.u64 = r11.u64 + r26.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82e74f4c
	if (cr6.eq) goto loc_82E74F4C;
	// lwz r3,6512(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82E74F4C:
	// mulli r11,r31,48
	r11.s64 = r31.s64 * 48;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r10,r27,r29
	ctx.r10.u64 = r27.u64 + r29.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x82e750e0
	goto loc_82E750E0;
loc_82E74F68:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// divw r10,r10,r25
	ctx.r10.s32 = ctx.r10.s32 / r25.s32;
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bge cr6,0x82e7502c
	if (!cr6.lt) goto loc_82E7502C;
	// mulli r8,r26,48
	ctx.r8.s64 = r26.s64 * 48;
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + r31.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82e74fc0
	if (cr6.eq) goto loc_82E74FC0;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_82E74F90:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e74fb0
	if (cr6.eq) goto loc_82E74FB0;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// lfs f0,32(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
loc_82E74FB0:
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82e74f90
	if (!cr6.eq) goto loc_82E74F90;
loc_82E74FC0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// divw r10,r10,r25
	ctx.r10.s32 = ctx.r10.s32 / r25.s32;
	// subf. r10,r10,r26
	ctx.r10.s64 = r26.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e74ff4
	if (cr0.eq) goto loc_82E74FF4;
loc_82E74FD4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e74fe8
	if (cr6.eq) goto loc_82E74FE8;
	// stfs f31,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stw r24,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r24.u32);
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82E74FE8:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bne 0x82e74fd4
	if (!cr0.eq) goto loc_82E74FD4;
loc_82E74FF4:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r11,r31
	r11.u64 = r31.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x82e750e0
	if (cr6.eq) goto loc_82E750E0;
loc_82E75010:
	// stfs f31,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stw r24,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r24.u32);
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82e75010
	if (!cr6.eq) goto loc_82E75010;
	// b 0x82e750e0
	goto loc_82E750E0;
loc_82E7502C:
	// mulli r7,r26,48
	ctx.r7.s64 = r26.s64 * 48;
	// subf r9,r7,r11
	ctx.r9.s64 = r11.s64 - ctx.r7.s64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82e75074
	if (cr6.eq) goto loc_82E75074;
loc_82E75044:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e75064
	if (cr6.eq) goto loc_82E75064;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r6,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r6.u32);
	// lfs f0,32(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
loc_82E75064:
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x82e75044
	if (!cr6.eq) goto loc_82E75044;
loc_82E75074:
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x82e750b8
	if (cr6.eq) goto loc_82E750B8;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + r11.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_82E7508C:
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// li r9,-32
	ctx.r9.s64 = -32;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r9,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, ctx.r9.u32);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// bne cr6,0x82e7508c
	if (!cr6.eq) goto loc_82E7508C;
loc_82E750B8:
	// add r10,r7,r31
	ctx.r10.u64 = ctx.r7.u64 + r31.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e750e0
	if (cr6.eq) goto loc_82E750E0;
loc_82E750C8:
	// stfs f31,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stw r24,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r24.u32);
	// stvx128 v127,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e750c8
	if (!cr6.eq) goto loc_82E750C8;
loc_82E750E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-96
	r0.s64 = -96;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E750F8"))) PPC_WEAK_FUNC(sub_82E750F8);
PPC_FUNC_IMPL(__imp__sub_82E750F8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e75128
	if (cr6.gt) goto loc_82E75128;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e74b38
	sub_82E74B38(ctx, base);
loc_82E75128:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e75138
	if (!cr6.eq) goto loc_82E75138;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82E75138:
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e75174
	if (!cr6.eq) goto loc_82E75174;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,84
	ctx.r6.s64 = 84;
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
loc_82E75174:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e75190
	if (cr6.eq) goto loc_82E75190;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_82E75190:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E751A8"))) PPC_WEAK_FUNC(sub_82E751A8);
PPC_FUNC_IMPL(__imp__sub_82E751A8) {
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
	// beq cr6,0x82e751e0
	if (cr6.eq) goto loc_82E751E0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,48
	ctx.r10.s64 = 48;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw. r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82e751e8
	if (!cr0.eq) goto loc_82E751E8;
loc_82E751E0:
	// li r30,0
	r30.s64 = 0;
	// b 0x82e751f0
	goto loc_82E751F0;
loc_82E751E8:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// divw r30,r11,r10
	r30.s32 = r11.s32 / ctx.r10.s32;
loc_82E751F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e74d18
	sub_82E74D18(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r30,48
	r11.s64 = r30.s64 * 48;
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

__attribute__((alias("__imp__sub_82E75218"))) PPC_WEAK_FUNC(sub_82E75218);
PPC_FUNC_IMPL(__imp__sub_82E75218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCVRegister v63{};
	PPCRegister temp{};
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
	// li r9,48
	ctx.r9.s64 = 48;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e75240
	if (!cr6.eq) goto loc_82E75240;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82e7524c
	goto loc_82E7524C;
loc_82E75240:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
loc_82E7524C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e75298
	if (cr6.eq) goto loc_82E75298;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82e75298
	if (!cr6.lt) goto loc_82E75298;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e7528c
	if (cr6.eq) goto loc_82E7528C;
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lfs f0,32(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
loc_82E7528C:
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x82e752a8
	goto loc_82E752A8;
loc_82E75298:
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e751a8
	sub_82E751A8(ctx, base);
loc_82E752A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E752B8"))) PPC_WEAK_FUNC(sub_82E752B8);
PPC_FUNC_IMPL(__imp__sub_82E752B8) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// bl 0x82e74a90
	sub_82E74A90(ctx, base);
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

__attribute__((alias("__imp__sub_82E75328"))) PPC_WEAK_FUNC(sub_82E75328);
PPC_FUNC_IMPL(__imp__sub_82E75328) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// beq cr6,0x82e75398
	if (cr6.eq) goto loc_82E75398;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e75398
	if (cr6.eq) goto loc_82E75398;
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r25,r11,r10
	r25.s32 = r11.s32 / ctx.r10.s32;
	// b 0x82e7539c
	goto loc_82E7539C;
loc_82E75398:
	// mr r25,r30
	r25.u64 = r30.u64;
loc_82E7539C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82e753c0
	if (cr6.eq) goto loc_82E753C0;
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e753c0
	if (cr6.eq) goto loc_82E753C0;
	// lwz r9,32(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r29,r11,r10
	r29.s32 = r11.s32 / ctx.r10.s32;
	// b 0x82e753c4
	goto loc_82E753C4;
loc_82E753C0:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82E753C4:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq cr6,0x82e754f0
	if (cr6.eq) goto loc_82E754F0;
loc_82E753D4:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e75448
	if (cr6.eq) goto loc_82E75448;
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// mulli r10,r31,12
	ctx.r10.s64 = r31.s64 * 12;
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82E753F4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x82e75420
	if (!cr6.eq) goto loc_82E75420;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x82e75420
	if (!cr6.eq) goto loc_82E75420;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82e75434
	if (cr6.eq) goto loc_82E75434;
loc_82E75420:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, xer);
	// blt cr6,0x82e753f4
	if (cr6.lt) goto loc_82E753F4;
	// b 0x82e75448
	goto loc_82E75448;
loc_82E75434:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8265e630
	sub_8265E630(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82498048
	sub_82498048(ctx, base);
loc_82E75448:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// blt cr6,0x82e753d4
	if (cr6.lt) goto loc_82E753D4;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e754f0
	if (cr6.eq) goto loc_82E754F0;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82e754f0
	if (!cr6.gt) goto loc_82E754F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bne cr6,0x82e754c0
	if (!cr6.eq) goto loc_82E754C0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 12, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 16, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// b 0x82e754ec
	goto loc_82E754EC;
loc_82E754C0:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 4, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 8, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 12, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 16, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
loc_82E754EC:
	// stfs f0,20(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 20, temp.u32);
loc_82E754F0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E75508"))) PPC_WEAK_FUNC(sub_82E75508);
PPC_FUNC_IMPL(__imp__sub_82E75508) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b1438
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// lfs f28,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f28.f64 = double(temp.f32);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// stfs f28,0(r27)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// mr r14,r8
	r14.u64 = ctx.r8.u64;
	// stfs f28,4(r27)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r27.u32 + 4, temp.u32);
	// addi r18,r27,4
	r18.s64 = r27.s64 + 4;
	// stfs f28,8(r27)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r27.u32 + 8, temp.u32);
	// lwz r10,8(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 8);
	// lwz r11,12(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 12);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r17,r27,8
	r17.s64 = r27.s64 + 8;
	// addi r30,r16,12
	r30.s64 = r16.s64 + 12;
	// addi r29,r16,8
	r29.s64 = r16.s64 + 8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e75570
	if (cr6.gt) goto loc_82E75570;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E75570:
	// lwz r10,4(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r16,4
	r23.s64 = r16.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e812c0
	sub_82E812C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e75af4
	if (cr0.eq) goto loc_82E75AF4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e755a4
	if (cr6.gt) goto loc_82E755A4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E755A4:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e812e0
	sub_82E812E0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e75af4
	if (cr6.eq) goto loc_82E75AF4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e755d4
	if (cr6.gt) goto loc_82E755D4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E755D4:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e812e0
	sub_82E812E0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82e75600
	if (cr6.gt) goto loc_82E75600;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82E75600:
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r24,12
	ctx.r9.s64 = r24.s64 * 12;
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// lwz r7,4(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bgt cr6,0x82e7563c
	if (cr6.gt) goto loc_82E7563C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E7563C:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// bl 0x82e73910
	sub_82E73910(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f13,8(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f12,4(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r26,r22,8
	r26.s64 = r22.s64 + 8;
	// addi r25,r22,4
	r25.s64 = r22.s64 + 4;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stfs f28,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stfs f28,116(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e756b4
	if (cr6.gt) goto loc_82E756B4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E756B4:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// addi r11,r1,155
	r11.s64 = ctx.r1.s64 + 155;
	// lvx128 v61,r0,r3
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvsl v0,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// li r19,11
	r19.s64 = 11;
	// li r20,4
	r20.s64 = 4;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v60,r3,r19
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v61,v61,v60,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r21,8
	r21.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// vpermwi128 v60,v63,135
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x78));
	// vpermwi128 v62,v61,99
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0x9C));
	// vpermwi128 v0,v63,99
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x9C));
	// vpermwi128 v13,v61,135
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0x78));
	// vmulfp128 v12,v62,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v60.f32)));
	// vnmsubfp v0,v13,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v63,v0,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v62,v0,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v61,v0,2
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvewx128 v63,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r10,r20
	ea = (ctx.r10.u32 + r20.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r8,r21
	ea = (ctx.r8.u32 + r21.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// lfs f0,0(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r14.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f31.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f30,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f30.f64 = double(temp.f32);
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f29.f64 = double(temp.f32);
	// bne cr6,0x82e75788
	if (!cr6.eq) goto loc_82E75788;
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// fadds f13,f30,f12
	ctx.f13.f64 = double(float(f30.f64 + ctx.f12.f64));
	// fadds f0,f29,f0
	f0.f64 = double(float(f29.f64 + f0.f64));
	// b 0x82e75798
	goto loc_82E75798;
loc_82E75788:
	// fsubs f13,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// fsubs f13,f30,f12
	ctx.f13.f64 = double(float(f30.f64 - ctx.f12.f64));
	// fsubs f0,f29,f0
	f0.f64 = double(float(f29.f64 - f0.f64));
loc_82E75798:
	// stfs f13,0(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r18.u32 + 0, temp.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stfs f0,0(r17)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r17.u32 + 0, temp.u32);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r28,r31,1
	r28.s64 = r31.s64 + 1;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// b 0x82e757f8
	goto loc_82E757F8;
loc_82E757C0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e757d8
	if (cr6.gt) goto loc_82E757D8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E757D8:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e812b8
	sub_82E812B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e75804
	if (cr6.eq) goto loc_82E75804;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82E757F8:
	// cmpw cr6,r28,r15
	cr6.compare<int32_t>(r28.s32, r15.s32, xer);
	// blt cr6,0x82e757c0
	if (cr6.lt) goto loc_82E757C0;
	// b 0x82e75844
	goto loc_82E75844;
loc_82E75804:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e7581c
	if (cr6.gt) goto loc_82E7581C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E7581C:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e73910
	sub_82E73910(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82E75844:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r22)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r22.u32 + 0, temp.u32);
	// lfs f0,0(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + 0, temp.u32);
	// lfs f0,0(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e75874
	if (cr6.gt) goto loc_82E75874;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E75874:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// addi r11,r3,76
	r11.s64 = ctx.r3.s64 + 76;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82e73990
	sub_82E73990(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r16,20
	ctx.r3.s64 = r16.s64 + 20;
	// bl 0x82e75218
	sub_82E75218(ctx, base);
	// lfs f11,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r22.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// lfs f10,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f11,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x82e75918
	if (cr6.eq) goto loc_82E75918;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82E75918:
	// addi r9,r1,139
	ctx.r9.s64 = ctx.r1.s64 + 139;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,123
	ctx.r7.s64 = ctx.r1.s64 + 123;
	// stfs f28,84(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f28,88(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lvx128 v61,r0,r7
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v60,r0,r6
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v62,v60,v61,v7
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// vmsum3fp128 v63,v62,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bgt cr6,0x82e75984
	if (cr6.gt) goto loc_82E75984;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E75984:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// addi r11,r1,139
	r11.s64 = ctx.r1.s64 + 139;
	// lvx128 v60,r3,r19
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v61,r0,r3
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvsl v0,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v61,v61,v60,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vpermwi128 v13,v61,135
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0x78));
	// vperm128 v63,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v62,v61,99
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0x9C));
	// vpermwi128 v60,v63,135
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x78));
	// vpermwi128 v0,v63,99
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x9C));
	// vmulfp128 v12,v62,v60
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v60.f32)));
	// vnmsubfp v0,v13,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vspltw128 v63,v0,0
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v62,v0,1
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v61,v0,2
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r20
	ea = (r11.u32 + r20.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r10,r21
	ea = (ctx.r10.u32 + r21.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// lfs f0,0(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r14.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bne cr6,0x82e75a40
	if (!cr6.eq) goto loc_82E75A40;
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// fadds f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 + f30.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// b 0x82e75a50
	goto loc_82E75A50;
loc_82E75A40:
	// fsubs f13,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// fsubs f13,f30,f12
	ctx.f13.f64 = double(float(f30.f64 - ctx.f12.f64));
	// fsubs f0,f29,f0
	f0.f64 = double(float(f29.f64 - f0.f64));
loc_82E75A50:
	// stfs f0,0(r17)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r17.u32 + 0, temp.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f13,0(r18)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r18.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// blt cr6,0x82e75b34
	if (cr6.lt) goto loc_82E75B34;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f13,0(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,0(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + f0.f64));
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f11,0(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + f0.f64));
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 - f30.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f0,f29
	f0.f64 = double(float(f0.f64 - f29.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// lfs f0,0(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r14.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// fadds f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 + f30.f64));
	// stfs f13,0(r18)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r18.u32 + 0, temp.u32);
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// b 0x82e75b30
	goto loc_82E75B30;
loc_82E75AF4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e75b0c
	if (cr6.gt) goto loc_82E75B0C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E75B0C:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x82e73910
	sub_82E73910(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r18)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r18.u32 + 0, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
loc_82E75B30:
	// stfs f0,0(r17)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r17.u32 + 0, temp.u32);
loc_82E75B34:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x831b1484
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82E75B48"))) PPC_WEAK_FUNC(sub_82E75B48);
PPC_FUNC_IMPL(__imp__sub_82E75B48) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x82e77670
	sub_82E77670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r26,r31,20
	r26.s64 = r31.s64 + 20;
	// bl 0x82e73990
	sub_82E73990(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e75218
	sub_82E75218(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82e75ce0
	if (!cr6.gt) goto loc_82E75CE0;
loc_82E75BCC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e75be4
	if (cr6.gt) goto loc_82E75BE4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82E75BE4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	r29.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e812b8
	sub_82E812B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82e75cd4
	if (!cr6.eq) goto loc_82E75CD4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e74218
	sub_82E74218(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e75c30
	if (!cr6.eq) goto loc_82E75C30;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e738c0
	sub_82E738C0(ctx, base);
	// b 0x82e75c78
	goto loc_82E75C78;
loc_82E75C30:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82e75c54
	if (!cr6.eq) goto loc_82E75C54;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e73df8
	sub_82E73DF8(ctx, base);
	// b 0x82e75c78
	goto loc_82E75C78;
loc_82E75C54:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82e75c90
	if (!cr6.eq) goto loc_82E75C90;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82e75508
	sub_82E75508(ctx, base);
loc_82E75C78:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82E75C90:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// addi r11,r3,76
	r11.s64 = ctx.r3.s64 + 76;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82e73990
	sub_82E73990(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e75218
	sub_82E75218(ctx, base);
loc_82E75CD4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x82e75bcc
	if (cr6.lt) goto loc_82E75BCC;
loc_82E75CE0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E75CF0"))) PPC_WEAK_FUNC(sub_82E75CF0);
PPC_FUNC_IMPL(__imp__sub_82E75CF0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
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
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e75da4
	if (cr6.eq) goto loc_82E75DA4;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// addi r24,r3,36
	r24.s64 = ctx.r3.s64 + 36;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
loc_82E75D40:
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fdivs f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 / f31.f64));
	// bl 0x82e77938
	sub_82E77938(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e77688
	sub_82E77688(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x827f8b28
	sub_827F8B28(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x82e75d40
	if (cr6.lt) goto loc_82E75D40;
loc_82E75DA4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E75DB0"))) PPC_WEAK_FUNC(sub_82E75DB0);
PPC_FUNC_IMPL(__imp__sub_82E75DB0) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// addic. r25,r24,-1
	xer.ca = r24.u32 > 0;
	r25.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x82e75ebc
	if (cr0.eq) goto loc_82E75EBC;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// li r30,0
	r30.s64 = 0;
	// vspltisw128 v126,0
	simde_mm_store_si128((simde__m128i*)v126.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r29,r25
	r29.u64 = r25.u64;
	// vcsxwfp128 v127,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
loc_82E75DFC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r1,91
	ctx.r8.s64 = ctx.r1.s64 + 91;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vor128 v13,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lvsl v0,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
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
	// stvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,320(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// bne 0x82e75dfc
	if (!cr0.eq) goto loc_82E75DFC;
loc_82E75EBC:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82e760a0
	if (cr6.eq) goto loc_82E760A0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r26,36
	r27.s64 = r26.s64 + 36;
	// lfs f31,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f31.f64 = double(temp.f32);
loc_82E75ED4:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bgt cr6,0x82e75f00
	if (cr6.gt) goto loc_82E75F00;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r29,48
	r11.s64 = r29.s64 * 48;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82e75f04
	goto loc_82E75F04;
loc_82E75F00:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_82E75F04:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82e75f14
	if (!cr6.eq) goto loc_82E75F14;
	// li r28,1
	r28.s64 = 1;
	// b 0x82e75f20
	goto loc_82E75F20;
loc_82E75F14:
	// cmplwi cr6,r28,10
	cr6.compare<uint32_t>(r28.u32, 10, xer);
	// ble cr6,0x82e75f20
	if (!cr6.gt) goto loc_82E75F20;
	// li r28,10
	r28.s64 = 10;
loc_82E75F20:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bne cr6,0x82e75f80
	if (!cr6.eq) goto loc_82E75F80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x827f8b28
	sub_827F8B28(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,96
	ctx.r4.s64 = r11.s64 + 96;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// b 0x82e76084
	goto loc_82E76084;
loc_82E75F80:
	// addi r11,r24,-2
	r11.s64 = r24.s64 + -2;
	// mulli r30,r29,48
	r30.s64 = r29.s64 * 48;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bne cr6,0x82e76020
	if (!cr6.eq) goto loc_82E76020;
	// bl 0x827f8b28
	sub_827F8B28(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = r11.s64 + -48;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e75cf0
	sub_82E75CF0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x827f8b28
	sub_827F8B28(ctx, base);
	// b 0x82e76094
	goto loc_82E76094;
loc_82E76020:
	// bl 0x827f8b28
	sub_827F8B28(ctx, base);
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mulli r11,r11,48
	r11.s64 = r11.s64 * 48;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r4,r11,-48
	ctx.r4.s64 = r11.s64 + -48;
	// bl 0x82e776b0
	sub_82E776B0(ctx, base);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
loc_82E76084:
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e75cf0
	sub_82E75CF0(ctx, base);
loc_82E76094:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// blt cr6,0x82e75ed4
	if (cr6.lt) goto loc_82E75ED4;
loc_82E760A0:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
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

__attribute__((alias("__imp__sub_82E760C0"))) PPC_WEAK_FUNC(sub_82E760C0);
PPC_FUNC_IMPL(__imp__sub_82E760C0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e76284
	if (cr6.eq) goto loc_82E76284;
	// bl 0x82633f20
	sub_82633F20(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82E760F0:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e76104
	if (!cr0.eq) goto loc_82E76104;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e76118
	if (cr0.eq) goto loc_82E76118;
loc_82E76104:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e76114
	if (cr0.eq) goto loc_82E76114;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82E76114:
	// li r29,1
	r29.s64 = 1;
loc_82E76118:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e76138
	if (cr0.eq) goto loc_82E76138;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e812e8
	sub_82E812E8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e750f8
	sub_82E750F8(ctx, base);
loc_82E76138:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e76148
	if (cr0.eq) goto loc_82E76148;
	// li r29,0
	r29.s64 = 0;
loc_82E76148:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,5000
	cr6.compare<uint32_t>(r11.u32, 5000, xer);
	// bgt cr6,0x82e761d0
	if (cr6.gt) goto loc_82E761D0;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x82e76d58
	sub_82E76D58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82e760f0
	if (!cr0.eq) goto loc_82E760F0;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bge cr6,0x82e761dc
	if (!cr6.lt) goto loc_82E761DC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e76330
	sub_82E76330(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82e73990
	sub_82E73990(ctx, base);
	// addi r31,r30,20
	r31.s64 = r30.s64 + 20;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e75218
	sub_82E75218(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e76338
	sub_82E76338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82e73990
	sub_82E73990(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e75218
	sub_82E75218(ctx, base);
	// b 0x82e76284
	goto loc_82E76284;
loc_82E761D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82633f20
	sub_82633F20(ctx, base);
	// b 0x82e76284
	goto loc_82E76284;
loc_82E761DC:
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x82e7623c
	if (cr0.eq) goto loc_82E7623C;
loc_82E761E8:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + r31.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82e76204
	if (cr6.gt) goto loc_82E76204;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82E76204:
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e76214
	if (cr6.gt) goto loc_82E76214;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
loc_82E76214:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82e75328
	sub_82E75328(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82e761e8
	if (cr6.lt) goto loc_82E761E8;
loc_82E7623C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e749f0
	sub_82E749F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e76330
	sub_82E76330(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82e75b48
	sub_82E75B48(ctx, base);
loc_82E76284:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E76290"))) PPC_WEAK_FUNC(sub_82E76290);
PPC_FUNC_IMPL(__imp__sub_82E76290) {
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
	// addi r29,r31,36
	r29.s64 = r31.s64 + 36;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f8428
	sub_827F8428(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e762c8
	if (!cr6.eq) goto loc_82E762C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e762d8
	goto loc_82E762D8;
loc_82E762C8:
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r9,48
	ctx.r9.s64 = 48;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r5,r11,r9
	ctx.r5.s32 = r11.s32 / ctx.r9.s32;
loc_82E762D8:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82e762f8
	if (cr6.lt) goto loc_82E762F8;
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// ble cr6,0x82e762f8
	if (!cr6.gt) goto loc_82E762F8;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e75db0
	sub_82E75DB0(ctx, base);
	// b 0x82e7631c
	goto loc_82E7631C;
loc_82E762F8:
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x82e76310
	goto loc_82E76310;
loc_82E76300:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827f8b28
	sub_827F8B28(ctx, base);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
loc_82E76310:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82e76300
	if (!cr6.eq) goto loc_82E76300;
loc_82E7631C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E76328"))) PPC_WEAK_FUNC(sub_82E76328);
PPC_FUNC_IMPL(__imp__sub_82E76328) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76330"))) PPC_WEAK_FUNC(sub_82E76330);
PPC_FUNC_IMPL(__imp__sub_82E76330) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76338"))) PPC_WEAK_FUNC(sub_82E76338);
PPC_FUNC_IMPL(__imp__sub_82E76338) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76340"))) PPC_WEAK_FUNC(sub_82E76340);
PPC_FUNC_IMPL(__imp__sub_82E76340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stb r10,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, ctx.r10.u8);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r8.u32);
	// lfs f12,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r11.u32);
	// lfs f0,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76380"))) PPC_WEAK_FUNC(sub_82E76380);
PPC_FUNC_IMPL(__imp__sub_82E76380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E7638C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82e763dc
	if (cr6.eq) goto loc_82E763DC;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r7,20
	ctx.r7.s64 = 20;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r9,r9,r7
	ctx.r9.s32 = ctx.r9.s32 / ctx.r7.s32;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e763dc
	if (!cr6.lt) goto loc_82E763DC;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x82e763cc
	if (cr6.eq) goto loc_82E763CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// b 0x82e7638c
	goto loc_82E7638C;
loc_82E763CC:
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
loc_82E763DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E763E8"))) PPC_WEAK_FUNC(sub_82E763E8);
PPC_FUNC_IMPL(__imp__sub_82E763E8) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r6.u32);
	// bl 0x82e76380
	sub_82E76380(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e7640c
	if (!cr0.eq) goto loc_82E7640C;
	// addi r11,r6,20
	r11.s64 = ctx.r6.s64 + 20;
loc_82E7640C:
	// stw r11,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76420"))) PPC_WEAK_FUNC(sub_82E76420);
PPC_FUNC_IMPL(__imp__sub_82E76420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// stw r9,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r8.u32);
	// lfs f12,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r11.u32);
	// lfs f0,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76460"))) PPC_WEAK_FUNC(sub_82E76460);
PPC_FUNC_IMPL(__imp__sub_82E76460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x82e76498
	goto loc_82E76498;
loc_82E76470:
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82e76494
	if (cr0.eq) goto loc_82E76494;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82e764b4
	if (cr6.eq) goto loc_82E764B4;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82e76494
	if (!cr6.eq) goto loc_82E76494;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82E76494:
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
loc_82E76498:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e76470
	if (!cr6.eq) goto loc_82E76470;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82e764b4
	if (!cr6.eq) goto loc_82E764B4;
	// li r11,0
	r11.s64 = 0;
loc_82E764B4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E764C0"))) PPC_WEAK_FUNC(sub_82E764C0);
PPC_FUNC_IMPL(__imp__sub_82E764C0) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r4,60(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// stw r4,56(r7)
	PPC_STORE_U32(ctx.r7.u32 + 56, ctx.r4.u32);
	// bl 0x82e76460
	sub_82E76460(ctx, base);
	// stw r3,60(r7)
	PPC_STORE_U32(ctx.r7.u32 + 60, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E764F0"))) PPC_WEAK_FUNC(sub_82E764F0);
PPC_FUNC_IMPL(__imp__sub_82E764F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, r11.u8);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76540"))) PPC_WEAK_FUNC(sub_82E76540);
PPC_FUNC_IMPL(__imp__sub_82E76540) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// add r29,r9,r11
	r29.u64 = ctx.r9.u64 + r11.u64;
	// b 0x82e7658c
	goto loc_82E7658C;
loc_82E76570:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82E7658C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82e76570
	if (!cr6.eq) goto loc_82E76570;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E765A0"))) PPC_WEAK_FUNC(sub_82E765A0);
PPC_FUNC_IMPL(__imp__sub_82E765A0) {
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
	// bne cr6,0x82e765f0
	if (!cr6.eq) goto loc_82E765F0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e76620
	if (cr6.eq) goto loc_82E76620;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82e76620
	goto loc_82E76620;
loc_82E765F0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82e76620
	if (cr6.eq) goto loc_82E76620;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-16168
	ctx.r4.s64 = r11.s64 + -16168;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e76618
	if (cr0.eq) goto loc_82E76618;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82e76620
	goto loc_82E76620;
loc_82E76618:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82E76620:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76638"))) PPC_WEAK_FUNC(sub_82E76638);
PPC_FUNC_IMPL(__imp__sub_82E76638) {
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
	// addi r11,r11,-7084
	r11.s64 = r11.s64 + -7084;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e76664
	if (cr0.eq) goto loc_82E76664;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82E76664:
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

__attribute__((alias("__imp__sub_82E76680"))) PPC_WEAK_FUNC(sub_82E76680);
PPC_FUNC_IMPL(__imp__sub_82E76680) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x8246e640
	sub_8246E640(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e766e0
	if (!cr0.eq) goto loc_82E766E0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e766d8
	if (cr6.eq) goto loc_82E766D8;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82E766D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e766e4
	goto loc_82E766E4;
loc_82E766E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E766E4:
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

__attribute__((alias("__imp__sub_82E766F8"))) PPC_WEAK_FUNC(sub_82E766F8);
PPC_FUNC_IMPL(__imp__sub_82E766F8) {
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
	// beq cr6,0x82e76724
	if (cr6.eq) goto loc_82E76724;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82e765a0
	sub_82E765A0(ctx, base);
	// b 0x82e76730
	goto loc_82E76730;
loc_82E76724:
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r11,r11,-16168
	r11.s64 = r11.s64 + -16168;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_82E76730:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76740"))) PPC_WEAK_FUNC(sub_82E76740);
PPC_FUNC_IMPL(__imp__sub_82E76740) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r25,r31,4
	r25.s64 = r31.s64 + 4;
	// li r28,0
	r28.s64 = 0;
	// lfs f31,-24788(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24788);
	f31.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
loc_82E7676C:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e768a0
	if (cr6.eq) goto loc_82E768A0;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82e768a0
	if (!cr6.lt) goto loc_82E768A0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e76894
	if (cr6.eq) goto loc_82E76894;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e76894
	if (cr0.eq) goto loc_82E76894;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e767c8
	if (cr6.eq) goto loc_82E767C8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
loc_82E767C8:
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stw r8,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r8.u32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
loc_82E767F4:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r8,-4
	ctx.r8.s64 = -4;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// cmpwi cr6,r9,6
	cr6.compare<int32_t>(ctx.r9.s32, 6, xer);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.f13.u32);
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(r11.u32, ctx.f13.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// blt cr6,0x82e767f4
	if (cr6.lt) goto loc_82E767F4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e6e318
	sub_82E6E318(ctx, base);
	// li r30,5
	r30.s64 = 5;
	// addi r29,r31,116
	r29.s64 = r31.s64 + 116;
loc_82E7685C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82e01918
	sub_82E01918(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// bge 0x82e7685c
	if (!cr0.lt) goto loc_82E7685C;
	// addi r29,r31,76
	r29.s64 = r31.s64 + 76;
	// li r30,6
	r30.s64 = 6;
loc_82E76878:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82e01968
	sub_82E01968(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x82e76878
	if (!cr0.eq) goto loc_82E76878;
	// bl 0x82e6e368
	sub_82E6E368(ctx, base);
loc_82E76894:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// b 0x82e7676c
	goto loc_82E7676C;
loc_82E768A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E768B0"))) PPC_WEAK_FUNC(sub_82E768B0);
PPC_FUNC_IMPL(__imp__sub_82E768B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E768D0"))) PPC_WEAK_FUNC(sub_82E768D0);
PPC_FUNC_IMPL(__imp__sub_82E768D0) {
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
	// addi r31,r11,29064
	r31.s64 = r11.s64 + 29064;
	// lwz r11,29072(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29072);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82e76918
	if (!cr0.eq) goto loc_82E76918;
	// lis r9,-32025
	ctx.r9.s64 = -2098790400;
	// lis r8,-32025
	ctx.r8.s64 = -2098790400;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,26800
	ctx.r9.s64 = ctx.r9.s64 + 26800;
	// addi r8,r8,26360
	ctx.r8.s64 = ctx.r8.s64 + 26360;
	// stw r11,29072(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29072, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_82E76918:
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
	// bl 0x82e76680
	sub_82E76680(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e76944
	if (cr0.eq) goto loc_82E76944;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x82e76948
	goto loc_82E76948;
loc_82E76944:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_82E76948:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E76950"))) PPC_WEAK_FUNC(sub_82E76950);
PPC_FUNC_IMPL(__imp__sub_82E76950) {
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
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82e76998
	if (cr6.eq) goto loc_82E76998;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x82e76980
	goto loc_82E76980;
loc_82E76974:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e02fe8
	sub_82E02FE8(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
loc_82E76980:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82e76974
	if (!cr6.eq) goto loc_82E76974;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82E76998:
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
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E769B0"))) PPC_WEAK_FUNC(sub_82E769B0);
PPC_FUNC_IMPL(__imp__sub_82E769B0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,-7076
	r11.s64 = r11.s64 + -7076;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e76950
	sub_82E76950(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-7084
	r11.s64 = r11.s64 + -7084;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e769fc
	if (cr0.eq) goto loc_82E769FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82E769FC:
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

__attribute__((alias("__imp__sub_82E76A18"))) PPC_WEAK_FUNC(sub_82E76A18);
PPC_FUNC_IMPL(__imp__sub_82E76A18) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-6948
	r11.s64 = r11.s64 + -6948;
	// addi r10,r31,76
	ctx.r10.s64 = r31.s64 + 76;
	// mr r26,r30
	r26.u64 = r30.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// li r9,5
	ctx.r9.s64 = 5;
loc_82E76A60:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bge 0x82e76a60
	if (!cr0.lt) goto loc_82E76A60;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r28,r30
	r28.u64 = r30.u64;
	// addi r24,r11,-7032
	r24.s64 = r11.s64 + -7032;
	// addi r23,r10,-7060
	r23.s64 = ctx.r10.s64 + -7060;
loc_82E76A90:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82e76b2c
	if (cr0.eq) goto loc_82E76B2C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r9,-32025
	ctx.r9.s64 = -2098790400;
	// addi r10,r27,-56
	ctx.r10.s64 = r27.s64 + -56;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r11,r31,68
	r11.s64 = r31.s64 + 68;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// addi r9,r9,25920
	ctx.r9.s64 = ctx.r9.s64 + 25920;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// ori r26,r26,1
	r26.u64 = r26.u64 | 1;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x82e768d0
	sub_82E768D0(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e01c20
	sub_82E01C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82e76b30
	goto loc_82E76B30;
loc_82E76B2C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82E76B30:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822ed3f0
	sub_822ED3F0(ctx, base);
	// clrlwi. r11,r26,31
	r11.u64 = r26.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e76b4c
	if (cr0.eq) goto loc_82E76B4C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r26,r26,0,0,30
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82E76B4C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82e01980
	sub_82E01980(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpwi cr6,r28,6
	cr6.compare<int32_t>(r28.s32, 6, xer);
	// blt cr6,0x82e76a90
	if (cr6.lt) goto loc_82E76A90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82E76B78"))) PPC_WEAK_FUNC(sub_82E76B78);
PPC_FUNC_IMPL(__imp__sub_82E76B78) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,5
	r29.s64 = 5;
	// addi r11,r30,124
	r11.s64 = r30.s64 + 124;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
loc_82E76B94:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e76ba8
	if (cr6.eq) goto loc_82E76BA8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82E76BA8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x82e76b94
	if (!cr0.lt) goto loc_82E76B94;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r11,r11,-7076
	r11.s64 = r11.s64 + -7076;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82e76950
	sub_82E76950(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-7084
	r11.s64 = r11.s64 + -7084;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E76BD8"))) PPC_WEAK_FUNC(sub_82E76BD8);
PPC_FUNC_IMPL(__imp__sub_82E76BD8) {
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
	// bl 0x82e76b78
	sub_82E76B78(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e76c08
	if (cr0.eq) goto loc_82E76C08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82E76C08:
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

__attribute__((alias("__imp__sub_82E76C28"))) PPC_WEAK_FUNC(sub_82E76C28);
PPC_FUNC_IMPL(__imp__sub_82E76C28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x82e6e3d0
	sub_82E6E3D0(ctx, base);
	// and r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 & r31.u64;
	// rlwinm r10,r9,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// rlwinm r11,r9,24,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e76c7c
	if (!cr6.eq) goto loc_82E76C7C;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-24780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82e76c94
	goto loc_82E76C94;
loc_82E76C7C:
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmadds f1,f0,f31,f30
	ctx.f1.f64 = double(float(f0.f64 * f31.f64 + f30.f64));
loc_82E76C94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76CB0"))) PPC_WEAK_FUNC(sub_82E76CB0);
PPC_FUNC_IMPL(__imp__sub_82E76CB0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76CD0"))) PPC_WEAK_FUNC(sub_82E76CD0);
PPC_FUNC_IMPL(__imp__sub_82E76CD0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76CF0"))) PPC_WEAK_FUNC(sub_82E76CF0);
PPC_FUNC_IMPL(__imp__sub_82E76CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// lfs f13,-24780(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24780);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, r11.u8);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76D20"))) PPC_WEAK_FUNC(sub_82E76D20);
PPC_FUNC_IMPL(__imp__sub_82E76D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lfs f13,-24780(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24780);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, r11.u8);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76D50"))) PPC_WEAK_FUNC(sub_82E76D50);
PPC_FUNC_IMPL(__imp__sub_82E76D50) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76D58"))) PPC_WEAK_FUNC(sub_82E76D58);
PPC_FUNC_IMPL(__imp__sub_82E76D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76D60"))) PPC_WEAK_FUNC(sub_82E76D60);
PPC_FUNC_IMPL(__imp__sub_82E76D60) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76D68"))) PPC_WEAK_FUNC(sub_82E76D68);
PPC_FUNC_IMPL(__imp__sub_82E76D68) {
	PPC_FUNC_PROLOGUE();
	// stb r4,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76D70"))) PPC_WEAK_FUNC(sub_82E76D70);
PPC_FUNC_IMPL(__imp__sub_82E76D70) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,17(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76D78"))) PPC_WEAK_FUNC(sub_82E76D78);
PPC_FUNC_IMPL(__imp__sub_82E76D78) {
	PPC_FUNC_PROLOGUE();
	// stb r4,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76D80"))) PPC_WEAK_FUNC(sub_82E76D80);
PPC_FUNC_IMPL(__imp__sub_82E76D80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// lbz r11,72(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e76dc4
	if (!cr0.eq) goto loc_82E76DC4;
	// lbz r11,73(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 73);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e76df4
	if (cr0.eq) goto loc_82E76DF4;
loc_82E76DC4:
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82e76e00
	if (!cr6.gt) goto loc_82E76E00;
	// lbz r11,73(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 73);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e76de8
	if (!cr0.eq) goto loc_82E76DE8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82e6f6d0
	sub_82E6F6D0(ctx, base);
loc_82E76DE8:
	// li r11,0
	r11.s64 = 0;
	// stb r11,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r11.u8);
	// stb r11,73(r31)
	PPC_STORE_U8(r31.u32 + 73, r11.u8);
loc_82E76DF4:
	// stfs f30,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f29,64(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
loc_82E76E00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E76E20"))) PPC_WEAK_FUNC(sub_82E76E20);
PPC_FUNC_IMPL(__imp__sub_82E76E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e6f5d0
	sub_82E6F5D0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bne 0x82e76e5c
	if (!cr0.eq) goto loc_82E76E5C;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
loc_82E76E5C:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82e76e78
	if (!cr6.eq) goto loc_82E76E78;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(f0.f64)));
loc_82E76E78:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82e76e94
	if (!cr6.eq) goto loc_82E76E94;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
loc_82E76E94:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82e76ef0
	if (!cr6.eq) goto loc_82E76EF0;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82e76ebc
	if (!cr6.lt) goto loc_82E76EBC;
	// fabs f12,f0
	ctx.f12.u64 = f0.u64 & ~0x8000000000000000;
	// b 0x82e76ec0
	goto loc_82E76EC0;
loc_82E76EBC:
	// fabs f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
loc_82E76EC0:
	// fabs f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = f0.u64 & ~0x8000000000000000;
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f10
	cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x82e76ed8
	if (!cr6.gt) goto loc_82E76ED8;
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// b 0x82e76edc
	goto loc_82E76EDC;
loc_82E76ED8:
	// fabs f0,f13
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
loc_82E76EDC:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fsubs f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lfd f0,-18480(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -18480);
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fmadds f1,f0,f12,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f13.f64));
loc_82E76EF0:
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

__attribute__((alias("__imp__sub_82E76F08"))) PPC_WEAK_FUNC(sub_82E76F08);
PPC_FUNC_IMPL(__imp__sub_82E76F08) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e6f5d8
	sub_82E6F5D8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-21804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21804);
	f0.f64 = double(temp.f32);
	// fmsubs f13,f11,f13,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmadds f1,f13,f0,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64 + f31.f64));
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

__attribute__((alias("__imp__sub_82E76F70"))) PPC_WEAK_FUNC(sub_82E76F70);
PPC_FUNC_IMPL(__imp__sub_82E76F70) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f9,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// lfs f12,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// beq cr6,0x82e76fac
	if (cr6.eq) goto loc_82E76FAC;
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	f0.f64 = double(float(f0.f64 - ctx.f10.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 / ctx.f11.f64));
	// b 0x82e76fb0
	goto loc_82E76FB0;
loc_82E76FAC:
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
loc_82E76FB0:
	// lfs f11,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	cr6.compare(ctx.f11.f64, f0.f64);
	// beq cr6,0x82e76fd4
	if (cr6.eq) goto loc_82E76FD4;
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f7,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fdivs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
loc_82E76FD4:
	// fcmpu cr6,f10,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// fcmpu cr6,f13,f9
	cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// beq cr6,0x82e77018
	if (cr6.eq) goto loc_82E77018;
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// beq cr6,0x82e77018
	if (cr6.eq) goto loc_82E77018;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmsubs f8,f13,f10,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f11.f64));
	// lfs f7,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f0,f0,f12,f8
	f0.f64 = double(float(-(f0.f64 * ctx.f12.f64 - ctx.f8.f64)));
	// fadds f0,f0,f7
	f0.f64 = double(float(f0.f64 + ctx.f7.f64));
	// fdivs f0,f0,f9
	f0.f64 = double(float(f0.f64 / ctx.f9.f64));
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fmadds f0,f0,f10,f11
	f0.f64 = double(float(f0.f64 * ctx.f10.f64 + ctx.f11.f64));
	// b 0x82e7705c
	goto loc_82E7705C;
loc_82E77018:
	// fcmpu cr6,f13,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bne cr6,0x82e7703c
	if (!cr6.eq) goto loc_82E7703C;
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// beq cr6,0x82e7703c
	if (cr6.eq) goto loc_82E7703C;
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f0,f0,f12,f11
	f0.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// b 0x82e7705c
	goto loc_82E7705C;
loc_82E7703C:
	// fcmpu cr6,f13,f9
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// bnelr cr6
	if (!cr6.eq) return;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f0,f13,f10,f12
	f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f12.f64));
loc_82E7705C:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77068"))) PPC_WEAK_FUNC(sub_82E77068);
PPC_FUNC_IMPL(__imp__sub_82E77068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,11
	ctx.r10.s64 = 11;
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lvsl v0,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r11,r11,-15688
	r11.s64 = r11.s64 + -15688;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r3,r10
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// vperm128 v61,v62,v61,v0
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r9
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v0,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v63,v63,v62,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lfs f2,2244(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	ctx.f2.f64 = double(temp.f32);
	// vmsum3fp128 v63,v61,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v61.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82e77648
	sub_82E77648(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E770D0"))) PPC_WEAK_FUNC(sub_82E770D0);
PPC_FUNC_IMPL(__imp__sub_82E770D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82e6e3f0
	sub_82E6E3F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e6e3f0
	sub_82E6E3F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82e76e20
	sub_82E76E20(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e76f08
	sub_82E76F08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E77150"))) PPC_WEAK_FUNC(sub_82E77150);
PPC_FUNC_IMPL(__imp__sub_82E77150) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e77190
	if (cr6.eq) goto loc_82E77190;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r9,20
	ctx.r9.s64 = 20;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
loc_82E77190:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e7722c
	if (cr6.eq) goto loc_82E7722C;
	// li r29,0
	r29.s64 = 0;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82E771A0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82e76d58
	sub_82E76D58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82e77220
	if (cr0.eq) goto loc_82E77220;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x82e6e400
	sub_82E6E400(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82e76c28
	sub_82E76C28(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e770d0
	sub_82E770D0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f30,f31
	f0.f64 = double(float(f30.f64 + f31.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82e6f5c8
	sub_82E6F5C8(ctx, base);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfsx f3,r11,r10
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82e76d80
	sub_82E76D80(ctx, base);
loc_82E77220:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// bne 0x82e771a0
	if (!cr0.eq) goto loc_82E771A0;
loc_82E7722C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E77240"))) PPC_WEAK_FUNC(sub_82E77240);
PPC_FUNC_IMPL(__imp__sub_82E77240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e6eea8
	sub_82E6EEA8(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e77334
	if (cr6.eq) goto loc_82E77334;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82e77334
	if (!cr6.eq) goto loc_82E77334;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// addi r8,r1,91
	ctx.r8.s64 = ctx.r1.s64 + 91;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vcsxwfp128 v13,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// stfs f13,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// lvsl v0,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v61,v63,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// lfs f0,-31000(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
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
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82e77334
	if (!cr6.lt) goto loc_82E77334;
	// li r31,0
	r31.s64 = 0;
loc_82E77334:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82E77358"))) PPC_WEAK_FUNC(sub_82E77358);
PPC_FUNC_IMPL(__imp__sub_82E77358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82e6eea8
	sub_82E6EEA8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f29,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f29.f64 = double(temp.f32);
	// beq cr6,0x82e77470
	if (cr6.eq) goto loc_82E77470;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82e77470
	if (!cr6.eq) goto loc_82E77470;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,12
	r29.s64 = r11.s64 + 12;
	// mr r27,r11
	r27.u64 = r11.u64;
	// bl 0x82e6e3f0
	sub_82E6E3F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e6e3f0
	sub_82E6E3F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82e76f70
	sub_82E76F70(ctx, base);
	// lfs f30,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f31,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f29
	cr6.compare(f30.f64, f29.f64);
	// bne cr6,0x82e77400
	if (!cr6.eq) goto loc_82E77400;
	// fcmpu cr6,f31,f29
	cr6.compare(f31.f64, f29.f64);
	// beq cr6,0x82e77470
	if (cr6.eq) goto loc_82E77470;
loc_82E77400:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f0,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	f0.f64 = double(temp.f32);
	// fmuls f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x82e6e3f0
	sub_82E6E3F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - f28.f64));
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - f30.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e77470
	if (cr0.eq) goto loc_82E77470;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e77068
	sub_82E77068(ctx, base);
	// bl 0x82316df8
	sub_82316DF8(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
loc_82E77470:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b7b7d0
	sub_82B7B7D0(ctx, base);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b1484
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E77490"))) PPC_WEAK_FUNC(sub_82E77490);
PPC_FUNC_IMPL(__imp__sub_82E77490) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b2c
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f30,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f30.f64 = double(temp.f32);
	// bl 0x82e77068
	sub_82E77068(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-24792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24792);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x82e77514
	if (!cr6.lt) goto loc_82E77514;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e77068
	sub_82E77068(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x82e77514
	if (!cr6.lt) goto loc_82E77514;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e6e3f0
	sub_82E6E3F0(ctx, base);
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e6e3f0
	sub_82E6E3F0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82e7752c
	if (!cr6.gt) goto loc_82E7752C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e77068
	sub_82E77068(ctx, base);
	// bl 0x82316df8
	sub_82316DF8(ctx, base);
	// b 0x82e77528
	goto loc_82E77528;
loc_82E77514:
	// lis r11,-32025
	r11.s64 = -2098790400;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,27824
	ctx.r5.s64 = r11.s64 + 27824;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e77358
	sub_82E77358(ctx, base);
loc_82E77528:
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_82E7752C:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f29.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x82e7753c
	if (cr6.lt) goto loc_82E7753C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E7753C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E77550"))) PPC_WEAK_FUNC(sub_82E77550);
PPC_FUNC_IMPL(__imp__sub_82E77550) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b2c
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f30,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f30.f64 = double(temp.f32);
	// bl 0x82e77068
	sub_82E77068(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-24792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24792);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x82e775d4
	if (!cr6.lt) goto loc_82E775D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e77068
	sub_82E77068(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x82e775d4
	if (!cr6.lt) goto loc_82E775D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e6e3f0
	sub_82E6E3F0(ctx, base);
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e6e3f0
	sub_82E6E3F0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82e775ec
	if (!cr6.lt) goto loc_82E775EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e77068
	sub_82E77068(ctx, base);
	// bl 0x82316df8
	sub_82316DF8(ctx, base);
	// b 0x82e775e8
	goto loc_82E775E8;
loc_82E775D4:
	// lis r11,-32025
	r11.s64 = -2098790400;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,27856
	ctx.r5.s64 = r11.s64 + 27856;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e77358
	sub_82E77358(ctx, base);
loc_82E775E8:
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_82E775EC:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f29.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x82e775fc
	if (cr6.lt) goto loc_82E775FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E775FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E77610"))) PPC_WEAK_FUNC(sub_82E77610);
PPC_FUNC_IMPL(__imp__sub_82E77610) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82e77640
	if (!cr6.eq) goto loc_82E77640;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82e77640
	if (!cr6.eq) goto loc_82E77640;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beqlr cr6
	if (cr6.eq) return;
loc_82E77640:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77648"))) PPC_WEAK_FUNC(sub_82E77648);
PPC_FUNC_IMPL(__imp__sub_82E77648) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bltlr cr6
	if (cr6.lt) return;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77658"))) PPC_WEAK_FUNC(sub_82E77658);
PPC_FUNC_IMPL(__imp__sub_82E77658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,32767
	cr6.compare<uint32_t>(ctx.r3.u32, 32767, xer);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// ble cr6,0x82e77668
	if (!cr6.gt) goto loc_82E77668;
	// li r11,32767
	r11.s64 = 32767;
loc_82E77668:
	// clrlwi r3,r11,16
	ctx.r3.u64 = r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77670"))) PPC_WEAK_FUNC(sub_82E77670);
PPC_FUNC_IMPL(__imp__sub_82E77670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77688"))) PPC_WEAK_FUNC(sub_82E77688);
PPC_FUNC_IMPL(__imp__sub_82E77688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E776B0"))) PPC_WEAK_FUNC(sub_82E776B0);
PPC_FUNC_IMPL(__imp__sub_82E776B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E776D0"))) PPC_WEAK_FUNC(sub_82E776D0);
PPC_FUNC_IMPL(__imp__sub_82E776D0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1438
	// lfs f9,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r11,r4,12
	r11.s64 = ctx.r4.s64 + 12;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(f0.f64 * f0.f64));
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * f0.f64));
	// lfs f29,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f29.f64 = double(temp.f32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// lfs f3,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * f0.f64));
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f30,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	f30.f64 = double(temp.f32);
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f28,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	f28.f64 = double(temp.f32);
	// fmr f7,f6
	ctx.f7.f64 = ctx.f6.f64;
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmr f11,f2
	ctx.f11.f64 = ctx.f2.f64;
	// fmuls f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fmuls f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f31,f10,f11
	f31.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f30,f11
	f30.f64 = double(float(f30.f64 - ctx.f11.f64));
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f7,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f29,f7,f29
	f29.f64 = double(float(ctx.f7.f64 - f29.f64));
	// fadds f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f5,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// lfs f11,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	ctx.f11.f64 = double(temp.f32);
	// fadds f7,f3,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fadds f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fmuls f9,f0,f29
	ctx.f9.f64 = double(float(f0.f64 * f29.f64));
	// fadds f1,f6,f1
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fneg f0,f12
	f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f8,f13,f5
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fadds f31,f7,f31
	f31.f64 = double(float(ctx.f7.f64 + f31.f64));
	// fmuls f7,f4,f30
	ctx.f7.f64 = double(float(ctx.f4.f64 * f30.f64));
	// fmuls f6,f3,f29
	ctx.f6.f64 = double(float(ctx.f3.f64 * f29.f64));
	// fmuls f5,f28,f5
	ctx.f5.f64 = double(float(f28.f64 * ctx.f5.f64));
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * f0.f64));
	// fmsubs f12,f31,f13,f12
	ctx.f12.f64 = double(float(f31.f64 * ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beq cr6,0x82e77834
	if (cr6.eq) goto loc_82E77834;
	// fadds f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f10,f8,f7
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmsubs f0,f10,f0,f13
	f0.f64 = double(float(ctx.f10.f64 * f0.f64 - ctx.f13.f64));
	// fdivs f0,f0,f12
	f0.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f0,f5,f0
	f0.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fadds f13,f3,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fadds f0,f2,f0
	f0.f64 = double(float(ctx.f2.f64 + f0.f64));
	// stfs f0,8(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// b 0x82e77838
	goto loc_82E77838;
loc_82E77834:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E77838:
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1484
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77850"))) PPC_WEAK_FUNC(sub_82E77850);
PPC_FUNC_IMPL(__imp__sub_82E77850) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,11
	ctx.r9.s64 = 11;
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r4
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,4
	ctx.r10.s64 = 4;
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// li r11,8
	r11.s64 = 8;
	// lvx128 v61,r5,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// lvx128 v60,r4,r9
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v61,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v60,v7
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// vmaxfp128 v61,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v61.f32, simde_mm_max_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// vminfp128 v63,v62,v63
	simde_mm_store_ps(v63.f32, simde_mm_min_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// vspltw128 v62,v61,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xFF));
	// vspltw128 v60,v61,1
	simde_mm_store_si128((simde__m128i*)v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0xAA));
	// vspltw128 v61,v61,2
	simde_mm_store_si128((simde__m128i*)v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v61.u32), 0x55));
	// vspltw128 v59,v63,0
	simde_mm_store_si128((simde__m128i*)v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xFF));
	// vspltw128 v58,v63,1
	simde_mm_store_si128((simde__m128i*)v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0xAA));
	// vspltw128 v63,v63,2
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)v63.u32), 0x55));
	// stvewx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r6,r11
	ea = (ctx.r6.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r4,r11
	ea = (ctx.r4.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82e778e4
	if (!cr6.lt) goto loc_82E778E4;
loc_82E778DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E778E4:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82e778dc
	if (cr6.lt) goto loc_82E778DC;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f11,-24(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x82e778dc
	if (cr6.lt) goto loc_82E778DC;
	// lfs f11,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x82e778dc
	if (cr6.gt) goto loc_82E778DC;
	// lfs f12,-12(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82e778dc
	if (cr6.gt) goto loc_82E778DC;
	// lfs f13,-8(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77938"))) PPC_WEAK_FUNC(sub_82E77938);
PPC_FUNC_IMPL(__imp__sub_82E77938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b1410
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f24,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f24.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f23,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	f23.f64 = double(temp.f32);
	// fmr f18,f1
	f18.f64 = ctx.f1.f64;
	// lfs f22,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f22.f64 = double(temp.f32);
	// clrlwi. r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f30,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f29,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f29.f64 = double(temp.f32);
	// lfs f28,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f28.f64 = double(temp.f32);
	// lfs f27,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f27.f64 = double(temp.f32);
	// lfs f26,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f26.f64 = double(temp.f32);
	// lfs f25,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f25.f64 = double(temp.f32);
	// lfs f21,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f21.f64 = double(temp.f32);
	// lfs f20,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f20.f64 = double(temp.f32);
	// lfs f19,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f19.f64 = double(temp.f32);
	// beq 0x82e77a94
	if (cr0.eq) goto loc_82E77A94;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)v63.u32, simde_mm_set1_epi32(int(0x1)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fsubs f0,f27,f30
	f0.f64 = double(float(f27.f64 - f30.f64));
	// addi r9,r1,91
	ctx.r9.s64 = ctx.r1.s64 + 91;
	// fsubs f13,f26,f29
	ctx.f13.f64 = double(float(f26.f64 - f29.f64));
	// fsubs f12,f25,f28
	ctx.f12.f64 = double(float(f25.f64 - f28.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// vcsxwfp128 v13,v63,1
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)v62.u32, simde_mm_set1_epi32(int(0x0)));
	// lvsl v0,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// fsubs f0,f30,f24
	f0.f64 = double(float(f30.f64 - f24.f64));
	// lvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fsubs f13,f29,f23
	ctx.f13.f64 = double(float(f29.f64 - f23.f64));
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v63,v63,v61,v0
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// fsubs f12,f28,f22
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(f28.f64 - f22.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vrsqrtefp128 v0,v63
	ctx.fpscr.enableFlushModeUnconditional();
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
	// stvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f21,f27
	f0.f64 = double(float(f21.f64 - f27.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f20,f26
	ctx.f13.f64 = double(float(f20.f64 - f26.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f19,f25
	ctx.f12.f64 = double(float(f19.f64 - f25.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f31.f64 = double(temp.f32);
	// fmuls f11,f31,f11
	ctx.f11.f64 = double(float(f31.f64 * ctx.f11.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fsubs f24,f30,f11
	f24.f64 = double(float(f30.f64 - ctx.f11.f64));
	// fsubs f23,f29,f10
	f23.f64 = double(float(f29.f64 - ctx.f10.f64));
	// fsubs f22,f28,f9
	f22.f64 = double(float(f28.f64 - ctx.f9.f64));
	// bl 0x82c176d0
	sub_82C176D0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fadds f21,f27,f0
	f21.f64 = double(float(f27.f64 + f0.f64));
	// fadds f20,f26,f13
	f20.f64 = double(float(f26.f64 + ctx.f13.f64));
	// fadds f19,f25,f12
	f19.f64 = double(float(f25.f64 + ctx.f12.f64));
loc_82E77A94:
	// fmuls f9,f18,f18
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(f18.f64 * f18.f64));
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,-30364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30364);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f18,f0
	ctx.f8.f64 = double(float(f18.f64 * f0.f64));
	// lfs f12,8256(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-31000(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -31000);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2244(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2244);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f9,f18
	ctx.f7.f64 = double(float(ctx.f9.f64 * f18.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fnmsubs f12,f9,f12,f13
	ctx.f12.f64 = double(float(-(ctx.f9.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// fsubs f7,f9,f6
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fmsubs f13,f9,f11,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 - ctx.f13.f64));
	// fnmsubs f0,f9,f0,f6
	f0.f64 = double(float(-(ctx.f9.f64 * f0.f64 - ctx.f6.f64)));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fsubs f11,f7,f8
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fmuls f10,f21,f0
	ctx.f10.f64 = double(float(f21.f64 * f0.f64));
	// fmuls f9,f20,f0
	ctx.f9.f64 = double(float(f20.f64 * f0.f64));
	// fmuls f0,f19,f0
	f0.f64 = double(float(f19.f64 * f0.f64));
	// fmuls f7,f30,f12
	ctx.f7.f64 = double(float(f30.f64 * ctx.f12.f64));
	// fmuls f8,f11,f24
	ctx.f8.f64 = double(float(ctx.f11.f64 * f24.f64));
	// fmuls f6,f29,f12
	ctx.f6.f64 = double(float(f29.f64 * ctx.f12.f64));
	// fmuls f5,f11,f23
	ctx.f5.f64 = double(float(ctx.f11.f64 * f23.f64));
	// fmuls f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 * ctx.f12.f64));
	// fmuls f11,f22,f11
	ctx.f11.f64 = double(float(f22.f64 * ctx.f11.f64));
	// fmuls f4,f27,f13
	ctx.f4.f64 = double(float(f27.f64 * ctx.f13.f64));
	// fmuls f3,f26,f13
	ctx.f3.f64 = double(float(f26.f64 * ctx.f13.f64));
	// fmuls f13,f25,f13
	ctx.f13.f64 = double(float(f25.f64 * ctx.f13.f64));
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f7,f5,f6
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f11,f8,f4
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// fadds f8,f7,f3
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fadds f12,f8,f9
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b145c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77B70"))) PPC_WEAK_FUNC(sub_82E77B70);
PPC_FUNC_IMPL(__imp__sub_82E77B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e77b84
	if (!cr0.eq) goto loc_82E77B84;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E77B84:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77B98"))) PPC_WEAK_FUNC(sub_82E77B98);
PPC_FUNC_IMPL(__imp__sub_82E77B98) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lis r9,-32025
	ctx.r9.s64 = -2098790400;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r9,31600
	ctx.r4.s64 = ctx.r9.s64 + 31600;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82e72718
	sub_82E72718(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77BD8"))) PPC_WEAK_FUNC(sub_82E77BD8);
PPC_FUNC_IMPL(__imp__sub_82E77BD8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82e77bfc
	if (!cr6.eq) goto loc_82E77BFC;
	// bl 0x831b4588
	sub_831B4588(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e77c04
	goto loc_82E77C04;
loc_82E77BFC:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x831b9980
	sub_831B9980(ctx, base);
loc_82E77C04:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77C18"))) PPC_WEAK_FUNC(sub_82E77C18);
PPC_FUNC_IMPL(__imp__sub_82E77C18) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82e72250
	sub_82E72250(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-6932
	r31.s64 = r11.s64 + -6932;
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831b9b28
	sub_831B9B28(ctx, base);
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

__attribute__((alias("__imp__sub_82E77C78"))) PPC_WEAK_FUNC(sub_82E77C78);
PPC_FUNC_IMPL(__imp__sub_82E77C78) {
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
	// lis r11,-32025
	r11.s64 = -2098790400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,31704
	ctx.r3.s64 = r11.s64 + 31704;
	// bl 0x82e78088
	sub_82E78088(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82e77cb0
	if (cr0.eq) goto loc_82E77CB0;
	// lis r11,-32025
	r11.s64 = -2098790400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,31768
	ctx.r4.s64 = r11.s64 + 31768;
	// bl 0x82e720d0
	sub_82E720D0(ctx, base);
loc_82E77CB0:
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

__attribute__((alias("__imp__sub_82E77CC8"))) PPC_WEAK_FUNC(sub_82E77CC8);
PPC_FUNC_IMPL(__imp__sub_82E77CC8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,192
	ctx.r6.s64 = 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,720
	ctx.r6.s64 = 720;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// addi r10,r11,168
	ctx.r10.s64 = r11.s64 + 168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// li r10,45
	ctx.r10.s64 = 45;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// addi r10,r3,624
	ctx.r10.s64 = ctx.r3.s64 + 624;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E77D98"))) PPC_WEAK_FUNC(sub_82E77D98);
PPC_FUNC_IMPL(__imp__sub_82E77D98) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e77cc8
	sub_82E77CC8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7c930
	sub_82E7C930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r28,5
	r28.s64 = 5;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82e7c930
	sub_82E7C930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r28,104(r29)
	PPC_STORE_U32(r29.u32 + 104, r28.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r29)
	PPC_STORE_U32(r29.u32 + 96, r11.u32);
	// bl 0x82e7d3a8
	sub_82E7D3A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7a898
	sub_82E7A898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e81528
	sub_82E81528(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r4,r11,-7320
	ctx.r4.s64 = r11.s64 + -7320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7d4b8
	sub_82E7D4B8(ctx, base);
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E77E48"))) PPC_WEAK_FUNC(sub_82E77E48);
PPC_FUNC_IMPL(__imp__sub_82E77E48) {
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
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82e7d8c8
	sub_82E7D8C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e79768
	sub_82E79768(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r10,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r10.u32);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mulli r5,r11,24
	ctx.r5.s64 = r11.s64 * 24;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,376
	ctx.r5.s64 = 376;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82E77F18"))) PPC_WEAK_FUNC(sub_82E77F18);
PPC_FUNC_IMPL(__imp__sub_82E77F18) {
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
	// li r6,120
	ctx.r6.s64 = 120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e79d48
	sub_82E79D48(ctx, base);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r11,0
	r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stb r11,54(r31)
	PPC_STORE_U8(r31.u32 + 54, r11.u8);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stb r10,55(r31)
	PPC_STORE_U8(r31.u32 + 55, ctx.r10.u8);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// sth r11,52(r31)
	PPC_STORE_U16(r31.u32 + 52, r11.u16);
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82e77cc8
	sub_82E77CC8(ctx, base);
	// ld r11,72(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,72(r31)
	PPC_STORE_U64(r31.u32 + 72, r11.u64);
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lbz r11,54(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 54);
	// stb r11,54(r31)
	PPC_STORE_U8(r31.u32 + 54, r11.u8);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78000"))) PPC_WEAK_FUNC(sub_82E78000);
PPC_FUNC_IMPL(__imp__sub_82E78000) {
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82e7d8c8
	sub_82E7D8C8(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mulli r5,r11,24
	ctx.r5.s64 = r11.s64 * 24;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,120
	ctx.r5.s64 = 120;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78088"))) PPC_WEAK_FUNC(sub_82E78088);
PPC_FUNC_IMPL(__imp__sub_82E78088) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,376
	ctx.r6.s64 = 376;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e7824c
	if (cr0.eq) goto loc_82E7824C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r3,120
	r11.s64 = ctx.r3.s64 + 120;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,33
	ctx.r8.s64 = 33;
	// li r7,97
	ctx.r7.s64 = 97;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r31,0
	r31.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// addi r9,r11,120
	ctx.r9.s64 = r11.s64 + 120;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r8,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r8.u8);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// stw r31,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r31.u32);
	// stw r31,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r31.u32);
	// stb r31,54(r30)
	PPC_STORE_U8(r30.u32 + 54, r31.u8);
	// stb r10,55(r30)
	PPC_STORE_U8(r30.u32 + 55, ctx.r10.u8);
	// stb r9,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r9.u8);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r31,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r31.u32);
	// stw r31,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r31.u32);
	// stw r31,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r31.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r31.u32);
	// sth r31,52(r30)
	PPC_STORE_U16(r30.u32 + 52, r31.u16);
	// stb r31,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r31.u8);
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r31.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
	// stw r31,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r31.u32);
	// stw r31,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r31.u32);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// li r9,376
	ctx.r9.s64 = 376;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r30,112(r11)
	PPC_STORE_U32(r11.u32 + 112, r30.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r10,136(r11)
	PPC_STORE_U32(r11.u32 + 136, ctx.r10.u32);
	// stw r10,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r31,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, r31.u32);
	// addi r10,r11,152
	ctx.r10.s64 = r11.s64 + 152;
	// stw r8,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r8.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// stw r9,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r9.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r31,52(r11)
	PPC_STORE_U32(r11.u32 + 52, r31.u32);
	// stw r31,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r31.u32);
	// stw r31,88(r11)
	PPC_STORE_U32(r11.u32 + 88, r31.u32);
	// stb r31,21(r11)
	PPC_STORE_U8(r11.u32 + 21, r31.u8);
	// stw r30,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r30.u32);
	// stw r31,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r31.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r31.u32);
	// stw r31,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r31.u32);
	// stw r31,48(r11)
	PPC_STORE_U32(r11.u32 + 48, r31.u32);
	// stw r8,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r8.u32);
	// stw r8,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r8.u32);
	// stw r31,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r31.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82E78210:
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e78210
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E78210;
	// lis r11,-32025
	r11.s64 = -2098790400;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,32152
	ctx.r4.s64 = r11.s64 + 32152;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e72820
	sub_82E72820(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e78248
	if (cr0.eq) goto loc_82E78248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e77e48
	sub_82E77E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82e7824c
	goto loc_82E7824C;
loc_82E78248:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82E7824C:
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

__attribute__((alias("__imp__sub_82E78268"))) PPC_WEAK_FUNC(sub_82E78268);
PPC_FUNC_IMPL(__imp__sub_82E78268) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e79720
	sub_82E79720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E78270"))) PPC_WEAK_FUNC(sub_82E78270);
PPC_FUNC_IMPL(__imp__sub_82E78270) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r31,112(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82e7d8c8
	sub_82E7D8C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e78b20
	sub_82E78B20(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
loc_82E782AC:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-32152
	ctx.r4.s64 = ctx.r10.s64 + -32152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// sth r30,52(r31)
	PPC_STORE_U16(r31.u32 + 52, r30.u16);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82e72820
	sub_82E72820(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e782ac
	if (!cr0.eq) goto loc_82E782AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e77e48
	sub_82E77E48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78300"))) PPC_WEAK_FUNC(sub_82E78300);
PPC_FUNC_IMPL(__imp__sub_82E78300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// b 0x82e78314
	goto loc_82E78314;
loc_82E78308:
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
loc_82E78314:
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// bge cr6,0x82e78308
	if (!cr6.lt) goto loc_82E78308;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r3,r11,r10
	ctx.r3.u64 = r11.u64 | ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78338"))) PPC_WEAK_FUNC(sub_82E78338);
PPC_FUNC_IMPL(__imp__sub_82E78338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// srawi r11,r3,3
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	r11.s64 = ctx.r3.s32 >> 3;
	// clrlwi. r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// clrlwi r10,r3,29
	ctx.r10.u64 = ctx.r3.u32 & 0x7;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// slw r3,r10,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78358"))) PPC_WEAK_FUNC(sub_82E78358);
PPC_FUNC_IMPL(__imp__sub_82E78358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// b 0x82e78368
	goto loc_82E78368;
loc_82E78360:
	// rlwinm r3,r3,24,8,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82E78368:
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// bge cr6,0x82e78360
	if (!cr6.lt) goto loc_82E78360;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r10,r10,-6856
	ctx.r10.s64 = ctx.r10.s64 + -6856;
	// lbzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78388"))) PPC_WEAK_FUNC(sub_82E78388);
PPC_FUNC_IMPL(__imp__sub_82E78388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82e783a0
	if (cr6.eq) goto loc_82E783A0;
loc_82E78398:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E783A0:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82e783e8
	if (cr6.lt) goto loc_82E783E8;
	// beq cr6,0x82e783d0
	if (cr6.eq) goto loc_82E783D0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82e783d0
	if (cr6.lt) goto loc_82E783D0;
	// bne cr6,0x82e783d0
	if (!cr6.eq) goto loc_82E783D0;
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,0(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82e78398
	goto loc_82E78398;
loc_82E783D0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82E783E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E783F0"))) PPC_WEAK_FUNC(sub_82E783F0);
PPC_FUNC_IMPL(__imp__sub_82E783F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831b3198
	sub_831B3198(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r30.u32 + 0, ctx.f1.u64);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82e7842c
	if (!cr6.eq) goto loc_82E7842C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e784b4
	goto loc_82E784B4;
loc_82E7842C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,120
	cr6.compare<int32_t>(ctx.r10.s32, 120, xer);
	// beq cr6,0x82e78444
	if (cr6.eq) goto loc_82E78444;
	// cmpwi cr6,r10,88
	cr6.compare<int32_t>(ctx.r10.s32, 88, xer);
	// bne cr6,0x82e7846c
	if (!cr6.eq) goto loc_82E7846C;
loc_82E78444:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2fe0
	sub_831B2FE0(ctx, base);
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfd f0,0(r30)
	PPC_STORE_U64(r30.u32 + 0, f0.u64);
loc_82E7846C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e78488
	if (!cr6.eq) goto loc_82E78488;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e784b4
	goto loc_82E784B4;
loc_82E78480:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82E78488:
	// bl 0x831b96d8
	sub_831B96D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e78480
	if (!cr0.eq) goto loc_82E78480;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82E784B4:
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

__attribute__((alias("__imp__sub_82E784D0"))) PPC_WEAK_FUNC(sub_82E784D0);
PPC_FUNC_IMPL(__imp__sub_82E784D0) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82E784F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e784f4
	if (!cr6.eq) goto loc_82E784F4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82e7d4b8
	sub_82E7D4B8(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bgt cr6,0x82e78544
	if (cr6.gt) goto loc_82E78544;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72a60
	sub_82E72A60(ctx, base);
loc_82E78544:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82E78568"))) PPC_WEAK_FUNC(sub_82E78568);
PPC_FUNC_IMPL(__imp__sub_82E78568) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r26,1
	r26.s64 = 1;
	// bl 0x82e784d0
	sub_82E784D0(ctx, base);
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b58d0
	sub_831B58D0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82e78754
	if (cr0.eq) goto loc_82E78754;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r23,0
	r23.s64 = 0;
	// addi r22,r11,26976
	r22.s64 = r11.s64 + 26976;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r25,3
	r25.s64 = 3;
	// addi r24,r11,-8864
	r24.s64 = r11.s64 + -8864;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r21,r11,-6600
	r21.s64 = r11.s64 + -6600;
loc_82E785C4:
	// subf r5,r29,r27
	ctx.r5.s64 = r27.s64 - r29.s64;
	// lwz r28,8(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7d4b8
	sub_82E7D4B8(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bgt cr6,0x82e78604
	if (cr6.gt) goto loc_82E78604;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72a60
	sub_82E72A60(ctx, base);
loc_82E78604:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lbz r9,1(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,37
	cr6.compare<int32_t>(ctx.r10.s32, 37, xer);
	// beq cr6,0x82e7872c
	if (cr6.eq) goto loc_82E7872C;
	// cmpwi cr6,r10,99
	cr6.compare<int32_t>(ctx.r10.s32, 99, xer);
	// beq cr6,0x82e7870c
	if (cr6.eq) goto loc_82E7870C;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// beq cr6,0x82e786b8
	if (cr6.eq) goto loc_82E786B8;
	// cmpwi cr6,r10,102
	cr6.compare<int32_t>(ctx.r10.s32, 102, xer);
	// beq cr6,0x82e786a4
	if (cr6.eq) goto loc_82E786A4;
	// cmpwi cr6,r10,112
	cr6.compare<int32_t>(ctx.r10.s32, 112, xer);
	// beq cr6,0x82e78680
	if (cr6.eq) goto loc_82E78680;
	// cmpwi cr6,r10,115
	cr6.compare<int32_t>(ctx.r10.s32, 115, xer);
	// beq cr6,0x82e78660
	if (cr6.eq) goto loc_82E78660;
	// li r11,37
	r11.s64 = 37;
	// stb r9,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r9.u8);
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// stb r23,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, r23.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// b 0x82e78730
	goto loc_82E78730;
loc_82E78660:
	// addi r11,r30,7
	r11.s64 = r30.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x82e78730
	if (!cr0.eq) goto loc_82E78730;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// b 0x82e78730
	goto loc_82E78730;
loc_82E78680:
	// addi r11,r30,7
	r11.s64 = r30.s64 + 7;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r5,-4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x82e78730
	goto loc_82E78730;
loc_82E786A4:
	// addi r10,r30,7
	ctx.r10.s64 = r30.s64 + 7;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
	// lfd f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r30.u32 + -8);
	// b 0x82e786d4
	goto loc_82E786D4;
loc_82E786B8:
	// addi r10,r30,7
	ctx.r10.s64 = r30.s64 + 7;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
	// lwa r10,-4(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r30.u32 + -4));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
loc_82E786D4:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
	// stfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + 0, f0.u64);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bgt cr6,0x82e786fc
	if (cr6.gt) goto loc_82E786FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72a60
	sub_82E72A60(ctx, base);
loc_82E786FC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82e78738
	goto loc_82E78738;
loc_82E7870C:
	// addi r11,r30,7
	r11.s64 = r30.s64 + 7;
	// stb r23,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r23.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// b 0x82e78730
	goto loc_82E78730;
loc_82E7872C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
loc_82E78730:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e784d0
	sub_82E784D0(ctx, base);
loc_82E78738:
	// addi r29,r27,2
	r29.s64 = r27.s64 + 2;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// bl 0x831b58d0
	sub_831B58D0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x82e785c4
	if (!cr0.eq) goto loc_82E785C4;
loc_82E78754:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e784d0
	sub_82E784D0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r26,1
	ctx.r4.s64 = r26.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// bl 0x82e7b2c8
	sub_82E7B2C8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r26,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,-16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82E787A0"))) PPC_WEAK_FUNC(sub_82E787A0);
PPC_FUNC_IMPL(__imp__sub_82E787A0) {
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
	// bl 0x82e78568
	sub_82E78568(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E787E8"))) PPC_WEAK_FUNC(sub_82E787E8);
PPC_FUNC_IMPL(__imp__sub_82E787E8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// bne cr6,0x82e78828
	if (!cr6.eq) goto loc_82E78828;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// bl 0x831b4fa0
	sub_831B4FA0(ctx, base);
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// b 0x82e789d0
	goto loc_82E789D0;
loc_82E78828:
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bne cr6,0x82e788dc
	if (!cr6.eq) goto loc_82E788DC;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// addi r9,r28,-8
	ctx.r9.s64 = r28.s64 + -8;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82E78840:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82e78840
	if (!cr6.eq) goto loc_82E78840;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stb r8,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r8.u8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x82e788ac
	if (!cr6.gt) goto loc_82E788AC;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r10,r10,-6572
	ctx.r10.s64 = ctx.r10.s64 + -6572;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_82E78880:
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82e78880
	if (!cr6.eq) goto loc_82E78880;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82E78894:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82e78894
	if (!cr0.eq) goto loc_82E78894;
loc_82E788AC:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e788ac
	if (!cr6.eq) goto loc_82E788AC;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
loc_82E788C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82e788c0
	if (!cr0.eq) goto loc_82E788C0;
	// b 0x82e789d0
	goto loc_82E789D0;
loc_82E788DC:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-6576
	ctx.r4.s64 = r11.s64 + -6576;
	// bl 0x831b46c8
	sub_831B46C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r28,-17
	r11.s64 = r28.s64 + -17;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82e78900
	if (!cr6.gt) goto loc_82E78900;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82E78900:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r11,-6588
	ctx.r4.s64 = r11.s64 + -6588;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lbzx r11,r30,r31
	r11.u64 = PPC_LOAD_U8(r30.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e7896c
	if (cr6.eq) goto loc_82E7896C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b9d50
	sub_831B9D50(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r11,-6572
	r11.s64 = r11.s64 + -6572;
loc_82E7893C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e7893c
	if (!cr6.eq) goto loc_82E7893C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_82E78950:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82e78950
	if (!cr0.eq) goto loc_82E78950;
	// b 0x82e7899c
	goto loc_82E7899C;
loc_82E7896C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82E78970:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e78970
	if (!cr6.eq) goto loc_82E78970;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82E78984:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82e78984
	if (!cr0.eq) goto loc_82E78984;
loc_82E7899C:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-6592
	r11.s64 = r11.s64 + -6592;
loc_82E789A4:
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e789a4
	if (!cr6.eq) goto loc_82E789A4;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
loc_82E789B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x82e789b8
	if (!cr0.eq) goto loc_82E789B8;
loc_82E789D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E789D8"))) PPC_WEAK_FUNC(sub_82E789D8);
PPC_FUNC_IMPL(__imp__sub_82E789D8) {
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
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// b 0x82e78a64
	goto loc_82E78A64;
loc_82E78A04:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82e78af8
	if (cr6.eq) goto loc_82E78AF8;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82e78aec
	if (cr6.eq) goto loc_82E78AEC;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x82e78a74
	if (!cr6.eq) goto loc_82E78A74;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// beq 0x82e78a48
	if (cr0.eq) goto loc_82E78A48;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e78a48
	if (cr0.eq) goto loc_82E78A48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E78A48:
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e78b04
	if (cr0.eq) goto loc_82E78B04;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
loc_82E78A64:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e78a04
	if (!cr6.eq) goto loc_82E78A04;
	// b 0x82e78b04
	goto loc_82E78B04;
loc_82E78A74:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x82e78ae0
	if (cr6.eq) goto loc_82E78AE0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x82e78ad4
	if (cr6.eq) goto loc_82E78AD4;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x82e78b04
	if (!cr6.eq) goto loc_82E78B04;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82e78ab4
	if (cr6.lt) goto loc_82E78AB4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e78ab4
	if (cr0.eq) goto loc_82E78AB4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E78AB4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e78b04
	if (!cr6.eq) goto loc_82E78B04;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// b 0x82e78b04
	goto loc_82E78B04;
loc_82E78AD4:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// b 0x82e78b00
	goto loc_82E78B00;
loc_82E78AE0:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// b 0x82e78b00
	goto loc_82E78B00;
loc_82E78AEC:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82e78b00
	goto loc_82E78B00;
loc_82E78AF8:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82E78B00:
	// stw r31,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r31.u32);
loc_82E78B04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78B20"))) PPC_WEAK_FUNC(sub_82E78B20);
PPC_FUNC_IMPL(__imp__sub_82E78B20) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r30,16(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r29,112(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// b 0x82e78bf4
	goto loc_82E78BF4;
loc_82E78B44:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e78b58
	if (!cr0.eq) goto loc_82E78B58;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82e78b60
	if (cr6.eq) goto loc_82E78B60;
loc_82E78B58:
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e78b68
	if (cr0.eq) goto loc_82E78B68;
loc_82E78B60:
	// mr r29,r31
	r29.u64 = r31.u64;
	// b 0x82e78bf4
	goto loc_82E78BF4;
loc_82E78B68:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e78b98
	if (cr0.eq) goto loc_82E78B98;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e78b98
	if (!cr0.eq) goto loc_82E78B98;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// bl 0x82e7a918
	sub_82E7A918(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e78bac
	if (!cr0.eq) goto loc_82E78BAC;
loc_82E78B98:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// mr r29,r31
	r29.u64 = r31.u64;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// b 0x82e78bf4
	goto loc_82E78BF4;
loc_82E78BAC:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r9,r11,8
	ctx.r9.u64 = r11.u64 | 8;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r28,r11,24
	r28.s64 = r11.s64 + 24;
	// stb r9,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r9.u8);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e78be0
	if (!cr0.eq) goto loc_82E78BE0;
	// stw r31,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r31.u32);
	// b 0x82e78bf0
	goto loc_82E78BF0;
loc_82E78BE0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_82E78BF0:
	// stw r31,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r31.u32);
loc_82E78BF4:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82e78b44
	if (!cr0.eq) goto loc_82E78B44;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E78C10"))) PPC_WEAK_FUNC(sub_82E78C10);
PPC_FUNC_IMPL(__imp__sub_82E78C10) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e78c48
	if (cr0.eq) goto loc_82E78C48;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e78c48
	if (cr0.eq) goto loc_82E78C48;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E78C48:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e78d0c
	if (cr0.eq) goto loc_82E78D0C;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e78d0c
	if (!cr0.eq) goto loc_82E78D0C;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,200(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 200);
	// bl 0x82e7a918
	sub_82E7A918(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82e78d0c
	if (cr0.eq) goto loc_82E78D0C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e78d0c
	if (!cr6.eq) goto loc_82E78D0C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,107
	ctx.r4.s64 = 107;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x831b58d0
	sub_831B58D0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r4,118
	ctx.r4.s64 = 118;
	// xori r28,r11,1
	r28.u64 = r11.u64 ^ 1;
	// bl 0x831b58d0
	sub_831B58D0(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r27,r11,1
	r27.u64 = r11.u64 ^ 1;
	// bne cr6,0x82e78cc8
	if (!cr6.eq) goto loc_82E78CC8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82e78cf0
	if (cr6.eq) goto loc_82E78CF0;
loc_82E78CC8:
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm r11,r27,1,0,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// andi. r10,r10,231
	ctx.r10.u64 = ctx.r10.u64 & 231;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r30,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r30.u32);
loc_82E78CF0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82e78d04
	if (cr6.eq) goto loc_82E78D04;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82e78d0c
	if (cr6.eq) goto loc_82E78D0C;
	// b 0x82e78e14
	goto loc_82E78E14;
loc_82E78D04:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82e78d58
	if (!cr6.eq) goto loc_82E78D58;
loc_82E78D0C:
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e78d58
	if (cr0.eq) goto loc_82E78D58;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_82E78D1C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82e78d50
	if (cr6.lt) goto loc_82E78D50;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e78d50
	if (cr0.eq) goto loc_82E78D50;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E78D50:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82e78d1c
	if (!cr6.eq) goto loc_82E78D1C;
loc_82E78D58:
	// lbz r11,7(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw. r8,r10,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82e78e00
	if (cr0.eq) goto loc_82E78E00;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
loc_82E78D6C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r7,r7,-32
	ctx.r7.s64 = ctx.r7.s64 + -32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r9,r11,r7
	ctx.r9.u64 = r11.u64 + ctx.r7.u64;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e78da0
	if (!cr6.eq) goto loc_82E78DA0;
	// lwz r11,24(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82e78df8
	if (cr6.lt) goto loc_82E78DF8;
	// li r11,11
	r11.s64 = 11;
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, r11.u32);
	// b 0x82e78df8
	goto loc_82E78DF8;
loc_82E78DA0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82e78dcc
	if (!cr6.eq) goto loc_82E78DCC;
	// lwz r11,24(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82e78dcc
	if (cr6.lt) goto loc_82E78DCC;
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e78dcc
	if (cr0.eq) goto loc_82E78DCC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E78DCC:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82e78df8
	if (!cr6.eq) goto loc_82E78DF8;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82e78df8
	if (cr6.lt) goto loc_82E78DF8;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e78df8
	if (cr0.eq) goto loc_82E78DF8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E78DF8:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82e78d6c
	if (!cr6.eq) goto loc_82E78D6C;
loc_82E78E00:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82e78e14
	if (!cr6.eq) goto loc_82E78E14;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82e78e18
	if (cr6.eq) goto loc_82E78E18;
loc_82E78E14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E78E18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E78E20"))) PPC_WEAK_FUNC(sub_82E78E20);
PPC_FUNC_IMPL(__imp__sub_82E78E20) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,32(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e78e50
	if (cr6.eq) goto loc_82E78E50;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
loc_82E78E50:
	// lwz r11,40(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e78ea4
	if (!cr6.gt) goto loc_82E78EA4;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82E78E64:
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82e78e90
	if (cr6.lt) goto loc_82E78E90;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e78e90
	if (cr0.eq) goto loc_82E78E90;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E78E90:
	// lwz r11,40(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// blt cr6,0x82e78e64
	if (cr6.lt) goto loc_82E78E64;
loc_82E78EA4:
	// lwz r11,36(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e78ef0
	if (!cr6.gt) goto loc_82E78EF0;
	// li r11,0
	r11.s64 = 0;
loc_82E78EB8:
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e78edc
	if (cr6.eq) goto loc_82E78EDC;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r7,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r7.u8);
loc_82E78EDC:
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e78eb8
	if (cr6.lt) goto loc_82E78EB8;
loc_82E78EF0:
	// lwz r11,52(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e78f40
	if (!cr6.gt) goto loc_82E78F40;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82E78F04:
	// lwz r11,16(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e78f2c
	if (cr6.eq) goto loc_82E78F2C;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e78f2c
	if (cr0.eq) goto loc_82E78F2C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E78F2C:
	// lwz r11,52(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// blt cr6,0x82e78f04
	if (cr6.lt) goto loc_82E78F04;
loc_82E78F40:
	// lwz r11,56(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e78f90
	if (!cr6.gt) goto loc_82E78F90;
	// li r11,0
	r11.s64 = 0;
loc_82E78F54:
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82e78f7c
	if (cr6.eq) goto loc_82E78F7C;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lbz r7,5(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r7,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r7.u8);
loc_82E78F7C:
	// lwz r10,56(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e78f54
	if (cr6.lt) goto loc_82E78F54;
loc_82E78F90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E78FA0"))) PPC_WEAK_FUNC(sub_82E78FA0);
PPC_FUNC_IMPL(__imp__sub_82E78FA0) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e78fc8
	if (cr0.eq) goto loc_82E78FC8;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E78FC8:
	// lbz r11,6(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 6);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e79024
	if (cr0.eq) goto loc_82E79024;
	// lbz r11,7(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e7907c
	if (cr0.eq) goto loc_82E7907C;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
loc_82E78FE8:
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82e7900c
	if (cr6.lt) goto loc_82E7900C;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7900c
	if (cr0.eq) goto loc_82E7900C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E7900C:
	// lbz r11,7(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// blt cr6,0x82e78fe8
	if (cr6.lt) goto loc_82E78FE8;
	// b 0x82e7907c
	goto loc_82E7907C;
loc_82E79024:
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7903c
	if (cr0.eq) goto loc_82E7903C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E7903C:
	// lbz r11,7(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e7907c
	if (cr0.eq) goto loc_82E7907C;
	// addi r8,r9,20
	ctx.r8.s64 = ctx.r9.s64 + 20;
loc_82E79050:
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e79068
	if (cr0.eq) goto loc_82E79068;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E79068:
	// lbz r11,7(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, r11.s32, xer);
	// blt cr6,0x82e79050
	if (cr6.lt) goto loc_82E79050;
loc_82E7907C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79090"))) PPC_WEAK_FUNC(sub_82E79090);
PPC_FUNC_IMPL(__imp__sub_82E79090) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82e790cc
	if (cr6.lt) goto loc_82E790CC;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e790cc
	if (cr0.eq) goto loc_82E790CC;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E790CC:
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x82e790f4
	goto loc_82E790F4;
loc_82E790E0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x82e790f0
	if (!cr6.lt) goto loc_82E790F0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82E790F0:
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
loc_82E790F4:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82e790e0
	if (!cr6.gt) goto loc_82E790E0;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x82e7914c
	if (!cr6.lt) goto loc_82E7914C;
loc_82E79108:
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82e7912c
	if (cr6.lt) goto loc_82E7912C;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7912c
	if (cr0.eq) goto loc_82E7912C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E7912C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x82e79108
	if (cr6.lt) goto loc_82E79108;
	// b 0x82e7914c
	goto loc_82E7914C;
loc_82E79140:
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
loc_82E7914C:
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82e79140
	if (!cr6.gt) goto loc_82E79140;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,20000
	cr6.compare<int32_t>(r11.s32, 20000, xer);
	// srawi r30,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r30.s64 = ctx.r10.s32 >> 4;
	// bgt cr6,0x82e791cc
	if (cr6.gt) goto loc_82E791CC;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r8,24
	ctx.r8.s64 = 24;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82e791a4
	if (!cr6.lt) goto loc_82E791A4;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// ble cr6,0x82e791a4
	if (!cr6.gt) goto loc_82E791A4;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addze r4,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x82e729d8
	sub_82E729D8(ctx, base);
loc_82E791A4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82e791cc
	if (!cr6.lt) goto loc_82E791CC;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// ble cr6,0x82e791cc
	if (!cr6.gt) goto loc_82E791CC;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addze r4,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x82e728a0
	sub_82E728A0(ctx, base);
loc_82E791CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E791E8"))) PPC_WEAK_FUNC(sub_82E791E8);
PPC_FUNC_IMPL(__imp__sub_82E791E8) {
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
	// lwz r31,36(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// beq cr6,0x82e79300
	if (cr6.eq) goto loc_82E79300;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82e792c4
	if (cr6.eq) goto loc_82E792C4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x82e79280
	if (cr6.eq) goto loc_82E79280;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x82e79234
	if (cr6.eq) goto loc_82E79234;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e79344
	goto loc_82E79344;
loc_82E79234:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// bl 0x82e78e20
	sub_82E78E20(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,19
	r11.s64 = r11.s64 + 19;
	// b 0x82e792f8
	goto loc_82E792F8;
loc_82E79280:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r31,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r31.u32);
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// andi. r11,r11,251
	r11.u64 = r11.u64 & 251;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// bl 0x82e79090
	sub_82E79090(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82e79344
	goto loc_82E79344;
loc_82E792C4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// bl 0x82e78fa0
	sub_82E78FA0(ctx, base);
	// lbz r11,6(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e792f0
	if (cr0.eq) goto loc_82E792F0;
	// lbz r11,7(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// b 0x82e79344
	goto loc_82E79344;
loc_82E792F0:
	// lbz r11,7(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
loc_82E792F8:
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82e79344
	goto loc_82E79344;
loc_82E79300:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// bl 0x82e78c10
	sub_82E78C10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e79324
	if (cr0.eq) goto loc_82E79324;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// andi. r11,r11,251
	r11.u64 = r11.u64 & 251;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
loc_82E79324:
	// lbz r11,7(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_82E79344:
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

__attribute__((alias("__imp__sub_82E79358"))) PPC_WEAK_FUNC(sub_82E79358);
PPC_FUNC_IMPL(__imp__sub_82E79358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82E79364:
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e793e0
	if (cr0.eq) goto loc_82E793E0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82e793e0
	if (cr6.eq) goto loc_82E793E0;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
loc_82E79380:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82e793d8
	if (cr6.lt) goto loc_82E793D8;
	// bne cr6,0x82e793b4
	if (!cr6.eq) goto loc_82E793B4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// b 0x82e793d8
	goto loc_82E793D8;
loc_82E793B4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r7,5(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 5);
	// clrlwi. r5,r7,30
	ctx.r5.u64 = ctx.r7.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82e793d4
	if (!cr0.eq) goto loc_82E793D4;
	// cmpwi cr6,r10,7
	cr6.compare<int32_t>(ctx.r10.s32, 7, xer);
	// bne cr6,0x82e793d8
	if (!cr6.eq) goto loc_82E793D8;
	// rlwinm. r10,r7,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e793d8
	if (cr0.eq) goto loc_82E793D8;
loc_82E793D4:
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
loc_82E793D8:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82e79380
	if (!cr6.eq) goto loc_82E79380;
loc_82E793E0:
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw. r8,r10,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82e794a4
	if (cr0.eq) goto loc_82E794A4;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
loc_82E793F4:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r7,r7,-32
	ctx.r7.s64 = ctx.r7.s64 + -32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e7949c
	if (cr6.eq) goto loc_82E7949C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82e79440
	if (cr6.lt) goto loc_82E79440;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bne cr6,0x82e79434
	if (!cr6.eq) goto loc_82E79434;
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r9,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
	// b 0x82e79440
	goto loc_82E79440;
loc_82E79434:
	// lbz r10,5(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e79484
	if (!cr0.eq) goto loc_82E79484;
loc_82E79440:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// blt cr6,0x82e7949c
	if (cr6.lt) goto loc_82E7949C;
	// bne cr6,0x82e79464
	if (!cr6.eq) goto loc_82E79464;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// b 0x82e7949c
	goto loc_82E7949C;
loc_82E79464:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,5(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// clrlwi. r5,r10,30
	ctx.r5.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82e79484
	if (!cr0.eq) goto loc_82E79484;
	// cmpwi cr6,r9,7
	cr6.compare<int32_t>(ctx.r9.s32, 7, xer);
	// bne cr6,0x82e7949c
	if (!cr6.eq) goto loc_82E7949C;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7949c
	if (cr0.eq) goto loc_82E7949C;
loc_82E79484:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82e7949c
	if (cr6.lt) goto loc_82E7949C;
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
loc_82E7949C:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82e793f4
	if (!cr6.eq) goto loc_82E793F4;
loc_82E794A4:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e79364
	if (!cr0.eq) goto loc_82E79364;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E794B8"))) PPC_WEAK_FUNC(sub_82E794B8);
PPC_FUNC_IMPL(__imp__sub_82E794B8) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lbz r11,20(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 20);
	// xori r27,r11,3
	r27.u64 = r11.u64 ^ 3;
	// b 0x82e7960c
	goto loc_82E7960C;
loc_82E794E0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// beq cr6,0x82e79618
	if (cr6.eq) goto loc_82E79618;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bne cr6,0x82e79508
	if (!cr6.eq) goto loc_82E79508;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e794b8
	sub_82E794B8(ctx, base);
loc_82E79508:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// xori r10,r11,3
	ctx.r10.u64 = r11.u64 ^ 3;
	// and. r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 & r27.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e79530
	if (cr0.eq) goto loc_82E79530;
	// lbz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 20);
	// mr r29,r31
	r29.u64 = r31.u64;
	// rlwimi r10,r11,0,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// andi. r11,r10,251
	r11.u64 = ctx.r10.u64 & 251;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// b 0x82e7960c
	goto loc_82E7960C;
loc_82E79530:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e7954c
	if (!cr6.eq) goto loc_82E7954C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,28(r28)
	PPC_STORE_U32(r28.u32 + 28, r11.u32);
loc_82E7954C:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82e795e4
	if (cr6.eq) goto loc_82E795E4;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82e795d4
	if (cr6.eq) goto loc_82E795D4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82e795c4
	if (cr6.eq) goto loc_82E795C4;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x82e795b8
	if (cr6.eq) goto loc_82E795B8;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x82e795a8
	if (cr6.eq) goto loc_82E795A8;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x82e79598
	if (cr6.eq) goto loc_82E79598;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x82e7960c
	if (!cr6.eq) goto loc_82E7960C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7d890
	sub_82E7D890(ctx, base);
	// b 0x82e7960c
	goto loc_82E7960C;
loc_82E79598:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7da40
	sub_82E7DA40(ctx, base);
	// b 0x82e7960c
	goto loc_82E7960C;
loc_82E795A8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e78000
	sub_82E78000(ctx, base);
	// b 0x82e7960c
	goto loc_82E7960C;
loc_82E795B8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// b 0x82e795fc
	goto loc_82E795FC;
loc_82E795C4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7db18
	sub_82E7DB18(ctx, base);
	// b 0x82e7960c
	goto loc_82E7960C;
loc_82E795D4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7c9c0
	sub_82E7C9C0(ctx, base);
	// b 0x82e7960c
	goto loc_82E7960C;
loc_82E795E4:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r11,17
	ctx.r5.s64 = r11.s64 + 17;
loc_82E795FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
loc_82E7960C:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82e794e0
	if (!cr0.eq) goto loc_82E794E0;
loc_82E79618:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E79628"))) PPC_WEAK_FUNC(sub_82E79628);
PPC_FUNC_IMPL(__imp__sub_82E79628) {
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
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82e79658
	if (!cr6.eq) goto loc_82E79658;
	// stw r26,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r26.u32);
	// b 0x82e79660
	goto loc_82E79660;
loc_82E79658:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82E79660:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwimi r11,r10,0,24,28
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xF8) | (r11.u64 & 0xFFFFFFFFFFFFFF07);
	// andi. r11,r11,251
	r11.u64 = r11.u64 & 251;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// beq 0x82e79718
	if (cr0.eq) goto loc_82E79718;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e79718
	if (!cr0.eq) goto loc_82E79718;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,196(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// bl 0x82e7a918
	sub_82E7A918(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e79718
	if (cr0.eq) goto loc_82E79718;
	// lwz r28,64(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// li r9,7
	ctx.r9.s64 = 7;
	// lbz r27,55(r31)
	r27.u64 = PPC_LOAD_U8(r31.u32 + 55);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r26,55(r31)
	PPC_STORE_U8(r31.u32 + 55, r26.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r9.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r4,r11,-32
	ctx.r4.s64 = r11.s64 + -32;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82e73540
	sub_82E73540(ctx, base);
	// stb r27,55(r31)
	PPC_STORE_U8(r31.u32 + 55, r27.u8);
	// stw r28,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r28.u32);
loc_82E79718:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E79720"))) PPC_WEAK_FUNC(sub_82E79720);
PPC_FUNC_IMPL(__imp__sub_82E79720) {
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
	// b 0x82e79740
	goto loc_82E79740;
loc_82E79738:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e79628
	sub_82E79628(ctx, base);
loc_82E79740:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e79738
	if (!cr6.eq) goto loc_82E79738;
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

__attribute__((alias("__imp__sub_82E79768"))) PPC_WEAK_FUNC(sub_82E79768);
PPC_FUNC_IMPL(__imp__sub_82E79768) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,67
	r11.s64 = 67;
	// li r27,-3
	r27.s64 = -3;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r31,16(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// bl 0x82e794b8
	sub_82E794B8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e797d0
	if (!cr6.gt) goto loc_82E797D0;
	// li r29,0
	r29.s64 = 0;
loc_82E797A8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x82e794b8
	sub_82E794B8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82e797a8
	if (cr6.lt) goto loc_82E797A8;
loc_82E797D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E797D8"))) PPC_WEAK_FUNC(sub_82E797D8);
PPC_FUNC_IMPL(__imp__sub_82E797D8) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r4,112(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, r11.u32);
	// stw r11,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, r11.u32);
	// stw r11,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, r11.u32);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e79814
	if (cr0.eq) goto loc_82E79814;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E79814:
	// lwz r11,112(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 112);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82e7983c
	if (cr6.lt) goto loc_82E7983C;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7983c
	if (cr0.eq) goto loc_82E7983C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E7983C:
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82e79864
	if (cr6.lt) goto loc_82E79864;
	// lwz r4,96(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e79864
	if (cr0.eq) goto loc_82E79864;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E79864:
	// addi r8,r9,152
	ctx.r8.s64 = ctx.r9.s64 + 152;
	// li r7,9
	ctx.r7.s64 = 9;
loc_82E7986C:
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e7988c
	if (cr0.eq) goto loc_82E7988C;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7988c
	if (cr0.eq) goto loc_82E7988C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E7988C:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82e7986c
	if (!cr0.eq) goto loc_82E7986C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,21(r9)
	PPC_STORE_U8(ctx.r9.u32 + 21, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E798B0"))) PPC_WEAK_FUNC(sub_82E798B0);
PPC_FUNC_IMPL(__imp__sub_82E798B0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r8,r31,120
	ctx.r8.s64 = r31.s64 + 120;
	// lwz r9,140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// b 0x82e79910
	goto loc_82E79910;
loc_82E798D0:
	// lbz r11,5(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82e7990c
	if (!cr0.eq) goto loc_82E7990C;
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e7990c
	if (!cr0.eq) goto loc_82E7990C;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x82e7990c
	if (cr6.lt) goto loc_82E7990C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7990c
	if (cr0.eq) goto loc_82E7990C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E7990C:
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
loc_82E79910:
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82e798d0
	if (!cr6.eq) goto loc_82E798D0;
	// b 0x82e79924
	goto loc_82E79924;
loc_82E7991C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e791e8
	sub_82E791E8(ctx, base);
loc_82E79924:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e7991c
	if (!cr6.eq) goto loc_82E7991C;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e79958
	if (cr0.eq) goto loc_82E79958;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E79958:
	// addi r9,r31,152
	ctx.r9.s64 = r31.s64 + 152;
	// li r8,9
	ctx.r8.s64 = 9;
loc_82E79960:
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e79980
	if (cr0.eq) goto loc_82E79980;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e79980
	if (cr0.eq) goto loc_82E79980;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
loc_82E79980:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82e79960
	if (!cr0.eq) goto loc_82E79960;
	// b 0x82e79998
	goto loc_82E79998;
loc_82E79990:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e791e8
	sub_82E791E8(ctx, base);
loc_82E79998:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e79990
	if (!cr6.eq) goto loc_82E79990;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// b 0x82e799bc
	goto loc_82E799BC;
loc_82E799B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e791e8
	sub_82E791E8(ctx, base);
loc_82E799BC:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e799b4
	if (!cr6.eq) goto loc_82E799B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e78b20
	sub_82E78B20(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e79a14
	if (cr0.eq) goto loc_82E79A14;
loc_82E799E4:
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lbz r10,5(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// rlwimi r11,r10,0,24,28
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xF8) | (r11.u64 & 0xFFFFFFFFFFFFFF07);
	// andi. r11,r11,251
	r11.u64 = r11.u64 & 251;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5, r11.u8);
	// bl 0x82e789d8
	sub_82E789D8(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82e799e4
	if (!cr6.eq) goto loc_82E799E4;
loc_82E79A14:
	// mr r30,r28
	r30.u64 = r28.u64;
	// b 0x82e79a28
	goto loc_82E79A28;
loc_82E79A1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e791e8
	sub_82E791E8(ctx, base);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
loc_82E79A28:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e79a1c
	if (!cr6.eq) goto loc_82E79A1C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82e79358
	sub_82E79358(ctx, base);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r9,r31,28
	ctx.r9.s64 = r31.s64 + 28;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// li r8,2
	ctx.r8.s64 = 2;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// xori r11,r11,3
	r11.u64 = r11.u64 ^ 3;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stb r8,21(r31)
	PPC_STORE_U8(r31.u32 + 21, ctx.r8.u8);
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E79A78"))) PPC_WEAK_FUNC(sub_82E79A78);
PPC_FUNC_IMPL(__imp__sub_82E79A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82e79c1c
	if (cr6.lt) goto loc_82E79C1C;
	// beq cr6,0x82e79bf8
	if (cr6.eq) goto loc_82E79BF8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82e79b9c
	if (cr6.lt) goto loc_82E79B9C;
	// beq cr6,0x82e79aec
	if (cr6.eq) goto loc_82E79AEC;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bge cr6,0x82e79c24
	if (!cr6.lt) goto loc_82E79C24;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e79adc
	if (cr6.eq) goto loc_82E79ADC;
	// bl 0x82e79628
	sub_82E79628(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// ble cr6,0x82e79ad4
	if (!cr6.gt) goto loc_82E79AD4;
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
loc_82E79AD4:
	// li r3,100
	ctx.r3.s64 = 100;
	// b 0x82e79c28
	goto loc_82E79C28;
loc_82E79ADC:
	// li r11,0
	r11.s64 = 0;
	// stb r11,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r11.u8);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// b 0x82e79c24
	goto loc_82E79C24;
loc_82E79AEC:
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r27,68(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82e794b8
	sub_82E794B8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e79b8c
	if (!cr6.eq) goto loc_82E79B8C;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// srawi r9,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r9.s64 = r11.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e79b44
	if (!cr6.lt) goto loc_82E79B44;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// ble cr6,0x82e79b44
	if (!cr6.gt) goto loc_82E79B44;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addze r4,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r4.s64 = temp.s64;
	// bl 0x82e7d3a8
	sub_82E7D3A8(ctx, base);
loc_82E79B44:
	// lwz r5,60(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r5,64
	cr6.compare<uint32_t>(ctx.r5.u32, 64, xer);
	// ble cr6,0x82e79b84
	if (!cr6.gt) goto loc_82E79B84;
	// rlwinm r28,r5,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// li r11,-3
	r11.s64 = -3;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82e79b78
	if (cr6.gt) goto loc_82E79B78;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// b 0x82e79b7c
	goto loc_82E79B7C;
loc_82E79B78:
	// bl 0x82e7dda8
	sub_82E7DDA8(ctx, base);
loc_82E79B7C:
	// stw r3,52(r29)
	PPC_STORE_U32(r29.u32 + 52, ctx.r3.u32);
	// stw r28,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r28.u32);
loc_82E79B84:
	// li r11,4
	r11.s64 = 4;
	// stb r11,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r11.u8);
loc_82E79B8C:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r3,400
	ctx.r3.s64 = 400;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// b 0x82e79be8
	goto loc_82E79BE8;
loc_82E79B9C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,-3
	ctx.r5.s64 = -3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,68(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bl 0x82e794b8
	sub_82E794B8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e79bdc
	if (cr6.lt) goto loc_82E79BDC;
	// li r11,3
	r11.s64 = 3;
	// stb r11,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r11.u8);
loc_82E79BDC:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r3,10
	ctx.r3.s64 = 10;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
loc_82E79BE8:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// b 0x82e79c28
	goto loc_82E79C28;
loc_82E79BF8:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e79c10
	if (cr6.eq) goto loc_82E79C10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e791e8
	sub_82E791E8(ctx, base);
	// b 0x82e79c28
	goto loc_82E79C28;
loc_82E79C10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e798b0
	sub_82E798B0(ctx, base);
	// b 0x82e79c24
	goto loc_82E79C24;
loc_82E79C1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e797d8
	sub_82E797D8(ctx, base);
loc_82E79C24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E79C28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E79C30"))) PPC_WEAK_FUNC(sub_82E79C30);
PPC_FUNC_IMPL(__imp__sub_82E79C30) {
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
	// lwz r31,16(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r30,r11,10
	r30.s64 = r11.s64 * 10;
	// cmpwi r30,0
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82e79c5c
	if (!cr0.eq) goto loc_82E79C5C;
	// lis r30,32767
	r30.s64 = 2147418112;
	// ori r30,r30,65534
	r30.u64 = r30.u64 | 65534;
loc_82E79C5C:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
loc_82E79C74:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e79a78
	sub_82E79A78(ctx, base);
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// subf r30,r3,r30
	r30.s64 = r30.s64 - ctx.r3.s64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e79c94
	if (cr0.eq) goto loc_82E79C94;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82e79c74
	if (cr6.gt) goto loc_82E79C74;
loc_82E79C94:
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e79ccc
	if (cr0.eq) goto loc_82E79CCC;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,1024
	cr6.compare<uint32_t>(r11.u32, 1024, xer);
	// bge cr6,0x82e79cb8
	if (!cr6.lt) goto loc_82E79CB8;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// b 0x82e79ce0
	goto loc_82E79CE0;
loc_82E79CB8:
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,-1024
	r11.s64 = r11.s64 + -1024;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// b 0x82e79ce4
	goto loc_82E79CE4;
loc_82E79CCC:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r10,100
	ctx.r10.s64 = 100;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
loc_82E79CE0:
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
loc_82E79CE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E79CF0"))) PPC_WEAK_FUNC(sub_82E79CF0);
PPC_FUNC_IMPL(__imp__sub_82E79CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e79d0c
	if (!cr6.eq) goto loc_82E79D0C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82e789d8
	sub_82E789D8(ctx, base);
	return;
loc_82E79D0C:
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwimi r10,r9,0,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// andi. r10,r10,251
	ctx.r10.u64 = ctx.r10.u64 & 251;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79D28"))) PPC_WEAK_FUNC(sub_82E79D28);
PPC_FUNC_IMPL(__imp__sub_82E79D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// andi. r10,r10,251
	ctx.r10.u64 = ctx.r10.u64 & 251;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r10.u8);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// stw r4,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79D48"))) PPC_WEAK_FUNC(sub_82E79D48);
PPC_FUNC_IMPL(__imp__sub_82E79D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// stw r4,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r4.u32);
	// clrlwi r11,r10,30
	r11.u64 = ctx.r10.u32 & 0x3;
	// stb r5,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r5.u8);
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79D70"))) PPC_WEAK_FUNC(sub_82E79D70);
PPC_FUNC_IMPL(__imp__sub_82E79D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// clrlwi. r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lbz r8,21(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82e79df8
	if (!cr6.eq) goto loc_82E79DF8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// stb r9,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r9.u8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r10,21(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82e79dec
	if (!cr6.eq) goto loc_82E79DEC;
	// b 0x82e789d8
	sub_82E789D8(ctx, base);
	return;
loc_82E79DEC:
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// b 0x82e79dfc
	goto loc_82E79DFC;
loc_82E79DF8:
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
loc_82E79DFC:
	// rlwimi r10,r9,0,24,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF07);
	// andi. r10,r10,251
	ctx.r10.u64 = ctx.r10.u64 & 251;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E79E10"))) PPC_WEAK_FUNC(sub_82E79E10);
PPC_FUNC_IMPL(__imp__sub_82E79E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mflr r12
	// bl 0x831b0b14
	// lwz r27,44(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lbz r28,75(r3)
	r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 75);
	// addi r25,r27,-1
	r25.s64 = r27.s64 + -1;
	// cmplwi cr6,r28,250
	cr6.compare<uint32_t>(r28.u32, 250, xer);
	// bgt cr6,0x82e79e6c
	if (cr6.gt) goto loc_82E79E6C;
	// lbz r23,72(r3)
	r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 72);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// bgt cr6,0x82e79e6c
	if (cr6.gt) goto loc_82E79E6C;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// beq cr6,0x82e79e50
	if (cr6.eq) goto loc_82E79E50;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e79e6c
	if (!cr6.eq) goto loc_82E79E6C;
loc_82E79E50:
	// lwz r26,12(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(r11.s32, 30, xer);
	// beq cr6,0x82e79e74
	if (cr6.eq) goto loc_82E79E74;
loc_82E79E6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e7a28c
	goto loc_82E7A28C;
loc_82E79E74:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82e7a284
	if (!cr6.gt) goto loc_82E7A284;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r24,r11,-3964
	r24.s64 = r11.s64 + -3964;
loc_82E79E88:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r30,r11,r26
	r30.u64 = r11.u64 + r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r6,r11,26
	ctx.r6.u64 = r11.u32 & 0x3F;
	// rlwinm r31,r11,26,24,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xFF;
	// cmpwi cr6,r6,38
	cr6.compare<int32_t>(ctx.r6.s32, 38, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
	// lbzx r8,r6,r24
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + r24.u32);
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// blt cr6,0x82e79f44
	if (cr6.lt) goto loc_82E79F44;
	// beq cr6,0x82e79f28
	if (cr6.eq) goto loc_82E79F28;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// bge cr6,0x82e79fd4
	if (!cr6.lt) goto loc_82E79FD4;
	// rlwinm r11,r11,18,14,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// rlwinm r9,r8,0,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30;
	// addis r10,r11,-2
	ctx.r10.s64 = r11.s64 + -131072;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne cr6,0x82e79fd4
	if (!cr6.eq) goto loc_82E79FD4;
	// add r11,r10,r29
	r11.u64 = ctx.r10.u64 + r29.u64;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82e79e6c
	if (cr0.lt) goto loc_82E79E6C;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e79fd4
	if (!cr6.gt) goto loc_82E79FD4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// clrlwi r9,r11,26
	ctx.r9.u64 = r11.u32 & 0x3F;
	// cmpwi cr6,r9,34
	cr6.compare<int32_t>(ctx.r9.s32, 34, xer);
	// bne cr6,0x82e79fd4
	if (!cr6.eq) goto loc_82E79FD4;
	// rlwinm. r11,r11,0,9,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FC000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e79e6c
	if (cr0.eq) goto loc_82E79E6C;
	// b 0x82e79fd4
	goto loc_82E79FD4;
loc_82E79F28:
	// rlwinm r10,r11,18,14,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// rlwinm r11,r8,0,26,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x82e79fd4
	if (!cr6.eq) goto loc_82E79FD4;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// b 0x82e79fc4
	goto loc_82E79FC4;
loc_82E79F44:
	// rlwinm. r9,r8,28,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r10,r11,9,23,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1FF;
	// rlwinm r7,r11,18,23,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x1FF;
	// beq 0x82e79f88
	if (cr0.eq) goto loc_82E79F88;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x82e79f7c
	if (cr6.eq) goto loc_82E79F7C;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x82e79f90
	if (!cr6.eq) goto loc_82E79F90;
	// rlwinm. r11,r10,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e79f7c
	if (cr0.eq) goto loc_82E79F7C;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r9,r10,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// b 0x82e79f80
	goto loc_82E79F80;
loc_82E79F7C:
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
loc_82E79F80:
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
	// b 0x82e79f90
	goto loc_82E79F90;
loc_82E79F88:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e79e6c
	if (!cr6.eq) goto loc_82E79E6C;
loc_82E79F90:
	// rlwinm. r11,r8,30,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e79fcc
	if (cr0.eq) goto loc_82E79FCC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82e79fc0
	if (cr6.eq) goto loc_82E79FC0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e79fd4
	if (!cr6.eq) goto loc_82E79FD4;
	// rlwinm. r11,r7,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e79fc0
	if (cr0.eq) goto loc_82E79FC0;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r9,r7,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// b 0x82e79fc4
	goto loc_82E79FC4;
loc_82E79FC0:
	// cmpw cr6,r7,r28
	cr6.compare<int32_t>(ctx.r7.s32, r28.s32, xer);
loc_82E79FC4:
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
	// b 0x82e79fd4
	goto loc_82E79FD4;
loc_82E79FCC:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82e79e6c
	if (!cr6.eq) goto loc_82E79E6C;
loc_82E79FD4:
	// rlwinm. r11,r8,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e79fe8
	if (cr0.eq) goto loc_82E79FE8;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// bne cr6,0x82e79fe8
	if (!cr6.eq) goto loc_82E79FE8;
	// mr r25,r29
	r25.u64 = r29.u64;
loc_82E79FE8:
	// rlwinm. r11,r8,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7a00c
	if (cr0.eq) goto loc_82E7A00C;
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(r11.s32, 22, xer);
	// bne cr6,0x82e79e6c
	if (!cr6.eq) goto loc_82E79E6C;
loc_82E7A00C:
	// addi r11,r6,-2
	r11.s64 = ctx.r6.s64 + -2;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// bgt cr6,0x82e7a278
	if (cr6.gt) goto loc_82E7A278;
	// lis r12,-32238
	r12.s64 = -2112749568;
	// addi r12,r12,-6568
	r12.s64 = r12.s64 + -6568;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32024
	r12.s64 = -2098724864;
	// addi r12,r12,-24512
	r12.s64 = r12.s64 + -24512;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82E7A040;
	case 1:
		goto loc_82E7A054;
	case 2:
		goto loc_82E7A06C;
	case 3:
		goto loc_82E7A074;
	case 4:
		goto loc_82E7A278;
	case 5:
		goto loc_82E7A074;
	case 6:
		goto loc_82E7A06C;
	case 7:
		goto loc_82E7A278;
	case 8:
		goto loc_82E7A278;
	case 9:
		goto loc_82E7A090;
	case 10:
		goto loc_82E7A278;
	case 11:
		goto loc_82E7A278;
	case 12:
		goto loc_82E7A278;
	case 13:
		goto loc_82E7A278;
	case 14:
		goto loc_82E7A278;
	case 15:
		goto loc_82E7A278;
	case 16:
		goto loc_82E7A278;
	case 17:
		goto loc_82E7A278;
	case 18:
		goto loc_82E7A278;
	case 19:
		goto loc_82E7A0A8;
	case 20:
		goto loc_82E7A0E4;
	case 21:
		goto loc_82E7A278;
	case 22:
		goto loc_82E7A278;
	case 23:
		goto loc_82E7A278;
	case 24:
		goto loc_82E7A278;
	case 25:
		goto loc_82E7A278;
	case 26:
		goto loc_82E7A10C;
	case 27:
		goto loc_82E7A10C;
	case 28:
		goto loc_82E7A17C;
	case 29:
		goto loc_82E7A0D8;
	case 30:
		goto loc_82E7A0D8;
	case 31:
		goto loc_82E7A0B0;
	case 32:
		goto loc_82E7A18C;
	case 33:
		goto loc_82E7A278;
	case 34:
		goto loc_82E7A1B0;
	case 35:
		goto loc_82E7A220;
	default:
		__builtin_unreachable();
	}
loc_82E7A040:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82e7a278
	if (cr6.eq) goto loc_82E7A278;
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// b 0x82e7a274
	goto loc_82E7A274;
loc_82E7A054:
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// bgt cr6,0x82e7a278
	if (cr6.gt) goto loc_82E7A278;
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82e7a278
	if (cr6.gt) goto loc_82E7A278;
loc_82E7A064:
	// mr r25,r29
	r25.u64 = r29.u64;
	// b 0x82e7a278
	goto loc_82E7A278;
loc_82E7A06C:
	// cmpw cr6,r10,r23
	cr6.compare<int32_t>(ctx.r10.s32, r23.s32, xer);
	// b 0x82e7a274
	goto loc_82E7A274;
loc_82E7A074:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e79e6c
	if (!cr6.eq) goto loc_82E79E6C;
	// b 0x82e7a278
	goto loc_82E7A278;
loc_82E7A090:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// bne cr6,0x82e7a278
	if (!cr6.eq) goto loc_82E7A278;
	// b 0x82e7a064
	goto loc_82E7A064;
loc_82E7A0A8:
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// b 0x82e7a274
	goto loc_82E7A274;
loc_82E7A0B0:
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// blt cr6,0x82e79e6c
	if (cr6.lt) goto loc_82E79E6C;
	// add r11,r7,r31
	r11.u64 = ctx.r7.u64 + r31.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
loc_82E7A0D0:
	// blt cr6,0x82e7a278
	if (cr6.lt) goto loc_82E7A278;
	// b 0x82e7a064
	goto loc_82E7A064;
loc_82E7A0D8:
	// addi r11,r31,3
	r11.s64 = r31.s64 + 3;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
loc_82E7A0E4:
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x82e7a278
	if (cr6.eq) goto loc_82E7A278;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x82e7a278
	if (!cr6.lt) goto loc_82E7A278;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bgt cr6,0x82e7a278
	if (cr6.gt) goto loc_82E7A278;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// b 0x82e7a278
	goto loc_82E7A278;
loc_82E7A10C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e7a124
	if (cr6.eq) goto loc_82E7A124;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
loc_82E7A124:
	// addi r11,r7,-1
	r11.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82e7a15c
	if (!cr6.eq) goto loc_82E7A15C;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r10,26
	r11.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(r11.s32, 28, xer);
	// blt cr6,0x82e79e6c
	if (cr6.lt) goto loc_82E79E6C;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(r11.s32, 30, xer);
	// ble cr6,0x82e7a150
	if (!cr6.gt) goto loc_82E7A150;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// bne cr6,0x82e79e6c
	if (!cr6.eq) goto loc_82E79E6C;
loc_82E7A150:
	// rlwinm. r11,r10,0,0,8
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF800000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e79e6c
	if (!cr0.eq) goto loc_82E79E6C;
	// b 0x82e7a174
	goto loc_82E7A174;
loc_82E7A15C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e7a174
	if (cr6.eq) goto loc_82E7A174;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
loc_82E7A174:
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// b 0x82e7a0d0
	goto loc_82E7A0D0;
loc_82E7A17C:
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82e7a278
	if (!cr0.gt) goto loc_82E7A278;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// b 0x82e7a26c
	goto loc_82E7A26C;
loc_82E7A18C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e7a1a0
	if (!cr6.gt) goto loc_82E7A1A0;
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
loc_82E7A1A0:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82e7a278
	if (!cr6.eq) goto loc_82E7A278;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82e7a278
	goto loc_82E7A278;
loc_82E7A1B0:
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lbz r11,72(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 72);
	// add r7,r11,r29
	ctx.r7.u64 = r11.u64 + r29.u64;
	// cmpw cr6,r7,r27
	cr6.compare<int32_t>(ctx.r7.s32, r27.s32, xer);
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82e7a210
	if (cr6.lt) goto loc_82E7A210;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
loc_82E7A1E8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// beq cr6,0x82e7a200
	if (cr6.eq) goto loc_82E7A200;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82e79e6c
	if (!cr6.eq) goto loc_82E79E6C;
loc_82E7A200:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// ble cr6,0x82e7a1e8
	if (!cr6.gt) goto loc_82E7A1E8;
loc_82E7A210:
	// cmpwi cr6,r5,255
	cr6.compare<int32_t>(ctx.r5.s32, 255, xer);
	// beq cr6,0x82e7a278
	if (cr6.eq) goto loc_82E7A278;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// b 0x82e7a278
	goto loc_82E7A278;
loc_82E7A220:
	// lbz r11,74(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e79e6c
	if (cr0.eq) goto loc_82E79E6C;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e79e6c
	if (!cr0.eq) goto loc_82E79E6C;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82e7a268
	if (!cr6.eq) goto loc_82E7A268;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r10,26
	r11.u64 = ctx.r10.u32 & 0x3F;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(r11.s32, 28, xer);
	// blt cr6,0x82e79e6c
	if (cr6.lt) goto loc_82E79E6C;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(r11.s32, 30, xer);
	// ble cr6,0x82e7a260
	if (!cr6.gt) goto loc_82E7A260;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// bne cr6,0x82e79e6c
	if (!cr6.eq) goto loc_82E79E6C;
loc_82E7A260:
	// rlwinm. r11,r10,0,0,8
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF800000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e79e6c
	if (!cr0.eq) goto loc_82E79E6C;
loc_82E7A268:
	// add r11,r9,r31
	r11.u64 = ctx.r9.u64 + r31.u64;
loc_82E7A26C:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
loc_82E7A274:
	// bge cr6,0x82e79e6c
	if (!cr6.lt) goto loc_82E79E6C;
loc_82E7A278:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r4
	cr6.compare<int32_t>(r29.s32, ctx.r4.s32, xer);
	// blt cr6,0x82e79e88
	if (cr6.lt) goto loc_82E79E88;
loc_82E7A284:
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
loc_82E7A28C:
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82E7A290"))) PPC_WEAK_FUNC(sub_82E7A290);
PPC_FUNC_IMPL(__imp__sub_82E7A290) {
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
	// li r5,255
	ctx.r5.s64 = 255;
	// lwz r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x82e79e10
	sub_82E79E10(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7A2C8"))) PPC_WEAK_FUNC(sub_82E7A2C8);
PPC_FUNC_IMPL(__imp__sub_82E7A2C8) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82e7a39c
	goto loc_82E7A39C;
loc_82E7A2F0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 6);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82e7a3a4
	if (!cr0.eq) goto loc_82E7A3A4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r30,16(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,6
	cr6.compare<int32_t>(ctx.r9.s32, 6, xer);
	// bne cr6,0x82e7a348
	if (!cr6.eq) goto loc_82E7A348;
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e7a328
	if (!cr6.eq) goto loc_82E7A328;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// stw r10,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r10.u32);
loc_82E7A328:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// b 0x82e7a34c
	goto loc_82E7A34C;
loc_82E7A348:
	// li r31,-1
	r31.s64 = -1;
loc_82E7A34C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7db48
	sub_82E7DB48(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// bne 0x82e7a3b0
	if (!cr0.eq) goto loc_82E7A3B0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e79e10
	sub_82E79E10(ctx, base);
	// clrlwi. r11,r3,26
	r11.u64 = ctx.r3.u32 & 0x3F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e7a3bc
	if (!cr0.eq) goto loc_82E7A3BC;
	// rlwinm r11,r3,9,23,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0x1FF;
	// rlwinm r10,r3,26,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 26) & 0xFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82e7a3a4
	if (!cr6.lt) goto loc_82E7A3A4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r28,r11
	r28.u64 = r11.u64;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82E7A39C:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82e7a2f0
	if (cr6.eq) goto loc_82E7A2F0;
loc_82E7A3A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E7A3A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_82E7A3B0:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-6516
	ctx.r3.s64 = r11.s64 + -6516;
	// b 0x82e7a3a8
	goto loc_82E7A3A8;
loc_82E7A3BC:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82e7a48c
	if (cr6.eq) goto loc_82E7A48C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82e7a46c
	if (cr6.eq) goto loc_82E7A46C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82e7a424
	if (cr6.eq) goto loc_82E7A424;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x82e7a3a4
	if (!cr6.eq) goto loc_82E7A3A4;
	// rlwinm r11,r3,18,23,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7a410
	if (cr0.eq) goto loc_82E7A410;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x82e7a410
	if (!cr6.eq) goto loc_82E7A410;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x82e7a418
	goto loc_82E7A418;
loc_82E7A410:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r11,r11,-28856
	r11.s64 = r11.s64 + -28856;
loc_82E7A418:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r10,-6880
	ctx.r3.s64 = ctx.r10.s64 + -6880;
	// b 0x82e7a484
	goto loc_82E7A484;
loc_82E7A424:
	// rlwinm r11,r3,18,23,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 18) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7a458
	if (cr0.eq) goto loc_82E7A458;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,20,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x82e7a458
	if (!cr6.eq) goto loc_82E7A458;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x82e7a460
	goto loc_82E7A460;
loc_82E7A458:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r11,r11,-28856
	r11.s64 = r11.s64 + -28856;
loc_82E7A460:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r10,-6524
	ctx.r3.s64 = ctx.r10.s64 + -6524;
	// b 0x82e7a484
	goto loc_82E7A484;
loc_82E7A46C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r9,r3,22,10,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 22) & 0x3FFFF0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r11,4588
	ctx.r3.s64 = r11.s64 + 4588;
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_82E7A484:
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// b 0x82e7a3a8
	goto loc_82E7A3A8;
loc_82E7A48C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e7a4a8
	if (cr0.eq) goto loc_82E7A4A8;
	// rlwinm r10,r3,11,21,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0x7FC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// b 0x82e7a4b0
	goto loc_82E7A4B0;
loc_82E7A4A8:
	// lis r11,-32241
	r11.s64 = -2112946176;
	// addi r11,r11,-28856
	r11.s64 = r11.s64 + -28856;
loc_82E7A4B0:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r10,-6532
	ctx.r3.s64 = ctx.r10.s64 + -6532;
	// b 0x82e7a484
	goto loc_82E7A484;
}

__attribute__((alias("__imp__sub_82E7A4C0"))) PPC_WEAK_FUNC(sub_82E7A4C0);
PPC_FUNC_IMPL(__imp__sub_82E7A4C0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x82e7a5c8
	if (!cr6.eq) goto loc_82E7A5C8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,6(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e7a5c8
	if (!cr0.eq) goto loc_82E7A5C8;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x82e7a538
	if (!cr6.eq) goto loc_82E7A538;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r11,6(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82e7a538
	if (!cr0.eq) goto loc_82E7A538;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82e7a53c
	goto loc_82E7A53C;
loc_82E7A538:
	// li r11,-1
	r11.s64 = -1;
loc_82E7A53C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82e7a54c
	if (!cr6.lt) goto loc_82E7A54C;
	// li r31,-1
	r31.s64 = -1;
	// b 0x82e7a570
	goto loc_82E7A570;
loc_82E7A54C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82e7a56c
	if (cr0.eq) goto loc_82E7A56C;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// b 0x82e7a570
	goto loc_82E7A570;
loc_82E7A56C:
	// li r31,0
	r31.s64 = 0;
loc_82E7A570:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x82e7a594
	if (!cr6.eq) goto loc_82E7A594;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82e7a594
	if (!cr0.eq) goto loc_82E7A594;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x82e7a598
	goto loc_82E7A598;
loc_82E7A594:
	// li r11,0
	r11.s64 = 0;
loc_82E7A598:
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// bl 0x82e787e8
	sub_82E787E8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r4,r11,-6508
	ctx.r4.s64 = r11.s64 + -6508;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e787a0
	sub_82E787A0(ctx, base);
loc_82E7A5C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E7A5D0"))) PPC_WEAK_FUNC(sub_82E7A5D0);
PPC_FUNC_IMPL(__imp__sub_82E7A5D0) {
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
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7a674
	if (cr0.eq) goto loc_82E7A674;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82e7a610
	if (cr6.eq) goto loc_82E7A610;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82e731e0
	sub_82E731E0(ctx, base);
loc_82E7A610:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r10,-16(r11)
	PPC_STORE_U64(r11.u32 + -16, ctx.r10.u64);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r10.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bgt cr6,0x82e7a658
	if (cr6.gt) goto loc_82E7A658;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72a60
	sub_82E72A60(ctx, base);
loc_82E7A658:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r4,r11,-32
	ctx.r4.s64 = r11.s64 + -32;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82e73540
	sub_82E73540(ctx, base);
loc_82E7A674:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e731e0
	sub_82E731E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7A698"))) PPC_WEAK_FUNC(sub_82E7A698);
PPC_FUNC_IMPL(__imp__sub_82E7A698) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82e78568
	sub_82E78568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7a4c0
	sub_82E7A4C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7a5d0
	sub_82E7A5D0(ctx, base);
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

__attribute__((alias("__imp__sub_82E7A700"))) PPC_WEAK_FUNC(sub_82E7A700);
PPC_FUNC_IMPL(__imp__sub_82E7A700) {
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
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-6120
	r11.s64 = r11.s64 + -6120;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// lwzx r29,r9,r11
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x82e7a750
	goto loc_82E7A750;
loc_82E7A744:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82e7a75c
	if (cr6.eq) goto loc_82E7A75C;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_82E7A750:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82e7a744
	if (cr6.lt) goto loc_82E7A744;
	// b 0x82e7a778
	goto loc_82E7A778;
loc_82E7A75C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r5,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r5.s64 = r11.s32 >> 4;
	// bl 0x82e7a2c8
	sub_82E7A2C8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82E7A778:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82e7a7a0
	if (cr6.eq) goto loc_82E7A7A0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r4,r11,-6468
	ctx.r4.s64 = r11.s64 + -6468;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
	// b 0x82e7a7b0
	goto loc_82E7A7B0;
loc_82E7A7A0:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r11,-6496
	ctx.r4.s64 = r11.s64 + -6496;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E7A7B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E7A7B8"))) PPC_WEAK_FUNC(sub_82E7A7B8);
PPC_FUNC_IMPL(__imp__sub_82E7A7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e7a7c8
	if (!cr6.eq) goto loc_82E7A7C8;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
loc_82E7A7C8:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r5,r11,-6432
	ctx.r5.s64 = r11.s64 + -6432;
	// b 0x82e7a700
	sub_82E7A700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7A7D8"))) PPC_WEAK_FUNC(sub_82E7A7D8);
PPC_FUNC_IMPL(__imp__sub_82E7A7D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82e7a9d8
	sub_82E7A9D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e7a808
	if (!cr0.eq) goto loc_82E7A808;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82E7A808:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,-6420
	ctx.r5.s64 = r11.s64 + -6420;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a700
	sub_82E7A700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E7A828"))) PPC_WEAK_FUNC(sub_82E7A828);
PPC_FUNC_IMPL(__imp__sub_82E7A828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,-6120
	r11.s64 = r11.s64 + -6120;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lbz r11,2(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r10,2(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82e7a874
	if (!cr6.eq) goto loc_82E7A874;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,-6364
	ctx.r4.s64 = r11.s64 + -6364;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
	// b 0x82e7a880
	goto loc_82E7A880;
loc_82E7A874:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,-6396
	ctx.r4.s64 = r11.s64 + -6396;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E7A880:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7A898"))) PPC_WEAK_FUNC(sub_82E7A898);
PPC_FUNC_IMPL(__imp__sub_82E7A898) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-6072
	r11.s64 = r11.s64 + -6072;
	// li r31,188
	r31.s64 = 188;
	// addi r29,r11,-188
	r29.s64 = r11.s64 + -188;
loc_82E7A8B8:
	// lwzx r4,r29,r31
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82E7A8C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e7a8c4
	if (!cr6.eq) goto loc_82E7A8C4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82e7d4b8
	sub_82E7D4B8(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stwx r3,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r3.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r31,256
	cr6.compare<int32_t>(r31.s32, 256, xer);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// blt cr6,0x82e7a8b8
	if (cr6.lt) goto loc_82E7A8B8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E7A918"))) PPC_WEAK_FUNC(sub_82E7A918);
PPC_FUNC_IMPL(__imp__sub_82E7A918) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82e7cb18
	sub_82E7CB18(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7a960
	if (!cr6.eq) goto loc_82E7A960;
	// li r11,1
	r11.s64 = 1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// li r3,0
	ctx.r3.s64 = 0;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
loc_82E7A960:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7A978"))) PPC_WEAK_FUNC(sub_82E7A978);
PPC_FUNC_IMPL(__imp__sub_82E7A978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82e7a9a0
	if (cr6.eq) goto loc_82E7A9A0;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x82e7a9a0
	if (cr6.eq) goto loc_82E7A9A0;
	// addi r11,r11,38
	r11.s64 = r11.s64 + 38;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x82e7a9a8
	goto loc_82E7A9A8;
loc_82E7A9A0:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82E7A9A8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e7a9c8
	if (cr6.eq) goto loc_82E7A9C8;
	// addi r10,r5,47
	ctx.r10.s64 = ctx.r5.s64 + 47;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// b 0x82e7cb18
	sub_82E7CB18(ctx, base);
	return;
loc_82E7A9C8:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-6872
	ctx.r3.s64 = r11.s64 + -6872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7A9D8"))) PPC_WEAK_FUNC(sub_82E7A9D8);
PPC_FUNC_IMPL(__imp__sub_82E7A9D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82e7aa34
	if (cr6.eq) goto loc_82E7AA34;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e7aa30
	if (!cr6.eq) goto loc_82E7AA30;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82e783f0
	sub_82E783F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e7aa30
	if (cr0.eq) goto loc_82E7AA30;
	// li r11,3
	r11.s64 = 3;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82e7aa34
	goto loc_82E7AA34;
loc_82E7AA30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E7AA34:
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

__attribute__((alias("__imp__sub_82E7AA48"))) PPC_WEAK_FUNC(sub_82E7AA48);
PPC_FUNC_IMPL(__imp__sub_82E7AA48) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82e7aa78
	if (cr6.eq) goto loc_82E7AA78;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e7aad8
	goto loc_82E7AAD8;
loc_82E7AA78:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// addi r4,r11,-6004
	ctx.r4.s64 = r11.s64 + -6004;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82E7AA9C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e7aa9c
	if (!cr6.eq) goto loc_82E7AA9C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x82e7d4b8
	sub_82E7D4B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82E7AAD8:
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

__attribute__((alias("__imp__sub_82E7AAF0"))) PPC_WEAK_FUNC(sub_82E7AAF0);
PPC_FUNC_IMPL(__imp__sub_82E7AAF0) {
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
	// ld r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// subf r30,r9,r4
	r30.s64 = ctx.r4.s64 - ctx.r9.s64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r10,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r10.u64);
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,32(r11)
	PPC_STORE_U64(r11.u32 + 32, ctx.r10.u64);
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bgt cr6,0x82e7ab68
	if (cr6.gt) goto loc_82E7AB68;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82e72a60
	sub_82E72A60(ctx, base);
loc_82E7AB68:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// addi r4,r11,-48
	ctx.r4.s64 = r11.s64 + -48;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82e73540
	sub_82E73540(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7ABC0"))) PPC_WEAK_FUNC(sub_82E7ABC0);
PPC_FUNC_IMPL(__imp__sub_82E7ABC0) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// addi r24,r11,8992
	r24.s64 = r11.s64 + 8992;
loc_82E7ABE8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82e7ac58
	if (!cr6.eq) goto loc_82E7AC58;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7cb70
	sub_82E7CB70(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7ac44
	if (!cr6.eq) goto loc_82E7AC44;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e7ac44
	if (cr0.eq) goto loc_82E7AC44;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e7ac44
	if (!cr0.eq) goto loc_82E7AC44;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,188(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x82e7a918
	sub_82E7A918(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82e7ac88
	if (!cr0.eq) goto loc_82E7AC88;
loc_82E7AC44:
	// ld r11,0(r28)
	r11.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// std r11,0(r25)
	PPC_STORE_U64(r25.u32 + 0, r11.u64);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// b 0x82e7acb4
	goto loc_82E7ACB4;
loc_82E7AC58:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a978
	sub_82E7A978(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7ac88
	if (!cr6.eq) goto loc_82E7AC88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a700
	sub_82E7A700(ctx, base);
loc_82E7AC88:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82e7acbc
	if (cr6.eq) goto loc_82E7ACBC;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r26,100
	cr6.compare<int32_t>(r26.s32, 100, xer);
	// blt cr6,0x82e7abe8
	if (cr6.lt) goto loc_82E7ABE8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5996
	ctx.r4.s64 = r11.s64 + -5996;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E7ACB4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_82E7ACBC:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7aaf0
	sub_82E7AAF0(ctx, base);
	// b 0x82e7acb4
	goto loc_82E7ACB4;
}

__attribute__((alias("__imp__sub_82E7ACD8"))) PPC_WEAK_FUNC(sub_82E7ACD8);
PPC_FUNC_IMPL(__imp__sub_82E7ACD8) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r24,0
	r24.s64 = 0;
	// addi r23,r11,8992
	r23.s64 = r11.s64 + 8992;
loc_82E7AD00:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82e7ada8
	if (!cr6.eq) goto loc_82E7ADA8;
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82e7cc38
	sub_82E7CC38(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7ad60
	if (!cr6.eq) goto loc_82E7AD60;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e7ad60
	if (cr0.eq) goto loc_82E7AD60;
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e7ad60
	if (!cr0.eq) goto loc_82E7AD60;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,192(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// bl 0x82e7a918
	sub_82E7A918(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82e7add4
	if (!cr0.eq) goto loc_82E7ADD4;
loc_82E7AD60:
	// ld r11,0(r25)
	r11.u64 = PPC_LOAD_U64(r25.u32 + 0);
	// std r11,0(r26)
	PPC_STORE_U64(r26.u32 + 0, r11.u64);
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82e7ae00
	if (cr6.lt) goto loc_82E7AE00;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbz r11,5(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7ae00
	if (cr0.eq) goto loc_82E7AE00;
	// lbz r11,5(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7ae00
	if (cr0.eq) goto loc_82E7AE00;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e79d28
	sub_82E79D28(ctx, base);
	// b 0x82e7ae00
	goto loc_82E7AE00;
loc_82E7ADA8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e7a978
	sub_82E7A978(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7add4
	if (!cr6.eq) goto loc_82E7ADD4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7a700
	sub_82E7A700(ctx, base);
loc_82E7ADD4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82e7ae08
	if (cr6.eq) goto loc_82E7AE08;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r24,100
	cr6.compare<int32_t>(r24.s32, 100, xer);
	// blt cr6,0x82e7ad00
	if (cr6.lt) goto loc_82E7AD00;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-5976
	ctx.r4.s64 = r11.s64 + -5976;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E7AE00:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
loc_82E7AE08:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// std r10,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r10.u64);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// std r10,32(r11)
	PPC_STORE_U64(r11.u32 + 32, ctx.r10.u64);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ld r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U64(r25.u32 + 0);
	// std r10,48(r11)
	PPC_STORE_U64(r11.u32 + 48, ctx.r10.u64);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bgt cr6,0x82e7ae78
	if (cr6.gt) goto loc_82E7AE78;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e72a60
	sub_82E72A60(ctx, base);
loc_82E7AE78:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// addi r4,r11,-64
	ctx.r4.s64 = r11.s64 + -64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82e73540
	sub_82E73540(ctx, base);
	// b 0x82e7ae00
	goto loc_82E7AE00;
}

__attribute__((alias("__imp__sub_82E7AE98"))) PPC_WEAK_FUNC(sub_82E7AE98);
PPC_FUNC_IMPL(__imp__sub_82E7AE98) {
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82e7a978
	sub_82E7A978(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7aedc
	if (!cr6.eq) goto loc_82E7AEDC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7a978
	sub_82E7A978(ctx, base);
loc_82E7AEDC:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7aef0
	if (!cr6.eq) goto loc_82E7AEF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e7af0c
	goto loc_82E7AF0C;
loc_82E7AEF0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7aaf0
	sub_82E7AAF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E7AF0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E7AF18"))) PPC_WEAK_FUNC(sub_82E7AF18);
PPC_FUNC_IMPL(__imp__sub_82E7AF18) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82e7afc8
	if (cr6.eq) goto loc_82E7AFC8;
	// li r11,1
	r11.s64 = 1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// slw r25,r11,r30
	r25.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// and. r11,r10,r25
	r11.u64 = ctx.r10.u64 & r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e7afc8
	if (!cr0.eq) goto loc_82E7AFC8;
	// addi r11,r30,47
	r11.s64 = r30.s64 + 47;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// bl 0x82e7a918
	sub_82E7A918(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x82e7afc8
	if (cr0.eq) goto loc_82E7AFC8;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bne cr6,0x82e7af84
	if (!cr6.eq) goto loc_82E7AF84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x82e7afcc
	goto loc_82E7AFCC;
loc_82E7AF84:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82e7afc8
	if (cr6.eq) goto loc_82E7AFC8;
	// lbz r11,6(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 6);
	// and. r11,r11,r25
	r11.u64 = r11.u64 & r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e7afc8
	if (!cr0.eq) goto loc_82E7AFC8;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82e7a918
	sub_82E7A918(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e7afc8
	if (cr0.eq) goto loc_82E7AFC8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e78388
	sub_82E78388(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bne 0x82e7afcc
	if (!cr0.eq) goto loc_82E7AFCC;
loc_82E7AFC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E7AFCC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82E7AFD8"))) PPC_WEAK_FUNC(sub_82E7AFD8);
PPC_FUNC_IMPL(__imp__sub_82E7AFD8) {
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x82e7a978
	sub_82E7A978(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7b014
	if (!cr6.eq) goto loc_82E7B014;
loc_82E7B00C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82e7b080
	goto loc_82E7B080;
loc_82E7B014:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7a978
	sub_82E7A978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e78388
	sub_82E78388(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e7b00c
	if (cr0.eq) goto loc_82E7B00C;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7aaf0
	sub_82E7AAF0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7b07c
	if (cr0.eq) goto loc_82E7B07C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82e7b074
	if (!cr6.eq) goto loc_82E7B074;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e7b07c
	if (cr6.eq) goto loc_82E7B07C;
loc_82E7B074:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e7b080
	goto loc_82E7B080;
loc_82E7B07C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E7B080:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E7B088"))) PPC_WEAK_FUNC(sub_82E7B088);
PPC_FUNC_IMPL(__imp__sub_82E7B088) {
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
	// lwz r28,12(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// lwz r29,12(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r30,r4,16
	r30.s64 = ctx.r4.s64 + 16;
	// b 0x82e7b0f0
	goto loc_82E7B0F0;
loc_82E7B0A8:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82E7B0B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82e7b0b0
	if (!cr6.eq) goto loc_82E7B0B0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82e7b108
	if (cr6.eq) goto loc_82E7B108;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x82e7b11c
	if (cr6.eq) goto loc_82E7B11C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// subf r28,r11,r28
	r28.s64 = r28.s64 - r11.s64;
	// subf r29,r11,r29
	r29.s64 = r29.s64 - r11.s64;
loc_82E7B0F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b9e28
	sub_831B9E28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e7b0a8
	if (cr0.eq) goto loc_82E7B0A8;
	// b 0x82e7b120
	goto loc_82E7B120;
loc_82E7B108:
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// b 0x82e7b120
	goto loc_82E7B120;
loc_82E7B11C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E7B120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E7B128"))) PPC_WEAK_FUNC(sub_82E7B128);
PPC_FUNC_IMPL(__imp__sub_82E7B128) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82e7b1b4
	if (!cr6.eq) goto loc_82E7B1B4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7b174
	if (!cr6.eq) goto loc_82E7B174;
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,0(r30)
	ctx.f13.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82e7b1c4
	if (cr6.lt) goto loc_82E7B1C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e7b1c4
	goto loc_82E7B1C4;
loc_82E7B174:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e7b198
	if (!cr6.eq) goto loc_82E7B198;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e7b088
	sub_82E7B088(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82e7b1c4
	goto loc_82E7B1C4;
loc_82E7B198:
	// li r6,13
	ctx.r6.s64 = 13;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7afd8
	sub_82E7AFD8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82e7b1c4
	if (!cr6.eq) goto loc_82E7B1C4;
loc_82E7B1B4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a828
	sub_82E7A828(ctx, base);
loc_82E7B1C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E7B1D0"))) PPC_WEAK_FUNC(sub_82E7B1D0);
PPC_FUNC_IMPL(__imp__sub_82E7B1D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82e7b284
	if (cr6.lt) goto loc_82E7B284;
	// beq cr6,0x82e7b2ac
	if (cr6.eq) goto loc_82E7B2AC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82e7b2ac
	if (cr6.lt) goto loc_82E7B2AC;
	// beq cr6,0x82e7b290
	if (cr6.eq) goto loc_82E7B290;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82e7b220
	if (cr6.eq) goto loc_82E7B220;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bne cr6,0x82e7b2b4
	if (!cr6.eq) goto loc_82E7B2B4;
	// b 0x82e7b224
	goto loc_82E7B224;
loc_82E7B220:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82E7B224:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82e7b284
	if (cr6.eq) goto loc_82E7B284;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82e7af18
	sub_82E7AF18(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82e7b2a4
	if (cr6.eq) goto loc_82E7B2A4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7aaf0
	sub_82E7AAF0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7b2a4
	if (cr0.eq) goto loc_82E7B2A4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82e7b284
	if (!cr6.eq) goto loc_82E7B284;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e7b2a4
	if (cr6.eq) goto loc_82E7B2A4;
loc_82E7B284:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82E7B288:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82E7B290:
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,0(r29)
	ctx.f13.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82e7b288
	if (cr6.eq) goto loc_82E7B288;
loc_82E7B2A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e7b288
	goto loc_82E7B288;
loc_82E7B2AC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_82E7B2B4:
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82e7b288
	goto loc_82E7B288;
}

__attribute__((alias("__imp__sub_82E7B2C8"))) PPC_WEAK_FUNC(sub_82E7B2C8);
PPC_FUNC_IMPL(__imp__sub_82E7B2C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// addi r21,r11,-5956
	r21.s64 = r11.s64 + -5956;
loc_82E7B2E8:
	// addi r11,r22,1
	r11.s64 = r22.s64 + 1;
	// lwz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// li r30,2
	r30.s64 = 2;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r25,r11,r10
	r25.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82e7b310
	if (cr6.eq) goto loc_82E7B310;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7b330
	if (!cr6.eq) goto loc_82E7B330;
loc_82E7B310:
	// lwz r11,-8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82e7b36c
	if (cr6.eq) goto loc_82E7B36C;
	// addi r4,r25,-16
	ctx.r4.s64 = r25.s64 + -16;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82e7aa48
	sub_82E7AA48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e7b36c
	if (!cr0.eq) goto loc_82E7B36C;
loc_82E7B330:
	// addi r31,r25,-32
	r31.s64 = r25.s64 + -32;
	// addi r29,r25,-16
	r29.s64 = r25.s64 + -16;
	// li r7,15
	ctx.r7.s64 = 15;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e7ae98
	sub_82E7AE98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e7b478
	if (!cr0.eq) goto loc_82E7B478;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82e7a7b8
	sub_82E7A7B8(ctx, base);
	// b 0x82e7b478
	goto loc_82E7B478;
loc_82E7B36C:
	// lwz r11,-16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -16);
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82e7b398
	if (!cr0.eq) goto loc_82E7B398;
	// lwz r11,-24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82e7b478
	if (cr6.eq) goto loc_82E7B478;
	// addi r4,r25,-32
	ctx.r4.s64 = r25.s64 + -32;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82e7aa48
	sub_82E7AA48(ctx, base);
	// b 0x82e7b478
	goto loc_82E7B478;
loc_82E7B398:
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// ble cr6,0x82e7b3fc
	if (!cr6.gt) goto loc_82E7B3FC;
	// addi r29,r25,-32
	r29.s64 = r25.s64 + -32;
loc_82E7B3A8:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82e7b3c8
	if (cr6.eq) goto loc_82E7B3C8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82e7aa48
	sub_82E7AA48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82e7b3fc
	if (cr0.eq) goto loc_82E7B3FC;
loc_82E7B3C8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subfic r10,r31,-3
	xer.ca = r31.u32 <= 4294967293;
	ctx.r10.s64 = -3 - r31.s64;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e7b3e8
	if (cr6.lt) goto loc_82E7B3E8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E7B3E8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// cmpw cr6,r30,r23
	cr6.compare<int32_t>(r30.s32, r23.s32, xer);
	// blt cr6,0x82e7b3a8
	if (cr6.lt) goto loc_82E7B3A8;
loc_82E7B3FC:
	// lwz r11,16(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bl 0x82e7dd28
	sub_82E7DD28(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82e7b454
	if (!cr6.gt) goto loc_82E7B454;
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r28,r11,r25
	r28.s64 = r25.s64 - r11.s64;
loc_82E7B42C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r3,r26,r31
	ctx.r3.u64 = r26.u64 + r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bgt 0x82e7b42c
	if (cr0.gt) goto loc_82E7B42C;
loc_82E7B454:
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// subf r31,r11,r25
	r31.s64 = r25.s64 - r11.s64;
	// bl 0x82e7d4b8
	sub_82E7D4B8(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82E7B478:
	// subf r11,r30,r23
	r11.s64 = r23.s64 - r30.s64;
	// subf r10,r30,r22
	ctx.r10.s64 = r22.s64 - r30.s64;
	// addi r23,r11,1
	r23.s64 = r11.s64 + 1;
	// addi r22,r10,1
	r22.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// bgt cr6,0x82e7b2e8
	if (cr6.gt) goto loc_82E7B2E8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82E7B498"))) PPC_WEAK_FUNC(sub_82E7B498);
PPC_FUNC_IMPL(__imp__sub_82E7B498) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x82e7a9d8
	sub_82E7A9D8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82e7b58c
	if (cr0.eq) goto loc_82E7B58C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e7a9d8
	sub_82E7A9D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e7b58c
	if (cr0.eq) goto loc_82E7B58C;
	// lfd f31,0(r27)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(r27.u32 + 0);
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// lfd f30,0(r3)
	f30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// beq cr6,0x82e7b578
	if (cr6.eq) goto loc_82E7B578;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(r30.s32, 6, xer);
	// beq cr6,0x82e7b570
	if (cr6.eq) goto loc_82E7B570;
	// cmpwi cr6,r30,7
	cr6.compare<int32_t>(r30.s32, 7, xer);
	// beq cr6,0x82e7b568
	if (cr6.eq) goto loc_82E7B568;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// beq cr6,0x82e7b560
	if (cr6.eq) goto loc_82E7B560;
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(r30.s32, 9, xer);
	// beq cr6,0x82e7b544
	if (cr6.eq) goto loc_82E7B544;
	// cmpwi cr6,r30,10
	cr6.compare<int32_t>(r30.s32, 10, xer);
	// beq cr6,0x82e7b530
	if (cr6.eq) goto loc_82E7B530;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(r30.s32, 11, xer);
	// bne cr6,0x82e7b5bc
	if (!cr6.eq) goto loc_82E7B5BC;
	// fneg f0,f31
	f0.u64 = f31.u64 ^ 0x8000000000000000;
	// b 0x82e7b57c
	goto loc_82E7B57C;
loc_82E7B530:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
	// stfd f1,0(r28)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r28.u32 + 0, ctx.f1.u64);
	// b 0x82e7b580
	goto loc_82E7B580;
loc_82E7B544:
	// fdiv f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 / f30.f64;
	// bl 0x831b47b8
	sub_831B47B8(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// fnmsub f0,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = -(ctx.f1.f64 * f30.f64 - f31.f64);
	// stfd f0,0(r28)
	PPC_STORE_U64(r28.u32 + 0, f0.u64);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// b 0x82e7b5bc
	goto loc_82E7B5BC;
loc_82E7B560:
	// fdiv f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 / f30.f64;
	// b 0x82e7b57c
	goto loc_82E7B57C;
loc_82E7B568:
	// fmul f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f30.f64 * f31.f64;
	// b 0x82e7b57c
	goto loc_82E7B57C;
loc_82E7B570:
	// fsub f0,f31,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 - f30.f64;
	// b 0x82e7b57c
	goto loc_82E7B57C;
loc_82E7B578:
	// fadd f0,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f30.f64 + f31.f64;
loc_82E7B57C:
	// stfd f0,0(r28)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r28.u32 + 0, f0.u64);
loc_82E7B580:
	// li r11,3
	r11.s64 = 3;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// b 0x82e7b5bc
	goto loc_82E7B5BC;
loc_82E7B58C:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e7ae98
	sub_82E7AE98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e7b5bc
	if (!cr0.eq) goto loc_82E7B5BC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e7a7d8
	sub_82E7A7D8(ctx, base);
loc_82E7B5BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82E7B5D0"))) PPC_WEAK_FUNC(sub_82E7B5D0);
PPC_FUNC_IMPL(__imp__sub_82E7B5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r14,r11,-5764
	r14.s64 = r11.s64 + -5764;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-5796
	r11.s64 = r11.s64 + -5796;
	// lfd f29,-8872(r10)
	f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8872);
	// li r18,0
	r18.s64 = 0;
	// li r16,1
	r16.s64 = 1;
	// li r19,5
	r19.s64 = 5;
	// li r20,3
	r20.s64 = 3;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-5836
	r11.s64 = r11.s64 + -5836;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r15,r11,-5852
	r15.s64 = r11.s64 + -5852;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r17,r11,-6872
	r17.s64 = r11.s64 + -6872;
	// lis r11,1
	r11.s64 = 65536;
	// ori r21,r11,65535
	r21.u64 = r11.u64 | 65535;
loc_82E7B640:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r24,24(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r22,0(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 16);
	// lwz r23,8(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82E7B658:
	// lwz r25,12(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_82E7B65C:
	// lbz r11,54(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 54);
	// lwz r29,0(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwinm. r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e7b75c
	if (cr0.eq) goto loc_82E7B75C;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r9,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r9.u32);
	// beq 0x82e7b68c
	if (cr0.eq) goto loc_82E7B68C;
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7b75c
	if (cr0.eq) goto loc_82E7B75C;
loc_82E7B68C:
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// lwz r28,24(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// ble cr6,0x82e7b6c0
	if (!cr6.gt) goto loc_82E7B6C0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82e7b6c0
	if (!cr6.eq) goto loc_82E7B6C0;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// bl 0x82e72a80
	sub_82E72A80(ctx, base);
loc_82E7B6C0:
	// rlwinm. r11,r31,0,29,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7b74c
	if (cr0.eq) goto loc_82E7B74C;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// subf r10,r9,r24
	ctx.r10.s64 = r24.s64 - ctx.r9.s64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq 0x82e7b700
	if (cr0.eq) goto loc_82E7B700;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r8,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// b 0x82e7b704
	goto loc_82E7B704;
loc_82E7B700:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
loc_82E7B704:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e7b740
	if (cr6.eq) goto loc_82E7B740;
	// cmplw cr6,r24,r28
	cr6.compare<uint32_t>(r24.u32, r28.u32, xer);
	// ble cr6,0x82e7b740
	if (!cr6.gt) goto loc_82E7B740;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e7b734
	if (cr6.eq) goto loc_82E7B734;
	// subf r10,r9,r28
	ctx.r10.s64 = r28.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// b 0x82e7b738
	goto loc_82E7B738;
loc_82E7B734:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_82E7B738:
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// beq cr6,0x82e7b74c
	if (cr6.eq) goto loc_82E7B74C;
loc_82E7B740:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e72a80
	sub_82E72A80(ctx, base);
loc_82E7B74C:
	// lbz r11,6(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 6);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82e7c600
	if (cr6.eq) goto loc_82E7C600;
	// lwz r25,12(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_82E7B75C:
	// rlwinm r26,r29,26,24,31
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 26) & 0xFF;
	// clrlwi r11,r29,26
	r11.u64 = r29.u32 & 0x3F;
	// rlwinm r27,r26,4,0,27
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// add r31,r27,r25
	r31.u64 = r27.u64 + r25.u64;
	// bgt cr6,0x82e7b65c
	if (cr6.gt) goto loc_82E7B65C;
	// lis r12,-32238
	r12.s64 = -2112749568;
	// addi r12,r12,-5928
	r12.s64 = r12.s64 + -5928;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32024
	r12.s64 = -2098724864;
	// addi r12,r12,-18852
	r12.s64 = r12.s64 + -18852;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82E7B79C;
	case 1:
		goto loc_82E7B7B8;
	case 2:
		goto loc_82E7B7C4;
	case 3:
		goto loc_82E7B7DC;
	case 4:
		goto loc_82E7B7F8;
	case 5:
		goto loc_82E7B810;
	case 6:
		goto loc_82E7B830;
	case 7:
		goto loc_82E7B860;
	case 8:
		goto loc_82E7B884;
	case 9:
		goto loc_82E7B8DC;
	case 10:
		goto loc_82E7B930;
	case 11:
		goto loc_82E7B960;
	case 12:
		goto loc_82E7B9AC;
	case 13:
		goto loc_82E7BA24;
	case 14:
		goto loc_82E7BA94;
	case 15:
		goto loc_82E7BB04;
	case 16:
		goto loc_82E7BB74;
	case 17:
		goto loc_82E7BBEC;
	case 18:
		goto loc_82E7BC60;
	case 19:
		goto loc_82E7BC9C;
	case 20:
		goto loc_82E7BCDC;
	case 21:
		goto loc_82E7BD68;
	case 22:
		goto loc_82E7C1A0;
	case 23:
		goto loc_82E7BDC4;
	case 24:
		goto loc_82E7BE38;
	case 25:
		goto loc_82E7BE88;
	case 26:
		goto loc_82E7BF9C;
	case 27:
		goto loc_82E7BFD8;
	case 28:
		goto loc_82E7C02C;
	case 29:
		goto loc_82E7C080;
	case 30:
		goto loc_82E7C598;
	case 31:
		goto loc_82E7C0B8;
	case 32:
		goto loc_82E7C104;
	case 33:
		goto loc_82E7C1B4;
	case 34:
		goto loc_82E7C254;
	case 35:
		goto loc_82E7C33C;
	case 36:
		goto loc_82E7C34C;
	case 37:
		goto loc_82E7C400;
	default:
		__builtin_unreachable();
	}
loc_82E7B79C:
	// rlwinm r11,r29,13,19,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 13) & 0x1FF0;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
loc_82E7B7A4:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7B7B8:
	// rlwinm r11,r29,22,10,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 22) & 0x3FFFF0;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// b 0x82e7b7a4
	goto loc_82E7B7A4;
loc_82E7B7C4:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// stw r16,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r16.u32);
	// rlwinm. r10,r29,0,9,17
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x7FC000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82e7b65c
	if (cr0.eq) goto loc_82E7B65C;
	// b 0x82e7c24c
	goto loc_82E7C24C;
loc_82E7B7DC:
	// rlwinm r11,r29,13,19,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 13) & 0x1FF0;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
loc_82E7B7E4:
	// stw r18,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r18.u32);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x82e7b7e4
	if (!cr6.lt) goto loc_82E7B7E4;
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7B7F8:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	r11.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82e7b7a4
	goto loc_82E7B7A4;
loc_82E7B810:
	// lwz r11,12(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r19.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// rlwinm r11,r29,22,10,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 22) & 0x3FFFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7b99c
	goto loc_82E7B99C;
loc_82E7B830:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7b84c
	if (cr0.eq) goto loc_82E7B84C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7b854
	goto loc_82E7B854;
loc_82E7B84C:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_82E7B854:
	// rlwinm r11,r29,13,19,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 13) & 0x1FF0;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// b 0x82e7b99c
	goto loc_82E7B99C;
loc_82E7B860:
	// lwz r11,12(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// stw r19,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r19.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// rlwinm r11,r29,22,10,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 22) & 0x3FFFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7b924
	goto loc_82E7B924;
loc_82E7B884:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r22
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82e7b65c
	if (cr6.lt) goto loc_82E7B65C;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,5(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7b65c
	if (cr0.eq) goto loc_82E7B65C;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7b65c
	if (cr0.eq) goto loc_82E7B65C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e79cf0
	sub_82E79CF0(ctx, base);
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7B8DC:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7b8f8
	if (cr0.eq) goto loc_82E7B8F8;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x82e7b900
	goto loc_82E7B900;
loc_82E7B8F8:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_82E7B900:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7b918
	if (cr0.eq) goto loc_82E7B918;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7b920
	goto loc_82E7B920;
loc_82E7B918:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_82E7B920:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82E7B924:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7acd8
	sub_82E7ACD8(ctx, base);
	// b 0x82e7b658
	goto loc_82E7B658;
loc_82E7B930:
	// rlwinm r3,r29,18,23,31
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x1FF;
	// bl 0x82e78338
	sub_82E78338(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r3,r29,9,23,31
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// bl 0x82e78338
	sub_82E78338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82e7c930
	sub_82E7C930(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r19,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r19.u32);
	// b 0x82e7c3dc
	goto loc_82E7C3DC;
loc_82E7B960:
	// rlwinm r11,r29,13,19,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 13) & 0x1FF0;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// rlwinm. r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e7b994
	if (cr0.eq) goto loc_82E7B994;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7b99c
	goto loc_82E7B99C;
loc_82E7B994:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_82E7B99C:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7abc0
	sub_82E7ABC0(ctx, base);
	// b 0x82e7b658
	goto loc_82E7B658;
loc_82E7B9AC:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7b9c4
	if (cr0.eq) goto loc_82E7B9C4;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7b9cc
	goto loc_82E7B9CC;
loc_82E7B9C4:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_82E7B9CC:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7b9e4
	if (cr0.eq) goto loc_82E7B9E4;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x82e7b9ec
	goto loc_82E7B9EC;
loc_82E7B9E4:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_82E7B9EC:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7ba1c
	if (!cr6.eq) goto loc_82E7BA1C;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7ba1c
	if (!cr6.eq) goto loc_82E7BA1C;
	// lfd f0,0(r6)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lfd f13,0(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
loc_82E7BA10:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
loc_82E7BA14:
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7BA1C:
	// li r7,5
	ctx.r7.s64 = 5;
	// b 0x82e7bc88
	goto loc_82E7BC88;
loc_82E7BA24:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7ba3c
	if (cr0.eq) goto loc_82E7BA3C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7ba44
	goto loc_82E7BA44;
loc_82E7BA3C:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_82E7BA44:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7ba5c
	if (cr0.eq) goto loc_82E7BA5C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x82e7ba64
	goto loc_82E7BA64;
loc_82E7BA5C:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_82E7BA64:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7ba8c
	if (!cr6.eq) goto loc_82E7BA8C;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7ba8c
	if (!cr6.eq) goto loc_82E7BA8C;
	// lfd f0,0(r5)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f13,0(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// fsub f0,f0,f13
	f0.f64 = f0.f64 - ctx.f13.f64;
	// b 0x82e7ba10
	goto loc_82E7BA10;
loc_82E7BA8C:
	// li r7,6
	ctx.r7.s64 = 6;
	// b 0x82e7bc88
	goto loc_82E7BC88;
loc_82E7BA94:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7baac
	if (cr0.eq) goto loc_82E7BAAC;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7bab4
	goto loc_82E7BAB4;
loc_82E7BAAC:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_82E7BAB4:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7bacc
	if (cr0.eq) goto loc_82E7BACC;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x82e7bad4
	goto loc_82E7BAD4;
loc_82E7BACC:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_82E7BAD4:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7bafc
	if (!cr6.eq) goto loc_82E7BAFC;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7bafc
	if (!cr6.eq) goto loc_82E7BAFC;
	// lfd f0,0(r6)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// lfd f13,0(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fmul f0,f0,f13
	f0.f64 = f0.f64 * ctx.f13.f64;
	// b 0x82e7ba10
	goto loc_82E7BA10;
loc_82E7BAFC:
	// li r7,7
	ctx.r7.s64 = 7;
	// b 0x82e7bc88
	goto loc_82E7BC88;
loc_82E7BB04:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7bb1c
	if (cr0.eq) goto loc_82E7BB1C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7bb24
	goto loc_82E7BB24;
loc_82E7BB1C:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_82E7BB24:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7bb3c
	if (cr0.eq) goto loc_82E7BB3C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x82e7bb44
	goto loc_82E7BB44;
loc_82E7BB3C:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_82E7BB44:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7bb6c
	if (!cr6.eq) goto loc_82E7BB6C;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7bb6c
	if (!cr6.eq) goto loc_82E7BB6C;
	// lfd f0,0(r5)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f13,0(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// fdiv f0,f0,f13
	f0.f64 = f0.f64 / ctx.f13.f64;
	// b 0x82e7ba10
	goto loc_82E7BA10;
loc_82E7BB6C:
	// li r7,8
	ctx.r7.s64 = 8;
	// b 0x82e7bc88
	goto loc_82E7BC88;
loc_82E7BB74:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7bb8c
	if (cr0.eq) goto loc_82E7BB8C;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7bb94
	goto loc_82E7BB94;
loc_82E7BB8C:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_82E7BB94:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7bbac
	if (cr0.eq) goto loc_82E7BBAC;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x82e7bbb4
	goto loc_82E7BBB4;
loc_82E7BBAC:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_82E7BBB4:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7bbe4
	if (!cr6.eq) goto loc_82E7BBE4;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7bbe4
	if (!cr6.eq) goto loc_82E7BBE4;
	// lfd f31,0(r5)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f30,0(r6)
	f30.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// fdiv f1,f31,f30
	ctx.f1.f64 = f31.f64 / f30.f64;
	// bl 0x831b47b8
	sub_831B47B8(ctx, base);
	// fnmsub f0,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = -(ctx.f1.f64 * f30.f64 - f31.f64);
	// b 0x82e7bd5c
	goto loc_82E7BD5C;
loc_82E7BBE4:
	// li r7,9
	ctx.r7.s64 = 9;
	// b 0x82e7bc88
	goto loc_82E7BC88;
loc_82E7BBEC:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7bc04
	if (cr0.eq) goto loc_82E7BC04;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7bc0c
	goto loc_82E7BC0C;
loc_82E7BC04:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_82E7BC0C:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7bc24
	if (cr0.eq) goto loc_82E7BC24;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r6,r11,r23
	ctx.r6.u64 = r11.u64 + r23.u64;
	// b 0x82e7bc2c
	goto loc_82E7BC2C;
loc_82E7BC24:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
loc_82E7BC2C:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7bc58
	if (!cr6.eq) goto loc_82E7BC58;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7bc58
	if (!cr6.eq) goto loc_82E7BC58;
	// lfd f1,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f2,0(r6)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// b 0x82e7ba14
	goto loc_82E7BA14;
loc_82E7BC58:
	// li r7,10
	ctx.r7.s64 = 10;
	// b 0x82e7bc88
	goto loc_82E7BC88;
loc_82E7BC60:
	// rlwinm r11,r29,13,19,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 13) & 0x1FF0;
	// add r6,r11,r25
	ctx.r6.u64 = r11.u64 + r25.u64;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7bc80
	if (!cr6.eq) goto loc_82E7BC80;
	// lfd f0,0(r6)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// b 0x82e7ba10
	goto loc_82E7BA10;
loc_82E7BC80:
	// li r7,11
	ctx.r7.s64 = 11;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82E7BC88:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7b498
	sub_82E7B498(ctx, base);
	// b 0x82e7b658
	goto loc_82E7B658;
loc_82E7BC9C:
	// rlwinm r11,r29,13,19,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 13) & 0x1FF0;
	// add r10,r11,r25
	ctx.r10.u64 = r11.u64 + r25.u64;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7bccc
	if (cr0.eq) goto loc_82E7BCCC;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82e7bcc4
	if (!cr6.eq) goto loc_82E7BCC4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e7bccc
	if (cr6.eq) goto loc_82E7BCCC;
loc_82E7BCC4:
	// mr r11,r18
	r11.u64 = r18.u64;
	// b 0x82e7bcd0
	goto loc_82E7BCD0;
loc_82E7BCCC:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82E7BCD0:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r16,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r16.u32);
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7BCDC:
	// rlwinm r11,r29,13,19,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 13) & 0x1FF0;
	// add r29,r11,r25
	r29.u64 = r11.u64 + r25.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x82e7bd48
	if (cr6.eq) goto loc_82E7BD48;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82e7bd30
	if (cr6.eq) goto loc_82E7BD30;
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ae98
	sub_82E7AE98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e7b658
	if (!cr0.eq) goto loc_82E7B658;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7a700
	sub_82E7A700(ctx, base);
	// b 0x82e7b658
	goto loc_82E7B658;
loc_82E7BD30:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82e7ce00
	sub_82E7CE00(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82e7bd58
	goto loc_82E7BD58;
loc_82E7BD48:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82E7BD58:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
loc_82E7BD5C:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7BD68:
	// rlwinm r5,r29,18,23,31
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x1FF;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// rlwinm r31,r29,9,23,31
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r11,r31,r5
	r11.s64 = ctx.r5.s64 - r31.s64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82e7b2c8
	sub_82E7B2C8(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e7bda0
	if (cr6.lt) goto loc_82E7BDA0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e79c30
	sub_82E79C30(ctx, base);
loc_82E7BDA0:
	// lwz r25,12(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// add r10,r27,r25
	ctx.r10.u64 = r27.u64 + r25.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7BDC4:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7bddc
	if (cr0.eq) goto loc_82E7BDDC;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// b 0x82e7bde4
	goto loc_82E7BDE4;
loc_82E7BDDC:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
loc_82E7BDE4:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7bdfc
	if (cr0.eq) goto loc_82E7BDFC;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7be04
	goto loc_82E7BE04;
loc_82E7BDFC:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_82E7BE04:
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82e7be2c
	if (!cr6.eq) goto loc_82E7BE2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7b1d0
	sub_82E7B1D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne 0x82e7be30
	if (!cr0.eq) goto loc_82E7BE30;
loc_82E7BE2C:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_82E7BE30:
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// b 0x82e7bf7c
	goto loc_82E7BF7C;
loc_82E7BE38:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7be54
	if (cr0.eq) goto loc_82E7BE54;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r5,r11,r23
	ctx.r5.u64 = r11.u64 + r23.u64;
	// b 0x82e7be5c
	goto loc_82E7BE5C;
loc_82E7BE54:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
loc_82E7BE5C:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7be74
	if (cr0.eq) goto loc_82E7BE74;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// b 0x82e7be7c
	goto loc_82E7BE7C;
loc_82E7BE74:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
loc_82E7BE7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7b128
	sub_82E7B128(ctx, base);
	// b 0x82e7bf78
	goto loc_82E7BF78;
loc_82E7BE88:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7bea4
	if (cr0.eq) goto loc_82E7BEA4;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r28,r11,r23
	r28.u64 = r11.u64 + r23.u64;
	// b 0x82e7beac
	goto loc_82E7BEAC;
loc_82E7BEA4:
	// rlwinm r11,r11,4,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1FF0;
	// add r28,r11,r25
	r28.u64 = r11.u64 + r25.u64;
loc_82E7BEAC:
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7bec4
	if (cr0.eq) goto loc_82E7BEC4;
	// rlwinm r11,r11,4,20,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFF0;
	// add r31,r11,r23
	r31.u64 = r11.u64 + r23.u64;
	// b 0x82e7becc
	goto loc_82E7BECC;
loc_82E7BEC4:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r25
	r31.u64 = r11.u64 + r25.u64;
loc_82E7BECC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82e7bf68
	if (!cr6.eq) goto loc_82E7BF68;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7bf04
	if (!cr6.eq) goto loc_82E7BF04;
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// lfd f13,0(r28)
	ctx.f13.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82e7befc
	if (cr6.gt) goto loc_82E7BEFC;
loc_82E7BEF4:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// b 0x82e7bf78
	goto loc_82E7BF78;
loc_82E7BEFC:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// b 0x82e7bf78
	goto loc_82E7BF78;
loc_82E7BF04:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e7bf24
	if (!cr6.eq) goto loc_82E7BF24;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e7b088
	sub_82E7B088(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x82e7befc
	if (cr0.gt) goto loc_82E7BEFC;
	// b 0x82e7bef4
	goto loc_82E7BEF4;
loc_82E7BF24:
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7afd8
	sub_82E7AFD8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82e7bf78
	if (!cr6.eq) goto loc_82E7BF78;
	// li r6,13
	ctx.r6.s64 = 13;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7afd8
	sub_82E7AFD8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e7bf68
	if (cr6.eq) goto loc_82E7BF68;
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x82e7bf78
	goto loc_82E7BF78;
loc_82E7BF68:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7a828
	sub_82E7A828(ctx, base);
loc_82E7BF78:
	// cmpw cr6,r3,r26
	cr6.compare<int32_t>(ctx.r3.s32, r26.s32, xer);
loc_82E7BF7C:
	// bne cr6,0x82e7bf94
	if (!cr6.eq) goto loc_82E7BF94;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,18,14,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
loc_82E7BF94:
	// lwz r25,12(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// b 0x82e7c24c
	goto loc_82E7C24C;
loc_82E7BF9C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7bfc4
	if (cr0.eq) goto loc_82E7BFC4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82e7bfbc
	if (!cr6.eq) goto loc_82E7BFBC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e7bfc4
	if (cr6.eq) goto loc_82E7BFC4;
loc_82E7BFBC:
	// mr r11,r18
	r11.u64 = r18.u64;
	// b 0x82e7bfc8
	goto loc_82E7BFC8;
loc_82E7BFC4:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82E7BFC8:
	// rlwinm r10,r29,18,23,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x1FF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82e7c24c
	if (cr6.eq) goto loc_82E7C24C;
	// b 0x82e7c238
	goto loc_82E7C238;
loc_82E7BFD8:
	// rlwinm r11,r29,13,19,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 13) & 0x1FF0;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7c008
	if (cr0.eq) goto loc_82E7C008;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82e7c000
	if (!cr6.eq) goto loc_82E7C000;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e7c008
	if (cr6.eq) goto loc_82E7C008;
loc_82E7C000:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// b 0x82e7c00c
	goto loc_82E7C00C;
loc_82E7C008:
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
loc_82E7C00C:
	// rlwinm r9,r29,18,23,31
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x1FF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82e7c24c
	if (cr6.eq) goto loc_82E7C24C;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82e7c238
	goto loc_82E7C238;
loc_82E7C02C:
	// rlwinm r10,r29,18,23,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x1FF;
	// rlwinm. r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r29,r10,-1
	r29.s64 = ctx.r10.s64 + -1;
	// beq 0x82e7c048
	if (cr0.eq) goto loc_82E7C048;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82E7C048:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e73258
	sub_82E73258(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82e7c4c8
	if (cr6.lt) goto loc_82E7C4C8;
	// bne cr6,0x82e7c608
	if (!cr6.eq) goto loc_82E7C608;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x82e7b658
	if (cr6.lt) goto loc_82E7B658;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x82e7b658
	goto loc_82E7B658;
loc_82E7C080:
	// rlwinm. r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7c094
	if (cr0.eq) goto loc_82E7C094;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82E7C094:
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e73258
	sub_82E73258(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82e7c4d8
	if (cr6.lt) goto loc_82E7C4D8;
	// bne cr6,0x82e7c608
	if (!cr6.eq) goto loc_82E7C608;
	// b 0x82e7b658
	goto loc_82E7B658;
loc_82E7C0B8:
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// lfd f13,0(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// lfd f12,16(r31)
	ctx.f12.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// fadd f13,f0,f13
	ctx.f13.f64 = f0.f64 + ctx.f13.f64;
	// ble cr6,0x82e7c0d8
	if (!cr6.gt) goto loc_82E7C0D8;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// b 0x82e7c0dc
	goto loc_82E7C0DC;
loc_82E7C0D8:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
loc_82E7C0DC:
	// bgt cr6,0x82e7b65c
	if (cr6.gt) goto loc_82E7B65C;
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// stfd f13,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 0, ctx.f13.u64);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// stfd f13,48(r31)
	PPC_STORE_U64(r31.u32 + 48, ctx.f13.u64);
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// stw r20,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r20.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7C104:
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r28,r31,32
	r28.s64 = r31.s64 + 32;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82e7c138
	if (cr6.eq) goto loc_82E7C138;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7a9d8
	sub_82E7A9D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e7c138
	if (!cr0.eq) goto loc_82E7C138;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82e7c184
	goto loc_82E7C184;
loc_82E7C138:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82e7c160
	if (cr6.eq) goto loc_82E7C160;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82e7a9d8
	sub_82E7A9D8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e7c160
	if (!cr0.eq) goto loc_82E7C160;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82e7c184
	goto loc_82E7C184;
loc_82E7C160:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82e7c18c
	if (cr6.eq) goto loc_82E7C18C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e7a9d8
	sub_82E7A9D8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82e7c18c
	if (!cr0.eq) goto loc_82E7C18C;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
loc_82E7C184:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E7C18C:
	// lfd f0,0(r28)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// stw r20,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r20.u32);
	// lfd f13,0(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// fsub f0,f13,f0
	f0.f64 = ctx.f13.f64 - f0.f64;
	// stfd f0,0(r31)
	PPC_STORE_U64(r31.u32 + 0, f0.u64);
loc_82E7C1A0:
	// rlwinm r11,r29,18,14,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x3FFFF;
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7C1B4:
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// rlwinm r5,r29,18,23,31
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x1FF;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, r11.u64);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, r11.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// std r11,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, r11.u64);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, r11.u64);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// bl 0x82e73540
	sub_82E73540(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r11,r26,3
	r11.s64 = r26.s64 + 3;
	// lwz r25,12(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e7c24c
	if (cr6.eq) goto loc_82E7C24C;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,-16(r11)
	PPC_STORE_U64(r11.u32 + -16, ctx.r10.u64);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r10.u32);
loc_82E7C238:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r11,18,14,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3FFFF;
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r11,r24
	r24.u64 = r11.u64 + r24.u64;
loc_82E7C24C:
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7C254:
	// rlwinm. r27,r29,9,23,31
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// rlwinm r11,r29,18,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x1FF;
	// bne 0x82e7c27c
	if (!cr0.eq) goto loc_82E7C27C;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - r31.s64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// srawi r10,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// addi r27,r10,-1
	r27.s64 = ctx.r10.s64 + -1;
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
loc_82E7C27C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7c28c
	if (!cr6.eq) goto loc_82E7C28C;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
loc_82E7C28C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bne cr6,0x82e7b65c
	if (!cr6.eq) goto loc_82E7B65C;
	// mulli r11,r11,50
	r11.s64 = r11.s64 * 50;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r29,r11,-50
	r29.s64 = r11.s64 + -50;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x82e7c2c4
	if (!cr6.gt) goto loc_82E7C2C4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7cfe0
	sub_82E7CFE0(ctx, base);
loc_82E7C2C4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82e7b65c
	if (!cr6.gt) goto loc_82E7B65C;
	// rlwinm r11,r27,4,0,27
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
loc_82E7C2D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ccc8
	sub_82E7CCC8(ctx, base);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82e7c32c
	if (cr6.lt) goto loc_82E7C32C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,5(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7c32c
	if (cr0.eq) goto loc_82E7C32C;
	// lbz r11,5(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 5);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7c32c
	if (cr0.eq) goto loc_82E7C32C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e79d28
	sub_82E79D28(ctx, base);
loc_82E7C32C:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// bgt 0x82e7c2d4
	if (cr0.gt) goto loc_82E7C2D4;
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7C33C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7d8c8
	sub_82E7D8C8(ctx, base);
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7C34C:
	// lwz r11,16(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 16);
	// rlwinm r10,r29,20,12,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 20) & 0xFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwzx r28,r10,r11
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lbz r29,72(r28)
	r29.u64 = PPC_LOAD_U8(r28.u32 + 72);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e7d6e8
	sub_82E7D6E8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,16(r27)
	PPC_STORE_U32(r27.u32 + 16, r28.u32);
	// ble cr6,0x82e7c3d0
	if (!cr6.gt) goto loc_82E7C3D0;
	// addi r28,r27,20
	r28.s64 = r27.s64 + 20;
loc_82E7C384:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x82e7c3ac
	if (!cr6.eq) goto loc_82E7C3AC;
	// rlwinm r11,r11,9,23,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x1FF;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	r11.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x82e7c3c0
	goto loc_82E7C3C0;
loc_82E7C3AC:
	// rlwinm r11,r11,13,19,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1FF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// bl 0x82e7d7d0
	sub_82E7D7D0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
loc_82E7C3C0:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// bne 0x82e7c384
	if (!cr0.eq) goto loc_82E7C384;
loc_82E7C3D0:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82E7C3DC:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82e7b658
	if (cr6.lt) goto loc_82E7B658;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e79c30
	sub_82E79C30(ctx, base);
	// b 0x82e7b658
	goto loc_82E7B658;
loc_82E7C400:
	// lwz r9,16(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 16);
	// rlwinm r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	// lwz r26,20(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// lbz r11,73(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 73);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r9,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// bne cr6,0x82e7c470
	if (!cr6.eq) goto loc_82E7C470;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// rlwinm r29,r28,4,0,27
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x82e7c45c
	if (cr6.gt) goto loc_82E7C45C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e72a60
	sub_82E72A60(ctx, base);
loc_82E7C45C:
	// lwz r25,12(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// add r31,r27,r25
	r31.u64 = r27.u64 + r25.u64;
	// add r11,r29,r31
	r11.u64 = r29.u64 + r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82E7C470:
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82e7b65c
	if (!cr6.gt) goto loc_82E7B65C;
	// neg r9,r28
	ctx.r9.s64 = -r28.s64;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_82E7C488:
	// cmpw cr6,r7,r28
	cr6.compare<int32_t>(ctx.r7.s32, r28.s32, xer);
	// bge cr6,0x82e7c4ac
	if (!cr6.lt) goto loc_82E7C4AC;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// std r6,-8(r11)
	PPC_STORE_U64(r11.u32 + -8, ctx.r6.u64);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x82e7c4b0
	goto loc_82E7C4B0;
loc_82E7C4AC:
	// stw r18,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r18.u32);
loc_82E7C4B0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x82e7c488
	if (cr6.lt) goto loc_82E7C488;
	// b 0x82e7b65c
	goto loc_82E7B65C;
loc_82E7C4C8:
	// lwz r11,348(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r11.u32);
	// b 0x82e7b640
	goto loc_82E7B640;
loc_82E7C4D8:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// addi r31,r11,-24
	r31.s64 = r11.s64 + -24;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r29,28(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// beq cr6,0x82e7c500
	if (cr6.eq) goto loc_82E7C500;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e7d8c8
	sub_82E7D8C8(ctx, base);
loc_82E7C500:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r11,r18
	r11.u64 = r18.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// bge cr6,0x82e7c564
	if (!cr6.lt) goto loc_82E7C564;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
loc_82E7C538:
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// add r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 + r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// std r7,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + r29.u64;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82e7c538
	if (cr6.lt) goto loc_82E7C538;
loc_82E7C564:
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// b 0x82e7b640
	goto loc_82E7B640;
loc_82E7C598:
	// rlwinm. r11,r29,9,23,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1FF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7c5b0
	if (cr0.eq) goto loc_82E7C5B0;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82E7C5B0:
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e7c5c8
	if (cr6.eq) goto loc_82E7C5C8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7d8c8
	sub_82E7D8C8(ctx, base);
loc_82E7C5C8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r24,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r24.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e72dd0
	sub_82E72DD0(ctx, base);
	// lwz r11,348(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r11.u32);
	// beq 0x82e7c608
	if (cr0.eq) goto loc_82E7C608;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82e7b640
	if (cr6.eq) goto loc_82E7B640;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x82e7b640
	goto loc_82E7B640;
loc_82E7C600:
	// addi r11,r24,-4
	r11.s64 = r24.s64 + -4;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_82E7C608:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
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

__attribute__((alias("__imp__sub_82E7C620"))) PPC_WEAK_FUNC(sub_82E7C620);
PPC_FUNC_IMPL(__imp__sub_82E7C620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82e7c6dc
	if (cr6.eq) goto loc_82E7C6DC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82e7c6c4
	if (cr6.eq) goto loc_82E7C6C4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82e7c67c
	if (cr6.eq) goto loc_82E7C67C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// beq cr6,0x82e7c674
	if (cr6.eq) goto loc_82E7C674;
loc_82E7C65C:
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// divwu r9,r8,r11
	ctx.r9.u32 = ctx.r8.u32 / r11.u32;
	// twllei r11,0
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// b 0x82e7c6f4
	goto loc_82E7C6F4;
loc_82E7C674:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x82e7c6f0
	goto loc_82E7C6F0;
loc_82E7C67C:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f13,0(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lbz r8,7(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfd f0,-3744(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fadd f0,f13,f0
	f0.f64 = ctx.f13.f64 + f0.f64;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// slw r9,r7,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// divwu r8,r11,r9
	ctx.r8.u32 = r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// b 0x82e7c6f4
	goto loc_82E7C6F4;
loc_82E7C6C4:
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82e7c65c
	goto loc_82E7C65C;
loc_82E7C6DC:
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82E7C6F0:
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
loc_82E7C6F4:
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7C700"))) PPC_WEAK_FUNC(sub_82E7C700);
PPC_FUNC_IMPL(__imp__sub_82E7C700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7c74c
	if (!cr6.eq) goto loc_82E7C74C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfd f0,0(r3)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(r11.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x82e7c750
	if (cr6.eq) goto loc_82E7C750;
loc_82E7C74C:
	// li r11,-1
	r11.s64 = -1;
loc_82E7C750:
	// lis r9,1023
	ctx.r9.s64 = 67043328;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82e7c78c
	if (cr6.gt) goto loc_82E7C78C;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// bl 0x82e78358
	sub_82E78358(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// b 0x82e7c790
	goto loc_82E7C790;
loc_82E7C78C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E7C790:
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

__attribute__((alias("__imp__sub_82E7C7A8"))) PPC_WEAK_FUNC(sub_82E7C7A8);
PPC_FUNC_IMPL(__imp__sub_82E7C7A8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e7c7f0
	if (cr6.gt) goto loc_82E7C7F0;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r6,r30,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// b 0x82e7c7f4
	goto loc_82E7C7F4;
loc_82E7C7F0:
	// bl 0x82e7dda8
	sub_82E7DDA8(ctx, base);
loc_82E7C7F4:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82e7c828
	if (!cr6.lt) goto loc_82E7C828;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
loc_82E7C80C:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// bne 0x82e7c80c
	if (!cr0.eq) goto loc_82E7C80C;
loc_82E7C828:
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7C848"))) PPC_WEAK_FUNC(sub_82E7C848);
PPC_FUNC_IMPL(__imp__sub_82E7C848) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82e7c87c
	if (!cr6.eq) goto loc_82E7C87C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,-5736
	r11.s64 = r11.s64 + -5736;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// b 0x82e7c910
	goto loc_82E7C910;
loc_82E7C87C:
	// addi r3,r31,-1
	ctx.r3.s64 = r31.s64 + -1;
	// bl 0x82e78358
	sub_82E78358(ctx, base);
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r28,26
	cr6.compare<int32_t>(r28.s32, 26, xer);
	// ble cr6,0x82e7c8a0
	if (!cr6.gt) goto loc_82E7C8A0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-5704
	ctx.r4.s64 = r11.s64 + -5704;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E7C8A0:
	// li r11,1
	r11.s64 = 1;
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// slw r31,r11,r28
	r31.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e7c8d4
	if (cr6.gt) goto loc_82E7C8D4;
	// rlwinm r6,r31,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// b 0x82e7c8d8
	goto loc_82E7C8D8;
loc_82E7C8D4:
	// bl 0x82e7dda8
	sub_82E7DDA8(ctx, base);
loc_82E7C8D8:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// ble cr6,0x82e7c910
	if (!cr6.gt) goto loc_82E7C910;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82E7C8F0:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stw r8,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r8.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r8.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// bne 0x82e7c8f0
	if (!cr0.eq) goto loc_82E7C8F0;
loc_82E7C910:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm r11,r31,5,0,26
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stb r28,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r28.u8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E7C930"))) PPC_WEAK_FUNC(sub_82E7C930);
PPC_FUNC_IMPL(__imp__sub_82E7C930) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e79d48
	sub_82E79D48(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r9,255
	ctx.r9.s64 = 255;
	// addi r10,r11,-5736
	ctx.r10.s64 = r11.s64 + -5736;
	// li r11,0
	r11.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r9,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r9.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stb r11,7(r31)
	PPC_STORE_U8(r31.u32 + 7, r11.u8);
	// bl 0x82e7c7a8
	sub_82E7C7A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7c848
	sub_82E7C848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E7C9C0"))) PPC_WEAK_FUNC(sub_82E7C9C0);
PPC_FUNC_IMPL(__imp__sub_82E7C9C0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-5736
	r11.s64 = r11.s64 + -5736;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82e7ca08
	if (cr6.eq) goto loc_82E7CA08;
	// lbz r11,7(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
loc_82E7CA08:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7CA50"))) PPC_WEAK_FUNC(sub_82E7CA50);
PPC_FUNC_IMPL(__imp__sub_82E7CA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82e7ca74
	if (!cr6.lt) goto loc_82E7CA74;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// blr 
	return;
loc_82E7CA74:
	// lbz r9,7(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r8,1
	ctx.r8.s64 = 1;
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// slw r11,r8,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// ori r8,r11,1
	ctx.r8.u64 = r11.u64 | 1;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// twllei r8,0
	// lfd f13,-3744(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fadd f13,f0,f13
	ctx.f13.f64 = f0.f64 + ctx.f13.f64;
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// divwu r9,r11,r8
	ctx.r9.u32 = r11.u32 / ctx.r8.u32;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_82E7CAD0:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7cafc
	if (!cr6.eq) goto loc_82E7CAFC;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beqlr cr6
	if (cr6.eq) return;
loc_82E7CAFC:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e7cad0
	if (!cr0.eq) goto loc_82E7CAD0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-6872
	ctx.r3.s64 = r11.s64 + -6872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7CB18"))) PPC_WEAK_FUNC(sub_82E7CB18);
PPC_FUNC_IMPL(__imp__sub_82E7CB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,7(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_82E7CB3C:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e7cb54
	if (!cr6.eq) goto loc_82E7CB54;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82E7CB54:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e7cb3c
	if (!cr0.eq) goto loc_82E7CB3C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-6872
	ctx.r3.s64 = r11.s64 + -6872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7CB70"))) PPC_WEAK_FUNC(sub_82E7CB70);
PPC_FUNC_IMPL(__imp__sub_82E7CB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7cc10
	if (cr0.eq) goto loc_82E7CC10;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82e7cbb0
	if (cr6.eq) goto loc_82E7CBB0;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82e7cbe4
	if (!cr6.eq) goto loc_82E7CBE4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82e7cb18
	sub_82E7CB18(ctx, base);
	// b 0x82e7cc18
	goto loc_82E7CC18;
loc_82E7CBB0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfiwx f13,0,r11
	PPC_STORE_U32(r11.u32, ctx.f13.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82e7cbe4
	if (!cr6.eq) goto loc_82E7CBE4;
	// bl 0x82e7ca50
	sub_82E7CA50(ctx, base);
	// b 0x82e7cc18
	goto loc_82E7CC18;
loc_82E7CBE4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e7c620
	sub_82E7C620(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82E7CBF0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82e78388
	sub_82E78388(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82e7cc30
	if (!cr0.eq) goto loc_82E7CC30;
	// lwz r30,28(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x82e7cbf0
	if (!cr0.eq) goto loc_82E7CBF0;
loc_82E7CC10:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,-6872
	ctx.r3.s64 = r11.s64 + -6872;
loc_82E7CC18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82E7CC30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82e7cc18
	goto loc_82E7CC18;
}

__attribute__((alias("__imp__sub_82E7CC38"))) PPC_WEAK_FUNC(sub_82E7CC38);
PPC_FUNC_IMPL(__imp__sub_82E7CC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7cb70
	sub_82E7CB70(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-6872
	r11.s64 = r11.s64 + -6872;
	// stb r10,6(r30)
	PPC_STORE_U8(r30.u32 + 6, ctx.r10.u8);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e7ccc0
	if (!cr6.eq) goto loc_82E7CCC0;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82e7cc8c
	if (!cr0.eq) goto loc_82E7CC8C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,-5668
	ctx.r4.s64 = r11.s64 + -5668;
	// b 0x82e7cca8
	goto loc_82E7CCA8;
loc_82E7CC8C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82e7ccb0
	if (!cr6.eq) goto loc_82E7CCB0;
	// lfd f0,0(r29)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// beq cr6,0x82e7ccb0
	if (cr6.eq) goto loc_82E7CCB0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,-5688
	ctx.r4.s64 = r11.s64 + -5688;
loc_82E7CCA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
loc_82E7CCB0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7d1c8
	sub_82E7D1C8(ctx, base);
loc_82E7CCC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E7CCC8"))) PPC_WEAK_FUNC(sub_82E7CCC8);
PPC_FUNC_IMPL(__imp__sub_82E7CCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82e7ca50
	sub_82E7CA50(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-6872
	r11.s64 = r11.s64 + -6872;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e7cd24
	if (!cr6.eq) goto loc_82E7CD24;
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// bl 0x82e7d1c8
	sub_82E7D1C8(ctx, base);
loc_82E7CD24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7CD38"))) PPC_WEAK_FUNC(sub_82E7CD38);
PPC_FUNC_IMPL(__imp__sub_82E7CD38) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// b 0x82e7cd6c
	goto loc_82E7CD6C;
loc_82E7CD54:
	// lis r11,32767
	r11.s64 = 2147418112;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r11,r11,65533
	r11.u64 = r11.u64 | 65533;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bgt cr6,0x82e7cd88
	if (cr6.gt) goto loc_82E7CD88;
loc_82E7CD6C:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e7ca50
	sub_82E7CA50(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7cd54
	if (!cr6.eq) goto loc_82E7CD54;
	// b 0x82e7cde0
	goto loc_82E7CDE0;
loc_82E7CD88:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82e7cd9c
	goto loc_82E7CD9C;
loc_82E7CD94:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_82E7CD9C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e7ca50
	sub_82E7CA50(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7cd94
	if (!cr6.eq) goto loc_82E7CD94;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// b 0x82e7cdf0
	goto loc_82E7CDF0;
loc_82E7CDB8:
	// add r11,r6,r7
	r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x82e7ca50
	sub_82E7CA50(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7cddc
	if (!cr6.eq) goto loc_82E7CDDC;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// b 0x82e7cde0
	goto loc_82E7CDE0;
loc_82E7CDDC:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_82E7CDE0:
	// subf r11,r6,r7
	r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x82e7cdb8
	if (cr6.gt) goto loc_82E7CDB8;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_82E7CDF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7CE00"))) PPC_WEAK_FUNC(sub_82E7CE00);
PPC_FUNC_IMPL(__imp__sub_82E7CE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82e7ce68
	if (cr0.eq) goto loc_82E7CE68;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,-8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7ce68
	if (!cr6.eq) goto loc_82E7CE68;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_82E7CE30:
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82e7ce54
	if (!cr6.eq) goto loc_82E7CE54;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82e7ce58
	goto loc_82E7CE58;
loc_82E7CE54:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_82E7CE58:
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x82e7ce30
	if (cr6.gt) goto loc_82E7CE30;
	// blr 
	return;
loc_82E7CE68:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-5736
	r11.s64 = r11.s64 + -5736;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82e7ce84
	if (!cr6.eq) goto loc_82E7CE84;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82E7CE84:
	// b 0x82e7cd38
	sub_82E7CD38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7CE88"))) PPC_WEAK_FUNC(sub_82E7CE88);
PPC_FUNC_IMPL(__imp__sub_82E7CE88) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r26,28(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lbz r23,7(r31)
	r23.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// lwz r22,16(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// ble cr6,0x82e7cebc
	if (!cr6.gt) goto loc_82E7CEBC;
	// bl 0x82e7c7a8
	sub_82E7C7A8(ctx, base);
loc_82E7CEBC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82e7c848
	sub_82E7C848(ctx, base);
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// bge cr6,0x82e7cf5c
	if (!cr6.lt) goto loc_82E7CF5C;
	// rlwinm r24,r30,4,0,27
	r24.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_82E7CEE4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r29,r11,r27
	r29.u64 = r11.u64 + r27.u64;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e7cf18
	if (cr6.eq) goto loc_82E7CF18;
	// addi r5,r28,1
	ctx.r5.s64 = r28.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82e7ccc8
	sub_82E7CCC8(ctx, base);
	// ld r11,0(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_82E7CF18:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// blt cr6,0x82e7cee4
	if (cr6.lt) goto loc_82E7CEE4;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e7cf54
	if (cr6.gt) goto loc_82E7CF54;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r5,r26,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// b 0x82e7cf58
	goto loc_82E7CF58;
loc_82E7CF54:
	// bl 0x82e7dda8
	sub_82E7DDA8(ctx, base);
loc_82E7CF58:
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_82E7CF5C:
	// li r11,1
	r11.s64 = 1;
	// slw r28,r11,r23
	r28.u64 = r23.u8 & 0x20 ? 0 : (r11.u32 << (r23.u8 & 0x3F));
	// addic. r29,r28,-1
	xer.ca = r28.u32 > 0;
	r29.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82e7cfb0
	if (cr0.lt) goto loc_82E7CFB0;
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
loc_82E7CF78:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82e7cfa4
	if (cr6.eq) goto loc_82E7CFA4;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82e7cc38
	sub_82E7CC38(ctx, base);
	// ld r11,-8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + -8);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_82E7CFA4:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// bge 0x82e7cf78
	if (!cr0.lt) goto loc_82E7CF78;
loc_82E7CFB0:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-5736
	r11.s64 = r11.s64 + -5736;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// beq cr6,0x82e7cfd4
	if (cr6.eq) goto loc_82E7CFD4;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r28,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
loc_82E7CFD4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82E7CFE0"))) PPC_WEAK_FUNC(sub_82E7CFE0);
PPC_FUNC_IMPL(__imp__sub_82E7CFE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r11,r11,-5736
	r11.s64 = r11.s64 + -5736;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82e7cffc
	if (!cr6.eq) goto loc_82E7CFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82e7d008
	goto loc_82E7D008;
loc_82E7CFFC:
	// lbz r11,7(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r6,r10,r11
	ctx.r6.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
loc_82E7D008:
	// b 0x82e7ce88
	sub_82E7CE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7D010"))) PPC_WEAK_FUNC(sub_82E7D010);
PPC_FUNC_IMPL(__imp__sub_82E7D010) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,27
	r11.s64 = 27;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82E7D038:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82e7d038
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E7D038;
	// lwz r3,28(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// li r27,0
	r27.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_82E7D05C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r3
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, xer);
	// ble cr6,0x82e7d078
	if (!cr6.gt) goto loc_82E7D078;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82e7d0dc
	if (cr6.gt) goto loc_82E7D0DC;
loc_82E7D078:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82e7d0b8
	if (cr6.gt) goto loc_82E7D0B8;
	// lwz r8,12(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
loc_82E7D09C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82e7d0ac
	if (cr6.eq) goto loc_82E7D0AC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82E7D0AC:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x82e7d09c
	if (!cr0.eq) goto loc_82E7D09C;
loc_82E7D0B8:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// add r27,r4,r27
	r27.u64 = ctx.r4.u64 + r27.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,26
	cr6.compare<int32_t>(ctx.r5.s32, 26, xer);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// ble cr6,0x82e7d05c
	if (!cr6.gt) goto loc_82E7D05C;
loc_82E7D0DC:
	// lbz r11,7(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 7);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// slw. r31,r10,r11
	r31.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82e7d130
	if (cr0.eq) goto loc_82E7D130;
	// rlwinm r28,r31,5,0,26
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
loc_82E7D0F8:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// addi r28,r28,-32
	r28.s64 = r28.s64 + -32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e7d128
	if (cr6.eq) goto loc_82E7D128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82e7c700
	sub_82E7C700(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
loc_82E7D128:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82e7d0f8
	if (!cr6.eq) goto loc_82E7D0F8;
loc_82E7D130:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82e7c700
	sub_82E7C700(ctx, base);
	// add r11,r30,r27
	r11.u64 = r30.u64 + r27.u64;
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + r29.u64;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// add. r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + r27.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// ble 0x82e7d1ac
	if (!cr0.gt) goto loc_82E7D1AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82E7D164:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble 0x82e7d18c
	if (!cr0.gt) goto loc_82E7D18C;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r7,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r7.s64 = r11.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// ble cr6,0x82e7d18c
	if (!cr6.gt) goto loc_82E7D18C;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82E7D18C:
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82e7d1ac
	if (cr6.eq) goto loc_82E7D1AC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// srawi r7,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r7.s64 = r11.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e7d164
	if (cr6.lt) goto loc_82E7D164;
loc_82E7D1AC:
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82e7ce88
	sub_82E7CE88(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82E7D1C8"))) PPC_WEAK_FUNC(sub_82E7D1C8);
PPC_FUNC_IMPL(__imp__sub_82E7D1C8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7c620
	sub_82E7C620(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82e7d20c
	if (!cr6.eq) goto loc_82E7D20C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-5736
	r11.s64 = r11.s64 + -5736;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82e7d2ac
	if (!cr6.eq) goto loc_82E7D2AC;
loc_82E7D20C:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e7d244
	if (!cr6.gt) goto loc_82E7D244;
loc_82E7D220:
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82e7d280
	if (cr6.eq) goto loc_82E7D280;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82e7d220
	if (cr6.gt) goto loc_82E7D220;
loc_82E7D244:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
loc_82E7D254:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82e7d288
	if (!cr6.eq) goto loc_82E7D288;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e7d010
	sub_82E7D010(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e7cc38
	sub_82E7CC38(ctx, base);
	// b 0x82e7d2f4
	goto loc_82E7D2F4;
loc_82E7D280:
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// b 0x82e7d254
	goto loc_82E7D254;
loc_82E7D288:
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7c620
	sub_82E7C620(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bne cr6,0x82e7d300
	if (!cr6.eq) goto loc_82E7D300;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, r11.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
loc_82E7D2AC:
	// ld r11,0(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82e7d2f0
	if (cr6.lt) goto loc_82E7D2F0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lbz r11,5(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7d2f0
	if (cr0.eq) goto loc_82E7D2F0;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82e7d2f0
	if (cr0.eq) goto loc_82E7D2F0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e79d28
	sub_82E79D28(ctx, base);
loc_82E7D2F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E7D2F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82E7D2FC:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82E7D300:
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82e7d2fc
	if (!cr6.eq) goto loc_82E7D2FC;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, r11.u64);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// std r11,16(r6)
	PPC_STORE_U64(ctx.r6.u32 + 16, r11.u64);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// std r11,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, r11.u64);
	// stw r5,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r5.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// b 0x82e7d2ac
	goto loc_82E7D2AC;
}

__attribute__((alias("__imp__sub_82E7D340"))) PPC_WEAK_FUNC(sub_82E7D340);
PPC_FUNC_IMPL(__imp__sub_82E7D340) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82e7cb18
	sub_82E7CB18(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-6872
	r11.s64 = r11.s64 + -6872;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82e7d394
	if (!cr6.eq) goto loc_82E7D394;
	// li r11,4
	r11.s64 = 4;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82e7d1c8
	sub_82E7D1C8(ctx, base);
loc_82E7D394:
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

__attribute__((alias("__imp__sub_82E7D3A8"))) PPC_WEAK_FUNC(sub_82E7D3A8);
PPC_FUNC_IMPL(__imp__sub_82E7D3A8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lbz r11,21(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 21);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82e7d4b0
	if (cr6.eq) goto loc_82E7D4B0;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e7d3f4
	if (cr6.gt) goto loc_82E7D3F4;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// b 0x82e7d3f8
	goto loc_82E7D3F8;
loc_82E7D3F4:
	// bl 0x82e7dda8
	sub_82E7DDA8(ctx, base);
loc_82E7D3F8:
	// lwz r31,16(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82e7d428
	if (!cr6.gt) goto loc_82E7D428;
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82e7d428
	if (cr0.eq) goto loc_82E7D428;
	// mtctr r29
	ctr.u64 = r29.u64;
loc_82E7D41C:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82e7d41c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82E7D41C;
loc_82E7D428:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82e7d490
	if (!cr6.gt) goto loc_82E7D490;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82E7D43C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e7d47c
	if (cr0.eq) goto loc_82E7D47C;
	// addi r8,r29,-1
	ctx.r8.s64 = r29.s64 + -1;
loc_82E7D450:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stwx r5,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r5.u32);
	// bne 0x82e7d450
	if (!cr0.eq) goto loc_82E7D450;
loc_82E7D47C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// blt cr6,0x82e7d43c
	if (cr6.lt) goto loc_82E7D43C;
loc_82E7D490:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82E7D4B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E7D4B8"))) PPC_WEAK_FUNC(sub_82E7D4B8);
PPC_FUNC_IMPL(__imp__sub_82E7D4B8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r11,r30,27,5,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mr r29,r30
	r29.u64 = r30.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x82e7d510
	if (cr6.lt) goto loc_82E7D510;
	// addi r6,r26,-1
	ctx.r6.s64 = r26.s64 + -1;
loc_82E7D4EC:
	// lbzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// rlwinm r7,r29,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r29,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// xor r29,r9,r29
	r29.u64 = ctx.r9.u64 ^ r29.u64;
	// bge cr6,0x82e7d4ec
	if (!cr6.lt) goto loc_82E7D4EC;
loc_82E7D510:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & r29.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x82e7d584
	goto loc_82E7D584;
loc_82E7D534:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82e7d580
	if (!cr6.eq) goto loc_82E7D580;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// mr r11,r26
	r11.u64 = r26.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82e7d578
	if (cr0.eq) goto loc_82E7D578;
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
loc_82E7D558:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82e7d578
	if (!cr0.eq) goto loc_82E7D578;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82e7d558
	if (!cr6.eq) goto loc_82E7D558;
loc_82E7D578:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e7d660
	if (cr0.eq) goto loc_82E7D660;
loc_82E7D580:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82E7D584:
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82e7d534
	if (!cr0.eq) goto loc_82E7D534;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// li r10,-19
	ctx.r10.s64 = -19;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82e7d5a4
	if (!cr6.gt) goto loc_82E7D5A4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e7dda8
	sub_82E7DDA8(ctx, base);
loc_82E7D5A4:
	// addi r6,r30,17
	ctx.r6.s64 = r30.s64 + 17;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,4
	r11.s64 = 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// clrlwi r11,r10,30
	r11.u64 = ctx.r10.u32 & 0x3;
	// stb r27,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r27.u8);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// stb r27,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r27.u8);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & r29.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// ble cr6,0x82e7d654
	if (!cr6.gt) goto loc_82E7D654;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r11,r11,65534
	r11.u64 = r11.u64 | 65534;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bgt cr6,0x82e7d654
	if (cr6.gt) goto loc_82E7D654;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e7d3a8
	sub_82E7D3A8(ctx, base);
loc_82E7D654:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82E7D658:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_82E7D660:
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// andc r10,r11,r10
	ctx.r10.u64 = r11.u64 & ~ctx.r10.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82e7d658
	if (cr0.eq) goto loc_82E7D658;
	// xori r11,r11,3
	r11.u64 = r11.u64 ^ 3;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// b 0x82e7d658
	goto loc_82E7D658;
}

__attribute__((alias("__imp__sub_82E7D688"))) PPC_WEAK_FUNC(sub_82E7D688);
PPC_FUNC_IMPL(__imp__sub_82E7D688) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,24
	ctx.r6.s64 = r11.s64 + 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e79d48
	sub_82E79D48(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// stb r29,7(r31)
	PPC_STORE_U8(r31.u32 + 7, r29.u8);
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82E7D6E8"))) PPC_WEAK_FUNC(sub_82E7D6E8);
PPC_FUNC_IMPL(__imp__sub_82E7D6E8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r11,r30,5
	r11.s64 = r30.s64 + 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e79d48
	sub_82E79D48(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// stb r30,7(r31)
	PPC_STORE_U8(r31.u32 + 7, r30.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
	// beq cr6,0x82e7d758
	if (cr6.eq) goto loc_82E7D758;
	// add r11,r28,r31
	r11.u64 = r28.u64 + r31.u64;
loc_82E7D748:
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne 0x82e7d748
	if (!cr0.eq) goto loc_82E7D748;
loc_82E7D758:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82E7D768"))) PPC_WEAK_FUNC(sub_82E7D768);
PPC_FUNC_IMPL(__imp__sub_82E7D768) {
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
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e79d48
	sub_82E79D48(ctx, base);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7D7D0"))) PPC_WEAK_FUNC(sub_82E7D7D0);
PPC_FUNC_IMPL(__imp__sub_82E7D7D0) {
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
	// addi r31,r3,104
	r31.s64 = ctx.r3.s64 + 104;
	// lwz r30,16(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e7d818
	if (cr6.eq) goto loc_82E7D818;
loc_82E7D7F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// blt cr6,0x82e7d818
	if (cr6.lt) goto loc_82E7D818;
	// beq cr6,0x82e7d86c
	if (cr6.eq) goto loc_82E7D86C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82e7d7f4
	if (!cr6.eq) goto loc_82E7D7F4;
loc_82E7D818:
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// li r11,10
	r11.s64 = 10;
	// addi r10,r30,120
	ctx.r10.s64 = r30.s64 + 120;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r3,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r3.u32);
	// stw r3,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r3.u32);
loc_82E7D864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82E7D86C:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82e7d888
	if (cr0.eq) goto loc_82E7D888;
	// xori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 ^ 3;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
loc_82E7D888:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82e7d864
	goto loc_82E7D864;
}

__attribute__((alias("__imp__sub_82E7D890"))) PPC_WEAK_FUNC(sub_82E7D890);
PPC_FUNC_IMPL(__imp__sub_82E7D890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82e7d8b8
	if (cr6.eq) goto loc_82E7D8B8;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_82E7D8B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// b 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7D8C8"))) PPC_WEAK_FUNC(sub_82E7D8C8);
PPC_FUNC_IMPL(__imp__sub_82E7D8C8) {
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
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// b 0x82e7d984
	goto loc_82E7D984;
loc_82E7D8E4:
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x82e7d990
	if (cr6.lt) goto loc_82E7D990;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// andc. r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// beq 0x82e7d94c
	if (cr0.eq) goto loc_82E7D94C;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82e7d938
	if (cr6.eq) goto loc_82E7D938;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_82E7D938:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// b 0x82e7d984
	goto loc_82E7D984;
loc_82E7D94C:
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// bl 0x82e79d70
	sub_82E79D70(ctx, base);
loc_82E7D984:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e7d8e4
	if (!cr6.eq) goto loc_82E7D8E4;
loc_82E7D990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82E7D998"))) PPC_WEAK_FUNC(sub_82E7D998);
PPC_FUNC_IMPL(__imp__sub_82E7D998) {
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
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e79d48
	sub_82E79D48(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stb r11,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r11.u8);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stb r11,73(r31)
	PPC_STORE_U8(r31.u32 + 73, r11.u8);
	// stb r11,74(r31)
	PPC_STORE_U8(r31.u32 + 74, r11.u8);
	// stb r11,75(r31)
	PPC_STORE_U8(r31.u32 + 75, r11.u8);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7DA40"))) PPC_WEAK_FUNC(sub_82E7DA40);
PPC_FUNC_IMPL(__imp__sub_82E7DA40) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mulli r5,r11,12
	ctx.r5.s64 = r11.s64 * 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7DB18"))) PPC_WEAK_FUNC(sub_82E7DB18);
PPC_FUNC_IMPL(__imp__sub_82E7DB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lbz r11,6(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82e7db34
	if (cr0.eq) goto loc_82E7DB34;
	// lbz r11,7(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// addi r5,r11,24
	ctx.r5.s64 = r11.s64 + 24;
	// b 0x82e7db40
	goto loc_82E7DB40;
loc_82E7DB34:
	// lbz r11,7(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E7DB40:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E7DB48"))) PPC_WEAK_FUNC(sub_82E7DB48);
PPC_FUNC_IMPL(__imp__sub_82E7DB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x82e7db90
	if (!cr0.gt) goto loc_82E7DB90;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r8,8
	r11.s64 = ctx.r8.s64 + 8;
loc_82E7DB60:
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmpw cr6,r7,r5
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, xer);
	// bgt cr6,0x82e7db90
	if (cr6.gt) goto loc_82E7DB90;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bge cr6,0x82e7db80
	if (!cr6.lt) goto loc_82E7DB80;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82e7db98
	if (cr0.eq) goto loc_82E7DB98;
loc_82E7DB80:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x82e7db60
	if (cr6.lt) goto loc_82E7DB60;
loc_82E7DB90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E7DB98:
	// mulli r11,r10,12
	r11.s64 = ctx.r10.s64 * 12;
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7DBA8"))) PPC_WEAK_FUNC(sub_82E7DBA8);
PPC_FUNC_IMPL(__imp__sub_82E7DBA8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82e7dc04
	if (cr0.eq) goto loc_82E7DC04;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82e7dc04
	if (cr6.eq) goto loc_82E7DC04;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x82e7dc08
	goto loc_82E7DC08;
loc_82E7DC04:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82E7DC08:
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

__attribute__((alias("__imp__sub_82E7DC20"))) PPC_WEAK_FUNC(sub_82E7DC20);
PPC_FUNC_IMPL(__imp__sub_82E7DC20) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82e7dc64
	if (!cr6.eq) goto loc_82E7DC64;
	// bl 0x82e7dba8
	sub_82E7DBA8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e7dc6c
	if (cr6.eq) goto loc_82E7DC6C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82E7DC64:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
loc_82E7DC6C:
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

__attribute__((alias("__imp__sub_82E7DC80"))) PPC_WEAK_FUNC(sub_82E7DC80);
PPC_FUNC_IMPL(__imp__sub_82E7DC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7DCA0"))) PPC_WEAK_FUNC(sub_82E7DCA0);
PPC_FUNC_IMPL(__imp__sub_82E7DCA0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82e7dd14
	if (cr6.eq) goto loc_82E7DD14;
loc_82E7DCC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e7dc20
	sub_82E7DC20(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82e7dd20
	if (cr6.eq) goto loc_82E7DD20;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bgt cr6,0x82e7dce0
	if (cr6.gt) goto loc_82E7DCE0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82E7DCE0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf. r29,r31,r29
	r29.s64 = r29.s64 - r31.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - r31.s64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r28,r31,r28
	r28.u64 = r31.u64 + r28.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bne 0x82e7dcc0
	if (!cr0.eq) goto loc_82E7DCC0;
loc_82E7DD14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E7DD18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82E7DD20:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82e7dd18
	goto loc_82E7DD18;
}

__attribute__((alias("__imp__sub_82E7DD28"))) PPC_WEAK_FUNC(sub_82E7DD28);
PPC_FUNC_IMPL(__imp__sub_82E7DD28) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(r31.u32, ctx.r5.u32, xer);
	// ble cr6,0x82e7dd88
	if (!cr6.gt) goto loc_82E7DD88;
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(r31.u32, 32, xer);
	// bge cr6,0x82e7dd5c
	if (!cr6.lt) goto loc_82E7DD5C;
	// li r31,32
	r31.s64 = 32;
loc_82E7DD5C:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// li r10,-3
	ctx.r10.s64 = -3;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82e7dd7c
	if (cr6.gt) goto loc_82E7DD7C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82e7ddd8
	sub_82E7DDD8(ctx, base);
	// b 0x82e7dd80
	goto loc_82E7DD80;
loc_82E7DD7C:
	// bl 0x82e7dda8
	sub_82E7DDA8(ctx, base);
loc_82E7DD80:
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
loc_82E7DD88:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E7DDA8"))) PPC_WEAK_FUNC(sub_82E7DDA8);
PPC_FUNC_IMPL(__imp__sub_82E7DDA8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,-5648
	ctx.r4.s64 = r11.s64 + -5648;
	// bl 0x82e7a698
	sub_82E7A698(ctx, base);
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

