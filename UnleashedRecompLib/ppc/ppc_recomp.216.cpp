#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830641E4"))) PPC_WEAK_FUNC(sub_830641E4);
PPC_FUNC_IMPL(__imp__sub_830641E4) {
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

__attribute__((alias("__imp__sub_83064218"))) PPC_WEAK_FUNC(sub_83064218);
PPC_FUNC_IMPL(__imp__sub_83064218) {
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
	// addi r31,r1,-624
	r31.s64 = ctx.r1.s64 + -624;
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,652(r31)
	PPC_STORE_U32(r31.u32 + 652, ctx.r4.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r20,0
	r20.s64 = 0;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// stw r29,668(r31)
	PPC_STORE_U32(r31.u32 + 668, r29.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(r31.u32 + 644, r30.u32);
	// stw r27,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r27.u32);
	// stw r28,676(r31)
	PPC_STORE_U32(r31.u32 + 676, r28.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r20,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r20.u32);
	// stw r20,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r20.u32);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x830642c0
	if (!cr6.eq) goto loc_830642C0;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830642c0
	if (cr0.eq) goto loc_830642C0;
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
	// beq 0x830642a0
	if (cr0.eq) goto loc_830642A0;
	// stw r20,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r20.u32);
	// b 0x830642b4
	goto loc_830642B4;
loc_830642A0:
	// bl 0x83020b18
	sub_83020B18(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// bne 0x830642fc
	if (!cr0.eq) goto loc_830642FC;
loc_830642B4:
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
loc_830642C0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830642D4:
	// lwz r11,548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// stw r11,548(r30)
	PPC_STORE_U32(r30.u32 + 548, r11.u32);
	// bne 0x83064310
	if (!cr0.eq) goto loc_83064310;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x83064310
	if (!cr6.eq) goto loc_83064310;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830656b8
	goto loc_830656B8;
loc_830642FC:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830642c0
	if (cr0.eq) goto loc_830642C0;
	// bl 0x83048ca0
	sub_83048CA0(ctx, base);
	// b 0x830642d4
	goto loc_830642D4;
loc_83064310:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r29,r30,220
	r29.s64 = r30.s64 + 220;
	// stw r20,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r20.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r29,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r29.u32);
	// stw r14,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r14.u32);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// stb r20,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r20.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83064358
	if (!cr6.eq) goto loc_83064358;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r31,660
	ctx.r4.s64 = r31.s64 + 660;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83029f88
	sub_83029F88(ctx, base);
loc_83064358:
	// stw r20,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r20.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83065258
	if (cr6.eq) goto loc_83065258;
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// lwz r15,136(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-5500
	r11.s64 = r11.s64 + -5500;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-5436
	r11.s64 = r11.s64 + -5436;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-8744
	r11.s64 = r11.s64 + -8744;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-28120
	r11.s64 = r11.s64 + -28120;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-27800
	r11.s64 = r11.s64 + -27800;
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
loc_830643AC:
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r19,2
	r19.s64 = 2;
	// lwz r3,652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// li r17,2
	r17.s64 = 2;
	// bl 0x8302dd08
	sub_8302DD08(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r20,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r20.u32);
	// stw r20,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r20.u32);
	// lwz r26,8(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// stw r4,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// beq cr6,0x8306448c
	if (cr6.eq) goto loc_8306448C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83064428
	if (cr6.eq) goto loc_83064428;
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83064428
	if (cr0.eq) goto loc_83064428;
	// addi r11,r26,2
	r11.s64 = r26.s64 + 2;
	// b 0x83064410
	goto loc_83064410;
loc_8306440C:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_83064410:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8306440c
	if (!cr0.eq) goto loc_8306440C;
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x8306442c
	goto loc_8306442C;
loc_83064428:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8306442C:
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x8306444c
	if (!cr6.lt) goto loc_8306444C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// bl 0x82fd9eb0
	sub_82FD9EB0(ctx, base);
	// addi r10,r31,272
	ctx.r10.s64 = r31.s64 + 272;
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// b 0x83064474
	goto loc_83064474;
loc_8306444C:
	// lwz r29,216(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8302dd68
	sub_8302DD68(ctx, base);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_83064474:
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// addi r18,r11,2
	r18.s64 = r11.s64 + 2;
	// b 0x83064490
	goto loc_83064490;
loc_8306448C:
	// mr r18,r26
	r18.u64 = r26.u64;
loc_83064490:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302cd78
	sub_8302CD78(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x830644ec
	if (cr6.eq) goto loc_830644EC;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x830644ec
	if (cr6.eq) goto loc_830644EC;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830644ec
	if (!cr0.eq) goto loc_830644EC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// beq 0x830644f0
	if (cr0.eq) goto loc_830644F0;
loc_830644EC:
	// li r11,1
	r11.s64 = 1;
loc_830644F0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r22,r20
	r22.u64 = r20.u64;
	// mr r16,r20
	r16.u64 = r20.u64;
	// beq 0x83064600
	if (cr0.eq) goto loc_83064600;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83064600
	if (cr6.eq) goto loc_83064600;
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// lwz r5,16(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r25,r20
	r25.u64 = r20.u64;
	// bl 0x8302cc88
	sub_8302CC88(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x8306454c
	if (cr6.eq) goto loc_8306454C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83064570
	if (cr0.eq) goto loc_83064570;
loc_8306454C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r5,r31,216
	ctx.r5.s64 = r31.s64 + 216;
	// lwz r3,-15772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -15772);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r22,r20
	r22.u64 = r20.u64;
	// beq 0x83064570
	if (cr0.eq) goto loc_83064570;
	// lwz r22,0(r3)
	r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83064570:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83065038
	if (cr0.eq) goto loc_83065038;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83065038
	if (!cr6.eq) goto loc_83065038;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 564);
	// bl 0x8302e9f0
	sub_8302E9F0(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x830645d0
	if (cr6.eq) goto loc_830645D0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x830645d4
	goto loc_830645D4;
loc_830645D0:
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
loc_830645D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
	// b 0x83065038
	goto loc_83065038;
loc_83064600:
	// mr r25,r20
	r25.u64 = r20.u64;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// stb r20,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r20.u8);
	// mr r23,r20
	r23.u64 = r20.u64;
	// mr r27,r20
	r27.u64 = r20.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stb r25,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r25.u8);
	// bne cr6,0x83064894
	if (!cr6.eq) goto loc_83064894;
	// lwz r28,108(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83064668
	if (cr6.eq) goto loc_83064668;
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8306463c
	if (!cr0.eq) goto loc_8306463C;
	// b 0x83064660
	goto loc_83064660;
loc_8306463C:
	// addi r6,r31,172
	ctx.r6.s64 = r31.s64 + 172;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// beq 0x8306465c
	if (cr0.eq) goto loc_8306465C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8306465C:
	// mr r27,r11
	r27.u64 = r11.u64;
loc_83064660:
	// lwz r4,64(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// b 0x8306467c
	goto loc_8306467C;
loc_83064668:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306493c
	if (!cr6.eq) goto loc_8306493C;
	// lwz r11,668(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 76);
loc_8306467C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83064690
	if (cr6.eq) goto loc_83064690;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830648ac
	if (!cr6.eq) goto loc_830648AC;
loc_83064690:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8306472c
	if (cr6.eq) goto loc_8306472C;
	// addi r7,r31,96
	ctx.r7.s64 = r31.s64 + 96;
	// addi r6,r31,97
	ctx.r6.s64 = r31.s64 + 97;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8302e6f8
	sub_8302E6F8(ctx, base);
	// lbz r25,97(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 97);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830648ac
	if (cr0.eq) goto loc_830648AC;
	// mr. r11,r25
	r11.u64 = r25.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830648ac
	if (!cr0.eq) goto loc_830648AC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830648ac
	if (cr0.eq) goto loc_830648AC;
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x830648ac
	if (!cr6.eq) goto loc_830648AC;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830648ac
	if (cr0.eq) goto loc_830648AC;
	// addi r5,r31,176
	ctx.r5.s64 = r31.s64 + 176;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83064724
	if (!cr0.eq) goto loc_83064724;
	// mr r23,r20
	r23.u64 = r20.u64;
	// b 0x830648ac
	goto loc_830648AC;
loc_83064724:
	// lwz r23,0(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x830648ac
	goto loc_830648AC;
loc_8306472C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x830648ac
	if (cr6.eq) goto loc_830648AC;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r21,r5
	cr6.compare<uint32_t>(r21.u32, ctx.r5.u32, xer);
	// bne cr6,0x830647e8
	if (!cr6.eq) goto loc_830647E8;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r11,192(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83064788
	if (!cr0.eq) goto loc_83064788;
	// mr r27,r20
	r27.u64 = r20.u64;
	// b 0x830647ac
	goto loc_830647AC;
loc_83064788:
	// addi r6,r31,184
	ctx.r6.s64 = r31.s64 + 184;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// beq 0x830647a8
	if (cr0.eq) goto loc_830647A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830647A8:
	// mr r27,r11
	r27.u64 = r11.u64;
loc_830647AC:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830648ac
	if (cr0.eq) goto loc_830648AC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8306493c
	if (cr6.eq) goto loc_8306493C;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830648ac
	if (cr6.eq) goto loc_830648AC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,95
	ctx.r4.s64 = 95;
	// b 0x83064854
	goto loc_83064854;
loc_830647E8:
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830647fc
	if (!cr0.eq) goto loc_830647FC;
	// mr r27,r20
	r27.u64 = r20.u64;
	// b 0x8306481c
	goto loc_8306481C;
loc_830647FC:
	// addi r6,r31,180
	ctx.r6.s64 = r31.s64 + 180;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r20
	r11.u64 = r20.u64;
	// beq 0x83064818
	if (cr0.eq) goto loc_83064818;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83064818:
	// mr r27,r11
	r27.u64 = r11.u64;
loc_8306481C:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830648ac
	if (cr0.eq) goto loc_830648AC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8306493c
	if (cr6.eq) goto loc_8306493C;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830648ac
	if (cr6.eq) goto loc_830648AC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,96
	ctx.r4.s64 = 96;
loc_83064854:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
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
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x830648ac
	if (!cr6.eq) goto loc_830648AC;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r10,581(r30)
	PPC_STORE_U8(r30.u32 + 581, ctx.r10.u8);
	// beq 0x830648ac
	if (cr0.eq) goto loc_830648AC;
	// li r19,1
	r19.s64 = 1;
	// b 0x830648ac
	goto loc_830648AC;
loc_83064894:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830649c8
	if (!cr6.eq) goto loc_830649C8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// bl 0x8306d158
	sub_8306D158(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_830648AC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8306493c
	if (cr6.eq) goto loc_8306493C;
	// addi r5,r31,248
	ctx.r5.s64 = r31.s64 + 248;
	// lwz r3,552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 552);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830648d8
	if (cr0.eq) goto loc_830648D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830648fc
	if (!cr0.eq) goto loc_830648FC;
loc_830648D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff02e0
	sub_82FF02E0(ctx, base);
	// lwz r11,548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 552);
loc_830648F4:
	// bl 0x83020968
	sub_83020968(ctx, base);
	// b 0x83064a60
	goto loc_83064A60;
loc_830648FC:
	// lwz r10,548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x83064a28
	if (cr6.lt) goto loc_83064A28;
	// lwz r11,668(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// b 0x83064a44
	goto loc_83064A44;
loc_8306493C:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830649c8
	if (!cr6.eq) goto loc_830649C8;
	// addi r5,r31,188
	ctx.r5.s64 = r31.s64 + 188;
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306496c
	if (cr0.eq) goto loc_8306496C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8306498c
	if (!cr0.eq) goto loc_8306498C;
loc_8306496C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff02e0
	sub_82FF02E0(ctx, base);
	// lwz r11,548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// b 0x830648f4
	goto loc_830648F4;
loc_8306498C:
	// lwz r10,548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x83064a28
	if (cr6.lt) goto loc_83064A28;
	// lwz r11,668(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x83064a60
	goto loc_83064A60;
loc_830649C8:
	// addi r6,r31,232
	ctx.r6.s64 = r31.s64 + 232;
	// lwz r3,560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 560);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830649f0
	if (cr0.eq) goto loc_830649F0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83064a18
	if (!cr0.eq) goto loc_83064A18;
loc_830649F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff02e0
	sub_82FF02E0(ctx, base);
	// lwz r11,548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// lwz r3,560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 560);
	// bl 0x83072d30
	sub_83072D30(ctx, base);
	// b 0x83064a60
	goto loc_83064A60;
loc_83064A18:
	// lwz r10,548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x83064a30
	if (!cr6.lt) goto loc_83064A30;
loc_83064A28:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x83064a60
	goto loc_83064A60;
loc_83064A30:
	// lwz r11,668(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_83064A44:
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
	// li r11,1
	r11.s64 = 1;
	// stb r11,581(r30)
	PPC_STORE_U8(r30.u32 + 581, r11.u8);
loc_83064A60:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83064ad4
	if (!cr6.eq) goto loc_83064AD4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x83064ad4
	if (!cr6.eq) goto loc_83064AD4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x83064ad4
	if (!cr6.eq) goto loc_83064AD4;
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83064a98
	if (!cr0.eq) goto loc_83064A98;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83064a98
	if (!cr0.eq) goto loc_83064A98;
	// li r11,1
	r11.s64 = 1;
	// stb r11,581(r30)
	PPC_STORE_U8(r30.u32 + 581, r11.u8);
loc_83064A98:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83064ad4
	if (cr0.eq) goto loc_83064AD4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83064ac4
	if (!cr6.eq) goto loc_83064AC4;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83064abc
	if (!cr0.eq) goto loc_83064ABC;
	// li r19,1
	r19.s64 = 1;
	// b 0x83064ad4
	goto loc_83064AD4;
loc_83064ABC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83064acc
	if (cr6.eq) goto loc_83064ACC;
loc_83064AC4:
	// li r17,1
	r17.s64 = 1;
	// b 0x83064ad0
	goto loc_83064AD0;
loc_83064ACC:
	// mr r17,r20
	r17.u64 = r20.u64;
loc_83064AD0:
	// mr r19,r20
	r19.u64 = r20.u64;
loc_83064AD4:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83064af4
	if (cr0.eq) goto loc_83064AF4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x83064af4
	if (!cr6.eq) goto loc_83064AF4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x83064af8
	if (cr6.eq) goto loc_83064AF8;
loc_83064AF4:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_83064AF8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83064bfc
	if (cr0.eq) goto loc_83064BFC;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83064bfc
	if (!cr0.eq) goto loc_83064BFC;
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83064bfc
	if (!cr0.eq) goto loc_83064BFC;
	// lwz r28,104(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r28.u32);
	// stw r29,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r29.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x83064ba8
	if (cr6.eq) goto loc_83064BA8;
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(r28.u32, 0);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// stw r28,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r28.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0080
	sub_82FF0080(ctx, base);
	// li r4,123
	ctx.r4.s64 = 123;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// lwz r28,104(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 104);
loc_83064BA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,668(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,17
	ctx.r4.s64 = 17;
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83064BFC:
	// lwz r6,16(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x83064d48
	if (cr6.eq) goto loc_83064D48;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8302ca40
	sub_8302CA40(ctx, base);
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83064cac
	if (cr0.eq) goto loc_83064CAC;
	// lwz r28,44(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 44);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x83064cac
	if (cr0.eq) goto loc_83064CAC;
	// lhz r11,10(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83064cac
	if (cr0.eq) goto loc_83064CAC;
	// lwz r26,104(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r26,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r26.u32);
	// stw r29,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r29.u32);
	// lwz r11,4(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 4);
	// lwz r10,24(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r5,24(r14)
	ctx.r5.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8305c9e0
	sub_8305C9E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r20,4(r14)
	PPC_STORE_U32(r14.u32 + 4, r20.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83064CAC:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83064d1c
	if (cr0.eq) goto loc_83064D1C;
	// lwz r11,4(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,668(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r5,24(r14)
	ctx.r5.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// lwz r22,96(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83064d40
	if (cr0.eq) goto loc_83064D40;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r10,581(r30)
	PPC_STORE_U8(r30.u32 + 581, ctx.r10.u8);
	// beq 0x83064d40
	if (cr0.eq) goto loc_83064D40;
	// li r19,1
	r19.s64 = 1;
	// b 0x83064d40
	goto loc_83064D40;
loc_83064D1C:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r5,r31,200
	ctx.r5.s64 = r31.s64 + 200;
	// lwz r3,-15772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -15772);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r22,r20
	r22.u64 = r20.u64;
	// beq 0x83064d40
	if (cr0.eq) goto loc_83064D40;
	// lwz r22,0(r3)
	r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83064D40:
	// lwz r25,8(r23)
	r25.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// b 0x83064edc
	goto loc_83064EDC;
loc_83064D48:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8302ca40
	sub_8302CA40(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83064ea8
	if (cr6.eq) goto loc_83064EA8;
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83064df4
	if (cr0.eq) goto loc_83064DF4;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83064df4
	if (!cr6.eq) goto loc_83064DF4;
	// lwz r28,44(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x83064df4
	if (cr0.eq) goto loc_83064DF4;
	// lhz r11,10(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83064df4
	if (cr0.eq) goto loc_83064DF4;
	// lwz r26,104(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r26,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r26.u32);
	// stw r29,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r29.u32);
	// lwz r11,4(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 4);
	// lwz r10,24(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r5,24(r14)
	ctx.r5.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x8305c9e0
	sub_8305C9E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r20,4(r14)
	PPC_STORE_U32(r14.u32 + 4, r20.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83064DF4:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83064e78
	if (cr0.eq) goto loc_83064E78;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83064e78
	if (!cr0.eq) goto loc_83064E78;
	// lwz r11,4(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,668(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r5,24(r14)
	ctx.r5.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83064f34
	if (!cr6.eq) goto loc_83064F34;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// lwz r22,96(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83064f34
	if (cr0.eq) goto loc_83064F34;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r10,581(r30)
	PPC_STORE_U8(r30.u32 + 581, ctx.r10.u8);
	// beq 0x83064f34
	if (cr0.eq) goto loc_83064F34;
	// li r19,1
	r19.s64 = 1;
	// b 0x83064f34
	goto loc_83064F34;
loc_83064E78:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83064f34
	if (!cr6.eq) goto loc_83064F34;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r5,r31,264
	ctx.r5.s64 = r31.s64 + 264;
	// lwz r3,-15772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -15772);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83064f30
	if (!cr0.eq) goto loc_83064F30;
	// mr r22,r20
	r22.u64 = r20.u64;
	// b 0x83064f34
	goto loc_83064F34;
loc_83064EA8:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83064ed4
	if (!cr6.eq) goto loc_83064ED4;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// lwz r3,-15772(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -15772);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83064f30
	if (!cr0.eq) goto loc_83064F30;
	// mr r22,r20
	r22.u64 = r20.u64;
loc_83064ED4:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_83064ED8:
	// mr r25,r11
	r25.u64 = r11.u64;
loc_83064EDC:
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83065038
	if (cr0.eq) goto loc_83065038;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83065038
	if (!cr6.eq) goto loc_83065038;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 564);
	// bl 0x8302e9f0
	sub_8302E9F0(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83064f44
	if (cr6.eq) goto loc_83064F44;
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x83064f50
	goto loc_83064F50;
loc_83064F30:
	// lwz r22,0(r3)
	r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83064F34:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83064ed4
	if (cr6.eq) goto loc_83064ED4;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// b 0x83064ed8
	goto loc_83064ED8;
loc_83064F44:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8306500c
	if (cr6.eq) goto loc_8306500C;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_83064F50:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8306500c
	if (cr6.eq) goto loc_8306500C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// lwz r26,44(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(r19.s32, 2, xer);
	// beq cr6,0x83064fb4
	if (cr6.eq) goto loc_83064FB4;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
	// b 0x83065038
	goto loc_83065038;
loc_83064FB4:
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83064fdc
	if (!cr6.eq) goto loc_83064FDC;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr r11,r22
	r11.u64 = r22.u64;
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83064fe0
	if (!cr0.eq) goto loc_83064FE0;
loc_83064FDC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_83064FE0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
	// b 0x83065038
	goto loc_83065038;
loc_8306500C:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
loc_83065038:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83065124
	if (!cr6.eq) goto loc_83065124;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830650d0
	if (!cr6.eq) goto loc_830650D0;
	// lwz r27,100(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83065128
	if (cr6.eq) goto loc_83065128;
loc_83065060:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 676);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplw cr6,r21,r10
	cr6.compare<uint32_t>(r21.u32, ctx.r10.u32, xer);
	// bne cr6,0x830650c0
	if (!cr6.eq) goto loc_830650C0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830650c0
	if (cr0.eq) goto loc_830650C0;
	// lwz r11,668(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830650C0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// blt cr6,0x83065060
	if (cr6.lt) goto loc_83065060;
	// b 0x83065128
	goto loc_83065128;
loc_830650D0:
	// addi r6,r31,168
	ctx.r6.s64 = r31.s64 + 168;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
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
	// beq 0x83065124
	if (cr0.eq) goto loc_83065124;
	// lwz r11,668(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,16(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 16);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,247
	ctx.r4.s64 = 247;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83065124:
	// lwz r27,100(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 100);
loc_83065128:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x830651a0
	if (cr6.lt) goto loc_830651A0;
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
	// beq 0x8306518c
	if (cr0.eq) goto loc_8306518C;
	// lwz r11,4(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,24(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// stb r20,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r20.u8);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r7,24(r14)
	ctx.r7.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// lwz r10,216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ff9d30
	sub_82FF9D30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83065190
	goto loc_83065190;
loc_8306518C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_83065190:
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 676);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x830651f8
	goto loc_830651F8;
loc_830651A0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 676);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,4(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 4);
	// lwz r10,24(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// sthx r20,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r20.u16);
	// lwz r29,24(r14)
	r29.u64 = PPC_LOAD_U32(r14.u32 + 24);
	// lwz r3,16(r15)
	ctx.r3.u64 = PPC_LOAD_U32(r15.u32 + 16);
	// bl 0x82fe6e90
	sub_82FE6E90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r25,4(r15)
	PPC_STORE_U32(r15.u32 + 4, r25.u32);
	// stb r20,28(r15)
	PPC_STORE_U8(r15.u32 + 28, r20.u8);
	// stw r20,24(r15)
	PPC_STORE_U32(r15.u32 + 24, r20.u32);
	// stb r11,0(r15)
	PPC_STORE_U8(r15.u32 + 0, r11.u8);
loc_830651F8:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83065218
	if (cr6.eq) goto loc_83065218;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x83028148
	sub_83028148(ctx, base);
loc_83065218:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x8306522c
	if (cr6.eq) goto loc_8306522C;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,12(r15)
	ctx.r4.u64 = PPC_LOAD_U32(r15.u32 + 12);
	// bl 0x830864a8
	sub_830864A8(ctx, base);
loc_8306522C:
	// addi r11,r27,1
	r11.s64 = r27.s64 + 1;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// blt cr6,0x830643ac
	if (cr6.lt) goto loc_830643AC;
loc_83065258:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830656a8
	if (cr6.eq) goto loc_830656A8;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83065290
	if (cr0.eq) goto loc_83065290;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83065290
	if (cr6.eq) goto loc_83065290;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x830486f8
	sub_830486F8(ctx, base);
	// b 0x830652a4
	goto loc_830652A4;
loc_83065290:
	// lwz r3,668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830652A4:
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r20
	r23.u64 = r20.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830656a8
	if (cr0.eq) goto loc_830656A8;
	// lwz r21,100(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r22,1
	r22.s64 = 1;
	// lwz r19,668(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 668);
loc_830652D0:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
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
	// addi r5,r31,168
	ctx.r5.s64 = r31.s64 + 168;
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
	// beq 0x830653c0
	if (cr0.eq) goto loc_830653C0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830653c0
	if (cr0.eq) goto loc_830653C0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,548(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 548);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x830653c0
	if (cr6.lt) goto loc_830653C0;
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(r27.s32, 8, xer);
	// bne cr6,0x83065684
	if (!cr6.eq) goto loc_83065684;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83065684
	if (cr0.eq) goto loc_83065684;
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
	// li r4,49
	ctx.r4.s64 = 49;
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
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83065684
	if (!cr6.eq) goto loc_83065684;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// stb r22,581(r30)
	PPC_STORE_U8(r30.u32 + 581, r22.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83065684
	if (cr0.eq) goto loc_83065684;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 564);
	// bl 0x82ff4a10
	sub_82FF4A10(ctx, base);
	// stw r22,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r22.u32);
	// b 0x83065684
	goto loc_83065684;
loc_830653C0:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83065470
	if (cr0.eq) goto loc_83065470;
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// beq cr6,0x83065430
	if (cr6.eq) goto loc_83065430;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(r27.s32, 3, xer);
	// beq cr6,0x83065430
	if (cr6.eq) goto loc_83065430;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x830653ec
	if (cr6.eq) goto loc_830653EC;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x83065470
	if (!cr6.eq) goto loc_83065470;
loc_830653EC:
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83065470
	if (cr0.eq) goto loc_83065470;
	// lbz r11,17(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83065470
	if (cr0.eq) goto loc_83065470;
	// lwz r3,8(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + 8);
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
	// li r4,82
	ctx.r4.s64 = 82;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x8306544c
	goto loc_8306544C;
loc_83065430:
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
	// li r4,6
	ctx.r4.s64 = 6;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8306544C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83065470
	if (!cr6.eq) goto loc_83065470;
	// stb r22,581(r30)
	PPC_STORE_U8(r30.u32 + 581, r22.u8);
loc_83065470:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x83065480
	if (cr6.eq) goto loc_83065480;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x83065684
	if (!cr6.eq) goto loc_83065684;
loc_83065480:
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830654b0
	if (cr0.eq) goto loc_830654B0;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
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
loc_830654B0:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x83065514
	if (cr6.lt) goto loc_83065514;
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830654e4
	if (cr0.eq) goto loc_830654E4;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82ff9b50
	sub_82FF9B50(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x830654e8
	goto loc_830654E8;
loc_830654E4:
	// mr r28,r20
	r28.u64 = r20.u64;
loc_830654E8:
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x83065540
	goto loc_83065540;
loc_83065514:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83065540:
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8306556c
	if (!cr6.eq) goto loc_8306556C;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x8302cd78
	sub_8302CD78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff9bf8
	sub_82FF9BF8(ctx, base);
loc_8306556C:
	// stb r20,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r20.u8);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83065684
	if (cr0.eq) goto loc_83065684;
	// lwz r11,476(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 476);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83065684
	if (!cr6.eq) goto loc_83065684;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
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
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,564(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 564);
	// bl 0x8302e9f0
	sub_8302E9F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// lwz r26,44(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lbz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 100);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83065624
	if (cr0.eq) goto loc_83065624;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
	// b 0x83065678
	goto loc_83065678;
loc_83065624:
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x83065650
	if (!cr6.eq) goto loc_83065650;
	// lwz r4,96(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// bl 0x83015c80
	sub_83015C80(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x83065650
	if (cr0.eq) goto loc_83065650;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r26,96(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 96);
loc_83065650:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83086430
	sub_83086430(ctx, base);
loc_83065678:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x830864a8
	sub_830864A8(ctx, base);
loc_83065684:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r23,r3
	cr6.compare<uint32_t>(r23.u32, ctx.r3.u32, xer);
	// blt cr6,0x830652d0
	if (cr6.lt) goto loc_830652D0;
	// stw r21,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r21.u32);
loc_830656A8:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
loc_830656B8:
	// addi r1,r31,624
	ctx.r1.s64 = r31.s64 + 624;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_830656C0"))) PPC_WEAK_FUNC(sub_830656C0);
PPC_FUNC_IMPL(__imp__sub_830656C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-624
	r31.s64 = r12.s64 + -624;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_830656E8"))) PPC_WEAK_FUNC(sub_830656E8);
PPC_FUNC_IMPL(__imp__sub_830656E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-624
	r31.s64 = r12.s64 + -624;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
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

__attribute__((alias("__imp__sub_83065710"))) PPC_WEAK_FUNC(sub_83065710);
PPC_FUNC_IMPL(__imp__sub_83065710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-624
	r31.s64 = r12.s64 + -624;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
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

__attribute__((alias("__imp__sub_83065738"))) PPC_WEAK_FUNC(sub_83065738);
PPC_FUNC_IMPL(__imp__sub_83065738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-624
	r31.s64 = r12.s64 + -624;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
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

__attribute__((alias("__imp__sub_83065760"))) PPC_WEAK_FUNC(sub_83065760);
PPC_FUNC_IMPL(__imp__sub_83065760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-624
	r31.s64 = r12.s64 + -624;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
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

__attribute__((alias("__imp__sub_83065788"))) PPC_WEAK_FUNC(sub_83065788);
PPC_FUNC_IMPL(__imp__sub_83065788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-624
	r31.s64 = r12.s64 + -624;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
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

__attribute__((alias("__imp__sub_830657B0"))) PPC_WEAK_FUNC(sub_830657B0);
PPC_FUNC_IMPL(__imp__sub_830657B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-624
	r31.s64 = r12.s64 + -624;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,644(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 644);
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

__attribute__((alias("__imp__sub_830657E0"))) PPC_WEAK_FUNC(sub_830657E0);
PPC_FUNC_IMPL(__imp__sub_830657E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-624
	r31.s64 = r12.s64 + -624;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,644(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 644);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
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

__attribute__((alias("__imp__sub_83065818"))) PPC_WEAK_FUNC(sub_83065818);
PPC_FUNC_IMPL(__imp__sub_83065818) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
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
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r11.u8);
	// lwz r11,568(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83065870
	if (cr6.eq) goto loc_83065870;
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83065870
	if (cr0.eq) goto loc_83065870;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef6f8
	sub_82FEF6F8(ctx, base);
	// stw r3,568(r30)
	PPC_STORE_U32(r30.u32 + 568, ctx.r3.u32);
loc_83065870:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-27796
	ctx.r4.s64 = r11.s64 + -27796;
	// bl 0x8305acb8
	sub_8305ACB8(ctx, base);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82fef000
	sub_82FEF000(ctx, base);
	// stw r3,528(r30)
	PPC_STORE_U32(r30.u32 + 528, ctx.r3.u32);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8305ad50
	sub_8305AD50(ctx, base);
	// lwz r3,528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830658e8
	if (!cr0.eq) goto loc_830658E8;
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830658d4
	if (cr0.eq) goto loc_830658D4;
	// lwz r4,180(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// bl 0x83059550
	sub_83059550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830658d8
	goto loc_830658D8;
loc_830658D4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_830658D8:
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// stw r4,528(r30)
	PPC_STORE_U32(r30.u32 + 528, ctx.r4.u32);
	// bl 0x82fef120
	sub_82FEF120(ctx, base);
	// b 0x830658f8
	goto loc_830658F8;
loc_830658E8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830658F8:
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
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// stw r3,476(r30)
	PPC_STORE_U32(r30.u32 + 476, ctx.r3.u32);
	// stw r28,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83065988
	if (cr0.eq) goto loc_83065988;
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
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne 0x83065994
	if (!cr0.eq) goto loc_83065994;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830659a4
	if (cr0.eq) goto loc_830659A4;
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r11.u32);
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// lwz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// stb r11,84(r10)
	PPC_STORE_U8(ctx.r10.u32 + 84, r11.u8);
	// b 0x830659a4
	goto loc_830659A4;
loc_83065988:
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// stw r3,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83065994:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r4,184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830659A4:
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
	// beq 0x830659d4
	if (cr0.eq) goto loc_830659D4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830659D4:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830659f0
	if (cr0.eq) goto loc_830659F0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830659F0:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83065a0c
	if (cr0.eq) goto loc_83065A0C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83065A0C:
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
	// lwz r3,532(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// stw r28,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83065a40
	if (cr0.eq) goto loc_83065A40;
	// bl 0x8305c090
	sub_8305C090(ctx, base);
loc_83065A40:
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
	// bl 0x8301e758
	sub_8301E758(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83065a84
	if (!cr6.eq) goto loc_83065A84;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-8744
	ctx.r4.s64 = r11.s64 + -8744;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r3.u32);
loc_83065A84:
	// li r11,1
	r11.s64 = 1;
	// stb r28,13(r30)
	PPC_STORE_U8(r30.u32 + 13, r28.u8);
	// stb r28,14(r30)
	PPC_STORE_U8(r30.u32 + 14, r28.u8);
	// stw r28,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r28.u32);
	// stb r28,472(r30)
	PPC_STORE_U8(r30.u32 + 472, r28.u8);
	// stb r11,15(r30)
	PPC_STORE_U8(r30.u32 + 15, r11.u8);
	// lwz r11,572(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 572);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83065ad4
	if (!cr6.eq) goto loc_83065AD4;
	// li r3,56
	ctx.r3.s64 = 56;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83065acc
	if (cr0.eq) goto loc_83065ACC;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8305bfb8
	sub_8305BFB8(ctx, base);
	// b 0x83065ad0
	goto loc_83065AD0;
loc_83065ACC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83065AD0:
	// stw r3,572(r30)
	PPC_STORE_U32(r30.u32 + 572, ctx.r3.u32);
loc_83065AD4:
	// lwz r11,576(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 576);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83065b1c
	if (!cr0.eq) goto loc_83065B1C;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// beq 0x83065b10
	if (cr0.eq) goto loc_83065B10;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8302dfb0
	sub_8302DFB0(ctx, base);
	// b 0x83065b14
	goto loc_83065B14;
loc_83065B10:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_83065B14:
	// stw r29,576(r30)
	PPC_STORE_U32(r30.u32 + 576, r29.u32);
	// b 0x83065b20
	goto loc_83065B20;
loc_83065B1C:
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
loc_83065B20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8301fe30
	sub_8301FE30(ctx, base);
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,520(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 520);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r3,524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r10,524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r11.u32);
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lbz r10,11(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// stb r10,84(r11)
	PPC_STORE_U8(r11.u32 + 84, ctx.r10.u8);
	// lwz r11,524(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 524);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lbz r11,17(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 17);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83065ba4
	if (cr0.eq) goto loc_83065BA4;
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
loc_83065BA4:
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
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff5178
	sub_82FF5178(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x83065c80
	if (!cr0.eq) goto loc_83065C80;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
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
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x83065c40
	if (cr0.eq) goto loc_83065C40;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r6,76
	ctx.r6.s64 = 76;
	// li r5,1263
	ctx.r5.s64 = 1263;
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
loc_83065C40:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,24648
	ctx.r4.s64 = r11.s64 + 24648;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1265
	ctx.r5.s64 = 1265;
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
loc_83065C80:
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
	// beq 0x83065cb0
	if (cr0.eq) goto loc_83065CB0;
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
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
loc_83065CB0:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r28,548(r30)
	PPC_STORE_U32(r30.u32 + 548, r28.u32);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// blt cr6,0x83065ce4
	if (cr6.lt) goto loc_83065CE4;
	// lwz r3,552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 552);
	// bl 0x8301ff70
	sub_8301FF70(ctx, base);
	// lwz r3,556(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// bl 0x8301ff70
	sub_8301FF70(ctx, base);
	// lwz r3,560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 560);
	// bl 0x830778e0
	sub_830778E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0490
	sub_82FF0490(ctx, base);
	// b 0x83065cec
	goto loc_83065CEC;
loc_83065CE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0448
	sub_82FF0448(ctx, base);
loc_83065CEC:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83065CF4"))) PPC_WEAK_FUNC(sub_83065CF4);
PPC_FUNC_IMPL(__imp__sub_83065CF4) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x8305ad50
	sub_8305AD50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065D1C"))) PPC_WEAK_FUNC(sub_83065D1C);
PPC_FUNC_IMPL(__imp__sub_83065D1C) {
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

__attribute__((alias("__imp__sub_83065D4C"))) PPC_WEAK_FUNC(sub_83065D4C);
PPC_FUNC_IMPL(__imp__sub_83065D4C) {
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
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
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

__attribute__((alias("__imp__sub_83065D7C"))) PPC_WEAK_FUNC(sub_83065D7C);
PPC_FUNC_IMPL(__imp__sub_83065D7C) {
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
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
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

__attribute__((alias("__imp__sub_83065DB8"))) PPC_WEAK_FUNC(sub_83065DB8);
PPC_FUNC_IMPL(__imp__sub_83065DB8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83022c68
	sub_83022C68(ctx, base);
	// lwz r11,536(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83065e10
	if (cr0.eq) goto loc_83065E10;
	// li r4,295
	ctx.r4.s64 = 295;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83065e58
	goto loc_83065E58;
loc_83065E10:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83065e58
	if (cr6.eq) goto loc_83065E58;
loc_83065E1C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// addi r4,r29,1
	ctx.r4.s64 = r29.s64 + 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830628f0
	sub_830628F0(ctx, base);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x83065e1c
	if (cr6.lt) goto loc_83065E1C;
loc_83065E58:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83065E6C"))) PPC_WEAK_FUNC(sub_83065E6C);
PPC_FUNC_IMPL(__imp__sub_83065E6C) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdb1a0
	sub_82FDB1A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83065EA0"))) PPC_WEAK_FUNC(sub_83065EA0);
PPC_FUNC_IMPL(__imp__sub_83065EA0) {
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
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// li r17,0
	r17.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// li r14,1
	r14.s64 = 1;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// ble cr6,0x83065f5c
	if (!cr6.gt) goto loc_83065F5C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-8744
	r26.s64 = r11.s64 + -8744;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-28120
	r24.s64 = r11.s64 + -28120;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-28108
	r25.s64 = r11.s64 + -28108;
loc_83065EE4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,516(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 516);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r30,8(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd9c88
	sub_82FD9C88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83065f24
	if (cr0.eq) goto loc_83065F24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83065f50
	if (cr0.eq) goto loc_83065F50;
loc_83065F24:
	// lwz r28,16(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x83061308
	sub_83061308(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83065f50
	if (cr0.eq) goto loc_83065F50;
	// stb r14,472(r29)
	PPC_STORE_U8(r29.u32 + 472, r14.u8);
loc_83065F50:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r15
	cr6.compare<int32_t>(r27.s32, r15.s32, xer);
	// blt cr6,0x83065ee4
	if (cr6.lt) goto loc_83065EE4;
loc_83065F5C:
	// lbz r11,18(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 18);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830661e4
	if (cr0.eq) goto loc_830661E4;
	// lbz r11,472(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 472);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830661e4
	if (cr0.eq) goto loc_830661E4;
	// addi r16,r29,220
	r16.s64 = r29.s64 + 220;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r16,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r16.u32);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// mr r22,r17
	r22.u64 = r17.u64;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// ble cr6,0x83066124
	if (!cr6.gt) goto loc_83066124;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-6380
	r21.s64 = r11.s64 + -6380;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r20,r11,-7168
	r20.s64 = r11.s64 + -7168;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r19,r11,-8508
	r19.s64 = r11.s64 + -8508;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r18,r11,-8660
	r18.s64 = r11.s64 + -8660;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-8540
	r23.s64 = r11.s64 + -8540;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-27800
	r24.s64 = r11.s64 + -27800;
loc_83065FC8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,516(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 516);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x83066024
	if (cr6.eq) goto loc_83066024;
	// addi r30,r29,372
	r30.s64 = r29.s64 + 372;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r17,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r17.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r17,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r17.u16);
	// lwz r30,24(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 24);
loc_83066024:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8302cd78
	sub_8302CD78(ctx, base);
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x83066118
	if (!cr6.eq) goto loc_83066118;
	// addi r11,r27,1
	r11.s64 = r27.s64 + 1;
	// lwz r27,16(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r28
	r30.u64 = r11.u64 + r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83066074
	if (cr0.eq) goto loc_83066074;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83065db8
	sub_83065DB8(ctx, base);
	// b 0x83066098
	goto loc_83066098;
loc_83066074:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83066098
	if (cr0.eq) goto loc_83066098;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830628f0
	sub_830628F0(ctx, base);
loc_83066098:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830660c4
	if (cr0.eq) goto loc_830660C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r17,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r17.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// b 0x83066118
	goto loc_83066118;
loc_830660C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83066118
	if (cr0.eq) goto loc_83066118;
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83066118
	if (cr0.eq) goto loc_83066118;
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
	// beq 0x83066118
	if (cr0.eq) goto loc_83066118;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83066118
	if (cr0.eq) goto loc_83066118;
	// lwz r11,168(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// stb r14,36(r11)
	PPC_STORE_U8(r11.u32 + 36, r14.u8);
loc_83066118:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmpw cr6,r22,r15
	cr6.compare<int32_t>(r22.s32, r15.s32, xer);
	// blt cr6,0x83065fc8
	if (cr6.lt) goto loc_83065FC8;
loc_83066124:
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830661d8
	if (cr0.eq) goto loc_830661D8;
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
	// beq 0x830661d8
	if (cr0.eq) goto loc_830661D8;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830661d8
	if (!cr0.eq) goto loc_830661D8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r29,344
	r30.s64 = r29.s64 + 344;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// sthx r17,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r17.u16);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,24(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r17,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r17.u16);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// sthx r17,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r17.u16);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 168);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8302c040
	sub_8302C040(ctx, base);
loc_830661D8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_830661E4:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_830661EC"))) PPC_WEAK_FUNC(sub_830661EC);
PPC_FUNC_IMPL(__imp__sub_830661EC) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_83066218"))) PPC_WEAK_FUNC(sub_83066218);
PPC_FUNC_IMPL(__imp__sub_83066218) {
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
	// beq 0x83066254
	if (cr0.eq) goto loc_83066254;
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
loc_83066254:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
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

__attribute__((alias("__imp__sub_83066280"))) PPC_WEAK_FUNC(sub_83066280);
PPC_FUNC_IMPL(__imp__sub_83066280) {
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
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x830662bc
	if (cr0.eq) goto loc_830662BC;
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
loc_830662BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830662E8"))) PPC_WEAK_FUNC(sub_830662E8);
PPC_FUNC_IMPL(__imp__sub_830662E8) {
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
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x83066324
	if (cr0.eq) goto loc_83066324;
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
loc_83066324:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066350"))) PPC_WEAK_FUNC(sub_83066350);
PPC_FUNC_IMPL(__imp__sub_83066350) {
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
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8306638c
	if (cr0.eq) goto loc_8306638C;
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
loc_8306638C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830663B8"))) PPC_WEAK_FUNC(sub_830663B8);
PPC_FUNC_IMPL(__imp__sub_830663B8) {
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
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x830663f4
	if (cr0.eq) goto loc_830663F4;
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
loc_830663F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066420"))) PPC_WEAK_FUNC(sub_83066420);
PPC_FUNC_IMPL(__imp__sub_83066420) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8306645c
	if (cr0.eq) goto loc_8306645C;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306645C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// beq cr6,0x830664a4
	if (cr6.eq) goto loc_830664A4;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830664a4
	if (cr0.eq) goto loc_830664A4;
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// b 0x8306648c
	goto loc_8306648C;
loc_83066488:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8306648C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83066488
	if (!cr0.eq) goto loc_83066488;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x830664a8
	goto loc_830664A8;
loc_830664A4:
	// li r11,0
	r11.s64 = 0;
loc_830664A8:
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

__attribute__((alias("__imp__sub_830664D0"))) PPC_WEAK_FUNC(sub_830664D0);
PPC_FUNC_IMPL(__imp__sub_830664D0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r29,0
	r29.s64 = 0;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// addi r11,r11,-5208
	r11.s64 = r11.s64 + -5208;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r11,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r11.u8);
	// stb r11,29(r30)
	PPC_STORE_U8(r30.u32 + 29, r11.u8);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// beq cr6,0x8306655c
	if (cr6.eq) goto loc_8306655C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83066554
	if (cr0.eq) goto loc_83066554;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fe6610
	sub_82FE6610(ctx, base);
	// b 0x83066558
	goto loc_83066558;
loc_83066554:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_83066558:
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
loc_8306655C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83066568"))) PPC_WEAK_FUNC(sub_83066568);
PPC_FUNC_IMPL(__imp__sub_83066568) {
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
	// bl 0x830547b0
	sub_830547B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066590"))) PPC_WEAK_FUNC(sub_83066590);
PPC_FUNC_IMPL(__imp__sub_83066590) {
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
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
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

__attribute__((alias("__imp__sub_830665C0"))) PPC_WEAK_FUNC(sub_830665C0);
PPC_FUNC_IMPL(__imp__sub_830665C0) {
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
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// bne cr6,0x83066644
	if (!cr6.eq) goto loc_83066644;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306663c
	if (cr0.eq) goto loc_8306663C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// addi r9,r11,-5208
	ctx.r9.s64 = r11.s64 + -5208;
	// li r11,1
	r11.s64 = 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
loc_83066628:
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// b 0x830666bc
	goto loc_830666BC;
loc_8306663C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830666bc
	goto loc_830666BC;
loc_83066644:
	// cmplwi cr6,r11,43
	cr6.compare<uint32_t>(r11.u32, 43, xer);
	// bne cr6,0x83066694
	if (!cr6.eq) goto loc_83066694;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306663c
	if (cr0.eq) goto loc_8306663C;
	// li r9,3
	ctx.r9.s64 = 3;
loc_83066664:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-5208
	r11.s64 = r11.s64 + -5208;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// b 0x83066628
	goto loc_83066628;
loc_83066694:
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(r11.u32, 42, xer);
	// bne cr6,0x830666b8
	if (!cr6.eq) goto loc_830666B8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306663c
	if (cr0.eq) goto loc_8306663C;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x83066664
	goto loc_83066664;
loc_830666B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830666BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830666D8"))) PPC_WEAK_FUNC(sub_830666D8);
PPC_FUNC_IMPL(__imp__sub_830666D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// stw r4,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r4.u32);
	// stw r5,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r5.u32);
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// lbz r11,10(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830666f8
	if (cr0.eq) goto loc_830666F8;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// b 0x830666fc
	goto loc_830666FC;
loc_830666F8:
	// li r11,0
	r11.s64 = 0;
loc_830666FC:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83066718"))) PPC_WEAK_FUNC(sub_83066718);
PPC_FUNC_IMPL(__imp__sub_83066718) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff62e0
	sub_82FF62E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83066788
	if (!cr0.eq) goto loc_83066788;
loc_83066758:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306675C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83066774:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83066758
	if (cr6.eq) goto loc_83066758;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_83066788:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x83066774
	if (!cr6.eq) goto loc_83066774;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8306675c
	goto loc_8306675C;
}

__attribute__((alias("__imp__sub_830667A8"))) PPC_WEAK_FUNC(sub_830667A8);
PPC_FUNC_IMPL(__imp__sub_830667A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// li r28,10
	r28.s64 = 10;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83066804
	if (!cr0.eq) goto loc_83066804;
	// li r4,88
	ctx.r4.s64 = 88;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306689c
	if (cr0.eq) goto loc_8306689C;
	// li r4,267
	ctx.r4.s64 = 267;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83066804:
	// li r28,16
	r28.s64 = 16;
	// b 0x8306689c
	goto loc_8306689C;
loc_8306680C:
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// beq cr6,0x830668dc
	if (cr6.eq) goto loc_830668DC;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// blt cr6,0x8306682c
	if (cr6.lt) goto loc_8306682C;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(r11.u32, 57, xer);
	// bgt cr6,0x8306682c
	if (cr6.gt) goto loc_8306682C;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// b 0x83066858
	goto loc_83066858;
loc_8306682C:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x83066844
	if (cr6.lt) goto loc_83066844;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(r11.u32, 70, xer);
	// bgt cr6,0x83066844
	if (cr6.gt) goto loc_83066844;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x83066858
	goto loc_83066858;
loc_83066844:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// blt cr6,0x83066964
	if (cr6.lt) goto loc_83066964;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(r11.u32, 102, xer);
	// bgt cr6,0x83066964
	if (cr6.gt) goto loc_83066964;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
loc_83066858:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// blt cr6,0x83066888
	if (cr6.lt) goto loc_83066888;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r25,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r25.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,273
	ctx.r4.s64 = 273;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x83066890
	goto loc_83066890;
loc_83066888:
	// mullw r10,r28,r29
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(r29.s32);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
loc_83066890:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r30,1
	r30.s64 = 1;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
loc_8306689C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi. r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306680c
	if (!cr0.eq) goto loc_8306680C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,26944
	ctx.r4.s64 = r11.s64 + 26944;
	// li r5,1144
	ctx.r5.s64 = 1144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830668DC:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// lis r11,15
	r11.s64 = 983040;
	// ori r10,r11,65535
	ctx.r10.u64 = r11.u64 | 65535;
	// addis r11,r29,-1
	r11.s64 = r29.s64 + -65536;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x83066920
	if (cr6.gt) goto loc_83066920;
	// rlwinm r10,r11,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi r11,r11,22
	r11.u64 = r11.u32 & 0x3FF;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r10,r10,-10240
	ctx.r10.s64 = ctx.r10.s64 + -10240;
	// addi r11,r11,-9216
	r11.s64 = r11.s64 + -9216;
	// sth r10,0(r27)
	PPC_STORE_U16(r27.u32 + 0, ctx.r10.u16);
	// sth r11,0(r26)
	PPC_STORE_U16(r26.u32 + 0, r11.u16);
loc_83066918:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83066980
	goto loc_83066980;
loc_83066920:
	// cmplwi cr6,r29,65533
	cr6.compare<uint32_t>(r29.u32, 65533, xer);
	// bgt cr6,0x8306695c
	if (cr6.gt) goto loc_8306695C;
	// sth r29,0(r27)
	PPC_STORE_U16(r27.u32 + 0, r29.u16);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// sth r25,0(r26)
	PPC_STORE_U16(r26.u32 + 0, r25.u16);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83066918
	if (!cr0.eq) goto loc_83066918;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83066918
	if (!cr0.eq) goto loc_83066918;
loc_8306695C:
	// li r4,224
	ctx.r4.s64 = 224;
	// b 0x83066974
	goto loc_83066974;
loc_83066964:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r4,225
	ctx.r4.s64 = 225;
	// bne 0x83066974
	if (!cr0.eq) goto loc_83066974;
	// li r4,260
	ctx.r4.s64 = 260;
loc_83066974:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83066980:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83066990"))) PPC_WEAK_FUNC(sub_83066990);
PPC_FUNC_IMPL(__imp__sub_83066990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b00
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// beq 0x83066a98
	if (cr0.eq) goto loc_83066A98;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// ori r20,r10,32808
	r20.u64 = ctx.r10.u64 | 32808;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r29,r11,r20
	r29.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// bl 0x83066990
	sub_83066990(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x830670f8
	if (cr0.eq) goto loc_830670F8;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x83066a34
	if (cr6.eq) goto loc_83066A34;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83066a34
	if (cr0.eq) goto loc_83066A34;
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_83066A34:
	// li r28,0
	r28.s64 = 0;
loc_83066A38:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// clrlwi r27,r19,16
	r27.u64 = r19.u32 & 0xFFFF;
	// cmplwi cr6,r27,44
	cr6.compare<uint32_t>(r27.u32, 44, xer);
	// beq cr6,0x83066c68
	if (cr6.eq) goto loc_83066C68;
	// cmplwi cr6,r27,124
	cr6.compare<uint32_t>(r27.u32, 124, xer);
	// beq cr6,0x83066c68
	if (cr6.eq) goto loc_83066C68;
	// cmplwi cr6,r27,41
	cr6.compare<uint32_t>(r27.u32, 41, xer);
	// beq cr6,0x83066c68
	if (cr6.eq) goto loc_83066C68;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83066a90
	if (cr6.eq) goto loc_83066A90;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83066A90:
	// li r4,239
	ctx.r4.s64 = 239;
	// b 0x830670c8
	goto loc_830670C8;
loc_83066A98:
	// li r28,0
	r28.s64 = 0;
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r28,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r28.u32);
	// sth r28,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r28.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83066ac8
	if (!cr0.eq) goto loc_83066AC8;
loc_83066AC0:
	// li r4,183
	ctx.r4.s64 = 183;
	// b 0x830670c8
	goto loc_830670C8;
loc_83066AC8:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r6,24(r23)
	ctx.r6.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
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
	// bne 0x83066ba0
	if (!cr0.eq) goto loc_83066BA0;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83066b48
	if (cr0.eq) goto loc_83066B48;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,24(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83066b4c
	goto loc_83066B4C;
loc_83066B48:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_83066B4C:
	// lis r11,2
	r11.s64 = 131072;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ori r20,r11,32808
	r20.u64 = r11.u64 | 32808;
	// li r11,3
	r11.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, r11.u8);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83066ba8
	goto loc_83066BA8;
loc_83066BA0:
	// lis r11,2
	r11.s64 = 131072;
	// ori r20,r11,32808
	r20.u64 = r11.u64 | 32808;
loc_83066BA8:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83066bd4
	if (cr0.eq) goto loc_83066BD4;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830664d0
	sub_830664D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x83066bd8
	goto loc_83066BD8;
loc_83066BD4:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_83066BD8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r24,r29
	r24.u64 = r29.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830665c0
	sub_830665C0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r29
	cr6.compare<uint32_t>(r27.u32, r29.u32, xer);
	// beq cr6,0x83066a38
	if (cr6.eq) goto loc_83066A38;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83066c58
	if (cr0.eq) goto loc_83066C58;
	// li r4,217
	ctx.r4.s64 = 217;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82feffc8
	sub_82FEFFC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83066c4c
	if (cr0.eq) goto loc_83066C4C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83066c4c
	if (cr6.eq) goto loc_83066C4C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83066C4C:
	// li r4,217
	ctx.r4.s64 = 217;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83066C58:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r24,r27
	r24.u64 = r27.u64;
	// b 0x83066a38
	goto loc_83066A38;
loc_83066C68:
	// li r21,-1
	r21.s64 = -1;
	// cmplwi cr6,r27,44
	cr6.compare<uint32_t>(r27.u32, 44, xer);
	// bne cr6,0x83066c7c
	if (!cr6.eq) goto loc_83066C7C;
	// li r21,5
	r21.s64 = 5;
	// b 0x83066c88
	goto loc_83066C88;
loc_83066C7C:
	// cmplwi cr6,r27,124
	cr6.compare<uint32_t>(r27.u32, 124, xer);
	// bne cr6,0x83066cfc
	if (!cr6.eq) goto loc_83066CFC;
	// li r21,4
	r21.s64 = 4;
loc_83066C88:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,1
	r29.s64 = 1;
	// beq 0x83066ce0
	if (cr0.eq) goto loc_83066CE0;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// addi r25,r11,-5208
	r25.s64 = r11.s64 + -5208;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r24.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// stw r21,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r21.u32);
	// stb r29,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r29.u8);
	// stb r29,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r29.u8);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r29.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x83066cec
	goto loc_83066CEC;
loc_83066CE0:
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// mr r11,r28
	r11.u64 = r28.u64;
	// addi r25,r10,-5208
	r25.s64 = ctx.r10.s64 + -5208;
loc_83066CEC:
	// mr r22,r11
	r22.u64 = r11.u64;
	// mr r24,r11
	r24.u64 = r11.u64;
	// stw r22,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r22.u32);
	// b 0x83066d18
	goto loc_83066D18;
loc_83066CFC:
	// mr r22,r24
	r22.u64 = r24.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stw r22,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r22.u32);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r29,1
	r29.s64 = 1;
	// addi r25,r11,-5208
	r25.s64 = r11.s64 + -5208;
loc_83066D18:
	// cmplwi cr6,r27,44
	cr6.compare<uint32_t>(r27.u32, 44, xer);
	// beq cr6,0x83066d28
	if (cr6.eq) goto loc_83066D28;
	// cmplwi cr6,r27,124
	cr6.compare<uint32_t>(r27.u32, 124, xer);
	// bne cr6,0x83066dbc
	if (!cr6.eq) goto loc_83066DBC;
loc_83066D28:
	// mr r26,r28
	r26.u64 = r28.u64;
loc_83066D2C:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-37
	r11.s64 = r11.s64 + -37;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83066d5c
	if (cr0.eq) goto loc_83066D5C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// b 0x83066d2c
	goto loc_83066D2C;
loc_83066D5C:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6270
	sub_82FF6270(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// beq 0x83066d7c
	if (cr0.eq) goto loc_83066D7C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x83066d2c
	goto loc_83066D2C;
loc_83066D7C:
	// li r4,41
	ctx.r4.s64 = 41;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83066dec
	if (cr0.eq) goto loc_83066DEC;
	// lwz r11,24(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83066da0
	if (cr6.eq) goto loc_83066DA0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x83066dbc
	if (!cr6.eq) goto loc_83066DBC;
loc_83066DA0:
	// lwz r11,20(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83066dbc
	if (!cr6.eq) goto loc_83066DBC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,16(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// stw r28,16(r24)
	PPC_STORE_U32(r24.u32 + 16, r28.u32);
	// bl 0x83046808
	sub_83046808(ctx, base);
loc_83066DBC:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830665c0
	sub_830665C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r22
	cr6.compare<uint32_t>(r29.u32, r22.u32, xer);
	// beq cr6,0x83066de4
	if (cr6.eq) goto loc_83066DE4;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
loc_83066DE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830670fc
	goto loc_830670FC;
loc_83066DEC:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067098
	if (cr0.eq) goto loc_83067098;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// beq 0x83066ec4
	if (cr0.eq) goto loc_83066EC4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r26,r11,r20
	r26.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83066990
	sub_83066990(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x83066e74
	if (!cr6.eq) goto loc_83066E74;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x830670f8
	if (cr6.eq) goto loc_830670F8;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830670f8
	goto loc_830670F8;
loc_83066E74:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// beq cr6,0x83066ea4
	if (cr6.eq) goto loc_83066EA4;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83066ea4
	if (cr0.eq) goto loc_83066EA4;
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_83066EA4:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306707c
	if (cr0.eq) goto loc_8306707C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r27.u32);
	// b 0x8306704c
	goto loc_8306704C;
loc_83066EC4:
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r28.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// sth r28,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r28.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83066f0c
	if (!cr0.eq) goto loc_83066F0C;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x83066ac0
	if (cr6.eq) goto loc_83066AC0;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x83066ac0
	goto loc_83066AC0;
loc_83066F0C:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r6,24(r23)
	ctx.r6.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x83066fd8
	if (!cr0.eq) goto loc_83066FD8;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83066f8c
	if (cr0.eq) goto loc_83066F8C;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,24(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83066f90
	goto loc_83066F90;
loc_83066F8C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_83066F90:
	// li r11,3
	r11.s64 = 3;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, r11.u8);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83066FD8:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83067004
	if (cr0.eq) goto loc_83067004;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830664d0
	sub_830664D0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x83067008
	goto loc_83067008;
loc_83067004:
	// mr r27,r28
	r27.u64 = r28.u64;
loc_83067008:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830665c0
	sub_830665C0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// beq cr6,0x83067030
	if (cr6.eq) goto loc_83067030;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
loc_83067030:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306707c
	if (cr0.eq) goto loc_8306707C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r26.u32);
loc_8306704C:
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r28.u32);
	// stw r21,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r21.u32);
	// stb r29,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r29.u8);
	// stb r29,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r29.u8);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r29.u32);
	// stw r29,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r29.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x83067080
	goto loc_83067080;
loc_8306707C:
	// mr r27,r28
	r27.u64 = r28.u64;
loc_83067080:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83046808
	sub_83046808(ctx, base);
	// mr r26,r24
	r26.u64 = r24.u64;
	// mr r24,r27
	r24.u64 = r27.u64;
	// b 0x83066d2c
	goto loc_83066D2C;
loc_83067098:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x830670b8
	if (cr6.eq) goto loc_830670B8;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830670B8:
	// clrlwi r11,r19,16
	r11.u64 = r19.u32 & 0xFFFF;
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(r11.u32, 44, xer);
	// bne cr6,0x830670d4
	if (!cr6.eq) goto loc_830670D4;
	// li r4,240
	ctx.r4.s64 = 240;
loc_830670C8:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830670f8
	goto loc_830670F8;
loc_830670D4:
	// lwz r3,8(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,241
	ctx.r4.s64 = 241;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830670F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830670FC:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_8306710C"))) PPC_WEAK_FUNC(sub_8306710C);
PPC_FUNC_IMPL(__imp__sub_8306710C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8306713c
	if (cr6.eq) goto loc_8306713C;
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
loc_8306713C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83067148"))) PPC_WEAK_FUNC(sub_83067148);
PPC_FUNC_IMPL(__imp__sub_83067148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_83067178"))) PPC_WEAK_FUNC(sub_83067178);
PPC_FUNC_IMPL(__imp__sub_83067178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_830671A8"))) PPC_WEAK_FUNC(sub_830671A8);
PPC_FUNC_IMPL(__imp__sub_830671A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_830671D8"))) PPC_WEAK_FUNC(sub_830671D8);
PPC_FUNC_IMPL(__imp__sub_830671D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_83067210"))) PPC_WEAK_FUNC(sub_83067210);
PPC_FUNC_IMPL(__imp__sub_83067210) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r24,40(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// b 0x83067368
	goto loc_83067368;
loc_8306724C:
	// cmplwi cr6,r29,55296
	cr6.compare<uint32_t>(r29.u32, 55296, xer);
	// blt cr6,0x8306727c
	if (cr6.lt) goto loc_8306727C;
	// cmplwi cr6,r29,56319
	cr6.compare<uint32_t>(r29.u32, 56319, xer);
	// bgt cr6,0x8306727c
	if (cr6.gt) goto loc_8306727C;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067274
	if (cr0.eq) goto loc_83067274;
	// li r4,249
	ctx.r4.s64 = 249;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830672fc
	goto loc_830672FC;
loc_83067274:
	// li r25,1
	r25.s64 = 1;
	// b 0x830672fc
	goto loc_830672FC;
loc_8306727C:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830672a4
	if (cr0.eq) goto loc_830672A4;
	// cmplwi cr6,r29,56320
	cr6.compare<uint32_t>(r29.u32, 56320, xer);
	// blt cr6,0x83067294
	if (cr6.lt) goto loc_83067294;
	// cmplwi cr6,r29,57343
	cr6.compare<uint32_t>(r29.u32, 57343, xer);
	// ble cr6,0x830672f8
	if (!cr6.gt) goto loc_830672F8;
loc_83067294:
	// li r4,249
	ctx.r4.s64 = 249;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830672f8
	goto loc_830672F8;
loc_830672A4:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830672f8
	if (!cr0.eq) goto loc_830672F8;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830672F8:
	// li r25,0
	r25.s64 = 0;
loc_830672FC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x83067324
	if (!cr6.eq) goto loc_83067324;
	// cmplwi cr6,r29,45
	cr6.compare<uint32_t>(r29.u32, 45, xer);
	// bne cr6,0x83067314
	if (!cr6.eq) goto loc_83067314;
	// li r26,1
	r26.s64 = 1;
	// b 0x83067364
	goto loc_83067364;
loc_83067314:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// b 0x83067364
	goto loc_83067364;
loc_83067324:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x8306735c
	if (!cr6.eq) goto loc_8306735C;
	// cmplwi cr6,r29,45
	cr6.compare<uint32_t>(r29.u32, 45, xer);
	// bne cr6,0x8306733c
	if (!cr6.eq) goto loc_8306733C;
	// li r26,2
	r26.s64 = 2;
	// b 0x83067364
	goto loc_83067364;
loc_8306733C:
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// b 0x83067364
	goto loc_83067364;
loc_8306735C:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// beq cr6,0x830673b0
	if (cr6.eq) goto loc_830673B0;
loc_83067364:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
loc_83067368:
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi. r29,r27,16
	r29.u64 = r27.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8306724c
	if (!cr0.eq) goto loc_8306724C;
	// li r4,193
	ctx.r4.s64 = 193;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r11,26944
	ctx.r4.s64 = r11.s64 + 26944;
	// li r5,1606
	ctx.r5.s64 = 1606;
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
loc_830673B0:
	// clrlwi r11,r27,16
	r11.u64 = r27.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x830673d8
	if (cr6.eq) goto loc_830673D8;
	// li r4,263
	ctx.r4.s64 = 263;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x83067410
	goto loc_83067410;
loc_830673D8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83067410
	if (cr6.eq) goto loc_83067410;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83067410:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83067424"))) PPC_WEAK_FUNC(sub_83067424);
PPC_FUNC_IMPL(__imp__sub_83067424) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
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

__attribute__((alias("__imp__sub_83067458"))) PPC_WEAK_FUNC(sub_83067458);
PPC_FUNC_IMPL(__imp__sub_83067458) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// lwz r11,24(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 24);
	// stw r25,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r25.u32);
	// sth r25,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r25.u16);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff62e0
	sub_82FF62E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830676b8
	if (cr0.eq) goto loc_830676B8;
	// lwz r24,40(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r11,2
	r11.s64 = 131072;
	// sth r25,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r25.u16);
	// mr r27,r25
	r27.u64 = r25.u64;
	// ori r26,r11,32808
	r26.u64 = r11.u64 | 32808;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r23,r11,r26
	r23.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// b 0x830676f0
	goto loc_830676F0;
loc_830674CC:
	// lhz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x830674ec
	if (!cr6.eq) goto loc_830674EC;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// cmplw cr6,r10,r23
	cr6.compare<uint32_t>(ctx.r10.u32, r23.u32, xer);
	// beq cr6,0x8306773c
	if (cr6.eq) goto loc_8306773C;
loc_830674EC:
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bne cr6,0x83067510
	if (!cr6.eq) goto loc_83067510;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306ba80
	sub_8306BA80(ctx, base);
	// b 0x830676ec
	goto loc_830676EC;
loc_83067510:
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// bne cr6,0x830675fc
	if (!cr6.eq) goto loc_830675FC;
	// li r4,35
	ctx.r4.s64 = 35;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306754c
	if (cr0.eq) goto loc_8306754C;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,82
	ctx.r4.s64 = r31.s64 + 82;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830667a8
	sub_830667A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830676c4
	if (!cr0.eq) goto loc_830676C4;
	// mr r27,r25
	r27.u64 = r25.u64;
	// b 0x830676ec
	goto loc_830676EC;
loc_8306754C:
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r25,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r25.u32);
	// sth r25,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r25.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83067584
	if (!cr0.eq) goto loc_83067584;
	// li r4,226
	ctx.r4.s64 = 226;
loc_83067578:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830675f4
	goto loc_830675F4;
loc_83067584:
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,59
	ctx.r4.s64 = 59;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830675f0
	if (!cr0.eq) goto loc_830675F0;
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
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830675F0:
	// li r29,59
	r29.s64 = 59;
loc_830675F4:
	// mr r27,r25
	r27.u64 = r25.u64;
	// b 0x830676c8
	goto loc_830676C8;
loc_830675FC:
	// cmplwi cr6,r11,55296
	cr6.compare<uint32_t>(r11.u32, 55296, xer);
	// blt cr6,0x8306762c
	if (cr6.lt) goto loc_8306762C;
	// cmplwi cr6,r11,56319
	cr6.compare<uint32_t>(r11.u32, 56319, xer);
	// bgt cr6,0x8306762c
	if (cr6.gt) goto loc_8306762C;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067624
	if (cr0.eq) goto loc_83067624;
	// li r4,249
	ctx.r4.s64 = 249;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x830676c8
	goto loc_830676C8;
loc_83067624:
	// li r27,1
	r27.s64 = 1;
	// b 0x830676c8
	goto loc_830676C8;
loc_8306762C:
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8306764c
	if (cr0.eq) goto loc_8306764C;
	// cmplwi cr6,r11,56320
	cr6.compare<uint32_t>(r11.u32, 56320, xer);
	// blt cr6,0x83067644
	if (cr6.lt) goto loc_83067644;
	// cmplwi cr6,r11,57343
	cr6.compare<uint32_t>(r11.u32, 57343, xer);
	// ble cr6,0x830675f4
	if (!cr6.gt) goto loc_830675F4;
loc_83067644:
	// li r4,249
	ctx.r4.s64 = 249;
	// b 0x83067578
	goto loc_83067578;
loc_8306764C:
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r9,r9,32852
	ctx.r9.u64 = ctx.r9.u64 | 32852;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830675f4
	if (!cr0.eq) goto loc_830675F4;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// clrlwi r3,r29,16
	ctx.r3.u64 = r29.u32 & 0xFFFF;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// lhz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_830676B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830676BC:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b60
	return;
loc_830676C4:
	// lhz r29,82(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 82);
loc_830676C8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lhz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 80);
	// mr. r11,r4
	r11.u64 = ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830676ec
	if (cr0.eq) goto loc_830676EC;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// sth r25,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r25.u16);
loc_830676EC:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
loc_830676F0:
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// sth r29,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r29.u16);
	// clrlwi. r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830674cc
	if (!cr0.eq) goto loc_830674CC;
	// li r4,244
	ctx.r4.s64 = 244;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r11,26944
	ctx.r4.s64 = r11.s64 + 26944;
	// li r5,2288
	ctx.r5.s64 = 2288;
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
loc_8306773C:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x8306776c
	if (cr6.eq) goto loc_8306776C;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8306776c
	if (cr0.eq) goto loc_8306776C;
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_8306776C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830676bc
	goto loc_830676BC;
}

__attribute__((alias("__imp__sub_83067780"))) PPC_WEAK_FUNC(sub_83067780);
PPC_FUNC_IMPL(__imp__sub_83067780) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_830677B0"))) PPC_WEAK_FUNC(sub_830677B0);
PPC_FUNC_IMPL(__imp__sub_830677B0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r28.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// sth r28,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r28.u16);
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r25,r30,24
	r25.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x83067814
	if (cr0.eq) goto loc_83067814;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83067814
	if (!cr0.eq) goto loc_83067814;
	// li r4,246
	ctx.r4.s64 = 246;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83067814:
	// lwz r26,40(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_8306782C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r28,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r28.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bne cr6,0x83067864
	if (!cr6.eq) goto loc_83067864;
	// li r5,1
	ctx.r5.s64 = 1;
loc_83067864:
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830678f4
	if (cr0.eq) goto loc_830678F4;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + r11.u32, r28.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83067928
	if (!cr0.eq) goto loc_83067928;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,124
	ctx.r4.s64 = 124;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306782c
	if (!cr0.eq) goto loc_8306782C;
	// li r4,243
	ctx.r4.s64 = 243;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_830678DC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830678EC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b68
	return;
loc_830678F4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,242
	ctx.r4.s64 = 242;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x830678dc
	goto loc_830678DC;
loc_83067928:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830678ec
	goto loc_830678EC;
}

__attribute__((alias("__imp__sub_8306793C"))) PPC_WEAK_FUNC(sub_8306793C);
PPC_FUNC_IMPL(__imp__sub_8306793C) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_83067968"))) PPC_WEAK_FUNC(sub_83067968);
PPC_FUNC_IMPL(__imp__sub_83067968) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830679b0
	if (cr0.eq) goto loc_830679B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830679b4
	goto loc_830679B4;
loc_830679B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830679B4:
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

__attribute__((alias("__imp__sub_830679C8"))) PPC_WEAK_FUNC(sub_830679C8);
PPC_FUNC_IMPL(__imp__sub_830679C8) {
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
	// li r29,1
	r29.s64 = 1;
	// b 0x83067b24
	goto loc_83067B24;
loc_830679E0:
	// cmplwi cr6,r3,60
	cr6.compare<uint32_t>(ctx.r3.u32, 60, xer);
	// bne cr6,0x83067a18
	if (!cr6.eq) goto loc_83067A18;
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067b28
	if (cr0.eq) goto loc_83067B28;
	// li r4,91
	ctx.r4.s64 = 91;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067b28
	if (cr0.eq) goto loc_83067B28;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x83067b28
	goto loc_83067B28;
loc_83067A18:
	// cmplwi cr6,r3,93
	cr6.compare<uint32_t>(ctx.r3.u32, 93, xer);
	// bne cr6,0x83067a6c
	if (!cr6.eq) goto loc_83067A6C;
	// li r4,93
	ctx.r4.s64 = 93;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067b28
	if (cr0.eq) goto loc_83067B28;
loc_83067A34:
	// li r4,93
	ctx.r4.s64 = 93;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83067a34
	if (!cr0.eq) goto loc_83067A34;
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067b28
	if (cr0.eq) goto loc_83067B28;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83067b28
	if (!cr0.eq) goto loc_83067B28;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_83067A6C:
	// cmplwi cr6,r3,55296
	cr6.compare<uint32_t>(ctx.r3.u32, 55296, xer);
	// blt cr6,0x83067a9c
	if (cr6.lt) goto loc_83067A9C;
	// cmplwi cr6,r3,56319
	cr6.compare<uint32_t>(ctx.r3.u32, 56319, xer);
	// bgt cr6,0x83067a9c
	if (cr6.gt) goto loc_83067A9C;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067a94
	if (cr0.eq) goto loc_83067A94;
	// li r4,249
	ctx.r4.s64 = 249;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83067b28
	goto loc_83067B28;
loc_83067A94:
	// li r30,1
	r30.s64 = 1;
	// b 0x83067b28
	goto loc_83067B28;
loc_83067A9C:
	// cmplwi cr6,r3,56320
	cr6.compare<uint32_t>(ctx.r3.u32, 56320, xer);
	// blt cr6,0x83067abc
	if (cr6.lt) goto loc_83067ABC;
	// cmplwi cr6,r3,57343
	cr6.compare<uint32_t>(ctx.r3.u32, 57343, xer);
	// bgt cr6,0x83067abc
	if (cr6.gt) goto loc_83067ABC;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83067b24
	if (!cr0.eq) goto loc_83067B24;
	// li r4,282
	ctx.r4.s64 = 282;
	// b 0x83067ac8
	goto loc_83067AC8;
loc_83067ABC:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067ad4
	if (cr0.eq) goto loc_83067AD4;
	// li r4,249
	ctx.r4.s64 = 249;
loc_83067AC8:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83067b24
	goto loc_83067B24;
loc_83067AD4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r3
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83067b24
	if (!cr0.eq) goto loc_83067B24;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83067B24:
	// li r30,0
	r30.s64 = 0;
loc_83067B28:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// clrlwi. r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x830679e0
	if (!cr0.eq) goto loc_830679E0;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,26944
	ctx.r4.s64 = r11.s64 + 26944;
	// li r5,2987
	ctx.r5.s64 = 2987;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_83067B70"))) PPC_WEAK_FUNC(sub_83067B70);
PPC_FUNC_IMPL(__imp__sub_83067B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af8
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// mr r18,r27
	r18.u64 = r27.u64;
	// lwz r17,40(r29)
	r17.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// stw r29,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r29.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r17,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r17.u32);
	// stw r20,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r20.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x83067c1c
	if (cr0.eq) goto loc_83067C1C;
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83067c00
	if (cr0.eq) goto loc_83067C00;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r5,r11,-27800
	ctx.r5.s64 = r11.s64 + -27800;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r6,-22220(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -22220);
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83067c04
	goto loc_83067C04;
loc_83067C00:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_83067C04:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x830465a8
	sub_830465A8(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// b 0x83067c20
	goto loc_83067C20;
loc_83067C1C:
	// mr r19,r27
	r19.u64 = r27.u64;
loc_83067C20:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r24,r19
	r24.u64 = r19.u64;
	// mr r23,r19
	r23.u64 = r19.u64;
	// addi r21,r11,-5208
	r21.s64 = r11.s64 + -5208;
	// li r28,1
	r28.s64 = 1;
	// li r22,4
	r22.s64 = 4;
loc_83067C38:
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-37
	r11.s64 = r11.s64 + -37;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067c68
	if (cr0.eq) goto loc_83067C68;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// b 0x83067c38
	goto loc_83067C38;
loc_83067C68:
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067cc0
	if (cr0.eq) goto loc_83067CC0;
	// li r4,176
	ctx.r4.s64 = 176;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82feffc8
	sub_82FEFFC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067cb0
	if (cr0.eq) goto loc_83067CB0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83067cb0
	if (cr6.eq) goto loc_83067CB0;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83067CB0:
	// li r4,176
	ctx.r4.s64 = 176;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83067c38
	goto loc_83067C38;
loc_83067CC0:
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff6270
	sub_82FF6270(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// beq 0x83067ce0
	if (cr0.eq) goto loc_83067CE0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x83067c38
	goto loc_83067C38;
loc_83067CE0:
	// li r4,124
	ctx.r4.s64 = 124;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067f2c
	if (cr0.eq) goto loc_83067F2C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r18,r28
	r18.u64 = r28.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r27.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83068060
	if (cr0.eq) goto loc_83068060;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwz r6,24(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r4,56(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x83067e00
	if (!cr0.eq) goto loc_83067E00;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83067dac
	if (cr0.eq) goto loc_83067DAC;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r4,24(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r5,56(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x83067db0
	goto loc_83067DB0;
loc_83067DAC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_83067DB0:
	// li r11,3
	r11.s64 = 3;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r9,60(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, r11.u8);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83067E00:
	// cmplw cr6,r24,r19
	cr6.compare<uint32_t>(r24.u32, r19.u32, xer);
	// bne cr6,0x83067e94
	if (!cr6.eq) goto loc_83067E94;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x83067e84
	if (cr0.eq) goto loc_83067E84;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83067e48
	if (cr0.eq) goto loc_83067E48;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x830664d0
	sub_830664D0(ctx, base);
	// b 0x83067e4c
	goto loc_83067E4C;
loc_83067E48:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_83067E4C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r21,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r21.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r27.u32);
	// stw r24,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r24.u32);
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// stw r22,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r22.u32);
	// stb r28,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r28.u8);
	// stb r28,29(r30)
	PPC_STORE_U8(r30.u32 + 29, r28.u8);
	// stw r28,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r28.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x83067e88
	goto loc_83067E88;
loc_83067E84:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_83067E88:
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// b 0x83067c38
	goto loc_83067C38;
loc_83067E94:
	// lwz r25,20(r24)
	r25.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r27,20(r24)
	PPC_STORE_U32(r24.u32 + 20, r27.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x83067f18
	if (cr0.eq) goto loc_83067F18;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83067edc
	if (cr0.eq) goto loc_83067EDC;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x830664d0
	sub_830664D0(ctx, base);
	// b 0x83067ee0
	goto loc_83067EE0;
loc_83067EDC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_83067EE0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r21,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r21.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r27.u32);
	// stw r25,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r25.u32);
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// stw r22,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r22.u32);
	// stb r28,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r28.u8);
	// stb r28,29(r30)
	PPC_STORE_U8(r30.u32 + 29, r28.u8);
	// stw r28,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r28.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x83067f1c
	goto loc_83067F1C;
loc_83067F18:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_83067F1C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83046808
	sub_83046808(ctx, base);
	// lwz r24,20(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// b 0x83067c38
	goto loc_83067C38;
loc_83067F2C:
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83067f70
	if (!cr0.eq) goto loc_83067F70;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83067f60
	if (cr6.eq) goto loc_83067F60;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83067F60:
	// li r4,235
	ctx.r4.s64 = 235;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8306808c
	goto loc_8306808C;
loc_83067F70:
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83067fd4
	if (!cr0.eq) goto loc_83067FD4;
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r30,r27
	r30.u64 = r27.u64;
	// beq 0x83067fd4
	if (cr0.eq) goto loc_83067FD4;
	// li r4,235
	ctx.r4.s64 = 235;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82feffc8
	sub_82FEFFC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83067fc8
	if (cr0.eq) goto loc_83067FC8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83067fc8
	if (cr6.eq) goto loc_83067FC8;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83067FC8:
	// li r4,234
	ctx.r4.s64 = 234;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83067FD4:
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83067fe4
	if (!cr0.eq) goto loc_83067FE4;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83068034
	if (cr0.eq) goto loc_83068034;
loc_83067FE4:
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83068030
	if (cr0.eq) goto loc_83068030;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r27.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r27.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r21,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r21.u32);
	// stw r23,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r23.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stb r28,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r28.u8);
	// stb r28,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, r28.u8);
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r28.u32);
	// stw r28,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r28.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_83068030:
	// mr r23,r27
	r23.u64 = r27.u64;
loc_83068034:
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8306809c
	goto loc_8306809C;
loc_83068060:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x83068080
	if (cr6.eq) goto loc_83068080;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83068080:
	// li r4,183
	ctx.r4.s64 = 183;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306808C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306809C:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_830680A4"))) PPC_WEAK_FUNC(sub_830680A4);
PPC_FUNC_IMPL(__imp__sub_830680A4) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_830680CC"))) PPC_WEAK_FUNC(sub_830680CC);
PPC_FUNC_IMPL(__imp__sub_830680CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_830680FC"))) PPC_WEAK_FUNC(sub_830680FC);
PPC_FUNC_IMPL(__imp__sub_830680FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_8306812C"))) PPC_WEAK_FUNC(sub_8306812C);
PPC_FUNC_IMPL(__imp__sub_8306812C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_8306815C"))) PPC_WEAK_FUNC(sub_8306815C);
PPC_FUNC_IMPL(__imp__sub_8306815C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_8306818C"))) PPC_WEAK_FUNC(sub_8306818C);
PPC_FUNC_IMPL(__imp__sub_8306818C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_830681BC"))) PPC_WEAK_FUNC(sub_830681BC);
PPC_FUNC_IMPL(__imp__sub_830681BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_830681EC"))) PPC_WEAK_FUNC(sub_830681EC);
PPC_FUNC_IMPL(__imp__sub_830681EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_83068228"))) PPC_WEAK_FUNC(sub_83068228);
PPC_FUNC_IMPL(__imp__sub_83068228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,44(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// ori r20,r10,32852
	r20.u64 = ctx.r10.u64 | 32852;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83068280
	if (cr0.eq) goto loc_83068280;
	// li r4,194
	ctx.r4.s64 = 194;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
loc_83068280:
	// lwz r22,40(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r22,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r22.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r24,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r24.u32);
	// sth r24,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r24.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830682e0
	if (!cr0.eq) goto loc_830682E0;
	// li r4,194
	ctx.r4.s64 = 194;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x83068558
	goto loc_83068558;
loc_830682E0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// addi r4,r11,-28364
	ctx.r4.s64 = r11.s64 + -28364;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, r24.u16);
	// lwz r21,24(r28)
	r21.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83068318
	if (!cr0.eq) goto loc_83068318;
	// li r4,283
	ctx.r4.s64 = 283;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83068318:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r11,10(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83068348
	if (cr0.eq) goto loc_83068348;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83068348
	if (cr6.eq) goto loc_83068348;
	// li r4,290
	ctx.r4.s64 = 290;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83068348:
	// lwz r23,40(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r23,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r23.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6270
	sub_82FF6270(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// beq 0x830684a0
	if (cr0.eq) goto loc_830684A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r25,r24
	r25.u64 = r24.u64;
	// b 0x83068454
	goto loc_83068454;
loc_83068384:
	// cmplwi cr6,r29,63
	cr6.compare<uint32_t>(r29.u32, 63, xer);
	// bne cr6,0x830683a0
	if (!cr6.eq) goto loc_830683A0;
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068514
	if (!cr0.eq) goto loc_83068514;
loc_830683A0:
	// cmplwi cr6,r29,55296
	cr6.compare<uint32_t>(r29.u32, 55296, xer);
	// blt cr6,0x830683d0
	if (cr6.lt) goto loc_830683D0;
	// cmplwi cr6,r29,56319
	cr6.compare<uint32_t>(r29.u32, 56319, xer);
	// bgt cr6,0x830683d0
	if (cr6.gt) goto loc_830683D0;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830683c8
	if (cr0.eq) goto loc_830683C8;
	// li r4,249
	ctx.r4.s64 = 249;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83068448
	goto loc_83068448;
loc_830683C8:
	// li r25,1
	r25.s64 = 1;
	// b 0x83068448
	goto loc_83068448;
loc_830683D0:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830683f8
	if (cr0.eq) goto loc_830683F8;
	// cmplwi cr6,r29,56320
	cr6.compare<uint32_t>(r29.u32, 56320, xer);
	// blt cr6,0x830683e8
	if (cr6.lt) goto loc_830683E8;
	// cmplwi cr6,r29,57343
	cr6.compare<uint32_t>(r29.u32, 57343, xer);
	// ble cr6,0x83068444
	if (!cr6.gt) goto loc_83068444;
loc_830683E8:
	// li r4,249
	ctx.r4.s64 = 249;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83068444
	goto loc_83068444;
loc_830683F8:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068444
	if (!cr0.eq) goto loc_83068444;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83068444:
	// mr r25,r24
	r25.u64 = r24.u64;
loc_83068448:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_83068454:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi. r29,r27,16
	r29.u64 = r27.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83068384
	if (!cr0.eq) goto loc_83068384;
	// li r4,195
	ctx.r4.s64 = 195;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r11,26944
	ctx.r4.s64 = r11.s64 + 26944;
	// li r5,3752
	ctx.r5.s64 = 3752;
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
loc_830684A0:
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830684d8
	if (!cr0.eq) goto loc_830684D8;
	// li r4,195
	ctx.r4.s64 = 195;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x83068558
	goto loc_83068558;
loc_830684D8:
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068514
	if (!cr0.eq) goto loc_83068514;
	// li r4,195
	ctx.r4.s64 = 195;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x83068558
	goto loc_83068558;
loc_83068514:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r24.u16);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306854c
	if (cr6.eq) goto loc_8306854C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306854C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83068558:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8306856C"))) PPC_WEAK_FUNC(sub_8306856C);
PPC_FUNC_IMPL(__imp__sub_8306856C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
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

__attribute__((alias("__imp__sub_83068594"))) PPC_WEAK_FUNC(sub_83068594);
PPC_FUNC_IMPL(__imp__sub_83068594) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_830685C0"))) PPC_WEAK_FUNC(sub_830685C0);
PPC_FUNC_IMPL(__imp__sub_830685C0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff62e0
	sub_82FF62E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068670
	if (!cr0.eq) goto loc_83068670;
	// li r4,209
	ctx.r4.s64 = 209;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830686b4
	goto loc_830686B4;
loc_8306860C:
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x830686b0
	if (cr6.eq) goto loc_830686B0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffa0e8
	sub_82FFA0E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068664
	if (!cr0.eq) goto loc_83068664;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,211
	ctx.r4.s64 = 211;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83068664:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_83068670:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi. r29,r30,16
	r29.u64 = r30.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8306860c
	if (!cr0.eq) goto loc_8306860C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,26944
	ctx.r4.s64 = r11.s64 + 26944;
	// li r5,3855
	ctx.r5.s64 = 3855;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830686B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830686B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830686C0"))) PPC_WEAK_FUNC(sub_830686C0);
PPC_FUNC_IMPL(__imp__sub_830686C0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff62e0
	sub_82FF62E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306872c
	if (!cr0.eq) goto loc_8306872C;
	// li r4,209
	ctx.r4.s64 = 209;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8306876c
	goto loc_8306876C;
loc_83068714:
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x83068768
	if (cr6.eq) goto loc_83068768;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_8306872C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// clrlwi. r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068714
	if (!cr0.eq) goto loc_83068714;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,26944
	ctx.r4.s64 = r11.s64 + 26944;
	// li r5,3906
	ctx.r5.s64 = 3906;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_83068768:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8306876C:
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

__attribute__((alias("__imp__sub_83068790"))) PPC_WEAK_FUNC(sub_83068790);
PPC_FUNC_IMPL(__imp__sub_83068790) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// lwz r24,40(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-28524
	ctx.r4.s64 = ctx.r10.s64 + -28524;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830688fc
	if (cr0.eq) goto loc_830688FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83067968
	sub_83067968(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068814
	if (!cr0.eq) goto loc_83068814;
	// li r4,180
	ctx.r4.s64 = 180;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x83068b2c
	goto loc_83068B2C;
loc_83068814:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83066718
	sub_83066718(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068844
	if (!cr0.eq) goto loc_83068844;
	// li r4,188
	ctx.r4.s64 = 188;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x83068b2c
	goto loc_83068B2C;
loc_83068844:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// addi r4,r11,-28984
	ctx.r4.s64 = r11.s64 + -28984;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830688a8
	if (cr0.eq) goto loc_830688A8;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,212(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830688fc
	if (cr6.eq) goto loc_830688FC;
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
	// li r4,189
	ctx.r4.s64 = 189;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x830688f8
	goto loc_830688F8;
loc_830688A8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// addi r4,r11,-28992
	ctx.r4.s64 = r11.s64 + -28992;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, r27.u16);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830688fc
	if (!cr0.eq) goto loc_830688FC;
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
	// li r4,189
	ctx.r4.s64 = 189;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
loc_830688F8:
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830688FC:
	// lwz r26,40(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// mr r25,r27
	r25.u64 = r27.u64;
	// addi r4,r10,-29844
	ctx.r4.s64 = ctx.r10.s64 + -29844;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830689b4
	if (cr0.eq) goto loc_830689B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83067968
	sub_83067968(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068978
	if (!cr0.eq) goto loc_83068978;
	// li r4,180
	ctx.r4.s64 = 180;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x83068b2c
	goto loc_83068B2C;
loc_83068978:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83066718
	sub_83066718(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830689e4
	if (!cr0.eq) goto loc_830689E4;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82fdb088
	sub_82FDB088(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830689e4
	if (cr0.eq) goto loc_830689E4;
	// li r25,1
	r25.s64 = 1;
loc_830689B4:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068a2c
	if (!cr0.eq) goto loc_83068A2C;
	// li r4,287
	ctx.r4.s64 = 287;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x83068b2c
	goto loc_83068B2C;
loc_830689E4:
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,191
	ctx.r4.s64 = 191;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x83068b2c
	goto loc_83068B2C;
loc_83068A2C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r4,63
	ctx.r4.s64 = 63;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83068a60
	if (cr0.eq) goto loc_83068A60;
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068a78
	if (!cr0.eq) goto loc_83068A78;
loc_83068A60:
	// li r4,190
	ctx.r4.s64 = 190;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_83068A78:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83068ac0
	if (cr6.eq) goto loc_83068AC0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83068AC0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x83068b20
	if (!cr0.eq) goto loc_83068B20;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffa2f0
	sub_82FFA2F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068b20
	if (!cr0.eq) goto loc_83068B20;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83068B20:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83068B2C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83068B40"))) PPC_WEAK_FUNC(sub_83068B40);
PPC_FUNC_IMPL(__imp__sub_83068B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
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

__attribute__((alias("__imp__sub_83068B68"))) PPC_WEAK_FUNC(sub_83068B68);
PPC_FUNC_IMPL(__imp__sub_83068B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_83068B90"))) PPC_WEAK_FUNC(sub_83068B90);
PPC_FUNC_IMPL(__imp__sub_83068B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83068BB0"))) PPC_WEAK_FUNC(sub_83068BB0);
PPC_FUNC_IMPL(__imp__sub_83068BB0) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,28176
	r11.s64 = r11.s64 + 28176;
	// li r29,0
	r29.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r4.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r6,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// stw r5,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r5.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// stb r29,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r29.u8);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83068c44
	if (cr0.eq) goto loc_83068C44;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,109
	ctx.r4.s64 = 109;
	// bl 0x8301fe60
	sub_8301FE60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_83068C44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83068C54"))) PPC_WEAK_FUNC(sub_83068C54);
PPC_FUNC_IMPL(__imp__sub_83068C54) {
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
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
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

__attribute__((alias("__imp__sub_83068C90"))) PPC_WEAK_FUNC(sub_83068C90);
PPC_FUNC_IMPL(__imp__sub_83068C90) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r11,-29856
	ctx.r4.s64 = r11.s64 + -29856;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83068cd4
	if (cr0.eq) goto loc_83068CD4;
	// li r11,0
	r11.s64 = 0;
loc_83068CC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r11.u32);
	// b 0x83068e74
	goto loc_83068E74;
loc_83068CD4:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29976
	ctx.r4.s64 = ctx.r10.s64 + -29976;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83068cf8
	if (cr0.eq) goto loc_83068CF8;
	// li r11,1
	r11.s64 = 1;
	// b 0x83068cc8
	goto loc_83068CC8;
loc_83068CF8:
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068d38
	if (!cr0.eq) goto loc_83068D38;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,233
	ctx.r4.s64 = 233;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83068e74
	goto loc_83068E74;
loc_83068D38:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r25,r10,32808
	r25.u64 = ctx.r10.u64 | 32808;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r24,r11,r25
	r24.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29084
	ctx.r4.s64 = ctx.r10.s64 + -29084;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83068dd4
	if (cr0.eq) goto loc_83068DD4;
	// li r11,2
	r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r11.u32);
	// bl 0x83067b70
	sub_83067B70(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83068e40
	if (cr0.eq) goto loc_83068E40;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x8308f020
	sub_8308F020(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83068e40
	if (cr0.eq) goto loc_83068E40;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// b 0x83068e40
	goto loc_83068E40;
loc_83068DD4:
	// li r11,3
	r11.s64 = 3;
	// stw r11,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r11.u32);
	// lwz r28,40(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83066990
	sub_83066990(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cntlzw r11,r4
	r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r26,r11,1
	r26.u64 = r11.u64 ^ 1;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83068e34
	if (cr0.eq) goto loc_83068E34;
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
loc_83068E34:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83068E40:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r25
	r11.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// beq cr6,0x83068e70
	if (cr6.eq) goto loc_83068E70;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x83068e70
	if (cr0.eq) goto loc_83068E70;
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_83068E70:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_83068E74:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83068E7C"))) PPC_WEAK_FUNC(sub_83068E7C);
PPC_FUNC_IMPL(__imp__sub_83068E7C) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_83068EB0"))) PPC_WEAK_FUNC(sub_83068EB0);
PPC_FUNC_IMPL(__imp__sub_83068EB0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068ee8
	if (!cr0.eq) goto loc_83068EE8;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83068EE8:
	// lwz r25,40(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// sth r28,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r28.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83068f48
	if (!cr0.eq) goto loc_83068F48;
	// li r4,183
	ctx.r4.s64 = 183;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x830691c4
	goto loc_830691C4;
loc_83068F48:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x83069054
	if (cr0.eq) goto loc_83069054;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830690b8
	if (cr0.eq) goto loc_830690B8;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83068fd8
	if (cr0.eq) goto loc_83068FD8;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_83068FD8:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83069030
	if (!cr6.eq) goto loc_83069030;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83069024
	if (cr0.eq) goto loc_83069024;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// b 0x83069028
	goto loc_83069028;
loc_83069024:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83069028:
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// b 0x830690b8
	goto loc_830690B8;
loc_83069030:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x830866b8
	sub_830866B8(ctx, base);
	// b 0x830690b8
	goto loc_830690B8;
loc_83069054:
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83069098
	if (cr0.eq) goto loc_83069098;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8306909c
	goto loc_8306909C;
loc_83069098:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8306909C:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830690B8:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r7,r27,r7
	ctx.r7.s64 = ctx.r7.s64 - r27.s64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r26,r7,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r8,12(r27)
	PPC_STORE_U32(r27.u32 + 12, ctx.r8.u32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,20(r27)
	PPC_STORE_U8(r27.u32 + 20, r11.u8);
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069120
	if (!cr0.eq) goto loc_83069120;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83069120:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83068c90
	sub_83068C90(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069144
	if (!cr0.eq) goto loc_83069144;
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x830691c4
	goto loc_830691C4;
loc_83069144:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830691a0
	if (!cr0.eq) goto loc_830691A0;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,232
	ctx.r4.s64 = 232;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_830691A0:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830691c4
	if (cr0.eq) goto loc_830691C4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830691C4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_830691D8"))) PPC_WEAK_FUNC(sub_830691D8);
PPC_FUNC_IMPL(__imp__sub_830691D8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_83069200"))) PPC_WEAK_FUNC(sub_83069200);
PPC_FUNC_IMPL(__imp__sub_83069200) {
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
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
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

__attribute__((alias("__imp__sub_83069230"))) PPC_WEAK_FUNC(sub_83069230);
PPC_FUNC_IMPL(__imp__sub_83069230) {
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
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_83069260"))) PPC_WEAK_FUNC(sub_83069260);
PPC_FUNC_IMPL(__imp__sub_83069260) {
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
	// li r29,0
	r29.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r4,r11,-28976
	ctx.r4.s64 = r11.s64 + -28976;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// sth r29,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r29.u16);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// sth r29,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r29.u16);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830692fc
	if (cr0.eq) goto loc_830692FC;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x830692d0
	if (!cr6.eq) goto loc_830692D0;
	// li r4,210
	ctx.r4.s64 = 210;
loc_830692C0:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_830692C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8306941c
	goto loc_8306941C;
loc_830692D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830692ec
	if (!cr0.eq) goto loc_830692EC;
	// li r4,207
	ctx.r4.s64 = 207;
	// b 0x830692c0
	goto loc_830692C0;
loc_830692EC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830686c0
	sub_830686C0(ctx, base);
	// b 0x8306941c
	goto loc_8306941C;
loc_830692FC:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29060
	ctx.r4.s64 = ctx.r10.s64 + -29060;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069320
	if (!cr0.eq) goto loc_83069320;
	// li r4,237
	ctx.r4.s64 = 237;
	// b 0x830692c0
	goto loc_830692C0;
loc_83069320:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306935c
	if (!cr0.eq) goto loc_8306935C;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x8306935c
	if (cr6.eq) goto loc_8306935C;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// bne cr6,0x830692c8
	if (!cr6.eq) goto loc_830692C8;
loc_8306935C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830685c0
	sub_830685C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830692c8
	if (cr0.eq) goto loc_830692C8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x83069418
	if (cr6.eq) goto loc_83069418;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x830693a4
	if (cr6.eq) goto loc_830693A4;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// bne cr6,0x830693a8
	if (!cr6.eq) goto loc_830693A8;
loc_830693A4:
	// li r29,1
	r29.s64 = 1;
loc_830693A8:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830693e4
	if (!cr0.eq) goto loc_830693E4;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x830693d0
	if (!cr6.eq) goto loc_830693D0;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830693e4
	if (!cr0.eq) goto loc_830693E4;
	// b 0x830692c8
	goto loc_830692C8;
loc_830693D0:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83069418
	if (cr0.eq) goto loc_83069418;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_830693E4:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83069404
	if (cr0.eq) goto loc_83069404;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830686c0
	sub_830686C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069418
	if (!cr0.eq) goto loc_83069418;
	// b 0x830692c8
	goto loc_830692C8;
loc_83069404:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x83069418
	if (!cr6.eq) goto loc_83069418;
	// li r4,209
	ctx.r4.s64 = 209;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83069418:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8306941C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83069430"))) PPC_WEAK_FUNC(sub_83069430);
PPC_FUNC_IMPL(__imp__sub_83069430) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,2
	r11.s64 = 131072;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stb r27,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r27.u8);
	// ori r26,r11,32808
	r26.u64 = r11.u64 | 32808;
	// sth r27,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r27.u16);
	// li r4,35
	ctx.r4.s64 = 35;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r25,r11,r26
	r25.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830694d0
	if (cr0.eq) goto loc_830694D0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830667a8
	sub_830667A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830694a0
	if (!cr0.eq) goto loc_830694A0;
loc_83069498:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830698c0
	goto loc_830698C0;
loc_830694A0:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// beq cr6,0x830694c0
	if (cr6.eq) goto loc_830694C0;
	// li r4,231
	ctx.r4.s64 = 231;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_830694C0:
	// li r11,1
	r11.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r11,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r11.u8);
	// b 0x830698c0
	goto loc_830698C0;
loc_830694D0:
	// lwz r22,40(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r22,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r22.u32);
	// stw r28,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r28.u32);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306952c
	if (!cr0.eq) goto loc_8306952C;
	// li r4,226
	ctx.r4.s64 = 226;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x83069498
	goto loc_83069498;
loc_8306952C:
	// li r4,59
	ctx.r4.s64 = 59;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306956c
	if (!cr0.eq) goto loc_8306956C;
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
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8306956C:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// beq cr6,0x8306958c
	if (cr6.eq) goto loc_8306958C;
	// li r4,231
	ctx.r4.s64 = 231;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306958C:
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
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x83028200
	sub_83028200(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8306964c
	if (!cr0.eq) goto loc_8306964C;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 14);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8306960c
	if (!cr0.eq) goto loc_8306960C;
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 15);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8306960c
	if (!cr0.eq) goto loc_8306960C;
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83069638
	if (cr0.eq) goto loc_83069638;
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
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x83069638
	goto loc_83069638;
loc_8306960C:
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
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83069638:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x830698c0
	goto loc_830698C0;
loc_8306964C:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r11,14(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830696a4
	if (cr0.eq) goto loc_830696A4;
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
	// bne 0x830696a4
	if (!cr0.eq) goto loc_830696A4;
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
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830696A4:
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
	// beq 0x830696dc
	if (cr0.eq) goto loc_830696DC;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r11,0(r24)
	PPC_STORE_U16(r24.u32 + 0, r11.u16);
	// stb r10,0(r23)
	PPC_STORE_U8(r23.u32 + 0, ctx.r10.u8);
	// li r27,2
	r27.s64 = 2;
	// b 0x83069638
	goto loc_83069638;
loc_830696DC:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830696f8
	if (!cr6.eq) goto loc_830696F8;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r27
	r11.u64 = r27.u64;
	// beq cr6,0x830696fc
	if (cr6.eq) goto loc_830696FC;
loc_830696F8:
	// li r11,1
	r11.s64 = 1;
loc_830696FC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83069858
	if (cr0.eq) goto loc_83069858;
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
	// beq 0x8306974c
	if (cr0.eq) goto loc_8306974C;
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
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x83069638
	goto loc_83069638;
loc_8306974C:
	// li r4,270
	ctx.r4.s64 = 270;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// addi r11,r31,100
	r11.s64 = r31.s64 + 100;
	// li r26,1
	r26.s64 = 1;
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r26.u8);
	// bl 0x82ff6eb8
	sub_82FF6EB8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// bne 0x830697ec
	if (!cr0.eq) goto loc_830697EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,26944
	ctx.r4.s64 = r11.s64 + 26944;
	// li r6,46
	ctx.r6.s64 = 46;
	// li r5,2199
	ctx.r5.s64 = 2199;
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
loc_830697EC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306982c
	if (!cr0.eq) goto loc_8306982C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,230
	ctx.r4.s64 = 230;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x83069638
	goto loc_83069638;
loc_8306982C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff1820
	sub_82FF1820(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83069848
	if (cr0.eq) goto loc_83069848;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83068790
	sub_83068790(ctx, base);
loc_83069848:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x830698b0
	goto loc_830698B0;
loc_83069858:
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
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82ff5480
	sub_82FF5480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830698b0
	if (!cr0.eq) goto loc_830698B0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,230
	ctx.r4.s64 = 230;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_830698B0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_830698C0:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_830698C8"))) PPC_WEAK_FUNC(sub_830698C8);
PPC_FUNC_IMPL(__imp__sub_830698C8) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_830698F0"))) PPC_WEAK_FUNC(sub_830698F0);
PPC_FUNC_IMPL(__imp__sub_830698F0) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_83069920"))) PPC_WEAK_FUNC(sub_83069920);
PPC_FUNC_IMPL(__imp__sub_83069920) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-39
	r11.s64 = r11.s64 + -39;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069c20
	if (!cr0.eq) goto loc_83069C20;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-34
	r11.s64 = r11.s64 + -34;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069c20
	if (!cr0.eq) goto loc_83069C20;
	// lwz r22,40(r29)
	r22.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r22,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r22.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// lwz r25,40(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83069260
	sub_83069260(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830699e4
	if (!cr0.eq) goto loc_830699E4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_830699D0:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83069c90
	goto loc_83069C90;
loc_830699E4:
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// li r26,0
	r26.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,24(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// sthx r26,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r26.u16);
	// lwz r30,24(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// beq 0x83069a30
	if (cr0.eq) goto loc_83069A30;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x83069a34
	if (!cr0.eq) goto loc_83069A34;
loc_83069A30:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_83069A34:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x83066350
	sub_83066350(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83069a58
	if (cr6.eq) goto loc_83069A58;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83069a5c
	if (!cr0.eq) goto loc_83069A5C;
loc_83069A58:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_83069A5C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8301f900
	sub_8301F900(ctx, base);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83069a7c
	if (cr6.eq) goto loc_83069A7C;
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x83069a80
	if (!cr0.eq) goto loc_83069A80;
loc_83069A7C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_83069A80:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830663b8
	sub_830663B8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,-29132
	r30.s64 = r11.s64 + -29132;
	// beq 0x83069ad8
	if (cr0.eq) goto loc_83069AD8;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83069b04
	if (cr0.eq) goto loc_83069B04;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83069ad8
	if (cr0.eq) goto loc_83069AD8;
	// li r4,266
	ctx.r4.s64 = 266;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83069AD8:
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-62
	r11.s64 = r11.s64 + -62;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83069b18
	if (cr0.eq) goto loc_83069B18;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x83069b10
	goto loc_83069B10;
loc_83069B04:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_83069B10:
	// li r30,1
	r30.s64 = 1;
	// b 0x830699d0
	goto loc_830699D0;
loc_83069B18:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069b2c
	if (!cr0.eq) goto loc_83069B2C;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83069B2C:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069b50
	if (!cr0.eq) goto loc_83069B50;
	// li r4,265
	ctx.r4.s64 = 265;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83069B50:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069b74
	if (!cr0.eq) goto loc_83069B74;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_83069B74:
	// lwz r28,40(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r26,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r26.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069be0
	if (!cr0.eq) goto loc_83069BE0;
	// li r4,175
	ctx.r4.s64 = 175;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x830699d0
	goto loc_830699D0;
loc_83069BE0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x830662e8
	sub_830662E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// b 0x83069c88
	goto loc_83069C88;
loc_83069C20:
	// lwz r28,40(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83067458
	sub_83067458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069c60
	if (!cr0.eq) goto loc_83069C60;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83069c90
	goto loc_83069C90;
loc_83069C60:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x83066420
	sub_83066420(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_83069C88:
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83069C90:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83069C98"))) PPC_WEAK_FUNC(sub_83069C98);
PPC_FUNC_IMPL(__imp__sub_83069C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
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

__attribute__((alias("__imp__sub_83069CC0"))) PPC_WEAK_FUNC(sub_83069CC0);
PPC_FUNC_IMPL(__imp__sub_83069CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_83069CE8"))) PPC_WEAK_FUNC(sub_83069CE8);
PPC_FUNC_IMPL(__imp__sub_83069CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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

__attribute__((alias("__imp__sub_83069D10"))) PPC_WEAK_FUNC(sub_83069D10);
PPC_FUNC_IMPL(__imp__sub_83069D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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

__attribute__((alias("__imp__sub_83069D40"))) PPC_WEAK_FUNC(sub_83069D40);
PPC_FUNC_IMPL(__imp__sub_83069D40) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// stw r6,300(r31)
	PPC_STORE_U32(r31.u32 + 300, ctx.r6.u32);
	// li r20,0
	r20.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// addi r4,r31,86
	ctx.r4.s64 = r31.s64 + 86;
	// lwz r11,24(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// stw r20,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r20.u32);
	// stw r29,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r29.u32);
	// stw r22,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r22.u32);
	// stw r23,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r23.u32);
	// sth r20,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r20.u16);
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff62e0
	sub_82FF62E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069da4
	if (!cr0.eq) goto loc_83069DA4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83069D9C:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x831b0b58
	return;
loc_83069DA4:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r25,1
	r25.s64 = 1;
	// sth r20,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r20.u16);
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// stb r20,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r20.u8);
	// mr r27,r20
	r27.u64 = r20.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// lwzx r24,r11,r10
	r24.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
loc_83069DD0:
	// lis r11,2
	r11.s64 = 131072;
	// li r21,1
	r21.s64 = 1;
	// ori r26,r11,32852
	r26.u64 = r11.u64 | 32852;
loc_83069DDC:
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// sth r28,84(r31)
	PPC_STORE_U16(r31.u32 + 84, r28.u16);
	// clrlwi. r3,r28,16
	ctx.r3.u64 = r28.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83069e2c
	if (!cr0.eq) goto loc_83069E2C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,26944
	ctx.r4.s64 = r11.s64 + 26944;
	// li r5,975
	ctx.r5.s64 = 975;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83069E2C:
	// lhz r11,86(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 86);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x83069e78
	if (!cr6.eq) goto loc_83069E78;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bne cr6,0x83069e5c
	if (!cr6.eq) goto loc_83069E5C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x83069d9c
	goto loc_83069D9C;
loc_83069E5C:
	// ble cr6,0x83069e78
	if (!cr6.gt) goto loc_83069E78;
	// li r4,231
	ctx.r4.s64 = 231;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83069d9c
	goto loc_83069D9C;
loc_83069E78:
	// stb r20,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r20.u8);
	// cmplwi cr6,r3,38
	cr6.compare<uint32_t>(ctx.r3.u32, 38, xer);
	// bne cr6,0x83069eac
	if (!cr6.eq) goto loc_83069EAC;
	// addi r6,r31,81
	ctx.r6.s64 = r31.s64 + 81;
	// addi r5,r31,82
	ctx.r5.s64 = r31.s64 + 82;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83069430
	sub_83069430(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83069f60
	if (cr6.eq) goto loc_83069F60;
	// mr r27,r20
	r27.u64 = r20.u64;
	// b 0x83069ddc
	goto loc_83069DDC;
loc_83069EAC:
	// cmplwi cr6,r3,55296
	cr6.compare<uint32_t>(ctx.r3.u32, 55296, xer);
	// blt cr6,0x83069ee0
	if (cr6.lt) goto loc_83069EE0;
	// cmplwi cr6,r3,56319
	cr6.compare<uint32_t>(ctx.r3.u32, 56319, xer);
	// bgt cr6,0x83069ee0
	if (cr6.gt) goto loc_83069EE0;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83069ed8
	if (cr0.eq) goto loc_83069ED8;
	// li r4,249
	ctx.r4.s64 = 249;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x83069f64
	goto loc_83069F64;
loc_83069ED8:
	// mr r27,r21
	r27.u64 = r21.u64;
	// b 0x83069f64
	goto loc_83069F64;
loc_83069EE0:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83069f08
	if (cr0.eq) goto loc_83069F08;
	// cmplwi cr6,r3,56320
	cr6.compare<uint32_t>(ctx.r3.u32, 56320, xer);
	// blt cr6,0x83069ef8
	if (cr6.lt) goto loc_83069EF8;
	// cmplwi cr6,r3,57343
	cr6.compare<uint32_t>(ctx.r3.u32, 57343, xer);
	// ble cr6,0x83069f58
	if (!cr6.gt) goto loc_83069F58;
loc_83069EF8:
	// li r4,249
	ctx.r4.s64 = 249;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x83069f54
	goto loc_83069F54;
loc_83069F08:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lbzx r11,r11,r3
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r3.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069f58
	if (!cr0.eq) goto loc_83069F58;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,218
	ctx.r4.s64 = 218;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_83069F54:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83069F58:
	// mr r27,r20
	r27.u64 = r20.u64;
	// b 0x83069f64
	goto loc_83069F64;
loc_83069F60:
	// lhz r28,84(r31)
	r28.u64 = PPC_LOAD_U16(r31.u32 + 84);
loc_83069F64:
	// lbz r30,81(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x83069f9c
	if (!cr0.eq) goto loc_83069F9C;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x83069f9c
	if (!cr6.eq) goto loc_83069F9C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,248
	ctx.r4.s64 = 248;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_83069F9C:
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83069fd4
	if (!cr6.eq) goto loc_83069FD4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8306a020
	if (!cr6.eq) goto loc_8306A020;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// beq cr6,0x83069fcc
	if (cr6.eq) goto loc_83069FCC;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x83069fcc
	if (cr6.eq) goto loc_83069FCC;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x8306a020
	if (!cr6.eq) goto loc_8306A020;
loc_83069FCC:
	// li r28,32
	r28.s64 = 32;
	// b 0x8306a020
	goto loc_8306A020;
loc_83069FD4:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x8306a050
	if (!cr6.eq) goto loc_8306A050;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// clrlwi r10,r28,16
	ctx.r10.u64 = r28.u32 & 0xFFFF;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83069ddc
	if (!cr0.eq) goto loc_83069DDC;
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306a014
	if (cr0.eq) goto loc_8306A014;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8306A014:
	// mr r25,r21
	r25.u64 = r21.u64;
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
loc_8306A01C:
	// stb r21,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r21.u8);
loc_8306A020:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r4,82(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 82);
	// mr. r11,r4
	r11.u64 = ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83069ddc
	if (cr0.eq) goto loc_83069DDC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// sth r20,82(r31)
	PPC_STORE_U16(r31.u32 + 82, r20.u16);
	// b 0x83069ddc
	goto loc_83069DDC;
loc_8306A050:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// bne cr6,0x8306a020
	if (!cr6.eq) goto loc_8306A020;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// clrlwi r10,r28,16
	ctx.r10.u64 = r28.u32 & 0xFFFF;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306a01c
	if (cr0.eq) goto loc_8306A01C;
	// mr r25,r20
	r25.u64 = r20.u64;
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// b 0x83069ddc
	goto loc_83069DDC;
	// lwz r29,276(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lwz r23,292(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// li r20,0
	r20.s64 = 0;
	// lwz r22,284(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r24,92(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r25,88(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lbz r27,81(r31)
	r27.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// b 0x83069dd0
	goto loc_83069DD0;
}

__attribute__((alias("__imp__sub_8306A0A8"))) PPC_WEAK_FUNC(sub_8306A0A8);
PPC_FUNC_IMPL(__imp__sub_8306A0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// lis r3,-31993
	ctx.r3.s64 = -2096693248;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,-24448
	ctx.r3.s64 = ctx.r3.s64 + -24448;
	// stb r11,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r11.u8);
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8306A0D0"))) PPC_WEAK_FUNC(sub_8306A0D0);
PPC_FUNC_IMPL(__imp__sub_8306A0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r11,-29036
	ctx.r4.s64 = r11.s64 + -29036;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306a110
	if (cr0.eq) goto loc_8306A110;
	// li r11,2
	r11.s64 = 2;
loc_8306A108:
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// b 0x8306a220
	goto loc_8306A220;
loc_8306A110:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29448
	ctx.r4.s64 = ctx.r10.s64 + -29448;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306a134
	if (cr0.eq) goto loc_8306A134;
	// li r11,4
	r11.s64 = 4;
	// b 0x8306a108
	goto loc_8306A108;
loc_8306A134:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29664
	ctx.r4.s64 = ctx.r10.s64 + -29664;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306a18c
	if (cr0.eq) goto loc_8306A18C;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6270
	sub_82FF6270(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a174
	if (!cr0.eq) goto loc_8306A174;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8306a180
	goto loc_8306A180;
loc_8306A174:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
loc_8306A180:
	// li r11,1
	r11.s64 = 1;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// b 0x8306a190
	goto loc_8306A190;
loc_8306A18C:
	// stw r25,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r25.u32);
loc_8306A190:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// lwz r28,40(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r26,8(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x83069d40
	sub_83069D40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a1f8
	if (!cr0.eq) goto loc_8306A1F8;
	// li r4,178
	ctx.r4.s64 = 178;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306A1F8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x83066280
	sub_83066280(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8306A220:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8306A228"))) PPC_WEAK_FUNC(sub_8306A228);
PPC_FUNC_IMPL(__imp__sub_8306A228) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_8306A258"))) PPC_WEAK_FUNC(sub_8306A258);
PPC_FUNC_IMPL(__imp__sub_8306A258) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,44(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a2ac
	if (!cr0.eq) goto loc_8306A2AC;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8306a2b8
	goto loc_8306A2B8;
loc_8306A2AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
loc_8306A2B8:
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// clrlwi. r24,r22,24
	r24.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x8306a2f4
	if (cr0.eq) goto loc_8306A2F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a2f4
	if (!cr0.eq) goto loc_8306A2F4;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306A2F4:
	// lwz r23,40(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r23,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r23.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// li r27,0
	r27.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a354
	if (!cr0.eq) goto loc_8306A354;
	// li r4,222
	ctx.r4.s64 = 222;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8306a5e0
	goto loc_8306A5E0;
loc_8306A354:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r11,10(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306a394
	if (cr0.eq) goto loc_8306A394;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r4,58
	ctx.r4.s64 = 58;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8306a394
	if (cr6.eq) goto loc_8306A394;
	// li r4,290
	ctx.r4.s64 = 290;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306A394:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// beq cr6,0x8306a3cc
	if (cr6.eq) goto loc_8306A3CC;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x830273e0
	sub_830273E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306a458
	if (cr0.eq) goto loc_8306A458;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8306a3d4
	goto loc_8306A3D4;
loc_8306A3CC:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x83028200
	sub_83028200(ctx, base);
loc_8306A3D4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8306a458
	if (cr6.eq) goto loc_8306A458;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306a434
	if (!cr6.eq) goto loc_8306A434;
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x8306a42c
	if (cr0.eq) goto loc_8306A42C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8305b878
	sub_8305B878(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stb r27,40(r29)
	PPC_STORE_U8(r29.u32 + 40, r27.u8);
	// addi r11,r11,20984
	r11.s64 = r11.s64 + 20984;
	// stb r27,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r27.u8);
	// stb r27,42(r29)
	PPC_STORE_U8(r29.u32 + 42, r27.u8);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x8306a430
	goto loc_8306A430;
loc_8306A42C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_8306A430:
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
loc_8306A434:
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
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x8305b960
	sub_8305B960(ctx, base);
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// b 0x8306a4c4
	goto loc_8306A4C4;
loc_8306A458:
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306a498
	if (cr0.eq) goto loc_8306A498;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8301f968
	sub_8301F968(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8306a49c
	goto loc_8306A49C;
loc_8306A498:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_8306A49C:
	// lbz r11,28(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stb r11,40(r4)
	PPC_STORE_U8(ctx.r4.u32 + 40, r11.u8);
	// beq cr6,0x8306a4b8
	if (cr6.eq) goto loc_8306A4B8;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// b 0x8306a4c0
	goto loc_8306A4C0;
loc_8306A4B8:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_8306A4C0:
	// bl 0x83054cd0
	sub_83054CD0(ctx, base);
loc_8306A4C4:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r22,41(r29)
	PPC_STORE_U8(r29.u32 + 41, r22.u8);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a4fc
	if (!cr0.eq) goto loc_8306A4FC;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306A4FC:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r26,15(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 15);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x8306a518
	if (cr0.eq) goto loc_8306A518;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8306a518
	if (cr6.eq) goto loc_8306A518;
	// stb r27,15(r11)
	PPC_STORE_U8(r11.u32 + 15, r27.u8);
loc_8306A518:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83069920
	sub_83069920(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a558
	if (!cr0.eq) goto loc_8306A558;
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,272
	ctx.r4.s64 = 272;
	// stb r10,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r10.u8);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8306a5e0
	goto loc_8306A5E0;
loc_8306A558:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8306a56c
	if (cr6.eq) goto loc_8306A56C;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,15(r11)
	PPC_STORE_U8(r11.u32 + 15, ctx.r10.u8);
loc_8306A56C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a5b8
	if (!cr0.eq) goto loc_8306A5B8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,223
	ctx.r4.s64 = 223;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_8306A5B8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306a5e0
	if (cr0.eq) goto loc_8306A5E0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306A5E0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8306A5F4"))) PPC_WEAK_FUNC(sub_8306A5F4);
PPC_FUNC_IMPL(__imp__sub_8306A5F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_8306A61C"))) PPC_WEAK_FUNC(sub_8306A61C);
PPC_FUNC_IMPL(__imp__sub_8306A61C) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
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

__attribute__((alias("__imp__sub_8306A64C"))) PPC_WEAK_FUNC(sub_8306A64C);
PPC_FUNC_IMPL(__imp__sub_8306A64C) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_8306A688"))) PPC_WEAK_FUNC(sub_8306A688);
PPC_FUNC_IMPL(__imp__sub_8306A688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// li r23,0
	r23.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r23,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r23.u32);
	// sth r23,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r23.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a6f0
	if (!cr0.eq) goto loc_8306A6F0;
	// li r4,174
	ctx.r4.s64 = 174;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8306ad34
	goto loc_8306AD34;
loc_8306A6F0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x8306d158
	sub_8306D158(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306a7b4
	if (cr0.eq) goto loc_8306A7B4;
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306a790
	if (!cr6.eq) goto loc_8306A790;
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306a778
	if (cr0.eq) goto loc_8306A778;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8309d078
	sub_8309D078(ctx, base);
	// b 0x8306a77c
	goto loc_8306A77C;
loc_8306A778:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_8306A77C:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
loc_8306A790:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x8309d218
	sub_8309D218(ctx, base);
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// b 0x8306a844
	goto loc_8306A844;
loc_8306A7B4:
	// li r3,44
	ctx.r3.s64 = 44;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306a7f8
	if (cr0.eq) goto loc_8306A7F8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8309d0f0
	sub_8309D0F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8306a7fc
	goto loc_8306A7FC;
loc_8306A7F8:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
loc_8306A7FC:
	// lis r11,2
	r11.s64 = 131072;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r10,r11,32808
	ctx.r10.u64 = r11.u64 | 32808;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r9.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,17(r4)
	PPC_STORE_U8(ctx.r4.u32 + 17, r11.u8);
	// bl 0x8306d680
	sub_8306D680(ctx, base);
loc_8306A844:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r22,r11,27,31,31
	r22.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a878
	if (!cr0.eq) goto loc_8306A878;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306A878:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29940
	ctx.r4.s64 = ctx.r10.s64 + -29940;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306a89c
	if (cr0.eq) goto loc_8306A89C;
	// stw r23,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r23.u32);
	// b 0x8306aa34
	goto loc_8306AA34;
loc_8306A89C:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29484
	ctx.r4.s64 = ctx.r10.s64 + -29484;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// beq 0x8306a900
	if (cr0.eq) goto loc_8306A900;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29044
	ctx.r4.s64 = ctx.r10.s64 + -29044;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a8dc
	if (!cr0.eq) goto loc_8306A8DC;
	// li r11,1
	r11.s64 = 1;
	// b 0x8306a98c
	goto loc_8306A98C;
loc_8306A8DC:
	// li r4,83
	ctx.r4.s64 = 83;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a8f8
	if (!cr0.eq) goto loc_8306A8F8;
	// li r11,2
	r11.s64 = 2;
	// b 0x8306a98c
	goto loc_8306A98C;
loc_8306A8F8:
	// li r11,3
	r11.s64 = 3;
	// b 0x8306a98c
	goto loc_8306A98C;
loc_8306A900:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29824
	ctx.r4.s64 = ctx.r10.s64 + -29824;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306a954
	if (cr0.eq) goto loc_8306A954;
	// li r4,89
	ctx.r4.s64 = 89;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306a930
	if (cr0.eq) goto loc_8306A930;
	// li r11,4
	r11.s64 = 4;
	// b 0x8306a98c
	goto loc_8306A98C;
loc_8306A930:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29492
	ctx.r4.s64 = ctx.r10.s64 + -29492;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306acf8
	if (cr0.eq) goto loc_8306ACF8;
	// li r11,5
	r11.s64 = 5;
	// b 0x8306a98c
	goto loc_8306A98C;
loc_8306A954:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29120
	ctx.r4.s64 = ctx.r10.s64 + -29120;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306a994
	if (cr0.eq) goto loc_8306A994;
	// li r4,83
	ctx.r4.s64 = 83;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,7
	r11.s64 = 7;
	// bne 0x8306a98c
	if (!cr0.eq) goto loc_8306A98C;
	// li r11,6
	r11.s64 = 6;
loc_8306A98C:
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// b 0x8306aa34
	goto loc_8306AA34;
loc_8306A994:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29152
	ctx.r4.s64 = ctx.r10.s64 + -29152;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306a9e0
	if (cr0.eq) goto loc_8306A9E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306a9d4
	if (!cr0.eq) goto loc_8306A9D4;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306A9D4:
	// li r11,8
	r11.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x8306a9fc
	goto loc_8306A9FC;
loc_8306A9E0:
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306acf8
	if (cr0.eq) goto loc_8306ACF8;
	// li r11,9
	r11.s64 = 9;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8306A9FC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830677b0
	sub_830677B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306ad34
	if (cr0.eq) goto loc_8306AD34;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r23,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r23.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x83066218
	sub_83066218(ctx, base);
loc_8306AA34:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306aa58
	if (!cr0.eq) goto loc_8306AA58;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306AA58:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306a0d0
	sub_8306A0D0(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r11,16(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306acc8
	if (cr0.eq) goto loc_8306ACC8;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8306aac8
	if (!cr6.eq) goto loc_8306AAC8;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8306aac8
	if (cr6.eq) goto loc_8306AAC8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8306aac8
	if (cr6.eq) goto loc_8306AAC8;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r29,168(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_8306AAC8:
	// li r10,120
	ctx.r10.s64 = 120;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r24,108
	r24.s64 = 108;
	// sth r23,130(r31)
	PPC_STORE_U16(r31.u32 + 130, r23.u16);
	// li r25,115
	r25.s64 = 115;
	// li r26,112
	r26.s64 = 112;
	// li r27,97
	r27.s64 = 97;
	// sth r10,112(r31)
	PPC_STORE_U16(r31.u32 + 112, ctx.r10.u16);
	// li r10,109
	ctx.r10.s64 = 109;
	// li r29,101
	r29.s64 = 101;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// sth r24,116(r31)
	PPC_STORE_U16(r31.u32 + 116, r24.u16);
	// addi r20,r31,112
	r20.s64 = r31.s64 + 112;
	// sth r25,120(r31)
	PPC_STORE_U16(r31.u32 + 120, r25.u16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// sth r26,122(r31)
	PPC_STORE_U16(r31.u32 + 122, r26.u16);
	// sth r10,114(r31)
	PPC_STORE_U16(r31.u32 + 114, ctx.r10.u16);
	// li r10,58
	ctx.r10.s64 = 58;
	// sth r27,124(r31)
	PPC_STORE_U16(r31.u32 + 124, r27.u16);
	// sth r29,128(r31)
	PPC_STORE_U16(r31.u32 + 128, r29.u16);
	// sth r10,118(r31)
	PPC_STORE_U16(r31.u32 + 118, ctx.r10.u16);
	// li r10,99
	ctx.r10.s64 = 99;
	// sth r10,126(r31)
	PPC_STORE_U16(r31.u32 + 126, ctx.r10.u16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306acc8
	if (cr0.eq) goto loc_8306ACC8;
	// li r11,114
	r11.s64 = 114;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// sth r27,102(r31)
	PPC_STORE_U16(r31.u32 + 102, r27.u16);
	// mr r27,r23
	r27.u64 = r23.u64;
	// sth r26,112(r31)
	PPC_STORE_U16(r31.u32 + 112, r26.u16);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// sth r29,116(r31)
	PPC_STORE_U16(r31.u32 + 116, r29.u16);
	// sth r25,118(r31)
	PPC_STORE_U16(r31.u32 + 118, r25.u16);
	// sth r11,114(r31)
	PPC_STORE_U16(r31.u32 + 114, r11.u16);
	// sth r11,122(r31)
	PPC_STORE_U16(r31.u32 + 122, r11.u16);
	// li r11,118
	r11.s64 = 118;
	// sth r29,120(r31)
	PPC_STORE_U16(r31.u32 + 120, r29.u16);
	// sth r29,126(r31)
	PPC_STORE_U16(r31.u32 + 126, r29.u16);
	// sth r23,128(r31)
	PPC_STORE_U16(r31.u32 + 128, r23.u16);
	// sth r29,98(r31)
	PPC_STORE_U16(r31.u32 + 98, r29.u16);
	// sth r11,124(r31)
	PPC_STORE_U16(r31.u32 + 124, r11.u16);
	// li r11,100
	r11.s64 = 100;
	// sth r24,106(r31)
	PPC_STORE_U16(r31.u32 + 106, r24.u16);
	// sth r23,110(r31)
	PPC_STORE_U16(r31.u32 + 110, r23.u16);
	// sth r11,96(r31)
	PPC_STORE_U16(r31.u32 + 96, r11.u16);
	// li r11,102
	r11.s64 = 102;
	// sth r11,100(r31)
	PPC_STORE_U16(r31.u32 + 100, r11.u16);
	// li r11,117
	r11.s64 = 117;
	// sth r11,104(r31)
	PPC_STORE_U16(r31.u32 + 104, r11.u16);
	// li r11,116
	r11.s64 = 116;
	// sth r11,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r11.u16);
	// bne cr6,0x8306acb0
	if (!cr6.eq) goto loc_8306ACB0;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fdbb28
	sub_82FDBB28(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r27,8(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x8306ac00
	if (!cr6.eq) goto loc_8306AC00;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r31,96
	r26.s64 = r31.s64 + 96;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306ac88
	if (!cr0.eq) goto loc_8306AC88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r26,r31,112
	r26.s64 = r31.s64 + 112;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306ac88
	if (!cr0.eq) goto loc_8306AC88;
loc_8306AC00:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x8306ac90
	if (!cr6.eq) goto loc_8306AC90;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306ac48
	if (cr0.eq) goto loc_8306AC48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r27,r31,112
	r27.s64 = r31.s64 + 112;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306ac88
	if (!cr0.eq) goto loc_8306AC88;
loc_8306AC48:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306ac90
	if (cr0.eq) goto loc_8306AC90;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r27,r31,112
	r27.s64 = r31.s64 + 112;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306ac90
	if (cr0.eq) goto loc_8306AC90;
loc_8306AC88:
	// li r11,1
	r11.s64 = 1;
	// b 0x8306ac94
	goto loc_8306AC94;
loc_8306AC90:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_8306AC94:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306ACB0:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306acc8
	if (!cr0.eq) goto loc_8306ACC8;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r4,50
	ctx.r4.s64 = 50;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
loc_8306ACC8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306acf0
	if (cr0.eq) goto loc_8306ACF0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306ACF0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8306ad38
	goto loc_8306AD38;
loc_8306ACF8:
	// lwz r3,8(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,201
	ctx.r4.s64 = 201;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8306AD34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306AD38:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8306AD40"))) PPC_WEAK_FUNC(sub_8306AD40);
PPC_FUNC_IMPL(__imp__sub_8306AD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
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

__attribute__((alias("__imp__sub_8306AD70"))) PPC_WEAK_FUNC(sub_8306AD70);
PPC_FUNC_IMPL(__imp__sub_8306AD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_8306ADA8"))) PPC_WEAK_FUNC(sub_8306ADA8);
PPC_FUNC_IMPL(__imp__sub_8306ADA8) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306adf0
	if (!cr0.eq) goto loc_8306ADF0;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8306b0fc
	goto loc_8306B0FC;
loc_8306ADF0:
	// lwz r23,40(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r23,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r23.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// li r26,0
	r26.s64 = 0;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r26,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r26.u32);
	// sth r26,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r26.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306ae50
	if (!cr0.eq) goto loc_8306AE50;
	// li r4,183
	ctx.r4.s64 = 183;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8306b0f0
	goto loc_8306B0F0;
loc_8306AE50:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r6,24(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x8306af24
	if (!cr0.eq) goto loc_8306AF24;
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306aed0
	if (cr0.eq) goto loc_8306AED0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x8306c8b8
	sub_8306C8B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8306aed4
	goto loc_8306AED4;
loc_8306AED0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8306AED4:
	// li r11,2
	r11.s64 = 2;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,20(r4)
	PPC_STORE_U8(ctx.r4.u32 + 20, r11.u8);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306AF24:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306af48
	if (cr6.eq) goto loc_8306AF48;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306AF48:
	// lwz r25,40(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r24,r26
	r24.u64 = r26.u64;
	// b 0x8306b074
	goto loc_8306B074;
loc_8306AF6C:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x8306b0ac
	if (cr6.eq) goto loc_8306B0AC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,32852
	ctx.r9.u64 = ctx.r10.u64 | 32852;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8306afe0
	if (cr0.eq) goto loc_8306AFE0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306afd4
	if (cr6.eq) goto loc_8306AFD4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ff60b8
	sub_82FF60B8(ctx, base);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8306b070
	goto loc_8306B070;
loc_8306AFD4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x8306b070
	goto loc_8306B070;
loc_8306AFE0:
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bne cr6,0x8306b008
	if (!cr6.eq) goto loc_8306B008;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306ba80
	sub_8306BA80(ctx, base);
	// b 0x8306b070
	goto loc_8306B070;
loc_8306B008:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306a688
	sub_8306A688(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306b0b4
	if (cr0.eq) goto loc_8306B0B4;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306b070
	if (cr0.eq) goto loc_8306B070;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8306b070
	if (!cr6.eq) goto loc_8306B070;
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b06c
	if (cr0.eq) goto loc_8306B06C;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_8306B06C:
	// li r24,1
	r24.s64 = 1;
loc_8306B070:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
loc_8306B074:
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi. r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306af6c
	if (!cr0.eq) goto loc_8306AF6C;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,26944
	ctx.r4.s64 = r11.s64 + 26944;
	// li r5,846
	ctx.r5.s64 = 846;
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
loc_8306B0AC:
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// b 0x8306b0c0
	goto loc_8306B0C0;
loc_8306B0B4:
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_8306B0C0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306b0e4
	if (cr6.eq) goto loc_8306B0E4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306B0E4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8306B0F0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8306B0FC:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8306B104"))) PPC_WEAK_FUNC(sub_8306B104);
PPC_FUNC_IMPL(__imp__sub_8306B104) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_8306B12C"))) PPC_WEAK_FUNC(sub_8306B12C);
PPC_FUNC_IMPL(__imp__sub_8306B12C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_8306B15C"))) PPC_WEAK_FUNC(sub_8306B15C);
PPC_FUNC_IMPL(__imp__sub_8306B15C) {
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

__attribute__((alias("__imp__sub_8306B188"))) PPC_WEAK_FUNC(sub_8306B188);
PPC_FUNC_IMPL(__imp__sub_8306B188) {
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
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(r11.u32, 33, xer);
	// bne cr6,0x8306b3e8
	if (!cr6.eq) goto loc_8306B3E8;
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// beq 0x8306b1ec
	if (cr0.eq) goto loc_8306B1EC;
	// li r4,45
	ctx.r4.s64 = 45;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b1e4
	if (cr0.eq) goto loc_8306B1E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83067210
	sub_83067210(ctx, base);
	// b 0x8306b444
	goto loc_8306B444;
loc_8306B1E4:
	// li r4,185
	ctx.r4.s64 = 185;
	// b 0x8306b430
	goto loc_8306B430;
loc_8306B1EC:
	// li r4,91
	ctx.r4.s64 = 91;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b348
	if (cr0.eq) goto loc_8306B348;
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306b210
	if (cr0.eq) goto loc_8306B210;
	// li r4,221
	ctx.r4.s64 = 221;
	// b 0x8306b430
	goto loc_8306B430;
loc_8306B210:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29412
	ctx.r4.s64 = ctx.r10.s64 + -29412;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b2a4
	if (cr0.eq) goto loc_8306B2A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306b26c
	if (!cr0.eq) goto loc_8306B26C;
	// li r4,252
	ctx.r4.s64 = 252;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306B26C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r30,r10,32808
	r30.u64 = ctx.r10.u64 | 32808;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r29,r11,r30
	r29.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306b508
	sub_8306B508(ctx, base);
	// b 0x8306b30c
	goto loc_8306B30C;
loc_8306B2A4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29428
	ctx.r4.s64 = ctx.r10.s64 + -29428;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b340
	if (cr0.eq) goto loc_8306B340;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306b2f0
	if (!cr0.eq) goto loc_8306B2F0;
	// li r4,252
	ctx.r4.s64 = 252;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306B2F0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r30,r10,32808
	r30.u64 = ctx.r10.u64 | 32808;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r29,r11,r30
	r29.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x830679c8
	sub_830679C8(ctx, base);
loc_8306B30C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8306b444
	if (cr6.eq) goto loc_8306B444;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8306b444
	if (cr0.eq) goto loc_8306B444;
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// b 0x8306b444
	goto loc_8306B444;
loc_8306B340:
	// li r4,251
	ctx.r4.s64 = 251;
	// b 0x8306b430
	goto loc_8306B430;
loc_8306B348:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29968
	ctx.r4.s64 = ctx.r10.s64 + -29968;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b370
	if (cr0.eq) goto loc_8306B370;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306ada8
	sub_8306ADA8(ctx, base);
	// b 0x8306b444
	goto loc_8306B444;
loc_8306B370:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29872
	ctx.r4.s64 = ctx.r10.s64 + -29872;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b398
	if (cr0.eq) goto loc_8306B398;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83068eb0
	sub_83068EB0(ctx, base);
	// b 0x8306b444
	goto loc_8306B444;
loc_8306B398:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29812
	ctx.r4.s64 = ctx.r10.s64 + -29812;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b3c0
	if (cr0.eq) goto loc_8306B3C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306a258
	sub_8306A258(ctx, base);
	// b 0x8306b444
	goto loc_8306B444;
loc_8306B3C0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r4,r10,-29152
	ctx.r4.s64 = ctx.r10.s64 + -29152;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b42c
	if (cr0.eq) goto loc_8306B42C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306c310
	sub_8306C310(ctx, base);
	// b 0x8306b444
	goto loc_8306B444;
loc_8306B3E8:
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// bne cr6,0x8306b42c
	if (!cr6.eq) goto loc_8306B42C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff1820
	sub_82FF1820(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b420
	if (cr0.eq) goto loc_8306B420;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b418
	if (cr0.eq) goto loc_8306B418;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83068790
	sub_83068790(ctx, base);
	// b 0x8306b444
	goto loc_8306B444;
loc_8306B418:
	// li r4,220
	ctx.r4.s64 = 220;
	// b 0x8306b430
	goto loc_8306B430;
loc_8306B420:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83068228
	sub_83068228(ctx, base);
	// b 0x8306b444
	goto loc_8306B444;
loc_8306B42C:
	// li r4,219
	ctx.r4.s64 = 219;
loc_8306B430:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_8306B444:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8306B450"))) PPC_WEAK_FUNC(sub_8306B450);
PPC_FUNC_IMPL(__imp__sub_8306B450) {
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
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r11,r11,28176
	r11.s64 = r11.s64 + 28176;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8306b490
	if (cr0.eq) goto loc_8306B490;
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
loc_8306B490:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306b4b0
	if (cr0.eq) goto loc_8306B4B0;
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
loc_8306B4B0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306b4d0
	if (cr0.eq) goto loc_8306B4D0;
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
loc_8306B4D0:
	// lwz r31,52(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8306b4ec
	if (cr0.eq) goto loc_8306B4EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830251c0
	sub_830251C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8306B4EC:
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

__attribute__((alias("__imp__sub_8306B508"))) PPC_WEAK_FUNC(sub_8306B508);
PPC_FUNC_IMPL(__imp__sub_8306B508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b04
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r5,295(r31)
	PPC_STORE_U8(r31.u32 + 295, ctx.r5.u8);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// addic. r19,r30,28
	xer.ca = r30.u32 > 4294967267;
	r19.s64 = r30.s64 + 28;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// li r25,0
	r25.s64 = 0;
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
	// stb r20,287(r31)
	PPC_STORE_U8(r31.u32 + 287, r20.u8);
	// stw r19,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r19.u32);
	// beq 0x8306b550
	if (cr0.eq) goto loc_8306B550;
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// stb r25,0(r19)
	PPC_STORE_U8(r19.u32 + 0, r25.u8);
	// stb r11,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r11.u8);
loc_8306B550:
	// clrlwi r28,r20,24
	r28.u64 = r20.u32 & 0xFF;
	// lwz r29,40(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r11.u8);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r23,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r23.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306b5a0
	if (cr6.eq) goto loc_8306B5A0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8306b5a0
	if (!cr6.eq) goto loc_8306B5A0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306B5A0:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff5610
	sub_82FF5610(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b5e0
	if (cr0.eq) goto loc_8306B5E0;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6270
	sub_82FF6270(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b5e0
	if (cr0.eq) goto loc_8306B5E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff1820
	sub_82FF1820(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b5e0
	if (cr0.eq) goto loc_8306B5E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83068790
	sub_83068790(ctx, base);
	// stb r25,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r25.u8);
loc_8306B5E0:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stb r25,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r25.u8);
	// ori r26,r10,32808
	r26.u64 = ctx.r10.u64 | 32808;
	// stb r25,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r25.u8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// b 0x8306b624
	goto loc_8306B624;
loc_8306B604:
	// lis r11,2
	r11.s64 = 131072;
	// lwz r30,276(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lbz r20,287(r31)
	r20.u64 = PPC_LOAD_U8(r31.u32 + 287);
	// li r25,0
	r25.s64 = 0;
	// lwz r19,108(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// ori r26,r11,32808
	r26.u64 = r11.u64 | 32808;
	// lwz r29,100(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r23,96(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_8306B624:
	// stb r25,83(r31)
	PPC_STORE_U8(r31.u32 + 83, r25.u8);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r22,1
	r22.s64 = 1;
	// addi r21,r11,30096
	r21.s64 = r11.s64 + 30096;
	// lis r11,2
	r11.s64 = 131072;
	// ori r24,r11,32852
	r24.u64 = r11.u64 | 32852;
loc_8306B63C:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi r28,r3,16
	r28.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r28,60
	cr6.compare<uint32_t>(r28.u32, 60, xer);
	// bne cr6,0x8306b6e8
	if (!cr6.eq) goto loc_8306B6E8;
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32848
	ctx.r10.u64 = ctx.r10.u64 | 32848;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r28,r11,r26
	r28.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r4,82(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 82);
	// stb r22,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r22.u8);
	// bl 0x8306b188
	sub_8306B188(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stb r25,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r25.u8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x8306b8a4
	if (cr6.eq) goto loc_8306B8A4;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b6c8
	if (cr0.eq) goto loc_8306B6C8;
	// li r4,299
	ctx.r4.s64 = 299;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8306b8a0
	goto loc_8306B8A0;
loc_8306B6C8:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8306b8a4
	if (cr0.eq) goto loc_8306B8A4;
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// b 0x8306b8a0
	goto loc_8306B8A0;
loc_8306B6E8:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r11,r11,r24
	r11.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// lbzx r11,r11,r28
	r11.u64 = PPC_LOAD_U8(r11.u32 + r28.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b754
	if (cr0.eq) goto loc_8306B754;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306b748
	if (cr6.eq) goto loc_8306B748;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stb r22,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r22.u8);
	// bl 0x82ff60b8
	sub_82FF60B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,4(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r25,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r25.u8);
	// sthx r25,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r25.u16);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,24(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8306b8a0
	goto loc_8306B8A0;
loc_8306B748:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x8306b8a0
	goto loc_8306B8A0;
loc_8306B754:
	// cmplwi cr6,r28,37
	cr6.compare<uint32_t>(r28.u32, 37, xer);
	// bne cr6,0x8306b780
	if (!cr6.eq) goto loc_8306B780;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306ba80
	sub_8306BA80(ctx, base);
	// b 0x8306b8a0
	goto loc_8306B8A0;
loc_8306B780:
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b80c
	if (cr0.eq) goto loc_8306B80C;
	// cmplwi cr6,r28,93
	cr6.compare<uint32_t>(r28.u32, 93, xer);
	// bne cr6,0x8306b80c
	if (!cr6.eq) goto loc_8306B80C;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,93
	ctx.r4.s64 = 93;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306b7c8
	if (cr0.eq) goto loc_8306B7C8;
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306b7e8
	if (!cr0.eq) goto loc_8306B7E8;
loc_8306B7C8:
	// li r4,250
	ctx.r4.s64 = 250;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8306B7E8:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8306B7F8:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x8306b908
	if (cr6.eq) goto loc_8306B908;
	// lbz r11,104(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 104);
	// stb r11,0(r19)
	PPC_STORE_U8(r19.u32 + 0, r11.u8);
	// b 0x8306b908
	goto loc_8306B908;
loc_8306B80C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8306b828
	if (!cr6.eq) goto loc_8306B828;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8306b7f8
	goto loc_8306B7F8;
loc_8306B828:
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r24
	r11.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// lbzx r11,r11,r28
	r11.u64 = PPC_LOAD_U8(r11.u32 + r28.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306b884
	if (!cr0.eq) goto loc_8306B884;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// li r4,196
	ctx.r4.s64 = 196;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x8306b890
	goto loc_8306B890;
loc_8306B884:
	// li r4,186
	ctx.r4.s64 = 186;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306B890:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
loc_8306B8A0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8306B8A4:
	// stb r25,82(r31)
	PPC_STORE_U8(r31.u32 + 82, r25.u8);
	// b 0x8306b63c
	goto loc_8306B63C;
	// lbz r11,83(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 83);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306b604
	if (cr0.eq) goto loc_8306B604;
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8306b8e8
	if (cr6.eq) goto loc_8306B8E8;
	// lbz r10,295(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 295);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8306b8e8
	if (cr0.eq) goto loc_8306B8E8;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306B8E8:
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306b908
	if (cr6.eq) goto loc_8306B908;
	// lbz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 104);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8306B908:
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_8306B918"))) PPC_WEAK_FUNC(sub_8306B918);
PPC_FUNC_IMPL(__imp__sub_8306B918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r30{};
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
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306b950
	if (cr0.eq) goto loc_8306B950;
	// lwz r30,276(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// li r4,231
	ctx.r4.s64 = 231;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// stb r25,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r25.u8);
	// b 0x8306b958
	goto loc_8306B958;
loc_8306B950:
	// lwz r30,276(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// li r25,0
	r25.s64 = 0;
loc_8306B958:
	// lbz r11,81(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306b9a0
	if (cr0.eq) goto loc_8306B9A0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306b99c
	if (cr6.eq) goto loc_8306B99C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r25,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r25.u16);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306B99C:
	// stb r25,81(r31)
	PPC_STORE_U8(r31.u32 + 81, r25.u8);
loc_8306B9A0:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8306b9bc
	if (!cr6.eq) goto loc_8306B9BC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,83(r31)
	PPC_STORE_U8(r31.u32 + 83, r11.u8);
loc_8306B9BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31993
	ctx.r3.s64 = -2096693248;
	// addi r3,r3,-18260
	ctx.r3.s64 = ctx.r3.s64 + -18260;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_8306B9D4"))) PPC_WEAK_FUNC(sub_8306B9D4);
PPC_FUNC_IMPL(__imp__sub_8306B9D4) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x83068b90
	sub_83068B90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306B9FC"))) PPC_WEAK_FUNC(sub_8306B9FC);
PPC_FUNC_IMPL(__imp__sub_8306B9FC) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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

__attribute__((alias("__imp__sub_8306BA28"))) PPC_WEAK_FUNC(sub_8306BA28);
PPC_FUNC_IMPL(__imp__sub_8306BA28) {
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
	// bl 0x8306b450
	sub_8306B450(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306ba58
	if (cr0.eq) goto loc_8306BA58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8306BA58:
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

__attribute__((alias("__imp__sub_8306BA80"))) PPC_WEAK_FUNC(sub_8306BA80);
PPC_FUNC_IMPL(__imp__sub_8306BA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b14
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// stb r27,15(r11)
	PPC_STORE_U8(r11.u32 + 15, r27.u8);
	// lwz r23,40(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r23,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r23.u32);
	// stw r28,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r28.u32);
	// lbz r11,28(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306baf4
	if (cr0.eq) goto loc_8306BAF4;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306baf4
	if (cr0.eq) goto loc_8306BAF4;
	// li r4,258
	ctx.r4.s64 = 258;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306BAF4:
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306bb48
	if (!cr0.eq) goto loc_8306BB48;
	// li r4,222
	ctx.r4.s64 = 222;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,59
	ctx.r4.s64 = 59;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
loc_8306BB34:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8306bec4
	goto loc_8306BEC4;
loc_8306BB48:
	// li r4,59
	ctx.r4.s64 = 59;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306bb88
	if (!cr0.eq) goto loc_8306BB88;
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
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8306BB88:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r5,r31,108
	ctx.r5.s64 = r31.s64 + 108;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x830273e0
	sub_830273E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306bbbc
	if (cr0.eq) goto loc_8306BBBC;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x8306bc3c
	if (!cr0.eq) goto loc_8306BC3C;
loc_8306BBBC:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 14);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8306bbfc
	if (cr0.eq) goto loc_8306BBFC;
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
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x8306bc38
	goto loc_8306BC38;
loc_8306BBFC:
	// lbz r11,16(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306bc38
	if (cr0.eq) goto loc_8306BC38;
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
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_8306BC38:
	// b 0x8306bb34
	goto loc_8306BB34;
loc_8306BC3C:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8306bca4
	if (cr0.eq) goto loc_8306BCA4;
	// lbz r11,14(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 14);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306bca4
	if (cr0.eq) goto loc_8306BCA4;
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
	// bne 0x8306bca4
	if (!cr0.eq) goto loc_8306BCA4;
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
	// li r4,81
	ctx.r4.s64 = 81;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f560
	sub_8301F560(ctx, base);
loc_8306BCA4:
	// lwz r6,24(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x8306bcbc
	if (!cr0.eq) goto loc_8306BCBC;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306bcc0
	if (cr6.eq) goto loc_8306BCC0;
loc_8306BCBC:
	// li r27,1
	r27.s64 = 1;
loc_8306BCC0:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// beq 0x8306be60
	if (cr0.eq) goto loc_8306BE60;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r11,1
	r11.s64 = 1;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r27,r31,96
	r27.s64 = r31.s64 + 96;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r11.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x82ff6eb8
	sub_82FF6EB8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// bne 0x8306bd60
	if (!cr0.eq) goto loc_8306BD60;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r11,26944
	ctx.r4.s64 = r11.s64 + 26944;
	// li r6,46
	ctx.r6.s64 = 46;
	// li r5,465
	ctx.r5.s64 = 465;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_8306BD60:
	// lis r11,2
	r11.s64 = 131072;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ori r11,r11,32841
	r11.u64 = r11.u64 | 32841;
	// stbx r25,r4,r11
	PPC_STORE_U8(ctx.r4.u32 + r11.u32, r25.u8);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306bdac
	if (!cr0.eq) goto loc_8306BDAC;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,230
	ctx.r4.s64 = 230;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x8306bb34
	goto loc_8306BB34;
loc_8306BDAC:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306be34
	if (cr0.eq) goto loc_8306BE34;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r29,100(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// beq 0x8306bde0
	if (cr0.eq) goto loc_8306BDE0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306BDE0:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306b508
	sub_8306B508(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8306be50
	if (cr6.eq) goto loc_8306BE50;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8306be50
	goto loc_8306BE50;
loc_8306BE34:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff1820
	sub_82FF1820(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306be50
	if (cr0.eq) goto loc_8306BE50;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83068790
	sub_83068790(ctx, base);
loc_8306BE50:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x8306beb4
	goto loc_8306BEB4;
loc_8306BE60:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82ff5480
	sub_82FF5480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff65e8
	sub_82FF65E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306beb4
	if (!cr0.eq) goto loc_8306BEB4;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,230
	ctx.r4.s64 = 230;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_8306BEB4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8306BEC4:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8306BED4"))) PPC_WEAK_FUNC(sub_8306BED4);
PPC_FUNC_IMPL(__imp__sub_8306BED4) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8306BEF4"))) PPC_WEAK_FUNC(sub_8306BEF4);
PPC_FUNC_IMPL(__imp__sub_8306BEF4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// bl 0x82ff5d48
	sub_82FF5D48(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8306bf34
	if (cr6.eq) goto loc_8306BF34;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306BF34:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_8306BF40"))) PPC_WEAK_FUNC(sub_8306BF40);
PPC_FUNC_IMPL(__imp__sub_8306BF40) {
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

__attribute__((alias("__imp__sub_8306BF68"))) PPC_WEAK_FUNC(sub_8306BF68);
PPC_FUNC_IMPL(__imp__sub_8306BF68) {
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

__attribute__((alias("__imp__sub_8306BF98"))) PPC_WEAK_FUNC(sub_8306BF98);
PPC_FUNC_IMPL(__imp__sub_8306BF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r22,1
	r22.s64 = 1;
	// addic. r23,r30,28
	xer.ca = r30.u32 > 4294967267;
	r23.s64 = r30.s64 + 28;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// beq 0x8306bfcc
	if (cr0.eq) goto loc_8306BFCC;
	// lbz r21,0(r23)
	r21.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// stb r22,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r22.u8);
	// stb r21,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r21.u8);
	// b 0x8306bfd0
	goto loc_8306BFD0;
loc_8306BFCC:
	// lbz r21,80(r31)
	r21.u64 = PPC_LOAD_U8(r31.u32 + 80);
loc_8306BFD0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306bff0
	if (cr6.eq) goto loc_8306BFF0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306BFF0:
	// lwz r25,40(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi. r29,r3,16
	r29.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8306c1b4
	if (cr0.eq) goto loc_8306C1B4;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r24,r11,30096
	r24.s64 = r11.s64 + 30096;
	// lis r11,2
	r11.s64 = 131072;
	// ori r26,r11,32808
	r26.u64 = r11.u64 | 32808;
loc_8306C028:
	// cmplwi cr6,r29,93
	cr6.compare<uint32_t>(r29.u32, 93, xer);
	// beq cr6,0x8306c1d4
	if (cr6.eq) goto loc_8306C1D4;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r29,37
	cr6.compare<uint32_t>(r29.u32, 37, xer);
	// bne cr6,0x8306c05c
	if (!cr6.eq) goto loc_8306C05C;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306ba80
	sub_8306BA80(ctx, base);
	// b 0x8306c1a4
	goto loc_8306C1A4;
loc_8306C05C:
	// cmplwi cr6,r29,60
	cr6.compare<uint32_t>(r29.u32, 60, xer);
	// bne cr6,0x8306c0e4
	if (!cr6.eq) goto loc_8306C0E4;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32848
	ctx.r10.u64 = ctx.r10.u64 | 32848;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r29,r11,r26
	r29.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306b188
	sub_8306B188(ctx, base);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x8306c1a4
	if (cr6.eq) goto loc_8306C1A4;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306c0c4
	if (cr0.eq) goto loc_8306C0C4;
	// li r4,299
	ctx.r4.s64 = 299;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x8306c1a4
	goto loc_8306C1A4;
loc_8306C0C4:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8306c1a4
	if (cr0.eq) goto loc_8306C1A4;
	// li r4,86
	ctx.r4.s64 = 86;
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// bl 0x8301f3f0
	sub_8301F3F0(ctx, base);
	// b 0x8306c1a4
	goto loc_8306C1A4;
loc_8306C0E4:
	// lis r11,2
	r11.s64 = 131072;
	// ori r10,r11,32852
	ctx.r10.u64 = r11.u64 | 32852;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306c150
	if (cr0.eq) goto loc_8306C150;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306c144
	if (cr6.eq) goto loc_8306C144;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82ff60b8
	sub_82FF60B8(ctx, base);
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8306c1a4
	goto loc_8306C1A4;
loc_8306C144:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x8306c1a4
	goto loc_8306C1A4;
loc_8306C150:
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r20,r31,96
	r20.s64 = r31.s64 + 96;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,213
	ctx.r4.s64 = 213;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// cmplwi cr6,r29,62
	cr6.compare<uint32_t>(r29.u32, 62, xer);
	// beq cr6,0x8306c1e0
	if (cr6.eq) goto loc_8306C1E0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6498
	sub_82FF6498(ctx, base);
loc_8306C1A4:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi. r29,r3,16
	r29.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8306c028
	if (!cr0.eq) goto loc_8306C028;
loc_8306C1B4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8306c1cc
	if (cr6.eq) goto loc_8306C1CC;
	// stb r21,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r21.u8);
loc_8306C1CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8306c220
	goto loc_8306C220;
loc_8306C1D4:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// b 0x8306c1e4
	goto loc_8306C1E4;
loc_8306C1E0:
	// li r22,0
	r22.s64 = 0;
loc_8306C1E4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306c204
	if (cr6.eq) goto loc_8306C204;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306C204:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8306c21c
	if (cr6.eq) goto loc_8306C21C;
	// stb r21,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r21.u8);
loc_8306C21C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_8306C220:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8306C228"))) PPC_WEAK_FUNC(sub_8306C228);
PPC_FUNC_IMPL(__imp__sub_8306C228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83068b90
	sub_83068B90(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306C250"))) PPC_WEAK_FUNC(sub_8306C250);
PPC_FUNC_IMPL(__imp__sub_8306C250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_8306C278"))) PPC_WEAK_FUNC(sub_8306C278);
PPC_FUNC_IMPL(__imp__sub_8306C278) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// b 0x8306c2c4
	goto loc_8306C2C4;
loc_8306C298:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306ba80
	sub_8306BA80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306c2c4
	if (!cr0.eq) goto loc_8306C2C4;
	// li r4,226
	ctx.r4.s64 = 226;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306C2C4:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6270
	sub_82FF6270(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306c2e4
	if (cr0.eq) goto loc_8306C2E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r30,1
	r30.s64 = 1;
loc_8306C2E4:
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306c298
	if (!cr0.eq) goto loc_8306C298;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8306C310"))) PPC_WEAK_FUNC(sub_8306C310);
PPC_FUNC_IMPL(__imp__sub_8306C310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306c358
	if (!cr0.eq) goto loc_8306C358;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8306c684
	goto loc_8306C684;
loc_8306C358:
	// lwz r20,40(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r20,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r20.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// sth r28,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r28.u16);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306c3b8
	if (!cr0.eq) goto loc_8306C3B8;
	// li r4,175
	ctx.r4.s64 = 175;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8306c678
	goto loc_8306C678;
loc_8306C3B8:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lbz r11,10(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306c3f8
	if (cr0.eq) goto loc_8306C3F8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r4,58
	ctx.r4.s64 = 58;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8306c3f8
	if (cr6.eq) goto loc_8306C3F8;
	// li r4,290
	ctx.r4.s64 = 290;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306C3F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306c42c
	if (!cr0.eq) goto loc_8306C42C;
	// li r4,207
	ctx.r4.s64 = 207;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x8306c678
	goto loc_8306C678;
loc_8306C42C:
	// lwz r22,40(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r22,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r22.u32);
	// stw r25,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r25.u32);
	// lwz r21,40(r30)
	r21.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r21,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r21.u32);
	// stw r24,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r24.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83069260
	sub_83069260(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306c4a0
	if (!cr0.eq) goto loc_8306C4A0;
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x8306c678
	goto loc_8306C678;
loc_8306C4A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cntlzw r11,r27
	r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r23,r11,1
	r23.u64 = r11.u64 ^ 1;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306c524
	if (cr0.eq) goto loc_8306C524;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x8306c608
	goto loc_8306C608;
loc_8306C524:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r26,24(r25)
	r26.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r27,24(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306c5ec
	if (cr0.eq) goto loc_8306C5EC;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306c588
	if (cr6.eq) goto loc_8306C588;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8306c58c
	if (!cr0.eq) goto loc_8306C58C;
loc_8306C588:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8306C58C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8306c5a4
	if (cr6.eq) goto loc_8306C5A4;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8306c5a8
	if (!cr0.eq) goto loc_8306C5A8;
loc_8306C5A4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_8306C5A8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8306c5c0
	if (cr6.eq) goto loc_8306C5C0;
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8306c5c4
	if (!cr0.eq) goto loc_8306C5C4;
loc_8306C5C0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8306C5C4:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, r28.u16);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x830a1a38
	sub_830A1A38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8306c5f0
	goto loc_8306C5F0;
loc_8306C5EC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8306C5F0:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306C608:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306c630
	if (cr6.eq) goto loc_8306C630;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306C630:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306c278
	sub_8306C278(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306c660
	if (!cr0.eq) goto loc_8306C660;
	// li r4,238
	ctx.r4.s64 = 238;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_8306C660:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8306C678:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8306C684:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8306C68C"))) PPC_WEAK_FUNC(sub_8306C68C);
PPC_FUNC_IMPL(__imp__sub_8306C68C) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_8306C6B4"))) PPC_WEAK_FUNC(sub_8306C6B4);
PPC_FUNC_IMPL(__imp__sub_8306C6B4) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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

__attribute__((alias("__imp__sub_8306C6DC"))) PPC_WEAK_FUNC(sub_8306C6DC);
PPC_FUNC_IMPL(__imp__sub_8306C6DC) {
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
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
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

__attribute__((alias("__imp__sub_8306C704"))) PPC_WEAK_FUNC(sub_8306C704);
PPC_FUNC_IMPL(__imp__sub_8306C704) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_8306C738"))) PPC_WEAK_FUNC(sub_8306C738);
PPC_FUNC_IMPL(__imp__sub_8306C738) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8306c7ac
	if (!cr6.eq) goto loc_8306C7AC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_8306C7AC:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8306C7D0"))) PPC_WEAK_FUNC(sub_8306C7D0);
PPC_FUNC_IMPL(__imp__sub_8306C7D0) {
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
	// bl 0x83086758
	sub_83086758(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,30424
	ctx.r10.s64 = r11.s64 + 30424;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8306C830"))) PPC_WEAK_FUNC(sub_8306C830);
PPC_FUNC_IMPL(__imp__sub_8306C830) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306c86c
	if (cr0.eq) goto loc_8306C86C;
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
loc_8306C86C:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8306c898
	if (cr0.eq) goto loc_8306C898;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_8306C898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306C8B8"))) PPC_WEAK_FUNC(sub_8306C8B8);
PPC_FUNC_IMPL(__imp__sub_8306C8B8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x83086758
	sub_83086758(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r27,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r27.u32);
	// addi r10,r11,30424
	ctx.r10.s64 = r11.s64 + 30424;
	// li r11,0
	r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// bl 0x830866b8
	sub_830866B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8306C928"))) PPC_WEAK_FUNC(sub_8306C928);
PPC_FUNC_IMPL(__imp__sub_8306C928) {
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
	// bl 0x83086518
	sub_83086518(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306C950"))) PPC_WEAK_FUNC(sub_8306C950);
PPC_FUNC_IMPL(__imp__sub_8306C950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306c974
	if (cr0.eq) goto loc_8306C974;
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// blr 
	return;
loc_8306C974:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306C980"))) PPC_WEAK_FUNC(sub_8306C980);
PPC_FUNC_IMPL(__imp__sub_8306C980) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306c9bc
	if (cr0.eq) goto loc_8306C9BC;
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
loc_8306C9BC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
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

__attribute__((alias("__imp__sub_8306C9F8"))) PPC_WEAK_FUNC(sub_8306C9F8);
PPC_FUNC_IMPL(__imp__sub_8306C9F8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8306ca24
	if (!cr6.eq) goto loc_8306CA24;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-29976
	ctx.r3.s64 = r11.s64 + -29976;
	// b 0x8306ca34
	goto loc_8306CA34;
loc_8306CA24:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8306ca44
	if (!cr6.eq) goto loc_8306CA44;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-29856
	ctx.r3.s64 = r11.s64 + -29856;
loc_8306CA34:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8306cab0
	goto loc_8306CAB0;
loc_8306CA44:
	// li r4,1023
	ctx.r4.s64 = 1023;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8308ad00
	sub_8308AD00(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// sthx r10,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306CAB0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8306CABC"))) PPC_WEAK_FUNC(sub_8306CABC);
PPC_FUNC_IMPL(__imp__sub_8306CABC) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
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

__attribute__((alias("__imp__sub_8306CAF0"))) PPC_WEAK_FUNC(sub_8306CAF0);
PPC_FUNC_IMPL(__imp__sub_8306CAF0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8306cb48
	if (!cr0.eq) goto loc_8306CB48;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r4,r11,30624
	ctx.r4.s64 = r11.s64 + 30624;
	// li r5,344
	ctx.r5.s64 = 344;
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
loc_8306CB48:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306cb94
	if (cr0.eq) goto loc_8306CB94;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r10,-22220(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22220);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8306cb94
	if (!cr6.eq) goto loc_8306CB94;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,18
	ctx.r6.s64 = 18;
	// addi r4,r11,30624
	ctx.r4.s64 = r11.s64 + 30624;
	// li r5,352
	ctx.r5.s64 = 352;
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
loc_8306CB94:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306cbe0
	if (!cr0.eq) goto loc_8306CBE0;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306cbd8
	if (cr0.eq) goto loc_8306CBD8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83046878
	sub_83046878(ctx, base);
	// b 0x8306cbdc
	goto loc_8306CBDC;
loc_8306CBD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306CBDC:
	// b 0x8306cd40
	goto loc_8306CD40;
loc_8306CBE0:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8306cc88
	if (cr6.eq) goto loc_8306CC88;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x8306cc88
	if (cr6.eq) goto loc_8306CC88;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8306cc34
	if (cr6.eq) goto loc_8306CC34;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8306cc34
	if (cr6.eq) goto loc_8306CC34;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8306cc34
	if (cr6.eq) goto loc_8306CC34;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r4,r11,30624
	ctx.r4.s64 = r11.s64 + 30624;
	// li r5,414
	ctx.r5.s64 = 414;
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
loc_8306CC34:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306ccf0
	if (!cr0.eq) goto loc_8306CCF0;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306cc80
	if (cr0.eq) goto loc_8306CC80;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x83046878
	sub_83046878(ctx, base);
	// b 0x8306cc84
	goto loc_8306CC84;
loc_8306CC80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306CC84:
	// b 0x8306cd40
	goto loc_8306CD40;
loc_8306CC88:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306ccf0
	if (!cr0.eq) goto loc_8306CCF0;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306ccf0
	if (!cr0.eq) goto loc_8306CCF0;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306cce8
	if (cr0.eq) goto loc_8306CCE8;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x83046878
	sub_83046878(ctx, base);
	// b 0x8306ccec
	goto loc_8306CCEC;
loc_8306CCE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306CCEC:
	// b 0x8306cd40
	goto loc_8306CD40;
loc_8306CCF0:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r3,68
	ctx.r3.s64 = 68;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x8306cd3c
	if (cr0.eq) goto loc_8306CD3C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r28,4(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x8308e360
	sub_8308E360(ctx, base);
	// b 0x8306cd40
	goto loc_8306CD40;
loc_8306CD3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306CD40:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8306CD48"))) PPC_WEAK_FUNC(sub_8306CD48);
PPC_FUNC_IMPL(__imp__sub_8306CD48) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8306CD74"))) PPC_WEAK_FUNC(sub_8306CD74);
PPC_FUNC_IMPL(__imp__sub_8306CD74) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_8306CDA0"))) PPC_WEAK_FUNC(sub_8306CDA0);
PPC_FUNC_IMPL(__imp__sub_8306CDA0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_8306CDCC"))) PPC_WEAK_FUNC(sub_8306CDCC);
PPC_FUNC_IMPL(__imp__sub_8306CDCC) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_8306CE00"))) PPC_WEAK_FUNC(sub_8306CE00);
PPC_FUNC_IMPL(__imp__sub_8306CE00) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306ce44
	if (cr0.eq) goto loc_8306CE44;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8306c7d0
	sub_8306C7D0(ctx, base);
	// b 0x8306ce48
	goto loc_8306CE48;
loc_8306CE44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306CE48:
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

__attribute__((alias("__imp__sub_8306CE60"))) PPC_WEAK_FUNC(sub_8306CE60);
PPC_FUNC_IMPL(__imp__sub_8306CE60) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
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

__attribute__((alias("__imp__sub_8306CE90"))) PPC_WEAK_FUNC(sub_8306CE90);
PPC_FUNC_IMPL(__imp__sub_8306CE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15508
	ctx.r3.s64 = r11.s64 + 15508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306CEA0"))) PPC_WEAK_FUNC(sub_8306CEA0);
PPC_FUNC_IMPL(__imp__sub_8306CEA0) {
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
	// bl 0x83086798
	sub_83086798(ctx, base);
	// lha r11,0(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 0));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306cf04
	if (cr0.eq) goto loc_8306CF04;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x83057c80
	sub_83057C80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// b 0x8306cf68
	goto loc_8306CF68;
loc_8306CF04:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x830563e8
	sub_830563E8(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,15976
	ctx.r4.s64 = r11.s64 + 15976;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,15664
	ctx.r4.s64 = r11.s64 + 15664;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	r11.s64 = 0;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_8306CF68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306CF80"))) PPC_WEAK_FUNC(sub_8306CF80);
PPC_FUNC_IMPL(__imp__sub_8306CF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8306cf94
	if (!cr0.eq) goto loc_8306CF94;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8306CF94:
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x8306cfc4
	if (cr0.eq) goto loc_8306CFC4;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_8306CFA8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8306cfdc
	if (!cr6.eq) goto loc_8306CFDC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8306cfa8
	if (cr6.lt) goto loc_8306CFA8;
loc_8306CFC4:
	// li r11,1
	r11.s64 = 1;
loc_8306CFC8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
loc_8306CFDC:
	// li r11,0
	r11.s64 = 0;
	// b 0x8306cfc8
	goto loc_8306CFC8;
}

__attribute__((alias("__imp__sub_8306CFE8"))) PPC_WEAK_FUNC(sub_8306CFE8);
PPC_FUNC_IMPL(__imp__sub_8306CFE8) {
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
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306d010
	if (!cr6.eq) goto loc_8306D010;
	// bl 0x8306c9f8
	sub_8306C9F8(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
loc_8306D010:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
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

__attribute__((alias("__imp__sub_8306D030"))) PPC_WEAK_FUNC(sub_8306D030);
PPC_FUNC_IMPL(__imp__sub_8306D030) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8306d0ac
	if (!cr6.eq) goto loc_8306D0AC;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x8306d0a0
	if (cr0.eq) goto loc_8306D0A0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x8308f5f8
	sub_8308F5F8(ctx, base);
	// b 0x8306d0a4
	goto loc_8306D0A4;
loc_8306D0A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306D0A4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
loc_8306D0AC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8306d0c0
	if (!cr6.eq) goto loc_8306D0C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306caf0
	sub_8306CAF0(ctx, base);
	// b 0x8306d0a4
	goto loc_8306D0A4;
loc_8306D0C0:
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,17
	ctx.r6.s64 = 17;
	// addi r4,r11,30624
	ctx.r4.s64 = r11.s64 + 30624;
	// li r5,332
	ctx.r5.s64 = 332;
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
}

__attribute__((alias("__imp__sub_8306D0EC"))) PPC_WEAK_FUNC(sub_8306D0EC);
PPC_FUNC_IMPL(__imp__sub_8306D0EC) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8306D118"))) PPC_WEAK_FUNC(sub_8306D118);
PPC_FUNC_IMPL(__imp__sub_8306D118) {
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
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306d140
	if (!cr6.eq) goto loc_8306D140;
	// bl 0x8306d030
	sub_8306D030(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
loc_8306D140:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
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

__attribute__((alias("__imp__sub_8306D158"))) PPC_WEAK_FUNC(sub_8306D158);
PPC_FUNC_IMPL(__imp__sub_8306D158) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8306d178
	if (!cr0.eq) goto loc_8306D178;
loc_8306D170:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8306d18c
	goto loc_8306D18C;
loc_8306D178:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306d170
	if (cr0.eq) goto loc_8306D170;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8306D18C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306D1A8"))) PPC_WEAK_FUNC(sub_8306D1A8);
PPC_FUNC_IMPL(__imp__sub_8306D1A8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306d1f4
	if (cr0.eq) goto loc_8306D1F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x8306d1f8
	goto loc_8306D1F8;
loc_8306D1F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306D1F8:
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8306D214"))) PPC_WEAK_FUNC(sub_8306D214);
PPC_FUNC_IMPL(__imp__sub_8306D214) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8306D248"))) PPC_WEAK_FUNC(sub_8306D248);
PPC_FUNC_IMPL(__imp__sub_8306D248) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,30424
	r11.s64 = r11.s64 + 30424;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8306d288
	if (cr0.eq) goto loc_8306D288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83015ab0
	sub_83015AB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8306D288:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306d2a8
	if (cr0.eq) goto loc_8306D2A8;
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
loc_8306D2A8:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306d2c8
	if (cr0.eq) goto loc_8306D2C8;
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
loc_8306D2C8:
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306d2e8
	if (cr0.eq) goto loc_8306D2E8;
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
loc_8306D2E8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
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
	// bl 0x83086518
	sub_83086518(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8306D310"))) PPC_WEAK_FUNC(sub_8306D310);
PPC_FUNC_IMPL(__imp__sub_8306D310) {
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
	// bl 0x83086518
	sub_83086518(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306D340"))) PPC_WEAK_FUNC(sub_8306D340);
PPC_FUNC_IMPL(__imp__sub_8306D340) {
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
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306d38c
	if (cr0.eq) goto loc_8306D38C;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306d38c
	if (cr0.eq) goto loc_8306D38C;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x8306d468
	if (!cr0.eq) goto loc_8306D468;
loc_8306D38C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8306d468
	if (!cr6.eq) goto loc_8306D468;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306d3a8
	if (!cr6.eq) goto loc_8306D3A8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8306d1a8
	sub_8306D1A8(ctx, base);
loc_8306D3A8:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306d3e0
	if (cr0.eq) goto loc_8306D3E0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8309d0f0
	sub_8309D0F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8306d3e4
	goto loc_8306D3E4;
loc_8306D3E0:
	// li r29,0
	r29.s64 = 0;
loc_8306D3E4:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r29
	r28.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r11.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306d454
	if (!cr6.eq) goto loc_8306D454;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306d44c
	if (cr0.eq) goto loc_8306D44C;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x830a6798
	sub_830A6798(ctx, base);
	// b 0x8306d450
	goto loc_8306D450;
loc_8306D44C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306D450:
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
loc_8306D454:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8306c738
	sub_8306C738(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// b 0x8306d46c
	goto loc_8306D46C;
loc_8306D468:
	// li r11,0
	r11.s64 = 0;
loc_8306D46C:
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8306D47C"))) PPC_WEAK_FUNC(sub_8306D47C);
PPC_FUNC_IMPL(__imp__sub_8306D47C) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8306D4A8"))) PPC_WEAK_FUNC(sub_8306D4A8);
PPC_FUNC_IMPL(__imp__sub_8306D4A8) {
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
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_8306D4E0"))) PPC_WEAK_FUNC(sub_8306D4E0);
PPC_FUNC_IMPL(__imp__sub_8306D4E0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306d54c
	if (!cr6.eq) goto loc_8306D54C;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306d518
	if (!cr6.eq) goto loc_8306D518;
	// bl 0x8306d1a8
	sub_8306D1A8(ctx, base);
loc_8306D518:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306d544
	if (cr0.eq) goto loc_8306D544;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x830a6798
	sub_830A6798(ctx, base);
	// b 0x8306d548
	goto loc_8306D548;
loc_8306D544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306D548:
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
loc_8306D54C:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
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

__attribute__((alias("__imp__sub_8306D57C"))) PPC_WEAK_FUNC(sub_8306D57C);
PPC_FUNC_IMPL(__imp__sub_8306D57C) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8306D5B0"))) PPC_WEAK_FUNC(sub_8306D5B0);
PPC_FUNC_IMPL(__imp__sub_8306D5B0) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x8306d5d8
	if (!cr0.eq) goto loc_8306D5D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8306d638
	goto loc_8306D638;
loc_8306D5D8:
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83015918
	sub_83015918(ctx, base);
loc_8306D5E8:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306d60c
	if (!cr6.eq) goto loc_8306D60C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x8306d610
	if (cr6.eq) goto loc_8306D610;
loc_8306D60C:
	// li r11,1
	r11.s64 = 1;
loc_8306D610:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306d62c
	if (cr0.eq) goto loc_8306D62C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r11.u8);
	// b 0x8306d5e8
	goto loc_8306D5E8;
loc_8306D62C:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8306D638:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306D64C"))) PPC_WEAK_FUNC(sub_8306D64C);
PPC_FUNC_IMPL(__imp__sub_8306D64C) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306D680"))) PPC_WEAK_FUNC(sub_8306D680);
PPC_FUNC_IMPL(__imp__sub_8306D680) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306d6a8
	if (!cr6.eq) goto loc_8306D6A8;
	// bl 0x8306d1a8
	sub_8306D1A8(ctx, base);
loc_8306D6A8:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r11.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306d714
	if (!cr6.eq) goto loc_8306D714;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306d70c
	if (cr0.eq) goto loc_8306D70C;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x830a6798
	sub_830A6798(ctx, base);
	// b 0x8306d710
	goto loc_8306D710;
loc_8306D70C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306D710:
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
loc_8306D714:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x8306c738
	sub_8306C738(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8306D728"))) PPC_WEAK_FUNC(sub_8306D728);
PPC_FUNC_IMPL(__imp__sub_8306D728) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8306D758"))) PPC_WEAK_FUNC(sub_8306D758);
PPC_FUNC_IMPL(__imp__sub_8306D758) {
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
	// bl 0x8306d248
	sub_8306D248(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306d788
	if (cr0.eq) goto loc_8306D788;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8306D788:
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

__attribute__((alias("__imp__sub_8306D7A8"))) PPC_WEAK_FUNC(sub_8306D7A8);
PPC_FUNC_IMPL(__imp__sub_8306D7A8) {
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
	// bl 0x83086758
	sub_83086758(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,31408
	ctx.r9.s64 = r11.s64 + 31408;
	// li r11,0
	r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stb r11,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r11.u8);
	// stb r11,93(r31)
	PPC_STORE_U8(r31.u32 + 93, r11.u8);
	// stb r11,94(r31)
	PPC_STORE_U8(r31.u32 + 94, r11.u8);
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

__attribute__((alias("__imp__sub_8306D840"))) PPC_WEAK_FUNC(sub_8306D840);
PPC_FUNC_IMPL(__imp__sub_8306D840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306d854
	if (cr0.eq) goto loc_8306D854;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// blr 
	return;
loc_8306D854:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306D860"))) PPC_WEAK_FUNC(sub_8306D860);
PPC_FUNC_IMPL(__imp__sub_8306D860) {
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
	// lwz r31,56(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8306d8ac
	if (cr0.eq) goto loc_8306D8AC;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306d8a4
	if (!cr6.eq) goto loc_8306D8A4;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306d8a4
	if (cr6.eq) goto loc_8306D8A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83048528
	sub_83048528(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_8306D8A4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x8306d8b0
	goto loc_8306D8B0;
loc_8306D8AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306D8B0:
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

__attribute__((alias("__imp__sub_8306D8C8"))) PPC_WEAK_FUNC(sub_8306D8C8);
PPC_FUNC_IMPL(__imp__sub_8306D8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306D8E0"))) PPC_WEAK_FUNC(sub_8306D8E0);
PPC_FUNC_IMPL(__imp__sub_8306D8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306d8f4
	if (cr0.eq) goto loc_8306D8F4;
loc_8306D8EC:
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// blr 
	return;
loc_8306D8F4:
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8306d8ec
	if (!cr0.eq) goto loc_8306D8EC;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306d914
	if (cr0.eq) goto loc_8306D914;
loc_8306D90C:
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// blr 
	return;
loc_8306D914:
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8306d90c
	if (!cr0.eq) goto loc_8306D90C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-6244
	ctx.r3.s64 = r11.s64 + -6244;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306D930"))) PPC_WEAK_FUNC(sub_8306D930);
PPC_FUNC_IMPL(__imp__sub_8306D930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306d944
	if (cr0.eq) goto loc_8306D944;
loc_8306D93C:
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// blr 
	return;
loc_8306D944:
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8306d93c
	if (!cr0.eq) goto loc_8306D93C;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306d964
	if (cr0.eq) goto loc_8306D964;
loc_8306D95C:
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// blr 
	return;
loc_8306D964:
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8306d95c
	if (!cr0.eq) goto loc_8306D95C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-8608
	ctx.r3.s64 = r11.s64 + -8608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306D980"))) PPC_WEAK_FUNC(sub_8306D980);
PPC_FUNC_IMPL(__imp__sub_8306D980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306d998
	if (cr0.eq) goto loc_8306D998;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,25
	cr6.compare<int32_t>(ctx.r10.s32, 25, xer);
	// beq cr6,0x8306d9b0
	if (cr6.eq) goto loc_8306D9B0;
loc_8306D998:
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306d9c4
	if (cr0.eq) goto loc_8306D9C4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,25
	cr6.compare<int32_t>(ctx.r10.s32, 25, xer);
	// bne cr6,0x8306d9c4
	if (!cr6.eq) goto loc_8306D9C4;
loc_8306D9B0:
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306d9c4
	if (cr0.eq) goto loc_8306D9C4;
	// lbz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// blr 
	return;
loc_8306D9C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306D9D0"))) PPC_WEAK_FUNC(sub_8306D9D0);
PPC_FUNC_IMPL(__imp__sub_8306D9D0) {
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
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8306da28
	if (cr6.eq) goto loc_8306DA28;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306da04
	if (cr0.eq) goto loc_8306DA04;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x8306da08
	goto loc_8306DA08;
loc_8306DA04:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_8306DA08:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x8306da1c
	if (!cr6.eq) goto loc_8306DA1C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-5436
	ctx.r3.s64 = r11.s64 + -5436;
	// b 0x8306dad4
	goto loc_8306DAD4;
loc_8306DA1C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-6244
	ctx.r3.s64 = r11.s64 + -6244;
	// b 0x8306dad4
	goto loc_8306DAD4;
loc_8306DA28:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306da3c
	if (cr0.eq) goto loc_8306DA3C;
loc_8306DA34:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// b 0x8306da68
	goto loc_8306DA68;
loc_8306DA3C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8306da34
	if (!cr0.eq) goto loc_8306DA34;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306da5c
	if (cr0.eq) goto loc_8306DA5C;
loc_8306DA54:
	// lbz r11,8(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// b 0x8306da68
	goto loc_8306DA68;
loc_8306DA5C:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8306da54
	if (!cr0.eq) goto loc_8306DA54;
loc_8306DA68:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306dad0
	if (!cr0.eq) goto loc_8306DAD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306d980
	sub_8306D980(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306dad0
	if (!cr0.eq) goto loc_8306DAD0;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306daac
	if (cr0.eq) goto loc_8306DAAC;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,25
	cr6.compare<int32_t>(ctx.r10.s32, 25, xer);
	// bne cr6,0x8306daac
	if (!cr6.eq) goto loc_8306DAAC;
loc_8306DA98:
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306dad0
	if (cr0.eq) goto loc_8306DAD0;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// b 0x8306dad4
	goto loc_8306DAD4;
loc_8306DAAC:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306dac4
	if (cr0.eq) goto loc_8306DAC4;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,25
	cr6.compare<int32_t>(ctx.r10.s32, 25, xer);
	// beq cr6,0x8306da98
	if (cr6.eq) goto loc_8306DA98;
loc_8306DAC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306d8e0
	sub_8306D8E0(ctx, base);
	// b 0x8306dad4
	goto loc_8306DAD4;
loc_8306DAD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306DAD4:
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

__attribute__((alias("__imp__sub_8306DAE8"))) PPC_WEAK_FUNC(sub_8306DAE8);
PPC_FUNC_IMPL(__imp__sub_8306DAE8) {
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
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8306db14
	if (cr6.eq) goto loc_8306DB14;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-8608
	ctx.r3.s64 = r11.s64 + -8608;
	// b 0x8306dbc0
	goto loc_8306DBC0;
loc_8306DB14:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306db28
	if (cr0.eq) goto loc_8306DB28;
loc_8306DB20:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// b 0x8306db54
	goto loc_8306DB54;
loc_8306DB28:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8306db20
	if (!cr0.eq) goto loc_8306DB20;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306db48
	if (cr0.eq) goto loc_8306DB48;
loc_8306DB40:
	// lbz r11,8(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// b 0x8306db54
	goto loc_8306DB54;
loc_8306DB48:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8306db40
	if (!cr0.eq) goto loc_8306DB40;
loc_8306DB54:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306dbbc
	if (!cr0.eq) goto loc_8306DBBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306d980
	sub_8306D980(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306dbbc
	if (!cr0.eq) goto loc_8306DBBC;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306db98
	if (cr0.eq) goto loc_8306DB98;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,25
	cr6.compare<int32_t>(ctx.r10.s32, 25, xer);
	// bne cr6,0x8306db98
	if (!cr6.eq) goto loc_8306DB98;
loc_8306DB84:
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306dbbc
	if (cr0.eq) goto loc_8306DBBC;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// b 0x8306dbc0
	goto loc_8306DBC0;
loc_8306DB98:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306dbb0
	if (cr0.eq) goto loc_8306DBB0;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,25
	cr6.compare<int32_t>(ctx.r10.s32, 25, xer);
	// beq cr6,0x8306db84
	if (cr6.eq) goto loc_8306DB84;
loc_8306DBB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8306d930
	sub_8306D930(ctx, base);
	// b 0x8306dbc0
	goto loc_8306DBC0;
loc_8306DBBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306DBC0:
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

__attribute__((alias("__imp__sub_8306DBE0"))) PPC_WEAK_FUNC(sub_8306DBE0);
PPC_FUNC_IMPL(__imp__sub_8306DBE0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x83086758
	sub_83086758(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r26,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r26.u32);
	// addi r10,r11,31408
	ctx.r10.s64 = r11.s64 + 31408;
	// stw r25,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r25.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// stw r10,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r10.u32);
	// stw r10,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r10.u32);
	// stb r11,92(r30)
	PPC_STORE_U8(r30.u32 + 92, r11.u8);
	// stb r11,93(r30)
	PPC_STORE_U8(r30.u32 + 93, r11.u8);
	// stb r11,94(r30)
	PPC_STORE_U8(r30.u32 + 94, r11.u8);
	// bl 0x83086608
	sub_83086608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8306DC98"))) PPC_WEAK_FUNC(sub_8306DC98);
PPC_FUNC_IMPL(__imp__sub_8306DC98) {
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
	// bl 0x83086518
	sub_83086518(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DCC0"))) PPC_WEAK_FUNC(sub_8306DCC0);
PPC_FUNC_IMPL(__imp__sub_8306DCC0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8306dd08
	if (!cr0.eq) goto loc_8306DD08;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,301
	ctx.r6.s64 = 301;
	// addi r4,r11,31544
	ctx.r4.s64 = r11.s64 + 31544;
	// li r5,308
	ctx.r5.s64 = 308;
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
loc_8306DD08:
	// bl 0x830486f8
	sub_830486F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DD20"))) PPC_WEAK_FUNC(sub_8306DD20);
PPC_FUNC_IMPL(__imp__sub_8306DD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8306dd34
	if (cr0.eq) goto loc_8306DD34;
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
loc_8306DD34:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8306dd54
	if (cr6.eq) goto loc_8306DD54;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// blr 
	return;
loc_8306DD54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DD60"))) PPC_WEAK_FUNC(sub_8306DD60);
PPC_FUNC_IMPL(__imp__sub_8306DD60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306dd70
	if (cr0.eq) goto loc_8306DD70;
	// b 0x83048048
	sub_83048048(ctx, base);
	return;
loc_8306DD70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DD80"))) PPC_WEAK_FUNC(sub_8306DD80);
PPC_FUNC_IMPL(__imp__sub_8306DD80) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,96
	ctx.r3.s64 = 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306ddc4
	if (cr0.eq) goto loc_8306DDC4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8306d7a8
	sub_8306D7A8(ctx, base);
	// b 0x8306ddc8
	goto loc_8306DDC8;
loc_8306DDC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306DDC8:
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

__attribute__((alias("__imp__sub_8306DDE0"))) PPC_WEAK_FUNC(sub_8306DDE0);
PPC_FUNC_IMPL(__imp__sub_8306DDE0) {
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
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
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

__attribute__((alias("__imp__sub_8306DE10"))) PPC_WEAK_FUNC(sub_8306DE10);
PPC_FUNC_IMPL(__imp__sub_8306DE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,15516
	ctx.r3.s64 = r11.s64 + 15516;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306DE20"))) PPC_WEAK_FUNC(sub_8306DE20);
PPC_FUNC_IMPL(__imp__sub_8306DE20) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x83086798
	sub_83086798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lha r11,0(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 0));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306df38
	if (cr0.eq) goto loc_8306DF38;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x830496b8
	sub_830496B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001a80
	sub_83001A80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// bl 0x83058548
	sub_83058548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// bl 0x830496b8
	sub_830496B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// bl 0x83054c60
	sub_83054C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x83001d80
	sub_83001D80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// bl 0x83001478
	sub_83001478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 92);
	// bl 0x83001380
	sub_83001380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,93(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 93);
	// bl 0x83001380
	sub_83001380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,94(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 94);
	// bl 0x83001380
	sub_83001380(ctx, base);
	// b 0x8306e084
	goto loc_8306E084;
loc_8306DF38:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// bl 0x83049780
	sub_83049780(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r30,36
	ctx.r4.s64 = r30.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// addi r4,r30,44
	ctx.r4.s64 = r30.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r30,52
	ctx.r4.s64 = r30.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001ca8
	sub_83001CA8(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,15148
	r29.s64 = r11.s64 + 15148;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// addi r3,r30,60
	ctx.r3.s64 = r30.s64 + 60;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// bl 0x83056eb8
	sub_83056EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
	// bl 0x83049780
	sub_83049780(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,72
	ctx.r3.s64 = r30.s64 + 72;
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
	// bl 0x83055c70
	sub_83055C70(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,15648
	ctx.r4.s64 = r11.s64 + 15648;
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-31947
	r11.s64 = -2093678592;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,15516
	ctx.r4.s64 = r11.s64 + 15516;
	// stw r10,76(r30)
	PPC_STORE_U32(r30.u32 + 76, ctx.r10.u32);
	// bl 0x83001e40
	sub_83001E40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x830016f8
	sub_830016F8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r30,92
	ctx.r4.s64 = r30.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r11.u32);
	// bl 0x83001600
	sub_83001600(ctx, base);
	// addi r4,r30,93
	ctx.r4.s64 = r30.s64 + 93;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001600
	sub_83001600(ctx, base);
	// addi r4,r30,94
	ctx.r4.s64 = r30.s64 + 94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83001600
	sub_83001600(ctx, base);
loc_8306E084:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8306E090"))) PPC_WEAK_FUNC(sub_8306E090);
PPC_FUNC_IMPL(__imp__sub_8306E090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306e0a0
	if (cr0.eq) goto loc_8306E0A0;
	// b 0x830435b0
	sub_830435B0(ctx, base);
	return;
loc_8306E0A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E0B0"))) PPC_WEAK_FUNC(sub_8306E0B0);
PPC_FUNC_IMPL(__imp__sub_8306E0B0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306e0e8
	if (cr0.eq) goto loc_8306E0E8;
	// bl 0x830487d0
	sub_830487D0(ctx, base);
	// b 0x8306e1e0
	goto loc_8306E1E0;
loc_8306E0E8:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8306e1d4
	if (!cr6.eq) goto loc_8306E1D4;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306e134
	if (!cr6.eq) goto loc_8306E134;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306e12c
	if (cr0.eq) goto loc_8306E12C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83055058
	sub_83055058(ctx, base);
	// b 0x8306e130
	goto loc_8306E130;
loc_8306E12C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306E130:
	// stw r3,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r3.u32);
loc_8306E134:
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306e15c
	if (cr0.eq) goto loc_8306E15C;
	// lwz r28,0(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x8306e1c8
	if (!cr0.eq) goto loc_8306E1C8;
loc_8306E15C:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306e19c
	if (cr0.eq) goto loc_8306E19C;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x830899f8
	sub_830899F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8306e1a0
	goto loc_8306E1A0;
loc_8306E19C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8306E1A0:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,40(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r11,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, r11.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// bl 0x830436d0
	sub_830436D0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// b 0x8306e1cc
	goto loc_8306E1CC;
loc_8306E1C8:
	// li r11,0
	r11.s64 = 0;
loc_8306E1CC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x8306e1dc
	goto loc_8306E1DC;
loc_8306E1D4:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306E1DC:
	// stb r11,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r11.u8);
loc_8306E1E0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8306E1E8"))) PPC_WEAK_FUNC(sub_8306E1E8);
PPC_FUNC_IMPL(__imp__sub_8306E1E8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8306E214"))) PPC_WEAK_FUNC(sub_8306E214);
PPC_FUNC_IMPL(__imp__sub_8306E214) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_8306E240"))) PPC_WEAK_FUNC(sub_8306E240);
PPC_FUNC_IMPL(__imp__sub_8306E240) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306e28c
	if (cr0.eq) goto loc_8306E28C;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8306e26c
	if (!cr0.eq) goto loc_8306E26C;
	// li r11,0
	r11.s64 = 0;
	// b 0x8306e284
	goto loc_8306E284;
loc_8306E26C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8306e284
	if (cr0.eq) goto loc_8306E284;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8306E284:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8306e290
	goto loc_8306E290;
loc_8306E28C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306E290:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E2A0"))) PPC_WEAK_FUNC(sub_8306E2A0);
PPC_FUNC_IMPL(__imp__sub_8306E2A0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306e2c4
	if (cr0.eq) goto loc_8306E2C4;
	// bl 0x83048ca0
	sub_83048CA0(ctx, base);
	// b 0x8306e2d8
	goto loc_8306E2D8;
loc_8306E2C4:
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306e2d4
	if (cr0.eq) goto loc_8306E2D4;
	// bl 0x83077968
	sub_83077968(ctx, base);
loc_8306E2D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8306E2D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E2F0"))) PPC_WEAK_FUNC(sub_8306E2F0);
PPC_FUNC_IMPL(__imp__sub_8306E2F0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31408
	r11.s64 = r11.s64 + 31408;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,60(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8306e348
	if (cr0.eq) goto loc_8306E348;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8307cc20
	sub_8307CC20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8306E348:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306e368
	if (cr0.eq) goto loc_8306E368;
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
loc_8306E368:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306e388
	if (cr0.eq) goto loc_8306E388;
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
loc_8306E388:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83086518
	sub_83086518(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8306E398"))) PPC_WEAK_FUNC(sub_8306E398);
PPC_FUNC_IMPL(__imp__sub_8306E398) {
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
	// bl 0x83086518
	sub_83086518(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E3C0"))) PPC_WEAK_FUNC(sub_8306E3C0);
PPC_FUNC_IMPL(__imp__sub_8306E3C0) {
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
	// bl 0x8306e2f0
	sub_8306E2F0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306e3f0
	if (cr0.eq) goto loc_8306E3F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8306E3F0:
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

__attribute__((alias("__imp__sub_8306E410"))) PPC_WEAK_FUNC(sub_8306E410);
PPC_FUNC_IMPL(__imp__sub_8306E410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-5020
	r11.s64 = r11.s64 + -5020;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E420"))) PPC_WEAK_FUNC(sub_8306E420);
PPC_FUNC_IMPL(__imp__sub_8306E420) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,144
	r31.s64 = r30.s64 + 144;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8306e4e0
	if (cr0.eq) goto loc_8306E4E0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r29.u16);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,64(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// sth r29,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r29.u16);
	// b 0x8306e518
	goto loc_8306E518;
loc_8306E4E0:
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_8306E518:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8306E520"))) PPC_WEAK_FUNC(sub_8306E520);
PPC_FUNC_IMPL(__imp__sub_8306E520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r4,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r4.u32);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E538"))) PPC_WEAK_FUNC(sub_8306E538);
PPC_FUNC_IMPL(__imp__sub_8306E538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// stw r4,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r4.u32);
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, r11.u32);
	// stw r11,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E550"))) PPC_WEAK_FUNC(sub_8306E550);
PPC_FUNC_IMPL(__imp__sub_8306E550) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lbz r11,22(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 22);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306e6a0
	if (cr0.eq) goto loc_8306E6A0;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8306e5dc
	if (!cr6.eq) goto loc_8306E5DC;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// bl 0x82ffa048
	sub_82FFA048(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306e6a0
	if (!cr0.eq) goto loc_8306E6A0;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// addi r30,r31,184
	r30.s64 = r31.s64 + 184;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830a6ae8
	sub_830A6AE8(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// bl 0x830a61c0
	sub_830A61C0(ctx, base);
	// b 0x8306e6a0
	goto loc_8306E6A0;
loc_8306E5DC:
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8306e628
	if (!cr6.eq) goto loc_8306E628;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r31,r31,144
	r31.s64 = r31.s64 + 144;
	// addi r4,r11,-27596
	ctx.r4.s64 = r11.s64 + -27596;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-27576
	ctx.r4.s64 = r11.s64 + -27576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// b 0x8306e6a0
	goto loc_8306E6A0;
loc_8306E628:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8306e6a0
	if (cr6.eq) goto loc_8306E6A0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r31,r31,144
	r31.s64 = r31.s64 + 144;
	// addi r28,r11,-27776
	r28.s64 = r11.s64 + -27776;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r27,r11,-27784
	r27.s64 = r11.s64 + -27784;
loc_8306E644:
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// bne cr6,0x8306e664
	if (!cr6.eq) goto loc_8306E664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x8306e67c
	goto loc_8306E67C;
loc_8306E664:
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x8306e68c
	if (!cr6.eq) goto loc_8306E68C;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8306E67C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,59
	ctx.r4.s64 = 59;
loc_8306E68C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// bne 0x8306e644
	if (!cr0.eq) goto loc_8306E644;
loc_8306E6A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8306E6A8"))) PPC_WEAK_FUNC(sub_8306E6A8);
PPC_FUNC_IMPL(__imp__sub_8306E6A8) {
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
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// ble cr6,0x8306e718
	if (!cr6.gt) goto loc_8306E718;
	// addi r31,r3,144
	r31.s64 = ctx.r3.s64 + 144;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-29952
	ctx.r4.s64 = r11.s64 + -29952;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_8306E718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E730"))) PPC_WEAK_FUNC(sub_8306E730);
PPC_FUNC_IMPL(__imp__sub_8306E730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,22(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lbz r11,21(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r3,r3,144
	ctx.r3.s64 = ctx.r3.s64 + 144;
	// b 0x82fe1990
	sub_82FE1990(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306E75C"))) PPC_WEAK_FUNC(sub_8306E75C);
PPC_FUNC_IMPL(__imp__sub_8306E75C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E760"))) PPC_WEAK_FUNC(sub_8306E760);
PPC_FUNC_IMPL(__imp__sub_8306E760) {
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
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// blt cr6,0x8306e780
	if (cr6.lt) goto loc_8306E780;
	// li r11,1
	r11.s64 = 1;
	// stb r11,112(r3)
	PPC_STORE_U8(ctx.r3.u32 + 112, r11.u8);
loc_8306E780:
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306e7a4
	if (cr0.eq) goto loc_8306E7A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,196(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306E7A4:
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

__attribute__((alias("__imp__sub_8306E7B8"))) PPC_WEAK_FUNC(sub_8306E7B8);
PPC_FUNC_IMPL(__imp__sub_8306E7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306e7d8
	if (cr6.eq) goto loc_8306E7D8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8306E7D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E7E0"))) PPC_WEAK_FUNC(sub_8306E7E0);
PPC_FUNC_IMPL(__imp__sub_8306E7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8306e800
	if (cr6.eq) goto loc_8306E800;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8306E800:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E810"))) PPC_WEAK_FUNC(sub_8306E810);
PPC_FUNC_IMPL(__imp__sub_8306E810) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// bl 0x82fdfde8
	sub_82FDFDE8(ctx, base);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,31968
	r11.s64 = r11.s64 + 31968;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// li r28,0
	r28.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// addi r10,r10,31952
	ctx.r10.s64 = ctx.r10.s64 + 31952;
	// addi r9,r9,31924
	ctx.r9.s64 = ctx.r9.s64 + 31924;
	// addi r8,r8,31856
	ctx.r8.s64 = ctx.r8.s64 + 31856;
	// addi r7,r7,31840
	ctx.r7.s64 = ctx.r7.s64 + 31840;
	// stb r28,116(r30)
	PPC_STORE_U8(r30.u32 + 116, r28.u8);
	// addi r27,r30,4
	r27.s64 = r30.s64 + 4;
	// stw r11,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r11.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r11.u32);
	// li r4,1023
	ctx.r4.s64 = 1023;
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// addi r3,r30,144
	ctx.r3.s64 = r30.s64 + 144;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// stw r7,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r7.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// stw r28,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r28.u32);
	// stw r28,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r28.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stw r28,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r28.u32);
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,172
	ctx.r3.s64 = r30.s64 + 172;
	// bl 0x830a5ea8
	sub_830A5EA8(ctx, base);
	// addi r3,r30,184
	ctx.r3.s64 = r30.s64 + 184;
	// bl 0x830a6a78
	sub_830A6A78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306e8e8
	if (cr0.eq) goto loc_8306E8E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8306E8E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r28.u32);
	// stw r27,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r27.u32);
	// bl 0x82fdc818
	sub_82FDC818(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fdc7e8
	sub_82FDC7E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8306E914"))) PPC_WEAK_FUNC(sub_8306E914);
PPC_FUNC_IMPL(__imp__sub_8306E914) {
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
	// bl 0x82fdfe68
	sub_82FDFE68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E93C"))) PPC_WEAK_FUNC(sub_8306E93C);
PPC_FUNC_IMPL(__imp__sub_8306E93C) {
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
	// addi r3,r11,144
	ctx.r3.s64 = r11.s64 + 144;
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

__attribute__((alias("__imp__sub_8306E968"))) PPC_WEAK_FUNC(sub_8306E968);
PPC_FUNC_IMPL(__imp__sub_8306E968) {
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
	// addi r3,r11,172
	ctx.r3.s64 = r11.s64 + 172;
	// bl 0x8305c930
	sub_8305C930(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E994"))) PPC_WEAK_FUNC(sub_8306E994);
PPC_FUNC_IMPL(__imp__sub_8306E994) {
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
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
	// bl 0x8306e410
	sub_8306E410(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306E9C0"))) PPC_WEAK_FUNC(sub_8306E9C0);
PPC_FUNC_IMPL(__imp__sub_8306E9C0) {
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
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_8306E9F0"))) PPC_WEAK_FUNC(sub_8306E9F0);
PPC_FUNC_IMPL(__imp__sub_8306E9F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8306f020
	sub_8306F020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306E9F8"))) PPC_WEAK_FUNC(sub_8306E9F8);
PPC_FUNC_IMPL(__imp__sub_8306E9F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8306f020
	sub_8306F020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306EA00"))) PPC_WEAK_FUNC(sub_8306EA00);
PPC_FUNC_IMPL(__imp__sub_8306EA00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x8306f020
	sub_8306F020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306EA08"))) PPC_WEAK_FUNC(sub_8306EA08);
PPC_FUNC_IMPL(__imp__sub_8306EA08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x8306f020
	sub_8306F020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8306EA10"))) PPC_WEAK_FUNC(sub_8306EA10);
PPC_FUNC_IMPL(__imp__sub_8306EA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83159448
	sub_83159448(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8306EA68"))) PPC_WEAK_FUNC(sub_8306EA68);
PPC_FUNC_IMPL(__imp__sub_8306EA68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// addi r31,r3,144
	r31.s64 = ctx.r3.s64 + 144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8306eb28
	if (cr6.eq) goto loc_8306EB28;
loc_8306EAB4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8302dd08
	sub_8302DD08(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff9bf0
	sub_82FF9BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x8306eab4
	if (cr6.lt) goto loc_8306EAB4;
loc_8306EB28:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8306EB48"))) PPC_WEAK_FUNC(sub_8306EB48);
PPC_FUNC_IMPL(__imp__sub_8306EB48) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31968
	r11.s64 = r11.s64 + 31968;
	// addi r10,r10,31952
	ctx.r10.s64 = ctx.r10.s64 + 31952;
	// addi r9,r9,31924
	ctx.r9.s64 = ctx.r9.s64 + 31924;
	// addi r8,r8,31856
	ctx.r8.s64 = ctx.r8.s64 + 31856;
	// addi r7,r7,31840
	ctx.r7.s64 = ctx.r7.s64 + 31840;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// stw r7,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r7.u32);
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306ebb8
	if (cr0.eq) goto loc_8306EBB8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_8306EBB8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-5020
	r11.s64 = r11.s64 + -5020;
	// stw r11,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r11.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// addi r11,r11,21776
	r11.s64 = r11.s64 + 21776;
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// lwz r3,156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// lwz r4,168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 168);
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
	// bl 0x82fdfe68
	sub_82FDFE68(ctx, base);
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

__attribute__((alias("__imp__sub_8306EC08"))) PPC_WEAK_FUNC(sub_8306EC08);
PPC_FUNC_IMPL(__imp__sub_8306EC08) {
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
	// bl 0x82fdfe68
	sub_82FDFE68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EC30"))) PPC_WEAK_FUNC(sub_8306EC30);
PPC_FUNC_IMPL(__imp__sub_8306EC30) {
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
	// addi r3,r11,144
	ctx.r3.s64 = r11.s64 + 144;
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

__attribute__((alias("__imp__sub_8306EC5C"))) PPC_WEAK_FUNC(sub_8306EC5C);
PPC_FUNC_IMPL(__imp__sub_8306EC5C) {
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
	// addi r3,r11,172
	ctx.r3.s64 = r11.s64 + 172;
	// bl 0x8305c930
	sub_8305C930(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306EC88"))) PPC_WEAK_FUNC(sub_8306EC88);
PPC_FUNC_IMPL(__imp__sub_8306EC88) {
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
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
	// bl 0x8306e410
	sub_8306E410(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306ECB8"))) PPC_WEAK_FUNC(sub_8306ECB8);
PPC_FUNC_IMPL(__imp__sub_8306ECB8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,144
	r31.s64 = r30.s64 + 144;
	// li r4,60
	ctx.r4.s64 = 60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82fe6788
	sub_82FE6788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,-28108
	r22.s64 = r11.s64 + -28108;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-27800
	r24.s64 = r11.s64 + -27800;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-28120
	r23.s64 = r11.s64 + -28120;
	// beq cr6,0x8306ee20
	if (cr6.eq) goto loc_8306EE20;
loc_8306ED38:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8302dd08
	sub_8302DD08(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r25,12(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306ed6c
	if (cr0.eq) goto loc_8306ED6C;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x8306ed90
	goto loc_8306ED90;
loc_8306ED6C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9bf0
	sub_82FF9BF0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// bl 0x82fd9c88
	sub_82FD9C88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8306edbc
	if (!cr0.eq) goto loc_8306EDBC;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
loc_8306ED90:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r11,r11,400
	r11.s64 = r11.s64 + 400;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_8306EDBC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9bf0
	sub_82FF9BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// blt cr6,0x8306ed38
	if (cr6.lt) goto loc_8306ED38;
loc_8306EE20:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r3,r11,400
	ctx.r3.s64 = r11.s64 + 400;
	// bl 0x8301f060
	sub_8301F060(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8306ef40
	if (!cr6.gt) goto loc_8306EF40;
loc_8306EE40:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x830708e0
	sub_830708E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306ef30
	if (!cr0.eq) goto loc_8306EF30;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r11,r11,400
	r11.s64 = r11.s64 + 400;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8306eeb8
	if (cr0.eq) goto loc_8306EEB8;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x8306eecc
	goto loc_8306EECC;
loc_8306EEB8:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8306EECC:
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_8306EF30:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x8306ee40
	if (cr6.lt) goto loc_8306EE40;
loc_8306EF40:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8306EF60"))) PPC_WEAK_FUNC(sub_8306EF60);
PPC_FUNC_IMPL(__imp__sub_8306EF60) {
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
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// ble cr6,0x8306efb8
	if (!cr6.gt) goto loc_8306EFB8;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bne cr6,0x8306efa0
	if (!cr6.eq) goto loc_8306EFA0;
	// li r11,-1
	r11.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// b 0x8306efb4
	goto loc_8306EFB4;
loc_8306EFA0:
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x8306f008
	if (!cr6.eq) goto loc_8306F008;
	// li r11,-1
	r11.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_8306EFB4:
	// bl 0x8306e420
	sub_8306E420(ctx, base);
loc_8306EFB8:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x8305d5b8
	sub_8305D5B8(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306eff4
	if (cr0.eq) goto loc_8306EFF4;
	// li r11,0
	r11.s64 = 0;
	// stb r11,22(r31)
	PPC_STORE_U8(r31.u32 + 22, r11.u8);
loc_8306EFF4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8306F008:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8306e420
	sub_8306E420(ctx, base);
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// b 0x8306eff4
	goto loc_8306EFF4;
}

__attribute__((alias("__imp__sub_8306F020"))) PPC_WEAK_FUNC(sub_8306F020);
PPC_FUNC_IMPL(__imp__sub_8306F020) {
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
	// bl 0x8306eb48
	sub_8306EB48(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306f050
	if (cr0.eq) goto loc_8306F050;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_8306F050:
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

__attribute__((alias("__imp__sub_8306F078"))) PPC_WEAK_FUNC(sub_8306F078);
PPC_FUNC_IMPL(__imp__sub_8306F078) {
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
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bne cr6,0x8306f124
	if (!cr6.eq) goto loc_8306F124;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-8488
	ctx.r4.s64 = r11.s64 + -8488;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306f148
	if (cr0.eq) goto loc_8306F148;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,-8608
	r29.s64 = r11.s64 + -8608;
	// bl 0x82fdfea8
	sub_82FDFEA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306f148
	if (cr0.eq) goto loc_8306F148;
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r11.u32);
	// bl 0x8306ecb8
	sub_8306ECB8(ctx, base);
	// b 0x8306f148
	goto loc_8306F148;
loc_8306F124:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x8306f5ec
	if (!cr6.eq) goto loc_8306F5EC;
	// stw r11,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r11.u32);
	// bl 0x8306ea68
	sub_8306EA68(ctx, base);
loc_8306F148:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r19,0
	r19.s64 = 0;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(r18.u32, r11.u32, xer);
	// beq cr6,0x8306f22c
	if (cr6.eq) goto loc_8306F22C;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x8306f208
	if (cr6.eq) goto loc_8306F208;
	// lhz r11,0(r17)
	r11.u64 = PPC_LOAD_U16(r17.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306f208
	if (cr0.eq) goto loc_8306F208;
	// addi r28,r30,84
	r28.s64 = r30.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r19,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r19.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,8(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r19,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r19.u16);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r26,24(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,60(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x8306f250
	goto loc_8306F250;
loc_8306F208:
	// lwz r11,8(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// b 0x8306f240
	goto loc_8306F240;
loc_8306F22C:
	// lwz r11,8(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
loc_8306F240:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_8306F250:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r26,r19
	r26.u64 = r19.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// addi r21,r11,-28120
	r21.s64 = r11.s64 + -28120;
	// beq cr6,0x8306f3c0
	if (cr6.eq) goto loc_8306F3C0;
	// lis r25,-32236
	r25.s64 = -2112618496;
loc_8306F268:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8302dd08
	sub_8302DD08(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r29,32(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306f2a0
	if (cr0.eq) goto loc_8306F2A0;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r29,52(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 52);
loc_8306F2A0:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x8306f2bc
	if (cr6.eq) goto loc_8306F2BC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8306F2BC:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82ff9bf0
	sub_82FF9BF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306f32c
	if (cr0.eq) goto loc_8306F32C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306F32C:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8306f39c
	if (!cr6.eq) goto loc_8306F39C;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8306f378
	if (!cr6.eq) goto loc_8306F378;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306f36c
	if (cr0.eq) goto loc_8306F36C;
	// li r4,500
	ctx.r4.s64 = 500;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x82ff9650
	sub_82FF9650(ctx, base);
	// b 0x8306f370
	goto loc_8306F370;
loc_8306F36C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
loc_8306F370:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r3,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r3.u32);
loc_8306F378:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x82ff9798
	sub_82FF9798(ctx, base);
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// lhz r10,-18232(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + -18232);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// sth r10,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r10.u16);
loc_8306F39C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lbz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// lwz r11,184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// blt cr6,0x8306f268
	if (cr6.lt) goto loc_8306F268;
loc_8306F3C0:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306f584
	if (cr0.eq) goto loc_8306F584;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x8306f568
	goto loc_8306F568;
loc_8306F3F8:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306f424
	if (cr0.eq) goto loc_8306F424;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8306f554
	if (!cr6.eq) goto loc_8306F554;
loc_8306F424:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r26,r30,84
	r26.s64 = r30.s64 + 84;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// stw r24,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r24.u32);
	// li r11,-1
	r11.s64 = -1;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306f4a4
	if (cr0.eq) goto loc_8306F4A4;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r28,52(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 52);
loc_8306F4A4:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x8306f4c0
	if (cr6.eq) goto loc_8306F4C0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ff0008
	sub_82FF0008(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8306F4C0:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,244(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306f510
	if (cr0.eq) goto loc_8306F510;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306F510:
	// lwz r4,24(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8306f548
	if (cr0.eq) goto loc_8306F548;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306F548:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_8306F554:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306F568:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306f3f8
	if (!cr0.eq) goto loc_8306F3F8;
loc_8306F584:
	// addi r29,r30,36
	r29.s64 = r30.s64 + 36;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r23,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r23.u32);
	// stw r23,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r23.u32);
	// stb r11,22(r30)
	PPC_STORE_U8(r30.u32 + 22, r11.u8);
	// clrlwi. r10,r16,24
	ctx.r10.u64 = r16.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8306f5f0
	if (cr0.eq) goto loc_8306F5F0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8306f5f0
	goto loc_8306F5F0;
loc_8306F5EC:
	// bl 0x8306ea68
	sub_8306EA68(ctx, base);
loc_8306F5F0:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_8306F5F8"))) PPC_WEAK_FUNC(sub_8306F5F8);
PPC_FUNC_IMPL(__imp__sub_8306F5F8) {
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

__attribute__((alias("__imp__sub_8306F620"))) PPC_WEAK_FUNC(sub_8306F620);
PPC_FUNC_IMPL(__imp__sub_8306F620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F650"))) PPC_WEAK_FUNC(sub_8306F650);
PPC_FUNC_IMPL(__imp__sub_8306F650) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
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

__attribute__((alias("__imp__sub_8306F680"))) PPC_WEAK_FUNC(sub_8306F680);
PPC_FUNC_IMPL(__imp__sub_8306F680) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32234
	r11.s64 = -2112487424;
	// li r29,0
	r29.s64 = 0;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// addi r11,r11,-5208
	r11.s64 = r11.s64 + -5208;
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r11,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r11.u8);
	// stb r11,29(r30)
	PPC_STORE_U8(r30.u32 + 29, r11.u8);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// beq cr6,0x8306f710
	if (cr6.eq) goto loc_8306F710;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306f708
	if (cr0.eq) goto loc_8306F708;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x82fe6610
	sub_82FE6610(ctx, base);
	// b 0x8306f70c
	goto loc_8306F70C;
loc_8306F708:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8306F70C:
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
loc_8306F710:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8306F71C"))) PPC_WEAK_FUNC(sub_8306F71C);
PPC_FUNC_IMPL(__imp__sub_8306F71C) {
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
	// bl 0x830547b0
	sub_830547B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F744"))) PPC_WEAK_FUNC(sub_8306F744);
PPC_FUNC_IMPL(__imp__sub_8306F744) {
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
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 164);
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

__attribute__((alias("__imp__sub_8306F770"))) PPC_WEAK_FUNC(sub_8306F770);
PPC_FUNC_IMPL(__imp__sub_8306F770) {
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
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8306f7ac
	if (cr0.eq) goto loc_8306F7AC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306F7AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F7D8"))) PPC_WEAK_FUNC(sub_8306F7D8);
PPC_FUNC_IMPL(__imp__sub_8306F7D8) {
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
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306f814
	if (cr0.eq) goto loc_8306F814;
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
loc_8306F814:
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F830"))) PPC_WEAK_FUNC(sub_8306F830);
PPC_FUNC_IMPL(__imp__sub_8306F830) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8306f86c
	if (cr0.eq) goto loc_8306F86C;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306F86C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306F898"))) PPC_WEAK_FUNC(sub_8306F898);
PPC_FUNC_IMPL(__imp__sub_8306F898) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x8306f92c
	if (cr6.eq) goto loc_8306F92C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8306f92c
	if (cr6.eq) goto loc_8306F92C;
	// addi r31,r30,60
	r31.s64 = r30.s64 + 60;
	// li r29,0
	r29.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r29.u16);
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
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
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8306f934
	goto loc_8306F934;
loc_8306F92C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27800
	ctx.r3.s64 = r11.s64 + -27800;
loc_8306F934:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8306F940"))) PPC_WEAK_FUNC(sub_8306F940);
PPC_FUNC_IMPL(__imp__sub_8306F940) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8306f99c
	if (cr6.eq) goto loc_8306F99C;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306f99c
	if (cr0.eq) goto loc_8306F99C;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// b 0x8306f984
	goto loc_8306F984;
loc_8306F980:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8306F984:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8306f980
	if (!cr0.eq) goto loc_8306F980;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r5,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r5.s64 = r11.s32 >> 1;
	// b 0x8306f9a0
	goto loc_8306F9A0;
loc_8306F99C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8306F9A0:
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bne cr6,0x8306f9b8
	if (!cr6.eq) goto loc_8306F9B8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27800
	ctx.r3.s64 = r11.s64 + -27800;
	// b 0x8306fa30
	goto loc_8306FA30;
loc_8306F9B8:
	// addi r31,r29,60
	r31.s64 = r29.s64 + 60;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// bne cr6,0x8306f9d0
	if (!cr6.eq) goto loc_8306F9D0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8306f9e4
	goto loc_8306F9E4;
loc_8306F9D0:
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
loc_8306F9E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
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
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8306FA30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8306FA38"))) PPC_WEAK_FUNC(sub_8306FA38);
PPC_FUNC_IMPL(__imp__sub_8306FA38) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306fb10
	if (cr0.eq) goto loc_8306FB10;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306fb10
	if (cr0.eq) goto loc_8306FB10;
	// addi r31,r30,60
	r31.s64 = r30.s64 + 60;
	// li r29,0
	r29.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r29.u16);
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fda250
	sub_82FDA250(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8306fb08
	if (cr6.eq) goto loc_8306FB08;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306fb08
	if (cr0.eq) goto loc_8306FB08;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
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
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8306fb10
	goto loc_8306FB10;
loc_8306FB08:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27800
	ctx.r3.s64 = r11.s64 + -27800;
loc_8306FB10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8306FB18"))) PPC_WEAK_FUNC(sub_8306FB18);
PPC_FUNC_IMPL(__imp__sub_8306FB18) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-8404
	ctx.r4.s64 = r11.s64 + -8404;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306fb88
	if (!cr0.eq) goto loc_8306FB88;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-8384
	ctx.r4.s64 = r11.s64 + -8384;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306fb88
	if (!cr0.eq) goto loc_8306FB88;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-8448
	ctx.r4.s64 = r11.s64 + -8448;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8306fb8c
	if (cr0.eq) goto loc_8306FB8C;
loc_8306FB88:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8306FB8C:
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

__attribute__((alias("__imp__sub_8306FBA0"))) PPC_WEAK_FUNC(sub_8306FBA0);
PPC_FUNC_IMPL(__imp__sub_8306FBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r7,212(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x82fd9bb0
	sub_82FD9BB0(ctx, base);
	// addi r30,r31,60
	r30.s64 = r31.s64 + 60;
	// li r28,0
	r28.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8306FC48"))) PPC_WEAK_FUNC(sub_8306FC48);
PPC_FUNC_IMPL(__imp__sub_8306FC48) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8306fc98
	if (!cr6.gt) goto loc_8306FC98;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r29,r11,-5404
	r29.s64 = r11.s64 + -5404;
loc_8306FC80:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8306fc80
	if (!cr0.eq) goto loc_8306FC80;
loc_8306FC98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8306FCA0"))) PPC_WEAK_FUNC(sub_8306FCA0);
PPC_FUNC_IMPL(__imp__sub_8306FCA0) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8306fcdc
	if (cr0.eq) goto loc_8306FCDC;
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
loc_8306FCDC:
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FCF8"))) PPC_WEAK_FUNC(sub_8306FCF8);
PPC_FUNC_IMPL(__imp__sub_8306FCF8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r26,0
	r26.s64 = 0;
	// addi r23,r11,-27800
	r23.s64 = r11.s64 + -27800;
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// ble 0x8306fe5c
	if (!cr0.gt) goto loc_8306FE5C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r21,r11,-28120
	r21.s64 = r11.s64 + -28120;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r22,r11,-28108
	r22.s64 = r11.s64 + -28108;
loc_8306FD58:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8306fe5c
	if (cr0.eq) goto loc_8306FE5C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82fe2190
	sub_82FE2190(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq 0x8306fdfc
	if (cr0.eq) goto loc_8306FDFC;
	// li r4,58
	ctx.r4.s64 = 58;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x830a2138
	sub_830A2138(ctx, base);
	// b 0x8306fe50
	goto loc_8306FE50;
loc_8306FDFC:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8306fe50
	if (cr0.eq) goto loc_8306FE50;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x830a2138
	sub_830A2138(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_8306FE50:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(r26.s32, r24.s32, xer);
	// blt cr6,0x8306fd58
	if (cr6.lt) goto loc_8306FD58;
loc_8306FE5C:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306fe8c
	if (!cr0.eq) goto loc_8306FE8C;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8306fe7c
	if (cr0.eq) goto loc_8306FE7C;
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8306fe8c
	if (!cr0.eq) goto loc_8306FE8C;
loc_8306FE7C:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bl 0x830a2138
	sub_830A2138(ctx, base);
loc_8306FE8C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-27944
	ctx.r4.s64 = r11.s64 + -27944;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r4,r11,-28364
	ctx.r4.s64 = r11.s64 + -28364;
	// bl 0x830a2138
	sub_830A2138(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_8306FEC8"))) PPC_WEAK_FUNC(sub_8306FEC8);
PPC_FUNC_IMPL(__imp__sub_8306FEC8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-8088
	ctx.r4.s64 = r11.s64 + -8088;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306ff28
	if (!cr0.eq) goto loc_8306FF28;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-8080
	ctx.r4.s64 = r11.s64 + -8080;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8306ff28
	if (!cr0.eq) goto loc_8306FF28;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-7684
	ctx.r4.s64 = r11.s64 + -7684;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8306ff2c
	if (cr0.eq) goto loc_8306FF2C;
loc_8306FF28:
	// li r11,1
	r11.s64 = 1;
loc_8306FF2C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_8306FF48"))) PPC_WEAK_FUNC(sub_8306FF48);
PPC_FUNC_IMPL(__imp__sub_8306FF48) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8306ff90
	if (cr6.eq) goto loc_8306FF90;
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// bl 0x83046bf8
	sub_83046BF8(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
loc_8306FF90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8306FFA8"))) PPC_WEAK_FUNC(sub_8306FFA8);
PPC_FUNC_IMPL(__imp__sub_8306FFA8) {
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83070058
	if (!cr6.eq) goto loc_83070058;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// beq 0x8307005c
	if (cr0.eq) goto loc_8307005C;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// stw r10,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
loc_83070058:
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
loc_8307005C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83070068"))) PPC_WEAK_FUNC(sub_83070068);
PPC_FUNC_IMPL(__imp__sub_83070068) {
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
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830700a0
	if (cr0.eq) goto loc_830700A0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830700a0
	if (cr6.eq) goto loc_830700A0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8308ad88
	sub_8308AD88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x830700a4
	if (!cr0.eq) goto loc_830700A4;
loc_830700A0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_830700A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830700B8"))) PPC_WEAK_FUNC(sub_830700B8);
PPC_FUNC_IMPL(__imp__sub_830700B8) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r5,r11,-7272
	ctx.r5.s64 = r11.s64 + -7272;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8306fa38
	sub_8306FA38(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x83070298
	if (cr0.eq) goto loc_83070298;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83070298
	if (cr0.eq) goto loc_83070298;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-6380
	ctx.r4.s64 = r11.s64 + -6380;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83070124
	if (!cr0.eq) goto loc_83070124;
	// lis r11,-32234
	r11.s64 = -2112487424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,32488
	ctx.r4.s64 = r11.s64 + 32488;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83070298
	if (cr0.eq) goto loc_83070298;
loc_83070124:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-8064
	ctx.r3.s64 = r11.s64 + -8064;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83070148
	if (cr0.eq) goto loc_83070148;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_83070148:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-7916
	ctx.r3.s64 = r11.s64 + -7916;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307016c
	if (cr0.eq) goto loc_8307016C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// b 0x83070294
	goto loc_83070294;
loc_8307016C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-7992
	ctx.r3.s64 = r11.s64 + -7992;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83070190
	if (cr0.eq) goto loc_83070190;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// b 0x83070294
	goto loc_83070294;
loc_83070190:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-8048
	ctx.r3.s64 = r11.s64 + -8048;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830701b4
	if (cr0.eq) goto loc_830701B4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// b 0x83070294
	goto loc_83070294;
loc_830701B4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-8020
	ctx.r3.s64 = r11.s64 + -8020;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830701d8
	if (cr0.eq) goto loc_830701D8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// b 0x83070294
	goto loc_83070294;
loc_830701D8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-7972
	ctx.r3.s64 = r11.s64 + -7972;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830701fc
	if (cr0.eq) goto loc_830701FC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// b 0x83070294
	goto loc_83070294;
loc_830701FC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-7944
	ctx.r3.s64 = r11.s64 + -7944;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83070220
	if (cr0.eq) goto loc_83070220;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// b 0x83070294
	goto loc_83070294;
loc_83070220:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-7844
	ctx.r3.s64 = r11.s64 + -7844;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83070244
	if (cr0.eq) goto loc_83070244;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// b 0x83070294
	goto loc_83070294;
loc_83070244:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-7820
	ctx.r3.s64 = r11.s64 + -7820;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83070268
	if (cr0.eq) goto loc_83070268;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// b 0x83070294
	goto loc_83070294;
loc_83070268:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-8176
	ctx.r3.s64 = r11.s64 + -8176;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83070298
	if (cr0.eq) goto loc_83070298;
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83070298
	if (!cr6.eq) goto loc_83070298;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
loc_83070294:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_83070298:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830702A0"))) PPC_WEAK_FUNC(sub_830702A0);
PPC_FUNC_IMPL(__imp__sub_830702A0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r7,68(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r6,64(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x830a6ae8
	sub_830A6AE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// bl 0x830a61c0
	sub_830A61C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830702F0"))) PPC_WEAK_FUNC(sub_830702F0);
PPC_FUNC_IMPL(__imp__sub_830702F0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r6,64(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r7,68(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x830a6ae8
	sub_830A6AE8(ctx, base);
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// bl 0x830a6370
	sub_830A6370(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83070370"))) PPC_WEAK_FUNC(sub_83070370);
PPC_FUNC_IMPL(__imp__sub_83070370) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r25,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r25.u32);
	// stw r26,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r26.u32);
	// stw r28,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r28.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r24,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r24.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// beq cr6,0x83070444
	if (cr6.eq) goto loc_83070444;
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r30,r11,-28032
	r30.s64 = r11.s64 + -28032;
	// bne cr6,0x830703f8
	if (!cr6.eq) goto loc_830703F8;
	// lwz r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r7,16(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_830703F8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r6,212(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
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
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// b 0x8307044c
	goto loc_8307044C;
	// b 0x83070434
	goto loc_83070434;
loc_83070434:
	// lwz r25,188(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lwz r26,196(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r24,212(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r29,180(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 180);
loc_83070444:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r30,r11,-28032
	r30.s64 = r11.s64 + -28032;
loc_8307044C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x830704e4
	if (cr6.eq) goto loc_830704E4;
	// lwz r28,32(r24)
	r28.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(r28.s32, 5, xer);
	// beq cr6,0x83070498
	if (cr6.eq) goto loc_83070498;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// beq cr6,0x83070498
	if (cr6.eq) goto loc_83070498;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// beq cr6,0x830704a8
	if (cr6.eq) goto loc_830704A8;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,62
	ctx.r6.s64 = 62;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_83070498:
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// beq cr6,0x830704a8
	if (cr6.eq) goto loc_830704A8;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// bne cr6,0x830704e4
	if (!cr6.eq) goto loc_830704E4;
loc_830704A8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,60(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 60);
	// bl 0x83070068
	sub_83070068(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830704e4
	if (!cr0.eq) goto loc_830704E4;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,107
	ctx.r6.s64 = 107;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
loc_830704E4:
	// lbz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830704F8"))) PPC_WEAK_FUNC(sub_830704F8);
PPC_FUNC_IMPL(__imp__sub_830704F8) {
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
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,73
	ctx.r6.s64 = 73;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31993
	ctx.r3.s64 = -2096693248;
	// addi r3,r3,1072
	ctx.r3.s64 = ctx.r3.s64 + 1072;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83070554"))) PPC_WEAK_FUNC(sub_83070554);
PPC_FUNC_IMPL(__imp__sub_83070554) {
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

__attribute__((alias("__imp__sub_83070574"))) PPC_WEAK_FUNC(sub_83070574);
PPC_FUNC_IMPL(__imp__sub_83070574) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// addi r5,r11,-28480
	ctx.r5.s64 = r11.s64 + -28480;
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,87
	ctx.r6.s64 = 87;
	// bl 0x830702f0
	sub_830702F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-31993
	ctx.r3.s64 = -2096693248;
	// addi r3,r3,1076
	ctx.r3.s64 = ctx.r3.s64 + 1076;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830705C8"))) PPC_WEAK_FUNC(sub_830705C8);
PPC_FUNC_IMPL(__imp__sub_830705C8) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r11
	r30.u64 = r11.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mr. r11,r4
	r11.u64 = ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8307067c
	if (cr0.eq) goto loc_8307067C;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r29,r10,-27784
	r29.s64 = ctx.r10.s64 + -27784;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r28,r10,-27768
	r28.s64 = ctx.r10.s64 + -27768;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r27,r10,-27760
	r27.s64 = ctx.r10.s64 + -27760;
loc_83070604:
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// bne cr6,0x83070620
	if (!cr6.eq) goto loc_83070620;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x83070654
	goto loc_83070654;
loc_83070620:
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// bne cr6,0x8307063c
	if (!cr6.eq) goto loc_8307063C;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x83070654
	goto loc_83070654;
loc_8307063C:
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// bne cr6,0x83070664
	if (!cr6.eq) goto loc_83070664;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_83070654:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,59
	ctx.r4.s64 = 59;
loc_83070664:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// mr. r11,r4
	r11.u64 = ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83070604
	if (!cr0.eq) goto loc_83070604;
loc_8307067C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83070688"))) PPC_WEAK_FUNC(sub_83070688);
PPC_FUNC_IMPL(__imp__sub_83070688) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83070730
	if (!cr6.gt) goto loc_83070730;
	// li r11,0
	r11.s64 = 0;
loc_8307070C:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x8307070c
	if (cr6.lt) goto loc_8307070C;
loc_83070730:
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

__attribute__((alias("__imp__sub_83070750"))) PPC_WEAK_FUNC(sub_83070750);
PPC_FUNC_IMPL(__imp__sub_83070750) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x83070800
	if (cr6.eq) goto loc_83070800;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x830707c4
	if (!cr6.lt) goto loc_830707C4;
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
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
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_830707C4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq 0x83070800
	if (cr0.eq) goto loc_83070800;
	// li r11,0
	r11.s64 = 0;
loc_830707DC:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x830707dc
	if (cr6.lt) goto loc_830707DC;
loc_83070800:
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

__attribute__((alias("__imp__sub_83070828"))) PPC_WEAK_FUNC(sub_83070828);
PPC_FUNC_IMPL(__imp__sub_83070828) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-32712
	r11.s64 = r11.s64 + -32712;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83070880
	if (cr0.eq) goto loc_83070880;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x83070880
	if (cr0.eq) goto loc_83070880;
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
loc_83070880:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-3652
	r11.s64 = r11.s64 + -3652;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_830708A4"))) PPC_WEAK_FUNC(sub_830708A4);
PPC_FUNC_IMPL(__imp__sub_830708A4) {
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
	// bl 0x830547b0
	sub_830547B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830708D0"))) PPC_WEAK_FUNC(sub_830708D0);
PPC_FUNC_IMPL(__imp__sub_830708D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830708E0"))) PPC_WEAK_FUNC(sub_830708E0);
PPC_FUNC_IMPL(__imp__sub_830708E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bge cr6,0x8307091c
	if (!cr6.lt) goto loc_8307091C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_83070900:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x83070924
	if (cr6.eq) goto loc_83070924;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x83070900
	if (cr6.lt) goto loc_83070900;
loc_8307091C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83070924:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070930"))) PPC_WEAK_FUNC(sub_83070930);
PPC_FUNC_IMPL(__imp__sub_83070930) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stb r6,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r6.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
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

__attribute__((alias("__imp__sub_830709A8"))) PPC_WEAK_FUNC(sub_830709A8);
PPC_FUNC_IMPL(__imp__sub_830709A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bge cr6,0x830709e4
	if (!cr6.lt) goto loc_830709E4;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_830709C8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x830709ec
	if (cr6.eq) goto loc_830709EC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x830709c8
	if (cr6.lt) goto loc_830709C8;
loc_830709E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830709EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830709F8"))) PPC_WEAK_FUNC(sub_830709F8);
PPC_FUNC_IMPL(__imp__sub_830709F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32233
	r11.s64 = -2112421888;
	// addi r11,r11,-32640
	r11.s64 = r11.s64 + -32640;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83070A08"))) PPC_WEAK_FUNC(sub_83070A08);
PPC_FUNC_IMPL(__imp__sub_83070A08) {
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
	// bl 0x83070828
	sub_83070828(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83070a38
	if (cr0.eq) goto loc_83070A38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83070A38:
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

__attribute__((alias("__imp__sub_83070A58"))) PPC_WEAK_FUNC(sub_83070A58);
PPC_FUNC_IMPL(__imp__sub_83070A58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
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
	// ble cr6,0x83070ac8
	if (!cr6.gt) goto loc_83070AC8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,49
	ctx.r6.s64 = 49;
	// addi r4,r11,-13408
	ctx.r4.s64 = r11.s64 + -13408;
	// li r5,522
	ctx.r5.s64 = 522;
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
loc_83070AC8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x83070b00
	goto loc_83070B00;
loc_83070AD8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
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
	// bne 0x83070b14
	if (!cr0.eq) goto loc_83070B14;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_83070B00:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x83070ad8
	if (!cr0.eq) goto loc_83070AD8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83070B0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_83070B14:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83070b0c
	goto loc_83070B0C;
}

__attribute__((alias("__imp__sub_83070B20"))) PPC_WEAK_FUNC(sub_83070B20);
PPC_FUNC_IMPL(__imp__sub_83070B20) {
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
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32640
	r11.s64 = r11.s64 + -32640;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r5,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r5.u8);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x83070b94
	if (cr6.eq) goto loc_83070B94;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_83070B80:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x83070b80
	if (!cr0.eq) goto loc_83070B80;
loc_83070B94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83070BA0"))) PPC_WEAK_FUNC(sub_83070BA0);
PPC_FUNC_IMPL(__imp__sub_83070BA0) {
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
	// li r25,0
	r25.s64 = 0;
	// mr r26,r25
	r26.u64 = r25.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83070c34
	if (!cr6.gt) goto loc_83070C34;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_83070BC8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r30,r11,r29
	r30.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x83070c18
	if (cr0.eq) goto loc_83070C18;
loc_83070BD8:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lwz r27,4(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x83070c04
	if (cr0.eq) goto loc_83070C04;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x83070c04
	if (cr0.eq) goto loc_83070C04;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830a6ce0
	sub_830A6CE0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_83070C04:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x83070bd8
	if (!cr6.eq) goto loc_83070BD8;
loc_83070C18:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r25,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, r25.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x83070bc8
	if (cr6.lt) goto loc_83070BC8;
loc_83070C34:
	// stw r25,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

