#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830AF6C8"))) PPC_WEAK_FUNC(sub_830AF6C8);
PPC_FUNC_IMPL(__imp__sub_830AF6C8) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,4656
	r11.s64 = r11.s64 + 4656;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830af72c
	if (cr0.eq) goto loc_830AF72C;
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
loc_830AF72C:
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x82ffd710
	sub_82FFD710(ctx, base);
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

__attribute__((alias("__imp__sub_830AF74C"))) PPC_WEAK_FUNC(sub_830AF74C);
PPC_FUNC_IMPL(__imp__sub_830AF74C) {
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
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x82ffd710
	sub_82FFD710(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AF778"))) PPC_WEAK_FUNC(sub_830AF778);
PPC_FUNC_IMPL(__imp__sub_830AF778) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x830af7a8
	if (cr6.lt) goto loc_830AF7A8;
	// li r11,-1
	r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
loc_830AF7A0:
	// sth r10,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r10.u16);
	// b 0x830afd00
	goto loc_830AFD00;
loc_830AF7A8:
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lhz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// bne cr6,0x830af944
	if (!cr6.eq) goto loc_830AF944;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// beq cr6,0x830af8fc
	if (cr6.eq) goto loc_830AF8FC;
	// cmpwi cr6,r10,91
	cr6.compare<int32_t>(ctx.r10.s32, 91, xer);
	// beq cr6,0x830af834
	if (cr6.eq) goto loc_830AF834;
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// bne cr6,0x830af874
	if (!cr6.eq) goto loc_830AF874;
	// li r10,10
	ctx.r10.s64 = 10;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x830af81c
	if (cr6.lt) goto loc_830AF81C;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,122
	ctx.r6.s64 = 122;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,231
	ctx.r5.s64 = 231;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830AF81C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lhzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// b 0x830af7a0
	goto loc_830AF7A0;
loc_830AF834:
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,-16776(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16776);
	// and r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 & ctx.r9.u64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x830af874
	if (!cr0.eq) goto loc_830AF874;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x830af874
	if (!cr6.lt) goto loc_830AF874;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r9,58
	cr6.compare<uint32_t>(ctx.r9.u32, 58, xer);
	// bne cr6,0x830af874
	if (!cr6.eq) goto loc_830AF874;
	// li r10,20
	ctx.r10.s64 = 20;
	// b 0x830af938
	goto loc_830AF938;
loc_830AF874:
	// lis r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r10,0,16,21
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC00;
	// ori r9,r9,55296
	ctx.r9.u64 = ctx.r9.u64 | 55296;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830af8dc
	if (cr0.eq) goto loc_830AF8DC;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x830af8dc
	if (!cr6.lt) goto loc_830AF8DC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r7,r7,56320
	ctx.r7.u64 = ctx.r7.u64 | 56320;
	// lhzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r8,r9,0,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFC00;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm. r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x830af8e4
	if (cr0.eq) goto loc_830AF8E4;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// addis r11,r10,-1
	r11.s64 = ctx.r10.s64 + -65536;
	// addi r11,r11,10249
	r11.s64 = r11.s64 + 10249;
	// rlwinm r11,r11,10,0,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
loc_830AF8DC:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830af7a0
	goto loc_830AF7A0;
loc_830AF8E4:
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8124
	ctx.r4.s64 = r11.s64 + -8124;
	// li r11,249
	r11.s64 = 249;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830AF8FC:
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,-16776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16776);
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830af8dc
	if (cr0.eq) goto loc_830AF8DC;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x830af8dc
	if (!cr6.lt) goto loc_830AF8DC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,91
	cr6.compare<uint32_t>(ctx.r10.u32, 91, xer);
	// bne cr6,0x830af8dc
	if (!cr6.eq) goto loc_830AF8DC;
	// li r10,24
	ctx.r10.s64 = 24;
loc_830AF938:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x830af7a0
	goto loc_830AF7A0;
loc_830AF944:
	// cmpwi cr6,r10,46
	cr6.compare<int32_t>(ctx.r10.s32, 46, xer);
	// bgt cr6,0x830afbe4
	if (cr6.gt) goto loc_830AFBE4;
	// beq cr6,0x830afbdc
	if (cr6.eq) goto loc_830AFBDC;
	// cmpwi cr6,r10,36
	cr6.compare<int32_t>(ctx.r10.s32, 36, xer);
	// beq cr6,0x830afbd4
	if (cr6.eq) goto loc_830AFBD4;
	// cmpwi cr6,r10,40
	cr6.compare<int32_t>(ctx.r10.s32, 40, xer);
	// beq cr6,0x830af990
	if (cr6.eq) goto loc_830AF990;
	// cmpwi cr6,r10,41
	cr6.compare<int32_t>(ctx.r10.s32, 41, xer);
	// beq cr6,0x830af988
	if (cr6.eq) goto loc_830AF988;
	// cmpwi cr6,r10,42
	cr6.compare<int32_t>(ctx.r10.s32, 42, xer);
	// beq cr6,0x830af980
	if (cr6.eq) goto loc_830AF980;
	// cmpwi cr6,r10,43
	cr6.compare<int32_t>(ctx.r10.s32, 43, xer);
	// bne cr6,0x830afc0c
	if (!cr6.eq) goto loc_830AFC0C;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AF980:
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AF988:
	// li r9,7
	ctx.r9.s64 = 7;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AF990:
	// li r9,6
	ctx.r9.s64 = 6;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x830afcfc
	if (!cr6.lt) goto loc_830AFCFC;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// bne cr6,0x830afcfc
	if (!cr6.eq) goto loc_830AFCFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blt cr6,0x830af9e8
	if (cr6.lt) goto loc_830AF9E8;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,123
	ctx.r6.s64 = 123;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,314
	ctx.r5.s64 = 314;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830AF9E8:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lhzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// beq cr6,0x830afbcc
	if (cr6.eq) goto loc_830AFBCC;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// beq cr6,0x830afb58
	if (cr6.eq) goto loc_830AFB58;
	// cmpwi cr6,r11,58
	cr6.compare<int32_t>(r11.s32, 58, xer);
	// beq cr6,0x830afb50
	if (cr6.eq) goto loc_830AFB50;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(r11.s32, 60, xer);
	// beq cr6,0x830afac0
	if (cr6.eq) goto loc_830AFAC0;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// beq cr6,0x830afab8
	if (cr6.eq) goto loc_830AFAB8;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(r11.s32, 62, xer);
	// beq cr6,0x830afab0
	if (cr6.eq) goto loc_830AFAB0;
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// beq cr6,0x830afaa8
	if (cr6.eq) goto loc_830AFAA8;
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// beq cr6,0x830afa98
	if (cr6.eq) goto loc_830AFA98;
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// blt cr6,0x830afa4c
	if (cr6.lt) goto loc_830AFA4C;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(r11.u32, 122, xer);
	// ble cr6,0x830afa98
	if (!cr6.gt) goto loc_830AFA98;
loc_830AFA4C:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x830afa5c
	if (cr6.lt) goto loc_830AFA5C;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// ble cr6,0x830afa98
	if (!cr6.gt) goto loc_830AFA98;
loc_830AFA5C:
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(r11.u32, 40, xer);
	// bne cr6,0x830afa6c
	if (!cr6.eq) goto loc_830AFA6C;
	// li r9,23
	ctx.r9.s64 = 23;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFA6C:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,123
	ctx.r6.s64 = 123;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,375
	ctx.r5.s64 = 375;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830AFA98:
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFAA8:
	// li r9,19
	ctx.r9.s64 = 19;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFAB0:
	// li r9,18
	ctx.r9.s64 = 18;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFAB8:
	// li r9,14
	ctx.r9.s64 = 14;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFAC0:
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x830afaf4
	if (cr6.lt) goto loc_830AFAF4;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,123
	ctx.r6.s64 = 123;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,336
	ctx.r5.s64 = 336;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830AFAF4:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lhzx r11,r11,r8
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r8.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(r11.u32, 61, xer);
	// bne cr6,0x830afb14
	if (!cr6.eq) goto loc_830AFB14;
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFB14:
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(r11.u32, 33, xer);
	// bne cr6,0x830afb24
	if (!cr6.eq) goto loc_830AFB24;
	// li r9,17
	ctx.r9.s64 = 17;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFB24:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,124
	ctx.r6.s64 = 124;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,347
	ctx.r5.s64 = 347;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830AFB50:
	// li r9,13
	ctx.r9.s64 = 13;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFB58:
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bge cr6,0x830afb8c
	if (!cr6.lt) goto loc_830AFB8C;
loc_830AFB60:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lhzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// cmplwi cr6,r9,41
	cr6.compare<uint32_t>(ctx.r9.u32, 41, xer);
	// beq cr6,0x830afb8c
	if (cr6.eq) goto loc_830AFB8C;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x830afb60
	if (cr6.lt) goto loc_830AFB60;
loc_830AFB8C:
	// clrlwi r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,41
	cr6.compare<uint32_t>(r11.u32, 41, xer);
	// beq cr6,0x830afbc4
	if (cr6.eq) goto loc_830AFBC4;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,125
	ctx.r6.s64 = 125;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,359
	ctx.r5.s64 = 359;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830AFBC4:
	// li r9,21
	ctx.r9.s64 = 21;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFBCC:
	// li r9,15
	ctx.r9.s64 = 15;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFBD4:
	// li r9,12
	ctx.r9.s64 = 12;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFBDC:
	// li r9,8
	ctx.r9.s64 = 8;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFBE4:
	// cmpwi cr6,r10,63
	cr6.compare<int32_t>(ctx.r10.s32, 63, xer);
	// beq cr6,0x830afcf8
	if (cr6.eq) goto loc_830AFCF8;
	// cmpwi cr6,r10,91
	cr6.compare<int32_t>(ctx.r10.s32, 91, xer);
	// beq cr6,0x830afcf0
	if (cr6.eq) goto loc_830AFCF0;
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// beq cr6,0x830afca0
	if (cr6.eq) goto loc_830AFCA0;
	// cmpwi cr6,r10,94
	cr6.compare<int32_t>(ctx.r10.s32, 94, xer);
	// beq cr6,0x830afc98
	if (cr6.eq) goto loc_830AFC98;
	// cmpwi cr6,r10,124
	cr6.compare<int32_t>(ctx.r10.s32, 124, xer);
	// beq cr6,0x830afc90
	if (cr6.eq) goto loc_830AFC90;
loc_830AFC0C:
	// lis r9,0
	ctx.r9.s64 = 0;
	// rlwinm r6,r10,0,16,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC00;
	// ori r5,r9,55296
	ctx.r5.u64 = ctx.r9.u64 | 55296;
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r6,r6,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r6.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm. r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x830afcfc
	if (cr0.eq) goto loc_830AFCFC;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x830afcfc
	if (!cr6.lt) goto loc_830AFCFC;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r6,r6,56320
	ctx.r6.u64 = ctx.r6.u64 | 56320;
	// lhzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r7,r8,0,0,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFC00;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm. r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x830afc78
	if (cr0.eq) goto loc_830AFC78;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addis r11,r10,-1
	r11.s64 = ctx.r10.s64 + -65536;
	// addi r11,r11,10249
	r11.s64 = r11.s64 + 10249;
	// rlwinm r11,r11,10,0,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFC78:
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8124
	ctx.r4.s64 = r11.s64 + -8124;
	// li r11,249
	r11.s64 = 249;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830AFC90:
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFC98:
	// li r9,11
	ctx.r9.s64 = 11;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFCA0:
	// li r9,10
	ctx.r9.s64 = 10;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x830afcd8
	if (cr6.lt) goto loc_830AFCD8;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,122
	ctx.r6.s64 = 122;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,382
	ctx.r5.s64 = 382;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830AFCD8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFCF0:
	// li r9,9
	ctx.r9.s64 = 9;
	// b 0x830afcfc
	goto loc_830AFCFC;
loc_830AFCF8:
	// li r9,5
	ctx.r9.s64 = 5;
loc_830AFCFC:
	// sth r9,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r9.u16);
loc_830AFD00:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AFD10"))) PPC_WEAK_FUNC(sub_830AFD10);
PPC_FUNC_IMPL(__imp__sub_830AFD10) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830abdf0
	sub_830ABDF0(ctx, base);
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

__attribute__((alias("__imp__sub_830AFD48"))) PPC_WEAK_FUNC(sub_830AFD48);
PPC_FUNC_IMPL(__imp__sub_830AFD48) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830abe38
	sub_830ABE38(ctx, base);
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

__attribute__((alias("__imp__sub_830AFD80"))) PPC_WEAK_FUNC(sub_830AFD80);
PPC_FUNC_IMPL(__imp__sub_830AFD80) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830abe80
	sub_830ABE80(ctx, base);
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

__attribute__((alias("__imp__sub_830AFDB8"))) PPC_WEAK_FUNC(sub_830AFDB8);
PPC_FUNC_IMPL(__imp__sub_830AFDB8) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830abf10
	sub_830ABF10(ctx, base);
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

__attribute__((alias("__imp__sub_830AFDF0"))) PPC_WEAK_FUNC(sub_830AFDF0);
PPC_FUNC_IMPL(__imp__sub_830AFDF0) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830abec8
	sub_830ABEC8(ctx, base);
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

__attribute__((alias("__imp__sub_830AFE28"))) PPC_WEAK_FUNC(sub_830AFE28);
PPC_FUNC_IMPL(__imp__sub_830AFE28) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830abf58
	sub_830ABF58(ctx, base);
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

__attribute__((alias("__imp__sub_830AFE60"))) PPC_WEAK_FUNC(sub_830AFE60);
PPC_FUNC_IMPL(__imp__sub_830AFE60) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830abfa0
	sub_830ABFA0(ctx, base);
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

__attribute__((alias("__imp__sub_830AFE98"))) PPC_WEAK_FUNC(sub_830AFE98);
PPC_FUNC_IMPL(__imp__sub_830AFE98) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830abfe8
	sub_830ABFE8(ctx, base);
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

__attribute__((alias("__imp__sub_830AFED0"))) PPC_WEAK_FUNC(sub_830AFED0);
PPC_FUNC_IMPL(__imp__sub_830AFED0) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ac030
	sub_830AC030(ctx, base);
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

__attribute__((alias("__imp__sub_830AFF08"))) PPC_WEAK_FUNC(sub_830AFF08);
PPC_FUNC_IMPL(__imp__sub_830AFF08) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x830aff44
	if (!cr6.eq) goto loc_830AFF44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x830aff48
	goto loc_830AFF48;
loc_830AFF44:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830AFF48:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab610
	sub_830AB610(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AFF70"))) PPC_WEAK_FUNC(sub_830AFF70);
PPC_FUNC_IMPL(__imp__sub_830AFF70) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x830affac
	if (!cr6.eq) goto loc_830AFFAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x830affb0
	goto loc_830AFFB0;
loc_830AFFAC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830AFFB0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab610
	sub_830AB610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab720
	sub_830AB720(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830AFFE8"))) PPC_WEAK_FUNC(sub_830AFFE8);
PPC_FUNC_IMPL(__imp__sub_830AFFE8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x830ab7c8
	sub_830AB7C8(ctx, base);
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x830b0064
	if (!cr6.eq) goto loc_830B0064;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r29,48(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ab400
	sub_830AB400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,68(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// b 0x830b00a0
	goto loc_830B00A0;
loc_830B0064:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,48(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ab400
	sub_830AB400(ctx, base);
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_830B00A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830B00B8"))) PPC_WEAK_FUNC(sub_830B00B8);
PPC_FUNC_IMPL(__imp__sub_830B00B8) {
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
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x830b012c
	if (!cr6.lt) goto loc_830B012C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// lhzx r30,r9,r10
	r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// rlwinm r11,r30,0,0,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bne cr6,0x830b012c
	if (!cr6.eq) goto loc_830B012C;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-64
	ctx.r4.s64 = r30.s64 + -64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab9d8
	sub_830AB9D8(ctx, base);
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
loc_830B012C:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,132
	ctx.r6.s64 = 132;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,775
	ctx.r5.s64 = 775;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830B0158"))) PPC_WEAK_FUNC(sub_830B0158);
PPC_FUNC_IMPL(__imp__sub_830B0158) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r4,105
	ctx.r4.s64 = 105;
	// bl 0x830ab9d8
	sub_830AB9D8(ctx, base);
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

__attribute__((alias("__imp__sub_830B0198"))) PPC_WEAK_FUNC(sub_830B0198);
PPC_FUNC_IMPL(__imp__sub_830B0198) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ac138
	sub_830AC138(ctx, base);
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

__attribute__((alias("__imp__sub_830B01D0"))) PPC_WEAK_FUNC(sub_830B01D0);
PPC_FUNC_IMPL(__imp__sub_830B01D0) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ac0c0
	sub_830AC0C0(ctx, base);
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

__attribute__((alias("__imp__sub_830B0208"))) PPC_WEAK_FUNC(sub_830B0208);
PPC_FUNC_IMPL(__imp__sub_830B0208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830B0218"))) PPC_WEAK_FUNC(sub_830B0218);
PPC_FUNC_IMPL(__imp__sub_830B0218) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830b02ec
	goto loc_830B02EC;
loc_830B024C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830b0268
	if (!cr6.eq) goto loc_830B0268;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// beq cr6,0x830b0270
	if (cr6.eq) goto loc_830B0270;
	// cmpwi cr6,r10,38
	cr6.compare<int32_t>(ctx.r10.s32, 38, xer);
	// beq cr6,0x830b0270
	if (cr6.eq) goto loc_830B0270;
loc_830B0268:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x830b0360
	if (!cr6.eq) goto loc_830B0360;
loc_830B0270:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bne cr6,0x830b031c
	if (!cr6.eq) goto loc_830B031C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x830b02b8
	if (!cr6.eq) goto loc_830B02B8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// b 0x830b02e0
	goto loc_830B02E0;
loc_830B02B8:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x830b02d0
	if (!cr6.eq) goto loc_830B02D0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// b 0x830b02e0
	goto loc_830B02E0;
loc_830B02D0:
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(r11.s32, 38, xer);
	// bne cr6,0x830b0348
	if (!cr6.eq) goto loc_830B0348;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
loc_830B02E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B02EC:
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x830b024c
	if (!cr6.eq) goto loc_830B024C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
loc_830B031C:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,143
	ctx.r6.s64 = 143;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1275
	ctx.r5.s64 = 1275;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B0348:
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7124
	ctx.r4.s64 = r11.s64 + -7124;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B0360:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,144
	ctx.r6.s64 = 144;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1293
	ctx.r5.s64 = 1293;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830B0390"))) PPC_WEAK_FUNC(sub_830B0390);
PPC_FUNC_IMPL(__imp__sub_830B0390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,68
	cr6.compare<int32_t>(ctx.r4.s32, 68, xer);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,-16792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16792);
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// beq cr6,0x830b04b0
	if (cr6.eq) goto loc_830B04B0;
	// cmpwi cr6,r4,83
	cr6.compare<int32_t>(ctx.r4.s32, 83, xer);
	// beq cr6,0x830b0488
	if (cr6.eq) goto loc_830B0488;
	// cmpwi cr6,r4,87
	cr6.compare<int32_t>(ctx.r4.s32, 87, xer);
	// beq cr6,0x830b0460
	if (cr6.eq) goto loc_830B0460;
	// cmpwi cr6,r4,100
	cr6.compare<int32_t>(ctx.r4.s32, 100, xer);
	// beq cr6,0x830b0438
	if (cr6.eq) goto loc_830B0438;
	// cmpwi cr6,r4,115
	cr6.compare<int32_t>(ctx.r4.s32, 115, xer);
	// beq cr6,0x830b0410
	if (cr6.eq) goto loc_830B0410;
	// cmpwi cr6,r4,119
	cr6.compare<int32_t>(ctx.r4.s32, 119, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,4448
	ctx.r10.s64 = ctx.r10.s64 + 4448;
	// beq 0x830b0408
	if (cr0.eq) goto loc_830B0408;
	// addi r4,r10,84
	ctx.r4.s64 = ctx.r10.s64 + 84;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B0408:
	// addi r4,r10,28
	ctx.r4.s64 = ctx.r10.s64 + 28;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B0410:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,4448
	ctx.r10.s64 = ctx.r10.s64 + 4448;
	// beq 0x830b0430
	if (cr0.eq) goto loc_830B0430;
	// addi r4,r10,100
	ctx.r4.s64 = ctx.r10.s64 + 100;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B0430:
	// addi r4,r10,56
	ctx.r4.s64 = ctx.r10.s64 + 56;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B0438:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq 0x830b0458
	if (cr0.eq) goto loc_830B0458;
	// addi r10,r10,4448
	ctx.r10.s64 = ctx.r10.s64 + 4448;
	// addi r4,r10,116
	ctx.r4.s64 = ctx.r10.s64 + 116;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B0458:
	// addi r4,r10,4448
	ctx.r4.s64 = ctx.r10.s64 + 4448;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B0460:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,4448
	ctx.r10.s64 = ctx.r10.s64 + 4448;
	// beq 0x830b0480
	if (cr0.eq) goto loc_830B0480;
	// addi r4,r10,84
	ctx.r4.s64 = ctx.r10.s64 + 84;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B0480:
	// addi r4,r10,28
	ctx.r4.s64 = ctx.r10.s64 + 28;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B0488:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,4448
	ctx.r10.s64 = ctx.r10.s64 + 4448;
	// beq 0x830b04a8
	if (cr0.eq) goto loc_830B04A8;
	// addi r4,r10,100
	ctx.r4.s64 = ctx.r10.s64 + 100;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B04A8:
	// addi r4,r10,56
	ctx.r4.s64 = ctx.r10.s64 + 56;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B04B0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r5,1
	ctx.r5.s64 = 1;
	// beq 0x830b04d0
	if (cr0.eq) goto loc_830B04D0;
	// addi r10,r10,4448
	ctx.r10.s64 = ctx.r10.s64 + 4448;
	// addi r4,r10,116
	ctx.r4.s64 = ctx.r10.s64 + 116;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B04D0:
	// addi r4,r10,4448
	ctx.r4.s64 = ctx.r10.s64 + 4448;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830B04D8"))) PPC_WEAK_FUNC(sub_830B04D8);
PPC_FUNC_IMPL(__imp__sub_830B04D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B04E0"))) PPC_WEAK_FUNC(sub_830B04E0);
PPC_FUNC_IMPL(__imp__sub_830B04E0) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x830b0528
	if (cr6.eq) goto loc_830B0528;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,122
	ctx.r6.s64 = 122;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1341
	ctx.r5.s64 = 1341;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B0528:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r3,114
	cr6.compare<int32_t>(ctx.r3.s32, 114, xer);
	// bgt cr6,0x830b0580
	if (cr6.gt) goto loc_830B0580;
	// beq cr6,0x830b0578
	if (cr6.eq) goto loc_830B0578;
	// cmpwi cr6,r3,65
	cr6.compare<int32_t>(ctx.r3.s32, 65, xer);
	// beq cr6,0x830b05a8
	if (cr6.eq) goto loc_830B05A8;
	// cmpwi cr6,r3,90
	cr6.compare<int32_t>(ctx.r3.s32, 90, xer);
	// beq cr6,0x830b05a8
	if (cr6.eq) goto loc_830B05A8;
	// cmpwi cr6,r3,101
	cr6.compare<int32_t>(ctx.r3.s32, 101, xer);
	// beq cr6,0x830b0570
	if (cr6.eq) goto loc_830B0570;
	// cmpwi cr6,r3,102
	cr6.compare<int32_t>(ctx.r3.s32, 102, xer);
	// beq cr6,0x830b0568
	if (cr6.eq) goto loc_830B0568;
	// cmpwi cr6,r3,110
	cr6.compare<int32_t>(ctx.r3.s32, 110, xer);
	// bne cr6,0x830b0a20
	if (!cr6.eq) goto loc_830B0A20;
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x830b0a20
	goto loc_830B0A20;
loc_830B0568:
	// li r3,12
	ctx.r3.s64 = 12;
	// b 0x830b0a20
	goto loc_830B0A20;
loc_830B0570:
	// li r3,27
	ctx.r3.s64 = 27;
	// b 0x830b0a20
	goto loc_830B0A20;
loc_830B0578:
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x830b0a20
	goto loc_830B0A20;
loc_830B0580:
	// cmpwi cr6,r3,116
	cr6.compare<int32_t>(ctx.r3.s32, 116, xer);
	// beq cr6,0x830b0a1c
	if (cr6.eq) goto loc_830B0A1C;
	// cmpwi cr6,r3,117
	cr6.compare<int32_t>(ctx.r3.s32, 117, xer);
	// beq cr6,0x830b0954
	if (cr6.eq) goto loc_830B0954;
	// cmpwi cr6,r3,118
	cr6.compare<int32_t>(ctx.r3.s32, 118, xer);
	// beq cr6,0x830b0858
	if (cr6.eq) goto loc_830B0858;
	// cmpwi cr6,r3,120
	cr6.compare<int32_t>(ctx.r3.s32, 120, xer);
	// beq cr6,0x830b05d4
	if (cr6.eq) goto loc_830B05D4;
	// cmpwi cr6,r3,122
	cr6.compare<int32_t>(ctx.r3.s32, 122, xer);
	// bne cr6,0x830b0a20
	if (!cr6.eq) goto loc_830B0A20;
loc_830B05A8:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,150
	ctx.r6.s64 = 150;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1446
	ctx.r5.s64 = 1446;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B05D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b0614
	if (cr0.eq) goto loc_830B0614;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,146
	ctx.r6.s64 = 146;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1365
	ctx.r5.s64 = 1365;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B0614:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(r11.s32, 123, xer);
	// bne cr6,0x830b0738
	if (!cr6.eq) goto loc_830B0738;
	// li r31,0
	r31.s64 = 0;
	// b 0x830b0684
	goto loc_830B0684;
loc_830B0628:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r10,r11,-48
	ctx.r10.s64 = r11.s64 + -48;
	// cmplwi cr6,r10,54
	cr6.compare<uint32_t>(ctx.r10.u32, 54, xer);
	// bgt cr6,0x830b0670
	if (cr6.gt) goto loc_830B0670;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x830b0648
	if (cr6.gt) goto loc_830B0648;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x830b0674
	goto loc_830B0674;
loc_830B0648:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x830b06c4
	if (cr6.lt) goto loc_830B06C4;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(r11.s32, 70, xer);
	// bgt cr6,0x830b0660
	if (cr6.gt) goto loc_830B0660;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x830b0674
	goto loc_830B0674;
loc_830B0660:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x830b06c4
	if (cr6.lt) goto loc_830B06C4;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
	// b 0x830b0674
	goto loc_830B0674;
loc_830B0670:
	// li r11,-1
	r11.s64 = -1;
loc_830B0674:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830b06c4
	if (cr6.lt) goto loc_830B06C4;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
loc_830B0684:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b0628
	if (cr0.eq) goto loc_830B0628;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,146
	ctx.r6.s64 = 146;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1375
	ctx.r5.s64 = 1375;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B06C4:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(r11.s32, 125, xer);
	// beq cr6,0x830b06fc
	if (cr6.eq) goto loc_830B06FC;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,148
	ctx.r6.s64 = 148;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1384
	ctx.r5.s64 = 1384;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B06FC:
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,3984(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 3984);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// ble cr6,0x830b09e8
	if (!cr6.gt) goto loc_830B09E8;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,149
	ctx.r6.s64 = 149;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1387
	ctx.r5.s64 = 1387;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B0738:
	// addi r10,r11,-48
	ctx.r10.s64 = r11.s64 + -48;
	// cmplwi cr6,r10,54
	cr6.compare<uint32_t>(ctx.r10.u32, 54, xer);
	// bgt cr6,0x830b077c
	if (cr6.gt) goto loc_830B077C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x830b0754
	if (cr6.gt) goto loc_830B0754;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x830b0780
	goto loc_830B0780;
loc_830B0754:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x830b082c
	if (cr6.lt) goto loc_830B082C;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(r11.s32, 70, xer);
	// bgt cr6,0x830b076c
	if (cr6.gt) goto loc_830B076C;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x830b0780
	goto loc_830B0780;
loc_830B076C:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x830b082c
	if (cr6.lt) goto loc_830B082C;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
	// b 0x830b0780
	goto loc_830B0780;
loc_830B077C:
	// li r11,-1
	r11.s64 = -1;
loc_830B0780:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830b082c
	if (cr6.lt) goto loc_830B082C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r11
	r31.u64 = r11.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b0800
	if (!cr0.eq) goto loc_830B0800;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r10,r11,-48
	ctx.r10.s64 = r11.s64 + -48;
	// cmplwi cr6,r10,54
	cr6.compare<uint32_t>(ctx.r10.u32, 54, xer);
	// bgt cr6,0x830b07e8
	if (cr6.gt) goto loc_830B07E8;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x830b07c0
	if (cr6.gt) goto loc_830B07C0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x830b07ec
	goto loc_830B07EC;
loc_830B07C0:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x830b0800
	if (cr6.lt) goto loc_830B0800;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(r11.s32, 70, xer);
	// bgt cr6,0x830b07d8
	if (cr6.gt) goto loc_830B07D8;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x830b07ec
	goto loc_830B07EC;
loc_830B07D8:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x830b0800
	if (cr6.lt) goto loc_830B0800;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
	// b 0x830b07ec
	goto loc_830B07EC;
loc_830B07E8:
	// li r11,-1
	r11.s64 = -1;
loc_830B07EC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830b0800
	if (cr6.lt) goto loc_830B0800;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// b 0x830b0a20
	goto loc_830B0A20;
loc_830B0800:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,146
	ctx.r6.s64 = 146;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1400
	ctx.r5.s64 = 1400;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B082C:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,146
	ctx.r6.s64 = 146;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1394
	ctx.r5.s64 = 1394;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B0858:
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_830B0860:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b0928
	if (!cr0.eq) goto loc_830B0928;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r10,r11,-48
	ctx.r10.s64 = r11.s64 + -48;
	// cmplwi cr6,r10,54
	cr6.compare<uint32_t>(ctx.r10.u32, 54, xer);
	// bgt cr6,0x830b08bc
	if (cr6.gt) goto loc_830B08BC;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x830b0894
	if (cr6.gt) goto loc_830B0894;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x830b08c0
	goto loc_830B08C0;
loc_830B0894:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x830b0928
	if (cr6.lt) goto loc_830B0928;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(r11.s32, 70, xer);
	// bgt cr6,0x830b08ac
	if (cr6.gt) goto loc_830B08AC;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x830b08c0
	goto loc_830B08C0;
loc_830B08AC:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x830b0928
	if (cr6.lt) goto loc_830B0928;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
	// b 0x830b08c0
	goto loc_830B08C0;
loc_830B08BC:
	// li r11,-1
	r11.s64 = -1;
loc_830B08C0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830b0928
	if (cr6.lt) goto loc_830B0928;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830b08d8
	if (!cr6.eq) goto loc_830B08D8;
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x830b08e0
	goto loc_830B08E0;
loc_830B08D8:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
loc_830B08E0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(r29.s32, 6, xer);
	// blt cr6,0x830b0860
	if (cr6.lt) goto loc_830B0860;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r11,3984(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 3984);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// ble cr6,0x830b09e8
	if (!cr6.gt) goto loc_830B09E8;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,146
	ctx.r6.s64 = 146;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1438
	ctx.r5.s64 = 1438;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B0928:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,146
	ctx.r6.s64 = 146;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1432
	ctx.r5.s64 = 1432;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B0954:
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_830B095C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b09f0
	if (!cr0.eq) goto loc_830B09F0;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r10,r11,-48
	ctx.r10.s64 = r11.s64 + -48;
	// cmplwi cr6,r10,54
	cr6.compare<uint32_t>(ctx.r10.u32, 54, xer);
	// bgt cr6,0x830b09b8
	if (cr6.gt) goto loc_830B09B8;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x830b0990
	if (cr6.gt) goto loc_830B0990;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x830b09bc
	goto loc_830B09BC;
loc_830B0990:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x830b09f0
	if (cr6.lt) goto loc_830B09F0;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(r11.s32, 70, xer);
	// bgt cr6,0x830b09a8
	if (cr6.gt) goto loc_830B09A8;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x830b09bc
	goto loc_830B09BC;
loc_830B09A8:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x830b09f0
	if (cr6.lt) goto loc_830B09F0;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
	// b 0x830b09bc
	goto loc_830B09BC;
loc_830B09B8:
	// li r11,-1
	r11.s64 = -1;
loc_830B09BC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x830b09f0
	if (cr6.lt) goto loc_830B09F0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830b09d4
	if (!cr6.eq) goto loc_830B09D4;
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x830b09dc
	goto loc_830B09DC;
loc_830B09D4:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
loc_830B09DC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x830b095c
	if (cr6.lt) goto loc_830B095C;
loc_830B09E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830b0a20
	goto loc_830B0A20;
loc_830B09F0:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,146
	ctx.r6.s64 = 146;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1415
	ctx.r5.s64 = 1415;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B0A1C:
	// li r3,9
	ctx.r3.s64 = 9;
loc_830B0A20:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B0A28"))) PPC_WEAK_FUNC(sub_830B0A28);
PPC_FUNC_IMPL(__imp__sub_830B0A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x830b0a4c
	if (!cr6.lt) goto loc_830B0A4C;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r10
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x830b0a50
	if (cr6.eq) goto loc_830B0A50;
loc_830B0A4C:
	// li r11,0
	r11.s64 = 0;
loc_830B0A50:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B0A58"))) PPC_WEAK_FUNC(sub_830B0A58);
PPC_FUNC_IMPL(__imp__sub_830B0A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32232
	r11.s64 = -2112356352;
	// addi r11,r11,4900
	r11.s64 = r11.s64 + 4900;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B0A68"))) PPC_WEAK_FUNC(sub_830B0A68);
PPC_FUNC_IMPL(__imp__sub_830B0A68) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830b0ab8
	if (cr6.lt) goto loc_830B0AB8;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,32144
	ctx.r4.s64 = r11.s64 + 32144;
	// li r5,67
	ctx.r5.s64 = 67;
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
loc_830B0AB8:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b0ad4
	if (cr0.eq) goto loc_830B0AD4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B0AD4:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B0AE8"))) PPC_WEAK_FUNC(sub_830B0AE8);
PPC_FUNC_IMPL(__imp__sub_830B0AE8) {
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
	// li r28,0
	r28.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830b0b44
	if (!cr6.gt) goto loc_830B0B44;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_830B0B10:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b0b28
	if (cr0.eq) goto loc_830B0B28;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B0B28:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r28,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r28.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830b0b10
	if (cr6.lt) goto loc_830B0B10;
loc_830B0B44:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B0B50"))) PPC_WEAK_FUNC(sub_830B0B50);
PPC_FUNC_IMPL(__imp__sub_830B0B50) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830b0ba4
	if (cr6.lt) goto loc_830B0BA4;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,32144
	ctx.r4.s64 = r11.s64 + 32144;
	// li r5,144
	ctx.r5.s64 = 144;
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
loc_830B0BA4:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b0bc0
	if (cr0.eq) goto loc_830B0BC0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B0BC0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x830b0be4
	if (!cr6.eq) goto loc_830B0BE4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// b 0x830b0c34
	goto loc_830B0C34;
loc_830B0BE4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830b0c1c
	if (!cr6.lt) goto loc_830B0C1C;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_830B0BF4:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x830b0bf4
	if (cr6.lt) goto loc_830B0BF4;
loc_830B0C1C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
loc_830B0C34:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
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

__attribute__((alias("__imp__sub_830B0C58"))) PPC_WEAK_FUNC(sub_830B0C58);
PPC_FUNC_IMPL(__imp__sub_830B0C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x82fe0700
	sub_82FE0700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830B0C88"))) PPC_WEAK_FUNC(sub_830B0C88);
PPC_FUNC_IMPL(__imp__sub_830B0C88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B0C90"))) PPC_WEAK_FUNC(sub_830B0C90);
PPC_FUNC_IMPL(__imp__sub_830B0C90) {
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
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b0ce0
	if (cr0.eq) goto loc_830B0CE0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830b0ce0
	if (!cr6.gt) goto loc_830B0CE0;
	// li r30,0
	r30.s64 = 0;
loc_830B0CC0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830b0cc0
	if (cr6.lt) goto loc_830B0CC0;
loc_830B0CE0:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B0D00"))) PPC_WEAK_FUNC(sub_830B0D00);
PPC_FUNC_IMPL(__imp__sub_830B0D00) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4900
	r11.s64 = r11.s64 + 4900;
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
	// beq cr6,0x830b0d74
	if (cr6.eq) goto loc_830B0D74;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_830B0D60:
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
	// bne 0x830b0d60
	if (!cr0.eq) goto loc_830B0D60;
loc_830B0D74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B0D80"))) PPC_WEAK_FUNC(sub_830B0D80);
PPC_FUNC_IMPL(__imp__sub_830B0D80) {
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
	// bl 0x830af6c8
	sub_830AF6C8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b0db0
	if (cr0.eq) goto loc_830B0DB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B0DB0:
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

__attribute__((alias("__imp__sub_830B0DD8"))) PPC_WEAK_FUNC(sub_830B0DD8);
PPC_FUNC_IMPL(__imp__sub_830B0DD8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,4924
	r11.s64 = r11.s64 + 4924;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b0e3c
	if (cr0.eq) goto loc_830B0E3C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830b0e3c
	if (!cr6.gt) goto loc_830B0E3C;
	// li r29,0
	r29.s64 = 0;
loc_830B0E1C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x830b0e1c
	if (cr6.lt) goto loc_830B0E1C;
loc_830B0E3C:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// addi r11,r11,4900
	r11.s64 = r11.s64 + 4900;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B0E68"))) PPC_WEAK_FUNC(sub_830B0E68);
PPC_FUNC_IMPL(__imp__sub_830B0E68) {
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
	// bl 0x830b0a58
	sub_830B0A58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B0E90"))) PPC_WEAK_FUNC(sub_830B0E90);
PPC_FUNC_IMPL(__imp__sub_830B0E90) {
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
	// bl 0x830b0dd8
	sub_830B0DD8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b0ec0
	if (cr0.eq) goto loc_830B0EC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B0EC0:
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

__attribute__((alias("__imp__sub_830B0EE8"))) PPC_WEAK_FUNC(sub_830B0EE8);
PPC_FUNC_IMPL(__imp__sub_830B0EE8) {
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
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r28,r11,-48
	r28.s64 = r11.s64 + -48;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x830abae8
	sub_830ABAE8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stb r11,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r11.u8);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830b0f74
	if (!cr6.eq) goto loc_830B0F74;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x830b0f6c
	if (cr0.eq) goto loc_830B0F6C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830b0d00
	sub_830B0D00(ctx, base);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r11,4924
	r11.s64 = r11.s64 + 4924;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x830b0f70
	goto loc_830B0F70;
loc_830B0F6C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830B0F70:
	// stw r10,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r10.u32);
loc_830B0F74:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b0fa0
	if (cr0.eq) goto loc_830B0FA0;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x830b0fa4
	goto loc_830B0FA4;
loc_830B0FA0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B0FA4:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830B0FC0"))) PPC_WEAK_FUNC(sub_830B0FC0);
PPC_FUNC_IMPL(__imp__sub_830B0FC0) {
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

__attribute__((alias("__imp__sub_830B0FF8"))) PPC_WEAK_FUNC(sub_830B0FF8);
PPC_FUNC_IMPL(__imp__sub_830B0FF8) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b10f8
	if (!cr0.eq) goto loc_830B10F8;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(r11.s32, 123, xer);
	// bne cr6,0x830b10f8
	if (!cr6.eq) goto loc_830B10F8;
	// lwz r27,16(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r4,125
	ctx.r4.s64 = 125;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fda140
	sub_82FDA140(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x830b1078
	if (!cr0.lt) goto loc_830B1078;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,134
	ctx.r6.s64 = 134;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1069
	ctx.r5.s64 = 1069;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B1078:
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r27,r28
	r11.s64 = r28.s64 - r27.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r7,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r7.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fda3d0
	sub_82FDA3D0(ctx, base);
	// addi r11,r26,-112
	r11.s64 = r26.s64 + -112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// bl 0x830abd98
	sub_830ABD98(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b70
	return;
loc_830B10F8:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,133
	ctx.r6.s64 = 133;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1063
	ctx.r5.s64 = 1063;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830B1124"))) PPC_WEAK_FUNC(sub_830B1124);
PPC_FUNC_IMPL(__imp__sub_830B1124) {
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

__attribute__((alias("__imp__sub_830B1158"))) PPC_WEAK_FUNC(sub_830B1158);
PPC_FUNC_IMPL(__imp__sub_830B1158) {
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
	// li r11,1
	r11.s64 = 1;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// sth r11,24(r30)
	PPC_STORE_U16(r30.u32 + 24, r11.u16);
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// li r23,0
	r23.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b11e4
	if (!cr0.eq) goto loc_830B11E4;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(r11.s32, 94, xer);
	// bne cr6,0x830b11e4
	if (!cr6.eq) goto loc_830B11E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r20,1
	r20.s64 = 1;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b11bc
	if (cr0.eq) goto loc_830B11BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x830b11ec
	goto loc_830B11EC;
loc_830B11BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,3984(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 3984);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B11E4:
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B11EC:
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r24,1
	r24.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x830b1550
	if (cr6.eq) goto loc_830B1550;
	// lis r22,-32233
	r22.s64 = -2112421888;
loc_830B1208:
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b1228
	if (!cr0.eq) goto loc_830B1228;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r10,93
	cr6.compare<int32_t>(ctx.r10.s32, 93, xer);
	// bne cr6,0x830b1228
	if (!cr6.eq) goto loc_830B1228;
	// clrlwi. r10,r24,24
	ctx.r10.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830b1550
	if (cr0.eq) goto loc_830B1550;
loc_830B1228:
	// lwz r25,36(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x830b133c
	if (!cr6.eq) goto loc_830B133C;
	// cmpwi cr6,r25,99
	cr6.compare<int32_t>(r25.s32, 99, xer);
	// bgt cr6,0x830b1278
	if (cr6.gt) goto loc_830B1278;
	// beq cr6,0x830b12dc
	if (cr6.eq) goto loc_830B12DC;
	// cmpwi cr6,r25,67
	cr6.compare<int32_t>(r25.s32, 67, xer);
	// beq cr6,0x830b12dc
	if (cr6.eq) goto loc_830B12DC;
	// cmpwi cr6,r25,68
	cr6.compare<int32_t>(r25.s32, 68, xer);
	// beq cr6,0x830b1304
	if (cr6.eq) goto loc_830B1304;
	// cmpwi cr6,r25,73
	cr6.compare<int32_t>(r25.s32, 73, xer);
	// beq cr6,0x830b12dc
	if (cr6.eq) goto loc_830B12DC;
	// cmpwi cr6,r25,80
	cr6.compare<int32_t>(r25.s32, 80, xer);
	// beq cr6,0x830b12bc
	if (cr6.eq) goto loc_830B12BC;
	// cmpwi cr6,r25,83
	cr6.compare<int32_t>(r25.s32, 83, xer);
	// beq cr6,0x830b1304
	if (cr6.eq) goto loc_830B1304;
	// cmpwi cr6,r25,87
	cr6.compare<int32_t>(r25.s32, 87, xer);
	// b 0x830b129c
	goto loc_830B129C;
loc_830B1278:
	// cmpwi cr6,r25,100
	cr6.compare<int32_t>(r25.s32, 100, xer);
	// beq cr6,0x830b1304
	if (cr6.eq) goto loc_830B1304;
	// cmpwi cr6,r25,105
	cr6.compare<int32_t>(r25.s32, 105, xer);
	// beq cr6,0x830b12dc
	if (cr6.eq) goto loc_830B12DC;
	// cmpwi cr6,r25,112
	cr6.compare<int32_t>(r25.s32, 112, xer);
	// beq cr6,0x830b12bc
	if (cr6.eq) goto loc_830B12BC;
	// cmpwi cr6,r25,115
	cr6.compare<int32_t>(r25.s32, 115, xer);
	// beq cr6,0x830b1304
	if (cr6.eq) goto loc_830B1304;
	// cmpwi cr6,r25,119
	cr6.compare<int32_t>(r25.s32, 119, xer);
loc_830B129C:
	// beq cr6,0x830b1304
	if (cr6.eq) goto loc_830B1304;
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x830b1440
	goto loc_830B1440;
loc_830B12BC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b0ff8
	sub_830B0FF8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x830b1588
	if (cr0.eq) goto loc_830B1588;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// b 0x830b1328
	goto loc_830B1328;
loc_830B12DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bge 0x830b1440
	if (!cr0.lt) goto loc_830B1440;
	// b 0x830b1334
	goto loc_830B1334;
loc_830B1304:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r29,0(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_830B1328:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B1334:
	// li r29,1
	r29.s64 = 1;
	// b 0x830b1440
	goto loc_830B1440;
loc_830B133C:
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// bne cr6,0x830b1440
	if (!cr6.eq) goto loc_830B1440;
	// li r4,58
	ctx.r4.s64 = 58;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fda140
	sub_82FDA140(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x830b15b4
	if (cr0.lt) goto loc_830B15B4;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r27,1
	r27.s64 = 1;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,94
	cr6.compare<uint32_t>(ctx.r10.u32, 94, xer);
	// bne cr6,0x830b1388
	if (!cr6.eq) goto loc_830B1388;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r27,0
	r27.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
loc_830B1388:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
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
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r7,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r7.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fda3d0
	sub_82FDA3D0(ctx, base);
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x830abd98
	sub_830ABD98(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x830b15e0
	if (cr0.eq) goto loc_830B15E0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// li r29,1
	r29.s64 = 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x830b160c
	if (!cr6.lt) goto loc_830B160C;
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r10
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x830b160c
	if (!cr6.eq) goto loc_830B160C;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
loc_830B1440:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b1508
	if (!cr0.eq) goto loc_830B1508;
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b14ec
	if (!cr0.eq) goto loc_830B14EC;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x830b14ec
	if (!cr6.eq) goto loc_830B14EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x830b1638
	if (cr6.eq) goto loc_830B1638;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830b14b8
	if (!cr6.eq) goto loc_830B14B8;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r10,93
	cr6.compare<int32_t>(ctx.r10.s32, 93, xer);
	// bne cr6,0x830b14b8
	if (!cr6.eq) goto loc_830B14B8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,45
	ctx.r5.s64 = 45;
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x830b14f4
	goto loc_830B14F4;
loc_830B14B8:
	// lwz r29,36(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x830b14dc
	if (!cr6.eq) goto loc_830B14DC;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_830B14DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// b 0x830b14f0
	goto loc_830B14F0;
loc_830B14EC:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_830B14F0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_830B14F4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B1508:
	// lwz r11,-16772(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -16772);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b1544
	if (cr0.eq) goto loc_830B1544;
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b1544
	if (!cr0.eq) goto loc_830B1544;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x830b1544
	if (!cr6.eq) goto loc_830B1544;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
loc_830B1544:
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830b1208
	if (!cr6.eq) goto loc_830B1208;
loc_830B1550:
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830b1664
	if (!cr6.eq) goto loc_830B1664;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,138
	ctx.r6.s64 = 138;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1245
	ctx.r5.s64 = 1245;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B1588:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,136
	ctx.r6.s64 = 136;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1156
	ctx.r5.s64 = 1156;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B15B4:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,137
	ctx.r6.s64 = 137;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1172
	ctx.r5.s64 = 1172;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B15E0:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,139
	ctx.r6.s64 = 139;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1193
	ctx.r5.s64 = 1193;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B160C:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,137
	ctx.r6.s64 = 137;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1200
	ctx.r5.s64 = 1200;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B1638:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,138
	ctx.r6.s64 = 138;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1217
	ctx.r5.s64 = 1217;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B1664:
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b1690
	if (!cr0.eq) goto loc_830B1690;
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b1690
	if (cr0.eq) goto loc_830B1690;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r23
	r26.u64 = r23.u64;
loc_830B1690:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,24(r30)
	PPC_STORE_U16(r30.u32 + 24, r11.u16);
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_830B16D4"))) PPC_WEAK_FUNC(sub_830B16D4);
PPC_FUNC_IMPL(__imp__sub_830B16D4) {
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

__attribute__((alias("__imp__sub_830B1708"))) PPC_WEAK_FUNC(sub_830B1708);
PPC_FUNC_IMPL(__imp__sub_830B1708) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bgt cr6,0x830b1998
	if (cr6.gt) goto loc_830B1998;
	// beq cr6,0x830b198c
	if (cr6.eq) goto loc_830B198C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x830b1934
	if (cr6.eq) goto loc_830B1934;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x830b1928
	if (cr6.eq) goto loc_830B1928;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x830b1910
	if (cr6.eq) goto loc_830B1910;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x830b18f4
	if (cr6.eq) goto loc_830B18F4;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x830b19b8
	if (!cr6.eq) goto loc_830B19B8;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r4,88
	cr6.compare<int32_t>(ctx.r4.s32, 88, xer);
	// bgt cr6,0x830b17d8
	if (cr6.gt) goto loc_830B17D8;
	// beq cr6,0x830b17cc
	if (cr6.eq) goto loc_830B17CC;
	// cmpwi cr6,r4,73
	cr6.compare<int32_t>(ctx.r4.s32, 73, xer);
	// bgt cr6,0x830b17b4
	if (cr6.gt) goto loc_830B17B4;
	// beq cr6,0x830b17a8
	if (cr6.eq) goto loc_830B17A8;
	// cmpwi cr6,r4,48
	cr6.compare<int32_t>(ctx.r4.s32, 48, xer);
	// blt cr6,0x830b1810
	if (cr6.lt) goto loc_830B1810;
	// cmpwi cr6,r4,57
	cr6.compare<int32_t>(ctx.r4.s32, 57, xer);
	// ble cr6,0x830b179c
	if (!cr6.gt) goto loc_830B179C;
	// cmpwi cr6,r4,67
	cr6.compare<int32_t>(ctx.r4.s32, 67, xer);
	// beq cr6,0x830b1790
	if (cr6.eq) goto loc_830B1790;
	// cmpwi cr6,r4,68
	cr6.compare<int32_t>(ctx.r4.s32, 68, xer);
	// b 0x830b180c
	goto loc_830B180C;
loc_830B1790:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B179C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B17A8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B17B4:
	// cmpwi cr6,r4,80
	cr6.compare<int32_t>(ctx.r4.s32, 80, xer);
	// beq cr6,0x830b186c
	if (cr6.eq) goto loc_830B186C;
	// cmpwi cr6,r4,83
	cr6.compare<int32_t>(ctx.r4.s32, 83, xer);
	// beq cr6,0x830b18c0
	if (cr6.eq) goto loc_830B18C0;
	// cmpwi cr6,r4,87
	cr6.compare<int32_t>(ctx.r4.s32, 87, xer);
	// b 0x830b180c
	goto loc_830B180C;
loc_830B17CC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B17D8:
	// cmpwi cr6,r4,99
	cr6.compare<int32_t>(ctx.r4.s32, 99, xer);
	// beq cr6,0x830b18e8
	if (cr6.eq) goto loc_830B18E8;
	// cmpwi cr6,r4,100
	cr6.compare<int32_t>(ctx.r4.s32, 100, xer);
	// beq cr6,0x830b18c0
	if (cr6.eq) goto loc_830B18C0;
	// cmpwi cr6,r4,103
	cr6.compare<int32_t>(ctx.r4.s32, 103, xer);
	// beq cr6,0x830b18b4
	if (cr6.eq) goto loc_830B18B4;
	// cmpwi cr6,r4,105
	cr6.compare<int32_t>(ctx.r4.s32, 105, xer);
	// beq cr6,0x830b18a8
	if (cr6.eq) goto loc_830B18A8;
	// cmpwi cr6,r4,112
	cr6.compare<int32_t>(ctx.r4.s32, 112, xer);
	// beq cr6,0x830b186c
	if (cr6.eq) goto loc_830B186C;
	// cmpwi cr6,r4,115
	cr6.compare<int32_t>(ctx.r4.s32, 115, xer);
	// beq cr6,0x830b18c0
	if (cr6.eq) goto loc_830B18C0;
	// cmpwi cr6,r4,119
	cr6.compare<int32_t>(ctx.r4.s32, 119, xer);
loc_830B180C:
	// beq cr6,0x830b18c0
	if (cr6.eq) goto loc_830B18C0;
loc_830B1810:
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
	// lis r11,1
	r11.s64 = 65536;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bge cr6,0x830b1838
	if (!cr6.lt) goto loc_830B1838;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830b1950
	goto loc_830B1950;
loc_830B1838:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830af418
	sub_830AF418(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x830abb90
	sub_830ABB90(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// b 0x830b18d8
	goto loc_830B18D8;
loc_830B186C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b0ff8
	sub_830B0FF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830b18d8
	if (!cr0.eq) goto loc_830B18D8;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,136
	ctx.r6.s64 = 136;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1019
	ctx.r5.s64 = 1019;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B18A8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B18B4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B18C0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B18D4:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_830B18D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
loc_830B18E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830b1a1c
	goto loc_830B1A1C;
loc_830B18E8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B18F4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830b1a1c
	goto loc_830B1A1C;
loc_830B1910:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x830ac078
	sub_830AC078(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x830b18e0
	goto loc_830B18E0;
loc_830B1928:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B1934:
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r4,123
	cr6.compare<int32_t>(ctx.r4.s32, 123, xer);
	// beq cr6,0x830b1960
	if (cr6.eq) goto loc_830B1960;
	// cmpwi cr6,r4,125
	cr6.compare<int32_t>(ctx.r4.s32, 125, xer);
	// beq cr6,0x830b1960
	if (cr6.eq) goto loc_830B1960;
	// cmpwi cr6,r4,93
	cr6.compare<int32_t>(ctx.r4.s32, 93, xer);
	// beq cr6,0x830b1960
	if (cr6.eq) goto loc_830B1960;
loc_830B1950:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x830ab9d8
	sub_830AB9D8(ctx, base);
	// b 0x830b18d4
	goto loc_830B18D4;
loc_830B1960:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,135
	ctx.r6.s64 = 135;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1045
	ctx.r5.s64 = 1045;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B198C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B1998:
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// beq cr6,0x830b1a08
	if (cr6.eq) goto loc_830B1A08;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// beq cr6,0x830b19fc
	if (cr6.eq) goto loc_830B19FC;
	// cmpwi cr6,r11,22
	cr6.compare<int32_t>(r11.s32, 22, xer);
	// beq cr6,0x830b19f0
	if (cr6.eq) goto loc_830B19F0;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// beq cr6,0x830b19e4
	if (cr6.eq) goto loc_830B19E4;
loc_830B19B8:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,135
	ctx.r6.s64 = 135;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,1051
	ctx.r5.s64 = 1051;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B19E4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B19F0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B19FC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// b 0x830b1a10
	goto loc_830B1A10;
loc_830B1A08:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
loc_830B1A10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B1A1C:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B1A24"))) PPC_WEAK_FUNC(sub_830B1A24);
PPC_FUNC_IMPL(__imp__sub_830B1A24) {
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

__attribute__((alias("__imp__sub_830B1A50"))) PPC_WEAK_FUNC(sub_830B1A50);
PPC_FUNC_IMPL(__imp__sub_830B1A50) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// addi r11,r11,-10
	r11.s64 = r11.s64 + -10;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bgt cr6,0x830b1b8c
	if (cr6.gt) goto loc_830B1B8C;
	// lis r12,-32232
	r12.s64 = -2112356352;
	// addi r12,r12,4584
	r12.s64 = r12.s64 + 4584;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-31989
	r12.s64 = -2096431104;
	// addi r12,r12,6808
	r12.s64 = r12.s64 + 6808;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_830B1B08;
	case 1:
		goto loc_830B1A98;
	case 2:
		goto loc_830B1AB0;
	case 3:
		goto loc_830B1B8C;
	case 4:
		goto loc_830B1ABC;
	case 5:
		goto loc_830B1AD8;
	case 6:
		goto loc_830B1AE0;
	case 7:
		goto loc_830B1AE8;
	case 8:
		goto loc_830B1B8C;
	case 9:
		goto loc_830B1B8C;
	case 10:
		goto loc_830B1B8C;
	case 11:
		goto loc_830B1AF0;
	default:
		__builtin_unreachable();
	}
loc_830B1A98:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_830B1AA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830b1ec4
	goto loc_830B1EC4;
loc_830B1AB0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x830b1aa0
	goto loc_830B1AA0;
loc_830B1ABC:
	// li r4,20
	ctx.r4.s64 = 20;
loc_830B1AC0:
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
	// b 0x830b1ec4
	goto loc_830B1EC4;
loc_830B1AD8:
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x830b1ac0
	goto loc_830B1AC0;
loc_830B1AE0:
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x830b1ac0
	goto loc_830B1AC0;
loc_830B1AE8:
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x830b1ac0
	goto loc_830B1AC0;
loc_830B1AF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab400
	sub_830AB400(ctx, base);
	// b 0x830b1ec4
	goto loc_830B1EC4;
loc_830B1B08:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(r11.s32, 60, xer);
	// beq cr6,0x830b1b80
	if (cr6.eq) goto loc_830B1B80;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(r11.s32, 62, xer);
	// beq cr6,0x830b1b74
	if (cr6.eq) goto loc_830B1B74;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// beq cr6,0x830b1b68
	if (cr6.eq) goto loc_830B1B68;
	// cmpwi cr6,r11,66
	cr6.compare<int32_t>(r11.s32, 66, xer);
	// beq cr6,0x830b1b50
	if (cr6.eq) goto loc_830B1B50;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// beq cr6,0x830b1b5c
	if (cr6.eq) goto loc_830B1B5C;
	// cmpwi cr6,r11,98
	cr6.compare<int32_t>(r11.s32, 98, xer);
	// beq cr6,0x830b1b50
	if (cr6.eq) goto loc_830B1B50;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// bne cr6,0x830b1b8c
	if (!cr6.eq) goto loc_830B1B8C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x830b1aa0
	goto loc_830B1AA0;
loc_830B1B50:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// b 0x830b1aa0
	goto loc_830B1AA0;
loc_830B1B5C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x830b1aa0
	goto loc_830B1AA0;
loc_830B1B68:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x830b1aa0
	goto loc_830B1AA0;
loc_830B1B74:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// b 0x830b1aa0
	goto loc_830B1AA0;
loc_830B1B80:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// b 0x830b1aa0
	goto loc_830B1AA0;
loc_830B1B8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830b1708
	sub_830B1708(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b1bf0
	if (cr0.eq) goto loc_830B1BF0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x830b1bd4
	if (cr6.eq) goto loc_830B1BD4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x830b1bc8
	if (cr6.eq) goto loc_830B1BC8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x830b1ec0
	if (!cr6.eq) goto loc_830B1EC0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// b 0x830b1bdc
	goto loc_830B1BDC;
loc_830B1BC8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// b 0x830b1bdc
	goto loc_830B1BDC;
loc_830B1BD4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
loc_830B1BDC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830b1ec4
	goto loc_830B1EC4;
loc_830B1BF0:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(r11.s32, 123, xer);
	// bne cr6,0x830b1ec0
	if (!cr6.eq) goto loc_830B1EC0;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x830b1ec0
	if (!cr6.lt) goto loc_830B1EC0;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lhzx r11,r9,r7
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r9,r11,-48
	ctx.r9.s64 = r11.s64 + -48;
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bgt cr6,0x830b1ecc
	if (cr6.gt) goto loc_830B1ECC;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bge cr6,0x830b1c74
	if (!cr6.lt) goto loc_830B1C74;
loc_830B1C38:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lhzx r11,r10,r7
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// addi r10,r11,-48
	ctx.r10.s64 = r11.s64 + -48;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bgt cr6,0x830b1c74
	if (cr6.gt) goto loc_830B1C74;
	// mulli r10,r29,10
	ctx.r10.s64 = r29.s64 * 10;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r29,r10,-48
	r29.s64 = ctx.r10.s64 + -48;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x830b1c38
	if (cr6.lt) goto loc_830B1C38;
loc_830B1C74:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x830b1cb8
	if (!cr6.lt) goto loc_830B1CB8;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,898
	ctx.r5.s64 = 898;
	// li r6,157
	ctx.r6.s64 = 157;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83090430
	sub_83090430(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B1CB8:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x830b1dfc
	if (!cr6.eq) goto loc_830B1DFC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x830b1d0c
	if (cr6.lt) goto loc_830B1D0C;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,909
	ctx.r5.s64 = 909;
	// li r6,155
	ctx.r6.s64 = 155;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83090430
	sub_83090430(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B1D0C:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lhzx r11,r9,r7
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r9,r11,-48
	ctx.r9.s64 = r11.s64 + -48;
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bgt cr6,0x830b1df8
	if (cr6.gt) goto loc_830B1DF8;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bge cr6,0x830b1d70
	if (!cr6.lt) goto loc_830B1D70;
loc_830B1D34:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lhzx r11,r10,r7
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r7.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// addi r10,r11,-48
	ctx.r10.s64 = r11.s64 + -48;
	// cmplwi cr6,r10,9
	cr6.compare<uint32_t>(ctx.r10.u32, 9, xer);
	// bgt cr6,0x830b1d70
	if (cr6.gt) goto loc_830B1D70;
	// mulli r10,r30,10
	ctx.r10.s64 = r30.s64 * 10;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r30,r10,-48
	r30.s64 = ctx.r10.s64 + -48;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x830b1d34
	if (cr6.lt) goto loc_830B1D34;
loc_830B1D70:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x830b1db4
	if (!cr6.lt) goto loc_830B1DB4;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,922
	ctx.r5.s64 = 922;
	// li r6,157
	ctx.r6.s64 = 157;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83090430
	sub_83090430(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B1DB4:
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// ble cr6,0x830b1dfc
	if (!cr6.gt) goto loc_830B1DFC;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,924
	ctx.r5.s64 = 924;
	// li r6,156
	ctx.r6.s64 = 156;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83090430
	sub_83090430(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B1DF8:
	// li r30,-1
	r30.s64 = -1;
loc_830B1DFC:
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(r11.s32, 125, xer);
	// beq cr6,0x830b1e40
	if (cr6.eq) goto loc_830B1E40;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,932
	ctx.r5.s64 = 932;
	// li r6,154
	ctx.r6.s64 = 154;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83090430
	sub_83090430(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B1E40:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// beq 0x830b1e80
	if (cr0.eq) goto loc_830B1E80;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x830ab610
	sub_830AB610(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x830b1e88
	goto loc_830B1E88;
loc_830B1E80:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830ab610
	sub_830AB610(ctx, base);
loc_830B1E88:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
loc_830B1EC0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_830B1EC4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b78
	return;
loc_830B1ECC:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,153
	ctx.r6.s64 = 153;
	// li r5,901
	ctx.r5.s64 = 901;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83090430
	sub_83090430(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830B1F08"))) PPC_WEAK_FUNC(sub_830B1F08);
PPC_FUNC_IMPL(__imp__sub_830B1F08) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x830b1fdc
	if (cr6.eq) goto loc_830B1FDC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x830b1fdc
	if (cr6.eq) goto loc_830B1FDC;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x830b1f40
	if (!cr6.eq) goto loc_830B1F40;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b1fdc
	if (!cr0.eq) goto loc_830B1FDC;
loc_830B1F40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830b1a50
	sub_830B1A50(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// b 0x830b1fc8
	goto loc_830B1FC8;
loc_830B1F54:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x830b1fd4
	if (cr6.eq) goto loc_830B1FD4;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x830b1f6c
	if (!cr6.eq) goto loc_830B1F6C;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b1fd4
	if (!cr0.eq) goto loc_830B1FD4;
loc_830B1F6C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830b1fa0
	if (!cr6.eq) goto loc_830B1FA0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab7c8
	sub_830AB7C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r30
	r28.u64 = r30.u64;
loc_830B1FA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r26,48(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830b1a50
	sub_830B1A50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B1FC8:
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830b1f54
	if (!cr6.eq) goto loc_830B1F54;
loc_830B1FD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x830b1fe8
	goto loc_830B1FE8;
loc_830B1FDC:
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab400
	sub_830AB400(ctx, base);
loc_830B1FE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830B1FF0"))) PPC_WEAK_FUNC(sub_830B1FF0);
PPC_FUNC_IMPL(__imp__sub_830B1FF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x830b1f08
	sub_830B1F08(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// b 0x830b207c
	goto loc_830B207C;
loc_830B2014:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x830b2050
	if (!cr6.eq) goto loc_830B2050;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab7c8
	sub_830AB7C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_830B2050:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r26,48(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830b1f08
	sub_830B1F08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B207C:
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x830b2014
	if (cr6.eq) goto loc_830B2014;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830B2098"))) PPC_WEAK_FUNC(sub_830B2098);
PPC_FUNC_IMPL(__imp__sub_830B2098) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830b1ff0
	sub_830B1FF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab4c0
	sub_830AB4C0(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x830b2110
	if (cr6.eq) goto loc_830B2110;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,479
	ctx.r5.s64 = 479;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B2110:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
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

__attribute__((alias("__imp__sub_830B2138"))) PPC_WEAK_FUNC(sub_830B2138);
PPC_FUNC_IMPL(__imp__sub_830B2138) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x830b1ff0
	sub_830B1FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x830ab568
	sub_830AB568(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x830b21b8
	if (cr6.eq) goto loc_830B21B8;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,596
	ctx.r5.s64 = 596;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B21B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
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

__attribute__((alias("__imp__sub_830B21E0"))) PPC_WEAK_FUNC(sub_830B21E0);
PPC_FUNC_IMPL(__imp__sub_830B21E0) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830b1ff0
	sub_830B1FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab568
	sub_830AB568(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x830b2254
	if (cr6.eq) goto loc_830B2254;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,609
	ctx.r5.s64 = 609;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B2254:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
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

__attribute__((alias("__imp__sub_830B2280"))) PPC_WEAK_FUNC(sub_830B2280);
PPC_FUNC_IMPL(__imp__sub_830B2280) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x830b22d8
	if (cr6.lt) goto loc_830B22D8;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,129
	ctx.r6.s64 = 129;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,619
	ctx.r5.s64 = 619;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B22D8:
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r27,-1
	r27.s64 = -1;
	// li r26,0
	r26.s64 = 0;
	// lhzx r11,r11,r9
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r9.u32);
	// addi r9,r11,-49
	ctx.r9.s64 = r11.s64 + -49;
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// bgt cr6,0x830b244c
	if (cr6.gt) goto loc_830B244C;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r27,r11,-48
	r27.s64 = r11.s64 + -48;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stb r10,8(r30)
	PPC_STORE_U8(r30.u32 + 8, ctx.r10.u8);
	// bne cr6,0x830b2358
	if (!cr6.eq) goto loc_830B2358;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x830b2350
	if (cr0.eq) goto loc_830B2350;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830b0d00
	sub_830B0D00(ctx, base);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r11,4924
	r11.s64 = r11.s64 + 4924;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x830b2354
	goto loc_830B2354;
loc_830B2350:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830B2354:
	// stw r10,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r10.u32);
loc_830B2358:
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b2380
	if (cr0.eq) goto loc_830B2380;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x830b2384
	goto loc_830B2384;
loc_830B2380:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B2384:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,41
	cr6.compare<uint32_t>(ctx.r10.u32, 41, xer);
	// beq cr6,0x830b23d8
	if (cr6.eq) goto loc_830B23D8;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,638
	ctx.r5.s64 = 638;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B23D8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
loc_830B23E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b1ff0
	sub_830B1FF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lhz r11,4(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830b2528
	if (!cr6.eq) goto loc_830B2528;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x830b24f0
	if (cr6.eq) goto loc_830B24F0;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,131
	ctx.r6.s64 = 131;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,672
	ctx.r5.s64 = 672;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B244C:
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(r11.s32, 63, xer);
	// bne cr6,0x830b245c
	if (!cr6.eq) goto loc_830B245C;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
loc_830B245C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b1a50
	sub_830B1A50(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lhz r11,4(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 4);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x830b24b8
	if (cr6.eq) goto loc_830B24B8;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// ble cr6,0x830b248c
	if (!cr6.gt) goto loc_830B248C;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// ble cr6,0x830b23e0
	if (!cr6.gt) goto loc_830B23E0;
loc_830B248C:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,130
	ctx.r6.s64 = 130;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,661
	ctx.r5.s64 = 661;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B24B8:
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x830b23e0
	if (cr6.eq) goto loc_830B23E0;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,658
	ctx.r5.s64 = 658;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B24F0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_830B2528:
	// lhz r11,32(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x830b2560
	if (cr6.eq) goto loc_830B2560;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,679
	ctx.r5.s64 = 679;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B2560:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x830abce8
	sub_830ABCE8(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830B2588"))) PPC_WEAK_FUNC(sub_830B2588);
PPC_FUNC_IMPL(__imp__sub_830B2588) {
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

__attribute__((alias("__imp__sub_830B25B8"))) PPC_WEAK_FUNC(sub_830B25B8);
PPC_FUNC_IMPL(__imp__sub_830B25B8) {
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
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x830b262c
	if (!cr6.lt) goto loc_830B262C;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
loc_830B25E8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// bl 0x83090928
	sub_83090928(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// beq 0x830b262c
	if (cr0.eq) goto loc_830B262C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// or r29,r3,r29
	r29.u64 = ctx.r3.u64 | r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x830b25e8
	if (cr6.lt) goto loc_830B25E8;
loc_830B262C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x830b2668
	if (cr6.lt) goto loc_830B2668;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,127
	ctx.r6.s64 = 127;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,708
	ctx.r5.s64 = 708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B2668:
	// cmpwi cr6,r9,45
	cr6.compare<int32_t>(ctx.r9.s32, 45, xer);
	// bne cr6,0x830b2704
	if (!cr6.eq) goto loc_830B2704;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bge cr6,0x830b26c8
	if (!cr6.lt) goto loc_830B26C8;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
loc_830B2684:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// bl 0x83090928
	sub_83090928(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// beq 0x830b26c8
	if (cr0.eq) goto loc_830B26C8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// or r30,r3,r30
	r30.u64 = ctx.r3.u64 | r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x830b2684
	if (cr6.lt) goto loc_830B2684;
loc_830B26C8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x830b2704
	if (cr6.lt) goto loc_830B2704;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,127
	ctx.r6.s64 = 127;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,725
	ctx.r5.s64 = 725;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B2704:
	// cmpwi cr6,r9,58
	cr6.compare<int32_t>(ctx.r9.s32, 58, xer);
	// bne cr6,0x830b2784
	if (!cr6.eq) goto loc_830B2784;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830b1ff0
	sub_830B1FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x830abc38
	sub_830ABC38(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x830b2778
	if (cr6.eq) goto loc_830B2778;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,737
	ctx.r5.s64 = 737;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B2778:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// b 0x830b27c0
	goto loc_830B27C0;
loc_830B2784:
	// cmpwi cr6,r9,41
	cr6.compare<int32_t>(ctx.r9.s32, 41, xer);
	// bne cr6,0x830b27cc
	if (!cr6.eq) goto loc_830B27CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830b1ff0
	sub_830B1FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x830abc38
	sub_830ABC38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_830B27C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_830B27CC:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,748
	ctx.r5.s64 = 748;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830B27F8"))) PPC_WEAK_FUNC(sub_830B27F8);
PPC_FUNC_IMPL(__imp__sub_830B27F8) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830b1ff0
	sub_830B1FF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab4c0
	sub_830AB4C0(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x830b286c
	if (cr6.eq) goto loc_830B286C;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,762
	ctx.r5.s64 = 762;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B286C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
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

__attribute__((alias("__imp__sub_830B2898"))) PPC_WEAK_FUNC(sub_830B2898);
PPC_FUNC_IMPL(__imp__sub_830B2898) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830b28c8
	if (!cr6.eq) goto loc_830B28C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830b2a68
	goto loc_830B2A68;
loc_830B28C8:
	// addi r4,r30,52
	ctx.r4.s64 = r30.s64 + 52;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r29,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r29.u8);
	// sth r29,24(r30)
	PPC_STORE_U16(r30.u32 + 24, r29.u16);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// beq 0x830b2910
	if (cr0.eq) goto loc_830B2910;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B2910:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r11,-32233
	r11.s64 = -2112421888;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r4,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r4.u32);
	// lwz r11,-16796(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16796);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b2970
	if (cr0.eq) goto loc_830B2970;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830b2960
	if (cr6.eq) goto loc_830B2960;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B2960:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830af488
	sub_830AF488(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r3.u32);
loc_830B2970:
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b29ac
	if (cr0.eq) goto loc_830B29AC;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b29ac
	if (cr0.eq) goto loc_830B29AC;
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// b 0x830b2994
	goto loc_830B2994;
loc_830B2990:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_830B2994:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x830b2990
	if (!cr0.eq) goto loc_830B2990;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x830b29b0
	goto loc_830B29B0;
loc_830B29AC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_830B29B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b1ff0
	sub_830B1FF0(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x830b2a08
	if (cr6.eq) goto loc_830B2A08;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,120
	ctx.r6.s64 = 120;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,191
	ctx.r5.s64 = 191;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B2A08:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b2a5c
	if (cr0.eq) goto loc_830B2A5C;
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x830b2a48
	if (cr0.eq) goto loc_830B2A48;
loc_830B2A20:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x830b2a70
	if (!cr6.gt) goto loc_830B2A70;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x830b2a20
	if (cr6.lt) goto loc_830B2A20;
loc_830B2A48:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B2A5C:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_830B2A68:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b74
	return;
loc_830B2A70:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,121
	ctx.r6.s64 = 121;
	// addi r4,r11,4848
	ctx.r4.s64 = r11.s64 + 4848;
	// li r5,200
	ctx.r5.s64 = 200;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830B2A9C"))) PPC_WEAK_FUNC(sub_830B2A9C);
PPC_FUNC_IMPL(__imp__sub_830B2A9C) {
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
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B2AC8"))) PPC_WEAK_FUNC(sub_830B2AC8);
PPC_FUNC_IMPL(__imp__sub_830B2AC8) {
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
	// bl 0x830af648
	sub_830AF648(ctx, base);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,5616
	r11.s64 = r11.s64 + 5616;
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

__attribute__((alias("__imp__sub_830B2B08"))) PPC_WEAK_FUNC(sub_830B2B08);
PPC_FUNC_IMPL(__imp__sub_830B2B08) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r4,94
	ctx.r4.s64 = 94;
	// bl 0x830ab9d8
	sub_830AB9D8(ctx, base);
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

__attribute__((alias("__imp__sub_830B2B48"))) PPC_WEAK_FUNC(sub_830B2B48);
PPC_FUNC_IMPL(__imp__sub_830B2B48) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x830ab9d8
	sub_830AB9D8(ctx, base);
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

__attribute__((alias("__imp__sub_830B2B88"))) PPC_WEAK_FUNC(sub_830B2B88);
PPC_FUNC_IMPL(__imp__sub_830B2B88) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r31,48(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ab610
	sub_830AB610(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830ab720
	sub_830AB720(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B2BE8"))) PPC_WEAK_FUNC(sub_830B2BE8);
PPC_FUNC_IMPL(__imp__sub_830B2BE8) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830ab610
	sub_830AB610(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B2C30"))) PPC_WEAK_FUNC(sub_830B2C30);
PPC_FUNC_IMPL(__imp__sub_830B2C30) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830ab7c8
	sub_830AB7C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x830ab400
	sub_830AB400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_830B2CA8"))) PPC_WEAK_FUNC(sub_830B2CA8);
PPC_FUNC_IMPL(__imp__sub_830B2CA8) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830b1ff0
	sub_830B1FF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x830ab568
	sub_830AB568(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x830b2d20
	if (cr6.eq) goto loc_830B2D20;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,151
	ctx.r5.s64 = 151;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B2D20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
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

__attribute__((alias("__imp__sub_830B2D48"))) PPC_WEAK_FUNC(sub_830B2D48);
PPC_FUNC_IMPL(__imp__sub_830B2D48) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r11,4576(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4576);
	// sth r11,24(r31)
	PPC_STORE_U16(r31.u32 + 24, r11.u16);
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// li r25,0
	r25.s64 = 0;
	// mr r26,r25
	r26.u64 = r25.u64;
	// mr r24,r25
	r24.u64 = r25.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b2dc4
	if (!cr0.eq) goto loc_830B2DC4;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(r11.s32, 94, xer);
	// bne cr6,0x830b2dc4
	if (!cr6.eq) goto loc_830B2DC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r24,1
	r24.s64 = 1;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,3984(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 3984);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B2DC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// b 0x830b3054
	goto loc_830B3054;
loc_830B2DDC:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x830b2df8
	if (!cr6.eq) goto loc_830B2DF8;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r10,93
	cr6.compare<int32_t>(ctx.r10.s32, 93, xer);
	// bne cr6,0x830b2df8
	if (!cr6.eq) goto loc_830B2DF8;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830b3098
	if (cr0.eq) goto loc_830B3098;
loc_830B2DF8:
	// lwz r30,36(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r27,10
	cr6.compare<int32_t>(r27.s32, 10, xer);
	// bne cr6,0x830b2f08
	if (!cr6.eq) goto loc_830B2F08;
	// cmpwi cr6,r30,99
	cr6.compare<int32_t>(r30.s32, 99, xer);
	// bgt cr6,0x830b2e44
	if (cr6.gt) goto loc_830B2E44;
	// beq cr6,0x830b2ea8
	if (cr6.eq) goto loc_830B2EA8;
	// cmpwi cr6,r30,67
	cr6.compare<int32_t>(r30.s32, 67, xer);
	// beq cr6,0x830b2ea8
	if (cr6.eq) goto loc_830B2EA8;
	// cmpwi cr6,r30,68
	cr6.compare<int32_t>(r30.s32, 68, xer);
	// beq cr6,0x830b2ed0
	if (cr6.eq) goto loc_830B2ED0;
	// cmpwi cr6,r30,73
	cr6.compare<int32_t>(r30.s32, 73, xer);
	// beq cr6,0x830b2ea8
	if (cr6.eq) goto loc_830B2EA8;
	// cmpwi cr6,r30,80
	cr6.compare<int32_t>(r30.s32, 80, xer);
	// beq cr6,0x830b2e88
	if (cr6.eq) goto loc_830B2E88;
	// cmpwi cr6,r30,83
	cr6.compare<int32_t>(r30.s32, 83, xer);
	// beq cr6,0x830b2ed0
	if (cr6.eq) goto loc_830B2ED0;
	// cmpwi cr6,r30,87
	cr6.compare<int32_t>(r30.s32, 87, xer);
	// b 0x830b2e68
	goto loc_830B2E68;
loc_830B2E44:
	// cmpwi cr6,r30,100
	cr6.compare<int32_t>(r30.s32, 100, xer);
	// beq cr6,0x830b2ed0
	if (cr6.eq) goto loc_830B2ED0;
	// cmpwi cr6,r30,105
	cr6.compare<int32_t>(r30.s32, 105, xer);
	// beq cr6,0x830b2ea8
	if (cr6.eq) goto loc_830B2EA8;
	// cmpwi cr6,r30,112
	cr6.compare<int32_t>(r30.s32, 112, xer);
	// beq cr6,0x830b2e88
	if (cr6.eq) goto loc_830B2E88;
	// cmpwi cr6,r30,115
	cr6.compare<int32_t>(r30.s32, 115, xer);
	// beq cr6,0x830b2ed0
	if (cr6.eq) goto loc_830B2ED0;
	// cmpwi cr6,r30,119
	cr6.compare<int32_t>(r30.s32, 119, xer);
loc_830B2E68:
	// beq cr6,0x830b2ed0
	if (cr6.eq) goto loc_830B2ED0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x830b2f18
	goto loc_830B2F18;
loc_830B2E88:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830b0ff8
	sub_830B0FF8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x830b30c0
	if (cr0.eq) goto loc_830B30C0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// b 0x830b2ef4
	goto loc_830B2EF4;
loc_830B2EA8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x830b2f18
	if (!cr0.lt) goto loc_830B2F18;
	// b 0x830b2f00
	goto loc_830B2F00;
loc_830B2ED0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_830B2EF4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B2F00:
	// li r29,1
	r29.s64 = 1;
	// b 0x830b2f18
	goto loc_830B2F18;
loc_830B2F08:
	// cmpwi cr6,r27,24
	cr6.compare<int32_t>(r27.s32, 24, xer);
	// bne cr6,0x830b2f18
	if (!cr6.eq) goto loc_830B2F18;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b30ec
	if (cr0.eq) goto loc_830B30EC;
loc_830B2F18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b3050
	if (!cr0.eq) goto loc_830B3050;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x830b2f48
	if (!cr6.eq) goto loc_830B2F48;
	// cmpwi cr6,r30,91
	cr6.compare<int32_t>(r30.s32, 91, xer);
	// beq cr6,0x830b3184
	if (cr6.eq) goto loc_830B3184;
	// cmpwi cr6,r30,93
	cr6.compare<int32_t>(r30.s32, 93, xer);
	// beq cr6,0x830b3184
	if (cr6.eq) goto loc_830B3184;
	// cmpwi cr6,r30,45
	cr6.compare<int32_t>(r30.s32, 45, xer);
	// beq cr6,0x830b3184
	if (cr6.eq) goto loc_830B3184;
loc_830B2F48:
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b3034
	if (!cr0.eq) goto loc_830B3034;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x830b3034
	if (!cr6.eq) goto loc_830B3034;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830b31cc
	if (cr6.eq) goto loc_830B31CC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x830b2f88
	if (!cr6.eq) goto loc_830B2F88;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r10,93
	cr6.compare<int32_t>(ctx.r10.s32, 93, xer);
	// beq cr6,0x830b31f8
	if (cr6.eq) goto loc_830B31F8;
loc_830B2F88:
	// cmpwi cr6,r11,24
	cr6.compare<int32_t>(r11.s32, 24, xer);
	// beq cr6,0x830b31f8
	if (cr6.eq) goto loc_830B31F8;
	// lwz r29,36(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r25,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r25.u16);
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r29.u16);
	// bne cr6,0x830b2ffc
	if (!cr6.eq) goto loc_830B2FFC;
	// cmpwi cr6,r29,91
	cr6.compare<int32_t>(r29.s32, 91, xer);
	// beq cr6,0x830b2fbc
	if (cr6.eq) goto loc_830B2FBC;
	// cmpwi cr6,r29,93
	cr6.compare<int32_t>(r29.s32, 93, xer);
	// beq cr6,0x830b2fbc
	if (cr6.eq) goto loc_830B2FBC;
	// cmpwi cr6,r29,45
	cr6.compare<int32_t>(r29.s32, 45, xer);
	// bne cr6,0x830b301c
	if (!cr6.eq) goto loc_830B301C;
loc_830B2FBC:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,142
	ctx.r6.s64 = 142;
	// li r5,296
	ctx.r5.s64 = 296;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83090430
	sub_83090430(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B2FFC:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x830b301c
	if (!cr6.eq) goto loc_830B301C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_830B301C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bgt cr6,0x830b323c
	if (cr6.gt) goto loc_830B323C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// b 0x830b3038
	goto loc_830B3038;
loc_830B3034:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_830B3038:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B3050:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_830B3054:
	// lhz r27,32(r31)
	r27.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x830b2ddc
	if (!cr6.eq) goto loc_830B2DDC;
loc_830B3060:
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830b3284
	if (!cr6.eq) goto loc_830B3284;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,138
	ctx.r6.s64 = 138;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,317
	ctx.r5.s64 = 317;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B3098:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b3060
	if (cr0.eq) goto loc_830B3060;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x830b3060
	goto loc_830B3060;
loc_830B30C0:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,136
	ctx.r6.s64 = 136;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,229
	ctx.r5.s64 = 229;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B30EC:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b3110
	if (cr0.eq) goto loc_830B3110;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r26
	r28.u64 = r26.u64;
loc_830B3110:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,32(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b3158
	if (!cr0.eq) goto loc_830B3158;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(r11.s32, 93, xer);
	// beq cr6,0x830b3060
	if (cr6.eq) goto loc_830B3060;
loc_830B3158:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,141
	ctx.r6.s64 = 141;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,252
	ctx.r5.s64 = 252;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B3184:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r30.u16);
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// sth r25,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r25.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,142
	ctx.r6.s64 = 142;
	// li r5,267
	ctx.r5.s64 = 267;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83090430
	sub_83090430(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B31CC:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r6,138
	ctx.r6.s64 = 138;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,277
	ctx.r5.s64 = 277;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B31F8:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,-29856
	ctx.r8.s64 = r11.s64 + -29856;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// li r6,142
	ctx.r6.s64 = 142;
	// li r5,283
	ctx.r5.s64 = 283;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83090430
	sub_83090430(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B323C:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r30.u16);
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// sth r25,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r25.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,145
	ctx.r6.s64 = 145;
	// li r5,306
	ctx.r5.s64 = 306;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83090430
	sub_83090430(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B3284:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r11,4572(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4572);
	// sth r11,24(r31)
	PPC_STORE_U16(r31.u32 + 24, r11.u16);
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830B32D0"))) PPC_WEAK_FUNC(sub_830B32D0);
PPC_FUNC_IMPL(__imp__sub_830B32D0) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B3330"))) PPC_WEAK_FUNC(sub_830B3330);
PPC_FUNC_IMPL(__imp__sub_830B3330) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,336
	ctx.r5.s64 = 336;
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
}

__attribute__((alias("__imp__sub_830B3368"))) PPC_WEAK_FUNC(sub_830B3368);
PPC_FUNC_IMPL(__imp__sub_830B3368) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,342
	ctx.r5.s64 = 342;
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
}

__attribute__((alias("__imp__sub_830B33A0"))) PPC_WEAK_FUNC(sub_830B33A0);
PPC_FUNC_IMPL(__imp__sub_830B33A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,348
	ctx.r5.s64 = 348;
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
}

__attribute__((alias("__imp__sub_830B33D8"))) PPC_WEAK_FUNC(sub_830B33D8);
PPC_FUNC_IMPL(__imp__sub_830B33D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,354
	ctx.r5.s64 = 354;
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
}

__attribute__((alias("__imp__sub_830B3410"))) PPC_WEAK_FUNC(sub_830B3410);
PPC_FUNC_IMPL(__imp__sub_830B3410) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
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

__attribute__((alias("__imp__sub_830B3458"))) PPC_WEAK_FUNC(sub_830B3458);
PPC_FUNC_IMPL(__imp__sub_830B3458) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,99
	ctx.r4.s64 = 99;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
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

__attribute__((alias("__imp__sub_830B34A0"))) PPC_WEAK_FUNC(sub_830B34A0);
PPC_FUNC_IMPL(__imp__sub_830B34A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,372
	ctx.r5.s64 = 372;
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
}

__attribute__((alias("__imp__sub_830B34D8"))) PPC_WEAK_FUNC(sub_830B34D8);
PPC_FUNC_IMPL(__imp__sub_830B34D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,378
	ctx.r5.s64 = 378;
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
}

__attribute__((alias("__imp__sub_830B3510"))) PPC_WEAK_FUNC(sub_830B3510);
PPC_FUNC_IMPL(__imp__sub_830B3510) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,73
	ctx.r4.s64 = 73;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
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

__attribute__((alias("__imp__sub_830B3558"))) PPC_WEAK_FUNC(sub_830B3558);
PPC_FUNC_IMPL(__imp__sub_830B3558) {
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
	// bl 0x830af778
	sub_830AF778(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,105
	ctx.r4.s64 = 105;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
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

__attribute__((alias("__imp__sub_830B35A0"))) PPC_WEAK_FUNC(sub_830B35A0);
PPC_FUNC_IMPL(__imp__sub_830B35A0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,396
	ctx.r5.s64 = 396;
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
}

__attribute__((alias("__imp__sub_830B35D8"))) PPC_WEAK_FUNC(sub_830B35D8);
PPC_FUNC_IMPL(__imp__sub_830B35D8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,402
	ctx.r5.s64 = 402;
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
}

__attribute__((alias("__imp__sub_830B3610"))) PPC_WEAK_FUNC(sub_830B3610);
PPC_FUNC_IMPL(__imp__sub_830B3610) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,408
	ctx.r5.s64 = 408;
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
}

__attribute__((alias("__imp__sub_830B3648"))) PPC_WEAK_FUNC(sub_830B3648);
PPC_FUNC_IMPL(__imp__sub_830B3648) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,414
	ctx.r5.s64 = 414;
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
}

__attribute__((alias("__imp__sub_830B3680"))) PPC_WEAK_FUNC(sub_830B3680);
PPC_FUNC_IMPL(__imp__sub_830B3680) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,420
	ctx.r5.s64 = 420;
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
}

__attribute__((alias("__imp__sub_830B36B8"))) PPC_WEAK_FUNC(sub_830B36B8);
PPC_FUNC_IMPL(__imp__sub_830B36B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,426
	ctx.r5.s64 = 426;
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
}

__attribute__((alias("__imp__sub_830B36F0"))) PPC_WEAK_FUNC(sub_830B36F0);
PPC_FUNC_IMPL(__imp__sub_830B36F0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,432
	ctx.r5.s64 = 432;
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
}

__attribute__((alias("__imp__sub_830B3728"))) PPC_WEAK_FUNC(sub_830B3728);
PPC_FUNC_IMPL(__imp__sub_830B3728) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,438
	ctx.r5.s64 = 438;
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
}

__attribute__((alias("__imp__sub_830B3760"))) PPC_WEAK_FUNC(sub_830B3760);
PPC_FUNC_IMPL(__imp__sub_830B3760) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,444
	ctx.r5.s64 = 444;
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
}

__attribute__((alias("__imp__sub_830B3798"))) PPC_WEAK_FUNC(sub_830B3798);
PPC_FUNC_IMPL(__imp__sub_830B3798) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,450
	ctx.r5.s64 = 450;
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
}

__attribute__((alias("__imp__sub_830B37D0"))) PPC_WEAK_FUNC(sub_830B37D0);
PPC_FUNC_IMPL(__imp__sub_830B37D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,99
	cr6.compare<int32_t>(ctx.r4.s32, 99, xer);
	// bgt cr6,0x830b3890
	if (cr6.gt) goto loc_830B3890;
	// beq cr6,0x830b3878
	if (cr6.eq) goto loc_830B3878;
	// cmpwi cr6,r4,67
	cr6.compare<int32_t>(ctx.r4.s32, 67, xer);
	// beq cr6,0x830b3860
	if (cr6.eq) goto loc_830B3860;
	// cmpwi cr6,r4,68
	cr6.compare<int32_t>(ctx.r4.s32, 68, xer);
	// beq cr6,0x830b3848
	if (cr6.eq) goto loc_830B3848;
	// cmpwi cr6,r4,73
	cr6.compare<int32_t>(ctx.r4.s32, 73, xer);
	// beq cr6,0x830b3830
	if (cr6.eq) goto loc_830B3830;
	// cmpwi cr6,r4,83
	cr6.compare<int32_t>(ctx.r4.s32, 83, xer);
	// beq cr6,0x830b381c
	if (cr6.eq) goto loc_830B381C;
	// cmpwi cr6,r4,87
	cr6.compare<int32_t>(ctx.r4.s32, 87, xer);
	// bne cr6,0x830b38b0
	if (!cr6.eq) goto loc_830B38B0;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,5464
	r11.s64 = r11.s64 + 5464;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B381C:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,5464
	ctx.r4.s64 = r11.s64 + 5464;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B3830:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,5464
	r11.s64 = r11.s64 + 5464;
	// addi r4,r11,104
	ctx.r4.s64 = r11.s64 + 104;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B3848:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,5464
	r11.s64 = r11.s64 + 5464;
	// addi r4,r11,24
	ctx.r4.s64 = r11.s64 + 24;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B3860:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,5464
	r11.s64 = r11.s64 + 5464;
	// addi r4,r11,72
	ctx.r4.s64 = r11.s64 + 72;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B3878:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,5464
	r11.s64 = r11.s64 + 5464;
	// addi r4,r11,72
	ctx.r4.s64 = r11.s64 + 72;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B3890:
	// cmpwi cr6,r4,100
	cr6.compare<int32_t>(ctx.r4.s32, 100, xer);
	// beq cr6,0x830b38fc
	if (cr6.eq) goto loc_830B38FC;
	// cmpwi cr6,r4,105
	cr6.compare<int32_t>(ctx.r4.s32, 105, xer);
	// beq cr6,0x830b38e4
	if (cr6.eq) goto loc_830B38E4;
	// cmpwi cr6,r4,115
	cr6.compare<int32_t>(ctx.r4.s32, 115, xer);
	// beq cr6,0x830b38d0
	if (cr6.eq) goto loc_830B38D0;
	// cmpwi cr6,r4,119
	cr6.compare<int32_t>(ctx.r4.s32, 119, xer);
	// beq cr6,0x830b38b8
	if (cr6.eq) goto loc_830B38B8;
loc_830B38B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830B38B8:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,5464
	r11.s64 = r11.s64 + 5464;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B38D0:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,5464
	ctx.r4.s64 = r11.s64 + 5464;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B38E4:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,5464
	r11.s64 = r11.s64 + 5464;
	// addi r4,r11,104
	ctx.r4.s64 = r11.s64 + 104;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
loc_830B38FC:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,5464
	r11.s64 = r11.s64 + 5464;
	// addi r4,r11,24
	ctx.r4.s64 = r11.s64 + 24;
	// b 0x830abd98
	sub_830ABD98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830B3918"))) PPC_WEAK_FUNC(sub_830B3918);
PPC_FUNC_IMPL(__imp__sub_830B3918) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,32(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x830b3960
	if (cr6.eq) goto loc_830B3960;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,122
	ctx.r6.s64 = 122;
	// addi r4,r11,5744
	ctx.r4.s64 = r11.s64 + 5744;
	// li r5,497
	ctx.r5.s64 = 497;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830af5d8
	sub_830AF5D8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B3960:
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,110
	cr6.compare<int32_t>(r11.s32, 110, xer);
	// bgt cr6,0x830b39b0
	if (cr6.gt) goto loc_830B39B0;
	// beq cr6,0x830b39a8
	if (cr6.eq) goto loc_830B39A8;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// blt cr6,0x830b39d0
	if (cr6.lt) goto loc_830B39D0;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// ble cr6,0x830b3a30
	if (!cr6.gt) goto loc_830B3A30;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// ble cr6,0x830b39d0
	if (!cr6.gt) goto loc_830B39D0;
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// ble cr6,0x830b3a30
	if (!cr6.gt) goto loc_830B3A30;
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(r11.s32, 63, xer);
	// beq cr6,0x830b3a30
	if (cr6.eq) goto loc_830B3A30;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// ble cr6,0x830b39d0
	if (!cr6.gt) goto loc_830B39D0;
	// cmpwi cr6,r11,94
	cr6.compare<int32_t>(r11.s32, 94, xer);
	// b 0x830b39cc
	goto loc_830B39CC;
loc_830B39A8:
	// li r11,10
	r11.s64 = 10;
	// b 0x830b3a30
	goto loc_830B3A30;
loc_830B39B0:
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(r11.s32, 114, xer);
	// beq cr6,0x830b3a2c
	if (cr6.eq) goto loc_830B3A2C;
	// cmpwi cr6,r11,116
	cr6.compare<int32_t>(r11.s32, 116, xer);
	// beq cr6,0x830b3a24
	if (cr6.eq) goto loc_830B3A24;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// ble cr6,0x830b39d0
	if (!cr6.gt) goto loc_830B39D0;
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(r11.s32, 125, xer);
loc_830B39CC:
	// ble cr6,0x830b3a30
	if (!cr6.gt) goto loc_830B3A30;
loc_830B39D0:
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r11.u16);
	// li r11,0
	r11.s64 = 0;
	// li r31,92
	r31.s64 = 92;
	// addi r4,r10,5744
	ctx.r4.s64 = ctx.r10.s64 + 5744;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r11.u16);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// li r6,152
	ctx.r6.s64 = 152;
	// li r5,529
	ctx.r5.s64 = 529;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83090430
	sub_83090430(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-7304
	ctx.r4.s64 = r11.s64 + -7304;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B3A24:
	// li r11,9
	r11.s64 = 9;
	// b 0x830b3a30
	goto loc_830B3A30;
loc_830B3A2C:
	// li r11,13
	r11.s64 = 13;
loc_830B3A30:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
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

__attribute__((alias("__imp__sub_830B3A48"))) PPC_WEAK_FUNC(sub_830B3A48);
PPC_FUNC_IMPL(__imp__sub_830B3A48) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5616
	r11.s64 = r11.s64 + 5616;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830af6c8
	sub_830AF6C8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b3a84
	if (cr0.eq) goto loc_830B3A84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B3A84:
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

__attribute__((alias("__imp__sub_830B3AA0"))) PPC_WEAK_FUNC(sub_830B3AA0);
PPC_FUNC_IMPL(__imp__sub_830B3AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32232
	r11.s64 = -2112356352;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// addi r10,r11,5804
	ctx.r10.s64 = r11.s64 + 5804;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B3AC8"))) PPC_WEAK_FUNC(sub_830B3AC8);
PPC_FUNC_IMPL(__imp__sub_830B3AC8) {
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_830B3B30"))) PPC_WEAK_FUNC(sub_830B3B30);
PPC_FUNC_IMPL(__imp__sub_830B3B30) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830b3b5c
	if (!cr6.gt) goto loc_830B3B5C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x830b3ba8
	if (!cr6.lt) goto loc_830B3BA8;
loc_830B3B5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830b3ac8
	sub_830B3AC8(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
loc_830B3BA8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830b3be8
	if (!cr6.gt) goto loc_830B3BE8;
	// li r11,0
	r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_830B3BC4:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r9.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x830b3bc4
	if (cr6.lt) goto loc_830B3BC4;
loc_830B3BE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B3BF0"))) PPC_WEAK_FUNC(sub_830B3BF0);
PPC_FUNC_IMPL(__imp__sub_830B3BF0) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5804
	r11.s64 = r11.s64 + 5804;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830b3ac8
	sub_830B3AC8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b3c2c
	if (cr0.eq) goto loc_830B3C2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B3C2C:
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

__attribute__((alias("__imp__sub_830B3C48"))) PPC_WEAK_FUNC(sub_830B3C48);
PPC_FUNC_IMPL(__imp__sub_830B3C48) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b3cc4
	if (cr0.eq) goto loc_830B3CC4;
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
loc_830B3CC4:
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

__attribute__((alias("__imp__sub_830B3CD8"))) PPC_WEAK_FUNC(sub_830B3CD8);
PPC_FUNC_IMPL(__imp__sub_830B3CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32232
	r11.s64 = -2112356352;
	// addi r11,r11,5832
	r11.s64 = r11.s64 + 5832;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x830b3c48
	sub_830B3C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830B3CE8"))) PPC_WEAK_FUNC(sub_830B3CE8);
PPC_FUNC_IMPL(__imp__sub_830B3CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x830b3d2c
	if (!cr0.gt) goto loc_830B3D2C;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_830B3D00:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// bne cr6,0x830b3d1c
	if (!cr6.eq) goto loc_830B3D1C;
	// andi. r9,r9,13
	ctx.r9.u64 = ctx.r9.u64 & 13;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmpwi cr6,r9,13
	cr6.compare<int32_t>(ctx.r9.s32, 13, xer);
	// bne cr6,0x830b3d34
	if (!cr6.eq) goto loc_830B3D34;
loc_830B3D1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x830b3d00
	if (cr6.lt) goto loc_830B3D00;
loc_830B3D2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830B3D34:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r7
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B3D40"))) PPC_WEAK_FUNC(sub_830B3D40);
PPC_FUNC_IMPL(__imp__sub_830B3D40) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r6,294
	ctx.r6.s64 = 294;
	// addi r4,r11,5856
	ctx.r4.s64 = r11.s64 + 5856;
	// li r5,390
	ctx.r5.s64 = 390;
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
}

__attribute__((alias("__imp__sub_830B3D78"))) PPC_WEAK_FUNC(sub_830B3D78);
PPC_FUNC_IMPL(__imp__sub_830B3D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32232
	r11.s64 = -2112356352;
	// addi r11,r11,5928
	r11.s64 = r11.s64 + 5928;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B3D88"))) PPC_WEAK_FUNC(sub_830B3D88);
PPC_FUNC_IMPL(__imp__sub_830B3D88) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5928
	r11.s64 = r11.s64 + 5928;
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
	// beq cr6,0x830b3dfc
	if (cr6.eq) goto loc_830B3DFC;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_830B3DE8:
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
	// bne 0x830b3de8
	if (!cr0.eq) goto loc_830B3DE8;
loc_830B3DFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B3E08"))) PPC_WEAK_FUNC(sub_830B3E08);
PPC_FUNC_IMPL(__imp__sub_830B3E08) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5832
	r11.s64 = r11.s64 + 5832;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830b3c48
	sub_830B3C48(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b3e44
	if (cr0.eq) goto loc_830B3E44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B3E44:
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

__attribute__((alias("__imp__sub_830B3E68"))) PPC_WEAK_FUNC(sub_830B3E68);
PPC_FUNC_IMPL(__imp__sub_830B3E68) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// beq cr6,0x830b3fc0
	if (cr6.eq) goto loc_830B3FC0;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// beq 0x830b3ea0
	if (cr0.eq) goto loc_830B3EA0;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x830b3ea4
	goto loc_830B3EA4;
loc_830B3EA0:
	// li r11,0
	r11.s64 = 0;
loc_830B3EA4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// beq cr6,0x830b3fc0
	if (cr6.eq) goto loc_830B3FC0;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x830b3ef0
	if (cr0.eq) goto loc_830B3EF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x830b3d88
	sub_830B3D88(ctx, base);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// addi r10,r11,5952
	ctx.r10.s64 = r11.s64 + 5952;
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x830b3ef4
	goto loc_830B3EF4;
loc_830B3EF0:
	// li r11,0
	r11.s64 = 0;
loc_830B3EF4:
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
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
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830b3fc0
	if (!cr6.gt) goto loc_830B3FC0;
loc_830B3F70:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x830b3fa4
	if (cr0.eq) goto loc_830B3FA4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x830b3fa8
	goto loc_830B3FA8;
loc_830B3FA4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B3FA8:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x830b3f70
	if (cr6.lt) goto loc_830B3F70;
loc_830B3FC0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B3FC8"))) PPC_WEAK_FUNC(sub_830B3FC8);
PPC_FUNC_IMPL(__imp__sub_830B3FC8) {
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
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
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

__attribute__((alias("__imp__sub_830B3FF8"))) PPC_WEAK_FUNC(sub_830B3FF8);
PPC_FUNC_IMPL(__imp__sub_830B3FF8) {
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
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
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

__attribute__((alias("__imp__sub_830B4028"))) PPC_WEAK_FUNC(sub_830B4028);
PPC_FUNC_IMPL(__imp__sub_830B4028) {
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
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830b408c
	if (!cr6.gt) goto loc_830B408C;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_830B4050:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r28,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r28.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stwx r28,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r28.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stwx r28,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r28.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830b4050
	if (cr6.lt) goto loc_830B4050;
loc_830B408C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B4098"))) PPC_WEAK_FUNC(sub_830B4098);
PPC_FUNC_IMPL(__imp__sub_830B4098) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830b4198
	if (!cr6.gt) goto loc_830B4198;
	// li r30,0
	r30.s64 = 0;
loc_830B40C4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// bl 0x8305d5b8
	sub_8305D5B8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stwx r3,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r3.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830b40fc
	if (!cr6.gt) goto loc_830B40FC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x830b4180
	goto loc_830B4180;
loc_830B40FC:
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x830b4134
	if (!cr6.gt) goto loc_830B4134;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_830B410C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x830b412c
	if (cr6.eq) goto loc_830B412C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// blt cr6,0x830b410c
	if (cr6.lt) goto loc_830B410C;
loc_830B412C:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// blt cr6,0x830b4184
	if (cr6.lt) goto loc_830B4184;
loc_830B4134:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b4184
	if (cr0.eq) goto loc_830B4184;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x830b4184
	if (cr6.eq) goto loc_830B4184;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,32(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// clrlwi r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
loc_830B4180:
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
loc_830B4184:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x830b40c4
	if (cr6.lt) goto loc_830B40C4;
loc_830B4198:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830B41A8"))) PPC_WEAK_FUNC(sub_830B41A8);
PPC_FUNC_IMPL(__imp__sub_830B41A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,5832
	ctx.r10.s64 = r11.s64 + 5832;
	// li r11,0
	r11.s64 = 0;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stw r5,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r5.u32);
	// stw r6,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r6.u32);
	// bl 0x830b3e68
	sub_830B3E68(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_830B4230"))) PPC_WEAK_FUNC(sub_830B4230);
PPC_FUNC_IMPL(__imp__sub_830B4230) {
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

__attribute__((alias("__imp__sub_830B4250"))) PPC_WEAK_FUNC(sub_830B4250);
PPC_FUNC_IMPL(__imp__sub_830B4250) {
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
	// bl 0x830b3c48
	sub_830B3C48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830B4280"))) PPC_WEAK_FUNC(sub_830B4280);
PPC_FUNC_IMPL(__imp__sub_830B4280) {
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
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x830b46bc
	if (!cr6.gt) goto loc_830B46BC;
	// li r30,0
	r30.s64 = 0;
	// li r18,1
	r18.s64 = 1;
loc_830B42C0:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwzx r28,r30,r11
	r28.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r11,r30,r10
	r11.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// andi. r11,r11,5
	r11.u64 = r11.u64 & 5;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830b4698
	if (cr6.eq) goto loc_830B4698;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x830b4698
	if (cr6.gt) goto loc_830B4698;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x830b4314
	if (!cr6.eq) goto loc_830B4314;
	// li r11,13
	r11.s64 = 13;
	// stwx r11,r30,r10
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, r11.u32);
loc_830B4314:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b4338
	if (cr0.eq) goto loc_830B4338;
	// lwz r25,8(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x830b4378
	goto loc_830B4378;
loc_830B4338:
	// li r25,0
	r25.s64 = 0;
	// b 0x830b4378
	goto loc_830B4378;
loc_830B4340:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b4358
	if (cr0.eq) goto loc_830B4358;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// b 0x830b435c
	goto loc_830B435C;
loc_830B4358:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B435C:
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x830b4388
	if (!cr6.eq) goto loc_830B4388;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
loc_830B4378:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, r25.s32, xer);
	// blt cr6,0x830b4340
	if (cr6.lt) goto loc_830B4340;
loc_830B4388:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, r25.s32, xer);
	// bne cr6,0x830b43a4
	if (!cr6.eq) goto loc_830B43A4;
loc_830B4398:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stwx r18,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r18.u32);
	// b 0x830b46a8
	goto loc_830B46A8;
loc_830B43A4:
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// b 0x830b43ec
	goto loc_830B43EC;
loc_830B43AC:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b43c4
	if (cr0.eq) goto loc_830B43C4;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// b 0x830b43c8
	goto loc_830B43C8;
loc_830B43C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B43C8:
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x830b43f4
	if (!cr6.eq) goto loc_830B43F4;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
loc_830B43EC:
	// cmpw cr6,r10,r25
	cr6.compare<int32_t>(ctx.r10.s32, r25.s32, xer);
	// blt cr6,0x830b43ac
	if (cr6.lt) goto loc_830B43AC;
loc_830B43F4:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// mr r11,r18
	r11.u64 = r18.u64;
	// cmpw cr6,r4,r24
	cr6.compare<int32_t>(ctx.r4.s32, r24.s32, xer);
	// bgt cr6,0x830b440c
	if (cr6.gt) goto loc_830B440C;
	// li r11,0
	r11.s64 = 0;
loc_830B440C:
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
	// cmpw cr6,r4,r25
	cr6.compare<int32_t>(ctx.r4.s32, r25.s32, xer);
	// beq cr6,0x830b4698
	if (cr6.eq) goto loc_830B4698;
	// cmpw cr6,r4,r28
	cr6.compare<int32_t>(ctx.r4.s32, r28.s32, xer);
	// beq cr6,0x830b4428
	if (cr6.eq) goto loc_830B4428;
	// cmpw cr6,r4,r24
	cr6.compare<int32_t>(ctx.r4.s32, r24.s32, xer);
	// ble cr6,0x830b44fc
	if (!cr6.gt) goto loc_830B44FC;
loc_830B4428:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b443c
	if (cr0.eq) goto loc_830B443C;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// b 0x830b4440
	goto loc_830B4440;
loc_830B443C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B4440:
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830b44fc
	if (!cr6.eq) goto loc_830B44FC;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// beq 0x830b4468
	if (cr0.eq) goto loc_830B4468;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// b 0x830b446c
	goto loc_830B446C;
loc_830B4468:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B446C:
	// lwz r28,8(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r11,4(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830b44ec
	if (!cr6.eq) goto loc_830B44EC;
	// lwz r11,8(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x82fe6bc0
	sub_82FE6BC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b44e4
	if (!cr0.eq) goto loc_830B44E4;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpw cr6,r10,r24
	cr6.compare<int32_t>(ctx.r10.s32, r24.s32, xer);
	// ble cr6,0x830b44cc
	if (!cr6.gt) goto loc_830B44CC;
	// stwx r24,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r24.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
loc_830B44C4:
	// bl 0x82fe6e10
	sub_82FE6E10(ctx, base);
	// b 0x830b46a8
	goto loc_830B46A8;
loc_830B44CC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// b 0x830b44c4
	goto loc_830B44C4;
loc_830B44E4:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe6e10
	sub_82FE6E10(ctx, base);
loc_830B44EC:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
loc_830B44FC:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpw cr6,r4,r25
	cr6.compare<int32_t>(ctx.r4.s32, r25.s32, xer);
	// bne cr6,0x830b4524
	if (!cr6.eq) goto loc_830B4524;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830b4398
	if (cr0.eq) goto loc_830B4398;
	// stwx r24,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r24.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// b 0x830b46a4
	goto loc_830B46A4;
loc_830B4524:
	// bge cr6,0x830b46a8
	if (!cr6.lt) goto loc_830B46A8;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b453c
	if (cr0.eq) goto loc_830B453C;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// b 0x830b4540
	goto loc_830B4540;
loc_830B453C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B4540:
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830b46a8
	if (!cr6.eq) goto loc_830B46A8;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x830b466c
	if (cr6.eq) goto loc_830B466C;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// beq 0x830b4570
	if (cr0.eq) goto loc_830B4570;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// b 0x830b4574
	goto loc_830B4574;
loc_830B4570:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B4574:
	// lwz r27,8(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x830b466c
	if (cr6.eq) goto loc_830B466C;
loc_830B4584:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8302dd08
	sub_8302DD08(ctx, base);
	// lhz r11,4(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 4);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x830b45c4
	if (!cr6.eq) goto loc_830B45C4;
	// lwz r4,16(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// bl 0x82fe6bc0
	sub_82FE6BC0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b45c4
	if (!cr0.eq) goto loc_830B45C4;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r19
	cr6.compare<uint32_t>(r28.u32, r19.u32, xer);
	// blt cr6,0x830b4584
	if (cr6.lt) goto loc_830B4584;
	// b 0x830b466c
	goto loc_830B466C;
loc_830B45C4:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// bne cr6,0x830b466c
	if (!cr6.eq) goto loc_830B466C;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// stwx r9,r30,r10
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, ctx.r9.u32);
	// ble cr6,0x830b4620
	if (!cr6.gt) goto loc_830B4620;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
loc_830B4600:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x830b4620
	if (cr6.eq) goto loc_830B4620;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// blt cr6,0x830b4600
	if (cr6.lt) goto loc_830B4600;
loc_830B4620:
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// bne cr6,0x830b466c
	if (!cr6.eq) goto loc_830B466C;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x8306e240
	sub_8306E240(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b464c
	if (cr0.eq) goto loc_830B464C;
	// lwz r5,44(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x830b4650
	goto loc_830B4650;
loc_830B464C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830B4650:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B466C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x830b46a8
	if (cr6.eq) goto loc_830B46A8;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpw cr6,r10,r24
	cr6.compare<int32_t>(ctx.r10.s32, r24.s32, xer);
	// ble cr6,0x830b4698
	if (!cr6.gt) goto loc_830B4698;
	// stwx r24,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r24.u32);
	// b 0x830b46a8
	goto loc_830B46A8;
loc_830B4698:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_830B46A4:
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
loc_830B46A8:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x830b42c0
	if (cr6.lt) goto loc_830B42C0;
loc_830B46BC:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_830B46C4"))) PPC_WEAK_FUNC(sub_830B46C4);
PPC_FUNC_IMPL(__imp__sub_830B46C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-272
	r31.s64 = r12.s64 + -272;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe6e10
	sub_82FE6E10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B46F8"))) PPC_WEAK_FUNC(sub_830B46F8);
PPC_FUNC_IMPL(__imp__sub_830B46F8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,5952
	r11.s64 = r11.s64 + 5952;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b4768
	if (cr0.eq) goto loc_830B4768;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830b4768
	if (!cr6.gt) goto loc_830B4768;
	// li r29,0
	r29.s64 = 0;
loc_830B473C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b4754
	if (cr0.eq) goto loc_830B4754;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830B4754:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x830b473c
	if (cr6.lt) goto loc_830B473C;
loc_830B4768:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// addi r11,r11,5928
	r11.s64 = r11.s64 + 5928;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B4794"))) PPC_WEAK_FUNC(sub_830B4794);
PPC_FUNC_IMPL(__imp__sub_830B4794) {
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
	// bl 0x830b3d78
	sub_830B3D78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B47C0"))) PPC_WEAK_FUNC(sub_830B47C0);
PPC_FUNC_IMPL(__imp__sub_830B47C0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830b4810
	if (cr6.lt) goto loc_830B4810;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,32144
	ctx.r4.s64 = r11.s64 + 32144;
	// li r5,67
	ctx.r5.s64 = 67;
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
loc_830B4810:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b4838
	if (cr0.eq) goto loc_830B4838;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b4838
	if (cr0.eq) goto loc_830B4838;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830B4838:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B4850"))) PPC_WEAK_FUNC(sub_830B4850);
PPC_FUNC_IMPL(__imp__sub_830B4850) {
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
	// li r28,0
	r28.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830b48b8
	if (!cr6.gt) goto loc_830B48B8;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_830B4878:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b489c
	if (cr0.eq) goto loc_830B489C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b489c
	if (cr0.eq) goto loc_830B489C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830B489C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r28,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r28.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830b4878
	if (cr6.lt) goto loc_830B4878;
loc_830B48B8:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B48C8"))) PPC_WEAK_FUNC(sub_830B48C8);
PPC_FUNC_IMPL(__imp__sub_830B48C8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x830b491c
	if (cr6.lt) goto loc_830B491C;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,32144
	ctx.r4.s64 = r11.s64 + 32144;
	// li r5,144
	ctx.r5.s64 = 144;
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
loc_830B491C:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b4944
	if (cr0.eq) goto loc_830B4944;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b4944
	if (cr0.eq) goto loc_830B4944;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830B4944:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x830b4968
	if (!cr6.eq) goto loc_830B4968;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// b 0x830b49b8
	goto loc_830B49B8;
loc_830B4968:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x830b49a0
	if (!cr6.lt) goto loc_830B49A0;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_830B4978:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x830b4978
	if (cr6.lt) goto loc_830B4978;
loc_830B49A0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
loc_830B49B8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
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

__attribute__((alias("__imp__sub_830B49E0"))) PPC_WEAK_FUNC(sub_830B49E0);
PPC_FUNC_IMPL(__imp__sub_830B49E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830B4A1C"))) PPC_WEAK_FUNC(sub_830B4A1C);
PPC_FUNC_IMPL(__imp__sub_830B4A1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B4A20"))) PPC_WEAK_FUNC(sub_830B4A20);
PPC_FUNC_IMPL(__imp__sub_830B4A20) {
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
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b4a7c
	if (cr0.eq) goto loc_830B4A7C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x830b4a7c
	if (!cr6.gt) goto loc_830B4A7C;
	// li r30,0
	r30.s64 = 0;
loc_830B4A50:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b4a68
	if (cr0.eq) goto loc_830B4A68;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830B4A68:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x830b4a50
	if (cr6.lt) goto loc_830B4A50;
loc_830B4A7C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B4AA0"))) PPC_WEAK_FUNC(sub_830B4AA0);
PPC_FUNC_IMPL(__imp__sub_830B4AA0) {
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
	// bl 0x830b46f8
	sub_830B46F8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b4ad0
	if (cr0.eq) goto loc_830B4AD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B4AD0:
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

__attribute__((alias("__imp__sub_830B4AF0"))) PPC_WEAK_FUNC(sub_830B4AF0);
PPC_FUNC_IMPL(__imp__sub_830B4AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32232
	r11.s64 = -2112356352;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r11,r11,6808
	r11.s64 = r11.s64 + 6808;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B4B08"))) PPC_WEAK_FUNC(sub_830B4B08);
PPC_FUNC_IMPL(__imp__sub_830B4B08) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3652
	r11.s64 = r11.s64 + -3652;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x830b4b34
	if (cr0.eq) goto loc_830B4B34;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B4B34:
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

__attribute__((alias("__imp__sub_830B4B50"))) PPC_WEAK_FUNC(sub_830B4B50);
PPC_FUNC_IMPL(__imp__sub_830B4B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,19552
	ctx.r3.s64 = r11.s64 + 19552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B4B60"))) PPC_WEAK_FUNC(sub_830B4B60);
PPC_FUNC_IMPL(__imp__sub_830B4B60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830b4b80
	if (!cr0.eq) goto loc_830B4B80;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,13880
	r11.s64 = r11.s64 + 13880;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// blr 
	return;
loc_830B4B80:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,55296
	cr6.compare<uint32_t>(r11.u32, 55296, xer);
	// blt cr6,0x830b4ba8
	if (cr6.lt) goto loc_830B4BA8;
	// cmplwi cr6,r11,56319
	cr6.compare<uint32_t>(r11.u32, 56319, xer);
	// bgt cr6,0x830b4ba8
	if (cr6.gt) goto loc_830B4BA8;
	// cmplwi cr6,r10,56320
	cr6.compare<uint32_t>(ctx.r10.u32, 56320, xer);
	// blt cr6,0x830b4ba8
	if (cr6.lt) goto loc_830B4BA8;
	// cmplwi cr6,r10,57343
	cr6.compare<uint32_t>(ctx.r10.u32, 57343, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_830B4BA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B4BB0"))) PPC_WEAK_FUNC(sub_830B4BB0);
PPC_FUNC_IMPL(__imp__sub_830B4BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x830b4bd0
	if (!cr0.eq) goto loc_830B4BD0;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,13880
	r11.s64 = r11.s64 + 13880;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// blr 
	return;
loc_830B4BD0:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,55296
	cr6.compare<uint32_t>(r11.u32, 55296, xer);
	// blt cr6,0x830b4bf8
	if (cr6.lt) goto loc_830B4BF8;
	// cmplwi cr6,r11,56319
	cr6.compare<uint32_t>(r11.u32, 56319, xer);
	// bgt cr6,0x830b4bf8
	if (cr6.gt) goto loc_830B4BF8;
	// cmplwi cr6,r10,56320
	cr6.compare<uint32_t>(ctx.r10.u32, 56320, xer);
	// blt cr6,0x830b4bf8
	if (cr6.lt) goto loc_830B4BF8;
	// cmplwi cr6,r10,57343
	cr6.compare<uint32_t>(ctx.r10.u32, 57343, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_830B4BF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B4C08"))) PPC_WEAK_FUNC(sub_830B4C08);
PPC_FUNC_IMPL(__imp__sub_830B4C08) {
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
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b28
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r5,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r5.u32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r28,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83097e78
	sub_83097E78(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r28,-5
	r11.s64 = r28.s64 + -5;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x830b4d74
	if (cr6.gt) goto loc_830B4D74;
	// lis r12,-32232
	r12.s64 = -2112356352;
	// addi r12,r12,7040
	r12.s64 = r12.s64 + 7040;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-31989
	r12.s64 = -2096431104;
	// addi r12,r12,19580
	r12.s64 = r12.s64 + 19580;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_830B4C7C;
	case 1:
		goto loc_830B4C88;
	case 2:
		goto loc_830B4C94;
	case 3:
		goto loc_830B4CA0;
	case 4:
		goto loc_830B4CAC;
	case 5:
		goto loc_830B4CB8;
	case 6:
		goto loc_830B4CC4;
	case 7:
		goto loc_830B4CD0;
	case 8:
		goto loc_830B4CDC;
	default:
		__builtin_unreachable();
	}
loc_830B4C7C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83099138
	sub_83099138(ctx, base);
	// b 0x830b4ce4
	goto loc_830B4CE4;
loc_830B4C88:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830999e0
	sub_830999E0(ctx, base);
	// b 0x830b4ce4
	goto loc_830B4CE4;
loc_830B4C94:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83099a98
	sub_83099A98(ctx, base);
	// b 0x830b4ce4
	goto loc_830B4CE4;
loc_830B4CA0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83099080
	sub_83099080(ctx, base);
	// b 0x830b4ce4
	goto loc_830B4CE4;
loc_830B4CAC:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830990d8
	sub_830990D8(ctx, base);
	// b 0x830b4ce4
	goto loc_830B4CE4;
loc_830B4CB8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83098aa0
	sub_83098AA0(ctx, base);
	// b 0x830b4ce4
	goto loc_830B4CE4;
loc_830B4CC4:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83098b58
	sub_83098B58(ctx, base);
	// b 0x830b4ce4
	goto loc_830B4CE4;
loc_830B4CD0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83098808
	sub_83098808(ctx, base);
	// b 0x830b4ce4
	goto loc_830B4CE4;
loc_830B4CDC:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83098940
	sub_83098940(ctx, base);
loc_830B4CE4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b4d20
	if (cr0.eq) goto loc_830B4D20;
	// li r11,0
	r11.s64 = 0;
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r29.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// b 0x830b4d24
	goto loc_830B4D24;
loc_830B4D20:
	// li r30,0
	r30.s64 = 0;
loc_830B4D24:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lfd f0,160(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 160);
	// stfd f0,32(r30)
	PPC_STORE_U64(r30.u32 + 32, f0.u64);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83096ef0
	sub_83096EF0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830b4d90
	goto loc_830B4D90;
loc_830B4D74:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83096ef0
	sub_83096EF0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830b4d8c
	goto loc_830B4D8C;
	// b 0x830b4d8c
	goto loc_830B4D8C;
loc_830B4D8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B4D90:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B4DA0"))) PPC_WEAK_FUNC(sub_830B4DA0);
PPC_FUNC_IMPL(__imp__sub_830B4DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x830b4dbc
	if (cr6.eq) goto loc_830B4DBC;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x830b4de4
	if (!cr6.eq) goto loc_830B4DE4;
loc_830B4DBC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,343
	cr6.compare<int32_t>(r11.s32, 343, xer);
	// beq cr6,0x830b4dec
	if (cr6.eq) goto loc_830B4DEC;
	// cmpwi cr6,r11,344
	cr6.compare<int32_t>(r11.s32, 344, xer);
	// beq cr6,0x830b4dec
	if (cr6.eq) goto loc_830B4DEC;
	// cmpwi cr6,r11,345
	cr6.compare<int32_t>(r11.s32, 345, xer);
	// beq cr6,0x830b4dec
	if (cr6.eq) goto loc_830B4DEC;
	// cmpwi cr6,r11,352
	cr6.compare<int32_t>(r11.s32, 352, xer);
	// beq cr6,0x830b4dec
	if (cr6.eq) goto loc_830B4DEC;
loc_830B4DE4:
	// li r11,0
	r11.s64 = 0;
	// b 0x830b4df0
	goto loc_830B4DF0;
loc_830B4DEC:
	// li r11,1
	r11.s64 = 1;
loc_830B4DF0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lis r3,-31989
	ctx.r3.s64 = -2096431104;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// addi r3,r3,19848
	ctx.r3.s64 = ctx.r3.s64 + 19848;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B4E24"))) PPC_WEAK_FUNC(sub_830B4E24);
PPC_FUNC_IMPL(__imp__sub_830B4E24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// li r11,7
	r11.s64 = 7;
	// lis r3,-31989
	ctx.r3.s64 = -2096431104;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,19852
	ctx.r3.s64 = ctx.r3.s64 + 19852;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B4E48"))) PPC_WEAK_FUNC(sub_830B4E48);
PPC_FUNC_IMPL(__imp__sub_830B4E48) {
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
	// bl 0x83096ef0
	sub_83096EF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B4E70"))) PPC_WEAK_FUNC(sub_830B4E70);
PPC_FUNC_IMPL(__imp__sub_830B4E70) {
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
	// lbz r11,40(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 40);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b4eb0
	if (cr0.eq) goto loc_830B4EB0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
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
loc_830B4EB0:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b4ec0
	if (cr0.eq) goto loc_830B4EC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B4EC0:
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

__attribute__((alias("__imp__sub_830B4EE0"))) PPC_WEAK_FUNC(sub_830B4EE0);
PPC_FUNC_IMPL(__imp__sub_830B4EE0) {
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
	// ble cr6,0x830b4f6c
	if (!cr6.gt) goto loc_830B4F6C;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_830B4F08:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r30,r11,r29
	r30.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830b4f50
	if (cr0.eq) goto loc_830B4F50;
loc_830B4F18:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b4f3c
	if (cr0.eq) goto loc_830B4F3C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b4f3c
	if (cr0.eq) goto loc_830B4F3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830b4e70
	sub_830B4E70(ctx, base);
loc_830B4F3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x830b4f18
	if (!cr6.eq) goto loc_830B4F18;
loc_830B4F50:
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
	// blt cr6,0x830b4f08
	if (cr6.lt) goto loc_830B4F08;
loc_830B4F6C:
	// stw r26,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830B4F78"))) PPC_WEAK_FUNC(sub_830B4F78);
PPC_FUNC_IMPL(__imp__sub_830B4F78) {
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
	// lwz r31,-14996(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -14996);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830b4fac
	if (cr6.eq) goto loc_830B4FAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffd710
	sub_82FFD710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B4FAC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-14996(r30)
	PPC_STORE_U32(r30.u32 + -14996, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B4FD0"))) PPC_WEAK_FUNC(sub_830B4FD0);
PPC_FUNC_IMPL(__imp__sub_830B4FD0) {
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
	// lwz r31,-14992(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -14992);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830b5004
	if (cr6.eq) goto loc_830B5004;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830913a8
	sub_830913A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B5004:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-14992(r30)
	PPC_STORE_U32(r30.u32 + -14992, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B5028"))) PPC_WEAK_FUNC(sub_830B5028);
PPC_FUNC_IMPL(__imp__sub_830B5028) {
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
	// bl 0x830b4ee0
	sub_830B4EE0(ctx, base);
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
	// beq 0x830b5078
	if (cr0.eq) goto loc_830B5078;
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
loc_830B5078:
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

__attribute__((alias("__imp__sub_830B5090"))) PPC_WEAK_FUNC(sub_830B5090);
PPC_FUNC_IMPL(__imp__sub_830B5090) {
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
	// blt cr6,0x830b50c4
	if (cr6.lt) goto loc_830B50C4;
	// bl 0x83070c40
	sub_83070C40(ctx, base);
loc_830B50C4:
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
	// beq 0x830b5108
	if (cr0.eq) goto loc_830B5108;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b50fc
	if (cr0.eq) goto loc_830B50FC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b50fc
	if (cr0.eq) goto loc_830B50FC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830b4e70
	sub_830B4E70(ctx, base);
loc_830B50FC:
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// b 0x830b515c
	goto loc_830B515C;
loc_830B5108:
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
	// beq 0x830b5140
	if (cr0.eq) goto loc_830B5140;
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
	// b 0x830b5144
	goto loc_830B5144;
loc_830B5140:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830B5144:
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
loc_830B515C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B5170"))) PPC_WEAK_FUNC(sub_830B5170);
PPC_FUNC_IMPL(__imp__sub_830B5170) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r3,-14996(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14996);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830b51fc
	if (!cr6.eq) goto loc_830B51FC;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,-16116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -16116);
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lwz r11,-14996(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -14996);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830b51f0
	if (!cr6.eq) goto loc_830B51F0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b51d4
	if (cr0.eq) goto loc_830B51D4;
	// bl 0x82ffd6d0
	sub_82FFD6D0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x830b51d8
	goto loc_830B51D8;
loc_830B51D4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_830B51D8:
	// lis r11,-31989
	r11.s64 = -2096431104;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r9,-14996(r30)
	PPC_STORE_U32(r30.u32 + -14996, ctx.r9.u32);
	// addi r4,r11,20344
	ctx.r4.s64 = r11.s64 + 20344;
	// addi r3,r10,-14984
	ctx.r3.s64 = ctx.r10.s64 + -14984;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
loc_830B51F0:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// lwz r3,-14996(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14996);
loc_830B51FC:
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

__attribute__((alias("__imp__sub_830B5214"))) PPC_WEAK_FUNC(sub_830B5214);
PPC_FUNC_IMPL(__imp__sub_830B5214) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B523C"))) PPC_WEAK_FUNC(sub_830B523C);
PPC_FUNC_IMPL(__imp__sub_830B523C) {
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

__attribute__((alias("__imp__sub_830B5270"))) PPC_WEAK_FUNC(sub_830B5270);
PPC_FUNC_IMPL(__imp__sub_830B5270) {
	PPC_FUNC_PROLOGUE();
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// lwz r3,-14992(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14992);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830b531c
	if (!cr6.eq) goto loc_830B531C;
	// bl 0x830b5170
	sub_830B5170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lwz r11,-14992(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -14992);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830b5310
	if (!cr6.eq) goto loc_830B5310;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,-16120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -16120);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b52f4
	if (cr0.eq) goto loc_830B52F4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,-16120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + -16120);
	// addi r5,r11,-5408
	ctx.r5.s64 = r11.s64 + -5408;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-22464
	ctx.r4.s64 = r11.s64 + -22464;
	// bl 0x83092310
	sub_83092310(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830b52f8
	goto loc_830B52F8;
loc_830B52F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B52F8:
	// stw r3,-14992(r29)
	PPC_STORE_U32(r29.u32 + -14992, ctx.r3.u32);
	// lis r11,-31989
	r11.s64 = -2096431104;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r4,r11,20432
	ctx.r4.s64 = r11.s64 + 20432;
	// addi r3,r10,-14984
	ctx.r3.s64 = ctx.r10.s64 + -14984;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
loc_830B5310:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// lwz r3,-14992(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14992);
loc_830B531C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830b531c
	goto loc_830B531C;
}

__attribute__((alias("__imp__sub_830B533C"))) PPC_WEAK_FUNC(sub_830B533C);
PPC_FUNC_IMPL(__imp__sub_830B533C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31989
	ctx.r3.s64 = -2096431104;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,21284
	ctx.r3.s64 = ctx.r3.s64 + 21284;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B5350"))) PPC_WEAK_FUNC(sub_830B5350);
PPC_FUNC_IMPL(__imp__sub_830B5350) {
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
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B5378"))) PPC_WEAK_FUNC(sub_830B5378);
PPC_FUNC_IMPL(__imp__sub_830B5378) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r11,r11,-16120
	r11.s64 = r11.s64 + -16120;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
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

__attribute__((alias("__imp__sub_830B53B8"))) PPC_WEAK_FUNC(sub_830B53B8);
PPC_FUNC_IMPL(__imp__sub_830B53B8) {
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
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b14
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r23,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r23.u32);
	// cmplwi cr6,r24,30
	cr6.compare<uint32_t>(r24.u32, 30, xer);
	// bgt cr6,0x830b5bbc
	if (cr6.gt) goto loc_830B5BBC;
	// lis r12,-32232
	r12.s64 = -2112356352;
	// addi r12,r12,7056
	r12.s64 = r12.s64 + 7056;
	// rlwinm r0,r24,1,0,30
	r0.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-31989
	r12.s64 = -2096431104;
	// addi r12,r12,21528
	r12.s64 = r12.s64 + 21528;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r24.u64) {
	case 0:
		goto loc_830B555C;
	case 1:
		goto loc_830B5418;
	case 2:
		goto loc_830B5BBC;
	case 3:
		goto loc_830B5BBC;
	case 4:
		goto loc_830B5BBC;
	case 5:
		goto loc_830B5BBC;
	case 6:
		goto loc_830B5BBC;
	case 7:
		goto loc_830B5BBC;
	case 8:
		goto loc_830B5BBC;
	case 9:
		goto loc_830B5BBC;
	case 10:
		goto loc_830B5BBC;
	case 11:
		goto loc_830B5BBC;
	case 12:
		goto loc_830B5BBC;
	case 13:
		goto loc_830B5BBC;
	case 14:
		goto loc_830B546C;
	case 15:
		goto loc_830B548C;
	case 16:
		goto loc_830B54A0;
	case 17:
		goto loc_830B54B4;
	case 18:
		goto loc_830B554C;
	case 19:
		goto loc_830B55AC;
	case 20:
		goto loc_830B562C;
	case 21:
		goto loc_830B562C;
	case 22:
		goto loc_830B57C0;
	case 23:
		goto loc_830B5858;
	case 24:
		goto loc_830B5970;
	case 25:
		goto loc_830B5A08;
	case 26:
		goto loc_830B5A08;
	case 27:
		goto loc_830B5A08;
	case 28:
		goto loc_830B5AA0;
	case 29:
		goto loc_830B5A08;
	case 30:
		goto loc_830B5AA0;
	default:
		__builtin_unreachable();
	}
loc_830B5418:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r11,-22392
	r28.s64 = r11.s64 + -22392;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r27,-22136(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + -22136);
loc_830B542C:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// bge cr6,0x830b5458
	if (!cr6.lt) goto loc_830B5458;
	// rlwinm r11,r29,6,0,25
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5454
	if (!cr0.eq) goto loc_830B5454;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x830b542c
	goto loc_830B542C;
loc_830B5454:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
loc_830B5458:
	// bne cr6,0x830b5bb4
	if (!cr6.eq) goto loc_830B5BB4;
	// li r11,7
	r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// b 0x830b5bc0
	goto loc_830B5BC0;
loc_830B546C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8309be28
	sub_8309BE28(ctx, base);
loc_830B5474:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x830b5bb4
	if (!cr6.eq) goto loc_830B5BB4;
	// li r11,7
	r11.s64 = 7;
loc_830B5484:
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// b 0x830b5bbc
	goto loc_830B5BBC;
loc_830B548C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8309bc60
	sub_8309BC60(ctx, base);
	// b 0x830b5474
	goto loc_830B5474;
loc_830B54A0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82fe4c08
	sub_82FE4C08(ctx, base);
loc_830B54AC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830b5bc0
	goto loc_830B5BC0;
loc_830B54B4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830b5504
	if (!cr6.eq) goto loc_830B5504;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830b54f4
	if (cr6.eq) goto loc_830B54F4;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b54f4
	if (cr0.eq) goto loc_830B54F4;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
loc_830B54D4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b54e8
	if (cr0.eq) goto loc_830B54E8;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b54d4
	goto loc_830B54D4;
loc_830B54E8:
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b54f8
	goto loc_830B54F8;
loc_830B54F4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B54F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1b68
	sub_82FE1B68(ctx, base);
	// b 0x830b54ac
	goto loc_830B54AC;
loc_830B5504:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830b553c
	if (cr6.eq) goto loc_830B553C;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b553c
	if (cr0.eq) goto loc_830B553C;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
loc_830B551C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b5530
	if (cr0.eq) goto loc_830B5530;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b551c
	goto loc_830B551C;
loc_830B5530:
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b5540
	goto loc_830B5540;
loc_830B553C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B5540:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1e28
	sub_82FE1E28(ctx, base);
	// b 0x830b54ac
	goto loc_830B54AC;
loc_830B554C:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fdaf00
	sub_82FDAF00(ctx, base);
	// b 0x830b54ac
	goto loc_830B54AC;
loc_830B555C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830b5588
	if (!cr6.eq) goto loc_830B5588;
loc_830B5564:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b5bb4
	if (cr0.eq) goto loc_830B5BB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830b4b60
	sub_830B4B60(ctx, base);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5564
	if (!cr0.eq) goto loc_830B5564;
	// b 0x830b5bbc
	goto loc_830B5BBC;
loc_830B5588:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b5bb4
	if (cr0.eq) goto loc_830B5BB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830b4bb0
	sub_830B4BB0(ctx, base);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5588
	if (!cr0.eq) goto loc_830B5588;
	// b 0x830b5bbc
	goto loc_830B5BBC;
loc_830B55AC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830b55f0
	if (!cr6.eq) goto loc_830B55F0;
loc_830B55B4:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830b5bb4
	if (cr0.eq) goto loc_830B5BB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830b4b60
	sub_830B4B60(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b5bbc
	if (cr0.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,13
	cr6.compare<uint32_t>(r29.u32, 13, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(r29.u32, 10, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(r29.u32, 9, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x830b55b4
	goto loc_830B55B4;
loc_830B55F0:
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830b5bb4
	if (cr0.eq) goto loc_830B5BB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830b4bb0
	sub_830B4BB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b5bbc
	if (cr0.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,13
	cr6.compare<uint32_t>(r29.u32, 13, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(r29.u32, 10, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(r29.u32, 9, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x830b55f0
	goto loc_830B55F0;
loc_830B562C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830b5664
	if (cr6.eq) goto loc_830B5664;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b5664
	if (cr0.eq) goto loc_830B5664;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
loc_830B5644:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b5658
	if (cr0.eq) goto loc_830B5658;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b5644
	goto loc_830B5644;
loc_830B5658:
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// b 0x830b5668
	goto loc_830B5668;
loc_830B5664:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830B5668:
	// mr r26,r30
	r26.u64 = r30.u64;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830b5700
	if (!cr6.eq) goto loc_830B5700;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// addi r28,r11,13880
	r28.s64 = r11.s64 + 13880;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lbzx r11,r11,r28
	r11.u64 = PPC_LOAD_U8(r11.u32 + r28.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5bbc
	if (!cr0.eq) goto loc_830B5BBC;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	r11.u64 = PPC_LOAD_U16(r11.u32 + r30.u32);
	// lbzx r11,r11,r28
	r11.u64 = PPC_LOAD_U8(r11.u32 + r28.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5bbc
	if (!cr0.eq) goto loc_830B5BBC;
loc_830B56A4:
	// lhz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830b5790
	if (cr0.eq) goto loc_830B5790;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830b4b60
	sub_830B4B60(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b5bbc
	if (cr0.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,13
	cr6.compare<uint32_t>(r29.u32, 13, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(r29.u32, 10, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(r29.u32, 9, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// lbzx r11,r29,r28
	r11.u64 = PPC_LOAD_U8(r29.u32 + r28.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b56f4
	if (cr0.eq) goto loc_830B56F4;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5bbc
	if (!cr0.eq) goto loc_830B5BBC;
	// li r27,1
	r27.s64 = 1;
	// b 0x830b56f8
	goto loc_830B56F8;
loc_830B56F4:
	// li r27,0
	r27.s64 = 0;
loc_830B56F8:
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// b 0x830b56a4
	goto loc_830B56A4;
loc_830B5700:
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r28,r11,13880
	r28.s64 = r11.s64 + 13880;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lbzx r11,r11,r28
	r11.u64 = PPC_LOAD_U8(r11.u32 + r28.u32);
	// rlwinm r11,r11,25,7,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5bbc
	if (!cr0.eq) goto loc_830B5BBC;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	r11.u64 = PPC_LOAD_U16(r11.u32 + r30.u32);
	// lbzx r11,r11,r28
	r11.u64 = PPC_LOAD_U8(r11.u32 + r28.u32);
	// rlwinm r11,r11,25,7,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5bbc
	if (!cr0.eq) goto loc_830B5BBC;
loc_830B5734:
	// lhz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x830b5790
	if (cr0.eq) goto loc_830B5790;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x830b4bb0
	sub_830B4BB0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b5bbc
	if (cr0.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,13
	cr6.compare<uint32_t>(r29.u32, 13, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,10
	cr6.compare<uint32_t>(r29.u32, 10, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(r29.u32, 9, xer);
	// beq cr6,0x830b5bbc
	if (cr6.eq) goto loc_830B5BBC;
	// lbzx r11,r29,r28
	r11.u64 = PPC_LOAD_U8(r29.u32 + r28.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b5784
	if (cr0.eq) goto loc_830B5784;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5bbc
	if (!cr0.eq) goto loc_830B5BBC;
	// li r27,1
	r27.s64 = 1;
	// b 0x830b5788
	goto loc_830B5788;
loc_830B5784:
	// li r27,0
	r27.s64 = 0;
loc_830B5788:
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// b 0x830b5734
	goto loc_830B5734;
loc_830B5790:
	// cmpwi cr6,r24,21
	cr6.compare<int32_t>(r24.s32, 21, xer);
	// bne cr6,0x830b5bb4
	if (!cr6.eq) goto loc_830B5BB4;
	// bl 0x830b5270
	sub_830B5270(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830b57b0
	if (!cr0.eq) goto loc_830B57B0;
	// li r11,6
	r11.s64 = 6;
	// b 0x830b5484
	goto loc_830B5484;
loc_830B57B0:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83092938
	sub_83092938(ctx, base);
	// b 0x830b54ac
	goto loc_830B54AC;
loc_830B57C0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830b5810
	if (!cr6.eq) goto loc_830B5810;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830b5800
	if (cr6.eq) goto loc_830B5800;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b5800
	if (cr0.eq) goto loc_830B5800;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
loc_830B57E0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b57f4
	if (cr0.eq) goto loc_830B57F4;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b57e0
	goto loc_830B57E0;
loc_830B57F4:
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b5804
	goto loc_830B5804;
loc_830B5800:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B5804:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1ad0
	sub_82FE1AD0(ctx, base);
	// b 0x830b54ac
	goto loc_830B54AC;
loc_830B5810:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830b5848
	if (cr6.eq) goto loc_830B5848;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b5848
	if (cr0.eq) goto loc_830B5848;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
loc_830B5828:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b583c
	if (cr0.eq) goto loc_830B583C;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b5828
	goto loc_830B5828;
loc_830B583C:
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b584c
	goto loc_830B584C;
loc_830B5848:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B584C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1cc8
	sub_82FE1CC8(ctx, base);
	// b 0x830b54ac
	goto loc_830B54AC;
loc_830B5858:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r11,r11,7012
	r11.s64 = r11.s64 + 7012;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-4
	ctx.r5.s64 = r11.s64 + -4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303cac0
	sub_8303CAC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830b58fc
	if (!cr6.eq) goto loc_830B58FC;
loc_830B5880:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8e0
	sub_8303C8E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b596c
	if (cr0.eq) goto loc_830B596C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303cc60
	sub_8303CC60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b58d8
	if (cr0.eq) goto loc_830B58D8;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b58d8
	if (cr0.eq) goto loc_830B58D8;
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
loc_830B58B8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b58cc
	if (cr0.eq) goto loc_830B58CC;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b58b8
	goto loc_830B58B8;
loc_830B58CC:
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b58dc
	goto loc_830B58DC;
loc_830B58D8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B58DC:
	// bl 0x82fe1ad0
	sub_82FE1AD0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5880
	if (!cr0.eq) goto loc_830B5880;
loc_830B58EC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
loc_830B58F0:
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830b5bbc
	goto loc_830B5BBC;
loc_830B58FC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8e0
	sub_8303C8E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b596c
	if (cr0.eq) goto loc_830B596C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303cc60
	sub_8303CC60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b5954
	if (cr0.eq) goto loc_830B5954;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b5954
	if (cr0.eq) goto loc_830B5954;
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
loc_830B5934:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b5948
	if (cr0.eq) goto loc_830B5948;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b5934
	goto loc_830B5934;
loc_830B5948:
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b5958
	goto loc_830B5958;
loc_830B5954:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B5958:
	// bl 0x82fe1cc8
	sub_82FE1CC8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b58fc
	if (!cr0.eq) goto loc_830B58FC;
	// b 0x830b58ec
	goto loc_830B58EC;
loc_830B596C:
	// b 0x830b5ba8
	goto loc_830B5BA8;
loc_830B5970:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830b59c0
	if (!cr6.eq) goto loc_830B59C0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830b59b0
	if (cr6.eq) goto loc_830B59B0;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b59b0
	if (cr0.eq) goto loc_830B59B0;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
loc_830B5990:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b59a4
	if (cr0.eq) goto loc_830B59A4;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b5990
	goto loc_830B5990;
loc_830B59A4:
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b59b4
	goto loc_830B59B4;
loc_830B59B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B59B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1b18
	sub_82FE1B18(ctx, base);
	// b 0x830b54ac
	goto loc_830B54AC;
loc_830B59C0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830b59f8
	if (cr6.eq) goto loc_830B59F8;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b59f8
	if (cr0.eq) goto loc_830B59F8;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
loc_830B59D8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b59ec
	if (cr0.eq) goto loc_830B59EC;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b59d8
	goto loc_830B59D8;
loc_830B59EC:
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b59fc
	goto loc_830B59FC;
loc_830B59F8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B59FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1d60
	sub_82FE1D60(ctx, base);
	// b 0x830b54ac
	goto loc_830B54AC;
loc_830B5A08:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830b5a58
	if (!cr6.eq) goto loc_830B5A58;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830b5a48
	if (cr6.eq) goto loc_830B5A48;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b5a48
	if (cr0.eq) goto loc_830B5A48;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
loc_830B5A28:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b5a3c
	if (cr0.eq) goto loc_830B5A3C;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b5a28
	goto loc_830B5A28;
loc_830B5A3C:
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b5a4c
	goto loc_830B5A4C;
loc_830B5A48:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B5A4C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1a70
	sub_82FE1A70(ctx, base);
	// b 0x830b54ac
	goto loc_830B54AC;
loc_830B5A58:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830b5a90
	if (cr6.eq) goto loc_830B5A90;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b5a90
	if (cr0.eq) goto loc_830B5A90;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
loc_830B5A70:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b5a84
	if (cr0.eq) goto loc_830B5A84;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b5a70
	goto loc_830B5A70;
loc_830B5A84:
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b5a94
	goto loc_830B5A94;
loc_830B5A90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B5A94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1bf0
	sub_82FE1BF0(ctx, base);
	// b 0x830b54ac
	goto loc_830B54AC;
loc_830B5AA0:
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r11,7012
	ctx.r5.s64 = r11.s64 + 7012;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303cac0
	sub_8303CAC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x830b5b38
	if (!cr6.eq) goto loc_830B5B38;
loc_830B5AC4:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8e0
	sub_8303C8E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b5ba8
	if (cr0.eq) goto loc_830B5BA8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303cc60
	sub_8303CC60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b5b1c
	if (cr0.eq) goto loc_830B5B1C;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b5b1c
	if (cr0.eq) goto loc_830B5B1C;
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
loc_830B5AFC:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b5b10
	if (cr0.eq) goto loc_830B5B10;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b5afc
	goto loc_830B5AFC;
loc_830B5B10:
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b5b20
	goto loc_830B5B20;
loc_830B5B1C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B5B20:
	// bl 0x82fe1a70
	sub_82FE1A70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5ac4
	if (!cr0.eq) goto loc_830B5AC4;
loc_830B5B30:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// b 0x830b58f0
	goto loc_830B58F0;
loc_830B5B38:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8e0
	sub_8303C8E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b5ba8
	if (cr0.eq) goto loc_830B5BA8;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303cc60
	sub_8303CC60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b5b90
	if (cr0.eq) goto loc_830B5B90;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b5b90
	if (cr0.eq) goto loc_830B5B90;
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
loc_830B5B70:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b5b84
	if (cr0.eq) goto loc_830B5B84;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// b 0x830b5b70
	goto loc_830B5B70;
loc_830B5B84:
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x830b5b94
	goto loc_830B5B94;
loc_830B5B90:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830B5B94:
	// bl 0x82fe1bf0
	sub_82FE1BF0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5b38
	if (!cr0.eq) goto loc_830B5B38;
	// b 0x830b5b30
	goto loc_830B5B30;
loc_830B5BA8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_830B5BB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830b5bc0
	goto loc_830B5BC0;
loc_830B5BBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B5BC0:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830B5BD0"))) PPC_WEAK_FUNC(sub_830B5BD0);
PPC_FUNC_IMPL(__imp__sub_830B5BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// li r11,7
	r11.s64 = 7;
	// lis r3,-31989
	ctx.r3.s64 = -2096431104;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,23484
	ctx.r3.s64 = ctx.r3.s64 + 23484;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830B5BF4"))) PPC_WEAK_FUNC(sub_830B5BF4);
PPC_FUNC_IMPL(__imp__sub_830B5BF4) {
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
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B5C1C"))) PPC_WEAK_FUNC(sub_830B5C1C);
PPC_FUNC_IMPL(__imp__sub_830B5C1C) {
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
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B5C50"))) PPC_WEAK_FUNC(sub_830B5C50);
PPC_FUNC_IMPL(__imp__sub_830B5C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r27,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r27.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x830b5e4c
	if (cr6.eq) goto loc_830B5E4C;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x830b5d78
	if (cr6.eq) goto loc_830B5D78;
	// cmpwi cr6,r4,14
	cr6.compare<int32_t>(ctx.r4.s32, 14, xer);
	// beq cr6,0x830b5d18
	if (cr6.eq) goto loc_830B5D18;
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// beq cr6,0x830b5cac
	if (cr6.eq) goto loc_830B5CAC;
	// ble cr6,0x830b5ca4
	if (!cr6.gt) goto loc_830B5CA4;
	// cmpwi cr6,r4,30
	cr6.compare<int32_t>(ctx.r4.s32, 30, xer);
	// ble cr6,0x830b5e4c
	if (!cr6.gt) goto loc_830B5E4C;
loc_830B5CA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830b5e7c
	goto loc_830B5E7C;
loc_830B5CAC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r30,0
	r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// bl 0x8309ba80
	sub_8309BA80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// bne 0x830b5ce0
	if (!cr0.eq) goto loc_830B5CE0;
loc_830B5CD8:
	// li r11,7
	r11.s64 = 7;
	// b 0x830b5e74
	goto loc_830B5E74;
loc_830B5CE0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b5d0c
	if (cr0.eq) goto loc_830B5D0C;
	// li r11,15
	r11.s64 = 15;
	// stb r30,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r30.u8);
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x830b5d10
	goto loc_830B5D10;
loc_830B5D0C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830B5D10:
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// b 0x830b5d6c
	goto loc_830B5D6C;
loc_830B5D18:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8309bea8
	sub_8309BEA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830b5cd8
	if (cr0.eq) goto loc_830B5CD8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b5d64
	if (cr0.eq) goto loc_830B5D64;
	// li r11,0
	r11.s64 = 0;
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r29.u32);
	// li r10,14
	ctx.r10.s64 = 14;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830b5d68
	goto loc_830B5D68;
loc_830B5D64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B5D68:
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
loc_830B5D6C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// b 0x830b5e7c
	goto loc_830B5E7C;
loc_830B5D78:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r11,-22392
	r28.s64 = r11.s64 + -22392;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5e0c
	if (!cr0.eq) goto loc_830B5E0C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r28,128
	ctx.r4.s64 = r28.s64 + 128;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5e0c
	if (!cr0.eq) goto loc_830B5E0C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r28,64
	ctx.r4.s64 = r28.s64 + 64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b5dd0
	if (!cr0.eq) goto loc_830B5DD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r28,192
	ctx.r4.s64 = r28.s64 + 192;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b5cd8
	if (cr0.eq) goto loc_830B5CD8;
loc_830B5DD0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x830b5e00
	if (cr0.eq) goto loc_830B5E00;
	// li r11,1
	r11.s64 = 1;
	// stb r30,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r30.u8);
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r29.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x830b5e04
	goto loc_830B5E04;
loc_830B5E00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_830B5E04:
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r30.u8);
	// b 0x830b5e7c
	goto loc_830B5E7C;
loc_830B5E0C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b5e3c
	if (cr0.eq) goto loc_830B5E3C;
	// li r11,0
	r11.s64 = 0;
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r29.u32);
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x830b5e40
	goto loc_830B5E40;
loc_830B5E3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B5E40:
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// b 0x830b5e7c
	goto loc_830B5E7C;
loc_830B5E4C:
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b5e70
	if (cr0.eq) goto loc_830B5E70;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b53b8
	sub_830B53B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b5cd8
	if (cr0.eq) goto loc_830B5CD8;
loc_830B5E70:
	// li r11,4
	r11.s64 = 4;
loc_830B5E74:
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_830B5E78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B5E7C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
	// b 0x830b5e78
	goto loc_830B5E78;
}

__attribute__((alias("__imp__sub_830B5E90"))) PPC_WEAK_FUNC(sub_830B5E90);
PPC_FUNC_IMPL(__imp__sub_830B5E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// li r11,7
	r11.s64 = 7;
	// lis r3,-31989
	ctx.r3.s64 = -2096431104;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,24196
	ctx.r3.s64 = ctx.r3.s64 + 24196;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830B5EC0"))) PPC_WEAK_FUNC(sub_830B5EC0);
PPC_FUNC_IMPL(__imp__sub_830B5EC0) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x82fd9710
	sub_82FD9710(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_830B5F04:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x830b5f04
	if (!cr6.eq) goto loc_830B5F04;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r24,r11,0
	r24.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// bne cr6,0x830b5f4c
	if (!cr6.eq) goto loc_830B5F4C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b2fc0
	sub_831B2FC0(ctx, base);
	// b 0x830b5f98
	goto loc_830B5F98;
loc_830B5F4C:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// bne cr6,0x830b5f9c
	if (!cr6.eq) goto loc_830B5F9C;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x830b5f88
	if (cr6.eq) goto loc_830B5F88;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
loc_830B5F78:
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B5F80:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b64
	return;
loc_830B5F88:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b2fe0
	sub_831B2FE0(ctx, base);
loc_830B5F98:
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
loc_830B5F9C:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// beq cr6,0x830b5fc0
	if (cr6.eq) goto loc_830B5FC0;
	// li r11,7
	r11.s64 = 7;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// b 0x830b5f78
	goto loc_830B5F78;
loc_830B5FC0:
	// bl 0x831b9788
	sub_831B9788(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(r11.s32, 34, xer);
	// bne cr6,0x830b5fec
	if (!cr6.eq) goto loc_830B5FEC;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
loc_830B5FD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830b5f80
	goto loc_830B5F80;
loc_830B5FEC:
	// li r30,1
	r30.s64 = 1;
	// b 0x830b5fd8
	goto loc_830B5FD8;
}

__attribute__((alias("__imp__sub_830B5FF4"))) PPC_WEAK_FUNC(sub_830B5FF4);
PPC_FUNC_IMPL(__imp__sub_830B5FF4) {
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

__attribute__((alias("__imp__sub_830B6028"))) PPC_WEAK_FUNC(sub_830B6028);
PPC_FUNC_IMPL(__imp__sub_830B6028) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b18
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r25,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r25.u32);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x830b61f8
	if (!cr6.eq) goto loc_830B61F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8309c3c0
	sub_8309C3C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r29,120(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// li r6,2
	ctx.r6.s64 = 2;
	// rlwinm r3,r8,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,10
	ctx.r8.s64 = 10;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// mr r26,r11
	r26.u64 = r11.u64;
	// bl 0x830b5ec0
	sub_830B5EC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b60e0
	if (!cr0.eq) goto loc_830B60E0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x830b60d0
	if (cr6.eq) goto loc_830B60D0;
	// li r11,8
	r11.s64 = 8;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_830B60D0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8309c5a0
	sub_8309C5A0(ctx, base);
loc_830B60D8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830b6708
	goto loc_830B6708;
loc_830B60E0:
	// subf r11,r26,r27
	r11.s64 = r27.s64 - r26.s64;
	// li r27,0
	r27.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r7,r31,84
	ctx.r7.s64 = r31.s64 + 84;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// sthx r27,r11,r29
	PPC_STORE_U16(r11.u32 + r29.u32, r27.u16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830b5ec0
	sub_830B5EC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b6134
	if (!cr0.eq) goto loc_830B6134;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x830b6130
	if (cr6.eq) goto loc_830B6130;
	// li r11,8
	r11.s64 = 8;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_830B6130:
	// b 0x830b60d0
	goto loc_830B60D0;
loc_830B6134:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8309b0f0
	sub_8309B0F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,148(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 148);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b617c
	if (cr0.eq) goto loc_830B617C;
	// lbz r11,149(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 149);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8309b160
	sub_8309B160(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830b60d0
	goto loc_830B60D0;
loc_830B617C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b61ac
	if (cr0.eq) goto loc_830B61AC;
	// li r11,2
	r11.s64 = 2;
	// stb r27,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r27.u8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x830b61b0
	goto loc_830B61B0;
loc_830B61AC:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_830B61B0:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r10,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r10.u32);
	// stw r9,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r9.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lfd f0,136(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 136);
	// stfd f0,24(r29)
	PPC_STORE_U64(r29.u32 + 24, f0.u64);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8309b160
	sub_8309B160(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8309c5a0
	sub_8309C5A0(ctx, base);
loc_830B61EC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x830b670c
	goto loc_830B670C;
loc_830B61F8:
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// bne cr6,0x830b6284
	if (!cr6.eq) goto loc_830B6284;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x8309ad80
	sub_8309AD80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,196(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 196);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b6234
	if (cr0.eq) goto loc_830B6234;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x8309adf0
	sub_8309ADF0(ctx, base);
	// b 0x830b60d8
	goto loc_830B60D8;
loc_830B6234:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6268
	if (cr0.eq) goto loc_830B6268;
	// li r11,0
	r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830b626c
	goto loc_830B626C;
loc_830B6268:
	// li r29,0
	r29.s64 = 0;
loc_830B626C:
	// lfd f0,184(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 184);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,8(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 8, temp.u32);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x8309adf0
	sub_8309ADF0(ctx, base);
	// b 0x830b61ec
	goto loc_830B61EC;
loc_830B6284:
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// bne cr6,0x830b630c
	if (!cr6.eq) goto loc_830B630C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8309b0f0
	sub_8309B0F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,244(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 244);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b62c0
	if (cr0.eq) goto loc_830B62C0;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8309b160
	sub_8309B160(ctx, base);
	// b 0x830b60d8
	goto loc_830B60D8;
loc_830B62C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b62f4
	if (cr0.eq) goto loc_830B62F4;
	// li r11,0
	r11.s64 = 0;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830b62f8
	goto loc_830B62F8;
loc_830B62F4:
	// li r29,0
	r29.s64 = 0;
loc_830B62F8:
	// lfd f0,232(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 232);
	// stfd f0,8(r29)
	PPC_STORE_U64(r29.u32 + 8, f0.u64);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8309b160
	sub_8309B160(ctx, base);
	// b 0x830b61ec
	goto loc_830B61EC;
loc_830B630C:
	// cmpwi cr6,r29,31
	cr6.compare<int32_t>(r29.s32, 31, xer);
	// beq cr6,0x830b6594
	if (cr6.eq) goto loc_830B6594;
	// cmpwi cr6,r29,33
	cr6.compare<int32_t>(r29.s32, 33, xer);
	// beq cr6,0x830b6594
	if (cr6.eq) goto loc_830B6594;
	// cmpwi cr6,r29,32
	cr6.compare<int32_t>(r29.s32, 32, xer);
	// beq cr6,0x830b6594
	if (cr6.eq) goto loc_830B6594;
	// cmpwi cr6,r29,38
	cr6.compare<int32_t>(r29.s32, 38, xer);
	// beq cr6,0x830b6594
	if (cr6.eq) goto loc_830B6594;
	// cmpwi cr6,r29,43
	cr6.compare<int32_t>(r29.s32, 43, xer);
	// beq cr6,0x830b6594
	if (cr6.eq) goto loc_830B6594;
	// cmpwi cr6,r29,34
	cr6.compare<int32_t>(r29.s32, 34, xer);
	// beq cr6,0x830b6454
	if (cr6.eq) goto loc_830B6454;
	// cmpwi cr6,r29,35
	cr6.compare<int32_t>(r29.s32, 35, xer);
	// beq cr6,0x830b6454
	if (cr6.eq) goto loc_830B6454;
	// cmpwi cr6,r29,36
	cr6.compare<int32_t>(r29.s32, 36, xer);
	// beq cr6,0x830b6454
	if (cr6.eq) goto loc_830B6454;
	// cmpwi cr6,r29,37
	cr6.compare<int32_t>(r29.s32, 37, xer);
	// beq cr6,0x830b6454
	if (cr6.eq) goto loc_830B6454;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830b5ec0
	sub_830B5EC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b6708
	if (cr0.eq) goto loc_830B6708;
	// cmpwi cr6,r29,39
	cr6.compare<int32_t>(r29.s32, 39, xer);
	// beq cr6,0x830b6434
	if (cr6.eq) goto loc_830B6434;
	// cmpwi cr6,r29,40
	cr6.compare<int32_t>(r29.s32, 40, xer);
	// beq cr6,0x830b6404
	if (cr6.eq) goto loc_830B6404;
	// cmpwi cr6,r29,41
	cr6.compare<int32_t>(r29.s32, 41, xer);
	// beq cr6,0x830b63d8
	if (cr6.eq) goto loc_830B63D8;
	// cmpwi cr6,r29,42
	cr6.compare<int32_t>(r29.s32, 42, xer);
	// bne cr6,0x830b6708
	if (!cr6.eq) goto loc_830B6708;
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r29,255
	cr6.compare<uint32_t>(r29.u32, 255, xer);
	// ble cr6,0x830b63b8
	if (!cr6.gt) goto loc_830B63B8;
loc_830B63AC:
	// li r11,1
	r11.s64 = 1;
loc_830B63B0:
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// b 0x830b6708
	goto loc_830B6708;
loc_830B63B8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b64e0
	if (cr0.eq) goto loc_830B64E0;
	// li r10,42
	ctx.r10.s64 = 42;
	// b 0x830b64cc
	goto loc_830B64CC;
loc_830B63D8:
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(r29.u32, 65535, xer);
	// bgt cr6,0x830b63ac
	if (cr6.gt) goto loc_830B63AC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6530
	if (cr0.eq) goto loc_830B6530;
	// li r10,41
	ctx.r10.s64 = 41;
	// b 0x830b651c
	goto loc_830B651C;
loc_830B6404:
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r11,-1
	r11.s64 = -1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x830b63ac
	if (cr6.gt) goto loc_830B63AC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6690
	if (cr0.eq) goto loc_830B6690;
	// li r10,40
	ctx.r10.s64 = 40;
	// b 0x830b667c
	goto loc_830B667C;
loc_830B6434:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b66f8
	if (cr0.eq) goto loc_830B66F8;
	// li r10,39
	ctx.r10.s64 = 39;
	// b 0x830b66e4
	goto loc_830B66E4;
loc_830B6454:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830b5ec0
	sub_830B5EC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b6708
	if (cr0.eq) goto loc_830B6708;
	// cmpwi cr6,r29,34
	cr6.compare<int32_t>(r29.s32, 34, xer);
	// beq cr6,0x830b6574
	if (cr6.eq) goto loc_830B6574;
	// cmpwi cr6,r29,35
	cr6.compare<int32_t>(r29.s32, 35, xer);
	// beq cr6,0x830b653c
	if (cr6.eq) goto loc_830B653C;
	// cmpwi cr6,r29,36
	cr6.compare<int32_t>(r29.s32, 36, xer);
	// beq cr6,0x830b64ec
	if (cr6.eq) goto loc_830B64EC;
	// cmpwi cr6,r29,37
	cr6.compare<int32_t>(r29.s32, 37, xer);
	// bne cr6,0x830b6708
	if (!cr6.eq) goto loc_830B6708;
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r29,128
	r11.s64 = r29.s64 + 128;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bgt cr6,0x830b63ac
	if (cr6.gt) goto loc_830B63AC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b64e0
	if (cr0.eq) goto loc_830B64E0;
	// li r10,37
	ctx.r10.s64 = 37;
loc_830B64CC:
	// li r11,0
	r11.s64 = 0;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830b64e4
	goto loc_830B64E4;
loc_830B64E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B64E4:
	// stb r29,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r29.u8);
	// b 0x830b670c
	goto loc_830B670C;
loc_830B64EC:
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addis r11,r29,1
	r11.s64 = r29.s64 + 65536;
	// addi r11,r11,-32768
	r11.s64 = r11.s64 + -32768;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bgt cr6,0x830b63ac
	if (cr6.gt) goto loc_830B63AC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6530
	if (cr0.eq) goto loc_830B6530;
	// li r10,36
	ctx.r10.s64 = 36;
loc_830B651C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830b6534
	goto loc_830B6534;
loc_830B6530:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B6534:
	// sth r29,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, r29.u16);
	// b 0x830b670c
	goto loc_830B670C;
loc_830B653C:
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x830b63ac
	if (cr6.gt) goto loc_830B63AC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6690
	if (cr0.eq) goto loc_830B6690;
	// li r10,35
	ctx.r10.s64 = 35;
	// b 0x830b667c
	goto loc_830B667C;
loc_830B6574:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b66f8
	if (cr0.eq) goto loc_830B66F8;
	// li r10,34
	ctx.r10.s64 = 34;
	// b 0x830b66e4
	goto loc_830B66E4;
loc_830B6594:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830b5ec0
	sub_830B5EC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b65d4
	if (!cr0.eq) goto loc_830B65D4;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x830b6708
	if (cr6.eq) goto loc_830B6708;
	// li r11,9
	r11.s64 = 9;
	// b 0x830b63b0
	goto loc_830B63B0;
loc_830B65D4:
	// cmpwi cr6,r29,31
	cr6.compare<int32_t>(r29.s32, 31, xer);
	// beq cr6,0x830b66c8
	if (cr6.eq) goto loc_830B66C8;
	// cmpwi cr6,r29,32
	cr6.compare<int32_t>(r29.s32, 32, xer);
	// beq cr6,0x830b669c
	if (cr6.eq) goto loc_830B669C;
	// cmpwi cr6,r29,33
	cr6.compare<int32_t>(r29.s32, 33, xer);
	// beq cr6,0x830b6654
	if (cr6.eq) goto loc_830B6654;
	// cmpwi cr6,r29,38
	cr6.compare<int32_t>(r29.s32, 38, xer);
	// beq cr6,0x830b6628
	if (cr6.eq) goto loc_830B6628;
	// cmpwi cr6,r29,43
	cr6.compare<int32_t>(r29.s32, 43, xer);
	// bne cr6,0x830b6708
	if (!cr6.eq) goto loc_830B6708;
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// blt cr6,0x830b6708
	if (cr6.lt) goto loc_830B6708;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6690
	if (cr0.eq) goto loc_830B6690;
	// li r10,43
	ctx.r10.s64 = 43;
	// b 0x830b667c
	goto loc_830B667C;
loc_830B6628:
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x830b6708
	if (cr6.lt) goto loc_830B6708;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6690
	if (cr0.eq) goto loc_830B6690;
	// li r10,38
	ctx.r10.s64 = 38;
	// b 0x830b667c
	goto loc_830B667C;
loc_830B6654:
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// bgt cr6,0x830b6708
	if (cr6.gt) goto loc_830B6708;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6690
	if (cr0.eq) goto loc_830B6690;
	// li r10,33
	ctx.r10.s64 = 33;
loc_830B667C:
	// li r11,0
	r11.s64 = 0;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830b6694
	goto loc_830B6694;
loc_830B6690:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B6694:
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// b 0x830b670c
	goto loc_830B670C;
loc_830B669C:
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bgt cr6,0x830b6708
	if (cr6.gt) goto loc_830B6708;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6690
	if (cr0.eq) goto loc_830B6690;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x830b667c
	goto loc_830B667C;
loc_830B66C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b66f8
	if (cr0.eq) goto loc_830B66F8;
	// li r10,31
	ctx.r10.s64 = 31;
loc_830B66E4:
	// li r11,0
	r11.s64 = 0;
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r11.u8);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x830b66fc
	goto loc_830B66FC;
loc_830B66F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B66FC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x830b670c
	goto loc_830B670C;
loc_830B6708:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B670C:
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830B671C"))) PPC_WEAK_FUNC(sub_830B671C);
PPC_FUNC_IMPL(__imp__sub_830B671C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// li r11,7
	r11.s64 = 7;
	// lis r3,-31989
	ctx.r3.s64 = -2096431104;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,26376
	ctx.r3.s64 = ctx.r3.s64 + 26376;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830B6740"))) PPC_WEAK_FUNC(sub_830B6740);
PPC_FUNC_IMPL(__imp__sub_830B6740) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8309c5a0
	sub_8309C5A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B6768"))) PPC_WEAK_FUNC(sub_830B6768);
PPC_FUNC_IMPL(__imp__sub_830B6768) {
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
	// bl 0x8309b160
	sub_8309B160(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B6790"))) PPC_WEAK_FUNC(sub_830B6790);
PPC_FUNC_IMPL(__imp__sub_830B6790) {
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
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x8309adf0
	sub_8309ADF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B67B8"))) PPC_WEAK_FUNC(sub_830B67B8);
PPC_FUNC_IMPL(__imp__sub_830B67B8) {
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
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x8309b160
	sub_8309B160(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B67E0"))) PPC_WEAK_FUNC(sub_830B67E0);
PPC_FUNC_IMPL(__imp__sub_830B67E0) {
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
	// lwz r31,-14988(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -14988);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830b6814
	if (cr6.eq) goto loc_830B6814;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x830b5028
	sub_830B5028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B6814:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-14988(r30)
	PPC_STORE_U32(r30.u32 + -14988, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B6840"))) PPC_WEAK_FUNC(sub_830B6840);
PPC_FUNC_IMPL(__imp__sub_830B6840) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31942
	r27.s64 = -2093350912;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830b758c
	if (!cr6.eq) goto loc_830B758C;
	// bl 0x830b5170
	sub_830B5170(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lwz r11,-14988(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830b7580
	if (!cr6.eq) goto loc_830B7580;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x830b68fc
	if (cr0.eq) goto loc_830B68FC;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b68cc
	if (cr0.eq) goto loc_830B68CC;
	// bl 0x83017920
	sub_83017920(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r29,0
	r29.s64 = 0;
	// b 0x830b68d4
	goto loc_830B68D4;
loc_830B68CC:
	// li r29,0
	r29.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_830B68D4:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r28,r11,-16120
	r28.s64 = r11.s64 + -16120;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x83043618
	sub_83043618(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830b690c
	goto loc_830B690C;
loc_830B68FC:
	// li r29,0
	r29.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r28,r10,-16120
	r28.s64 = ctx.r10.s64 + -16120;
loc_830B690C:
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r11,-14988(r27)
	PPC_STORE_U32(r27.u32 + -14988, r11.u32);
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b693c
	if (cr0.eq) goto loc_830B693C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6940
	goto loc_830B6940;
loc_830B693C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6940:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-6172
	ctx.r4.s64 = r11.s64 + -6172;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6984
	if (cr0.eq) goto loc_830B6984;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6988
	goto loc_830B6988;
loc_830B6984:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6988:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-6064
	ctx.r4.s64 = r11.s64 + -6064;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b69cc
	if (cr0.eq) goto loc_830B69CC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b69d0
	goto loc_830B69D0;
loc_830B69CC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B69D0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-6080
	ctx.r4.s64 = r11.s64 + -6080;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6a14
	if (cr0.eq) goto loc_830B6A14;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6a18
	goto loc_830B6A18;
loc_830B6A14:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6A18:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5556
	ctx.r4.s64 = r11.s64 + -5556;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6a5c
	if (cr0.eq) goto loc_830B6A5C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6a60
	goto loc_830B6A60;
loc_830B6A5C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6A60:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5544
	ctx.r4.s64 = r11.s64 + -5544;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6aa4
	if (cr0.eq) goto loc_830B6AA4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6aa8
	goto loc_830B6AA8;
loc_830B6AA4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6AA8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5708
	ctx.r4.s64 = r11.s64 + -5708;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6aec
	if (cr0.eq) goto loc_830B6AEC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6af0
	goto loc_830B6AF0;
loc_830B6AEC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6AF0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5752
	ctx.r4.s64 = r11.s64 + -5752;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6b34
	if (cr0.eq) goto loc_830B6B34;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6b38
	goto loc_830B6B38;
loc_830B6B34:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6B38:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5720
	ctx.r4.s64 = r11.s64 + -5720;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6b7c
	if (cr0.eq) goto loc_830B6B7C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6b80
	goto loc_830B6B80;
loc_830B6B7C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6B80:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5732
	ctx.r4.s64 = r11.s64 + -5732;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6bc4
	if (cr0.eq) goto loc_830B6BC4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6bc8
	goto loc_830B6BC8;
loc_830B6BC4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6BC8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5628
	ctx.r4.s64 = r11.s64 + -5628;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6c0c
	if (cr0.eq) goto loc_830B6C0C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6c10
	goto loc_830B6C10;
loc_830B6C0C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6C10:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5640
	ctx.r4.s64 = r11.s64 + -5640;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6c54
	if (cr0.eq) goto loc_830B6C54;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6c58
	goto loc_830B6C58;
loc_830B6C54:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6C58:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5660
	ctx.r4.s64 = r11.s64 + -5660;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6c9c
	if (cr0.eq) goto loc_830B6C9C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6ca0
	goto loc_830B6CA0;
loc_830B6C9C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6CA0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5688
	ctx.r4.s64 = r11.s64 + -5688;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6ce4
	if (cr0.eq) goto loc_830B6CE4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,13
	ctx.r10.s64 = 13;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6ce8
	goto loc_830B6CE8;
loc_830B6CE4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6CE8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5676
	ctx.r4.s64 = r11.s64 + -5676;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6d2c
	if (cr0.eq) goto loc_830B6D2C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,14
	ctx.r10.s64 = 14;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6d30
	goto loc_830B6D30;
loc_830B6D2C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6D30:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5576
	ctx.r4.s64 = r11.s64 + -5576;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6d74
	if (cr0.eq) goto loc_830B6D74;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6d78
	goto loc_830B6D78;
loc_830B6D74:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6D78:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5604
	ctx.r4.s64 = r11.s64 + -5604;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6dbc
	if (cr0.eq) goto loc_830B6DBC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6dc0
	goto loc_830B6DC0;
loc_830B6DBC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6DC0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5500
	ctx.r4.s64 = r11.s64 + -5500;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6e04
	if (cr0.eq) goto loc_830B6E04;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,17
	ctx.r10.s64 = 17;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6e08
	goto loc_830B6E08;
loc_830B6E04:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6E08:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5484
	ctx.r4.s64 = r11.s64 + -5484;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6e4c
	if (cr0.eq) goto loc_830B6E4C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,18
	ctx.r10.s64 = 18;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6e50
	goto loc_830B6E50;
loc_830B6E4C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6E50:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-29152
	ctx.r4.s64 = r11.s64 + -29152;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6e94
	if (cr0.eq) goto loc_830B6E94;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,19
	ctx.r10.s64 = 19;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6e98
	goto loc_830B6E98;
loc_830B6E94:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6E98:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5472
	ctx.r4.s64 = r11.s64 + -5472;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6edc
	if (cr0.eq) goto loc_830B6EDC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6ee0
	goto loc_830B6EE0;
loc_830B6EDC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6EE0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-6156
	ctx.r4.s64 = r11.s64 + -6156;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6f24
	if (cr0.eq) goto loc_830B6F24;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,21
	ctx.r10.s64 = 21;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6f28
	goto loc_830B6F28;
loc_830B6F24:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6F28:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-6144
	ctx.r4.s64 = r11.s64 + -6144;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6f6c
	if (cr0.eq) goto loc_830B6F6C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,22
	ctx.r10.s64 = 22;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6f70
	goto loc_830B6F70;
loc_830B6F6C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6F70:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-29120
	ctx.r4.s64 = r11.s64 + -29120;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6fb4
	if (cr0.eq) goto loc_830B6FB4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,23
	ctx.r10.s64 = 23;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b6fb8
	goto loc_830B6FB8;
loc_830B6FB4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B6FB8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-29104
	ctx.r4.s64 = r11.s64 + -29104;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b6ffc
	if (cr0.eq) goto loc_830B6FFC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7000
	goto loc_830B7000;
loc_830B6FFC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7000:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-6124
	ctx.r4.s64 = r11.s64 + -6124;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b7044
	if (cr0.eq) goto loc_830B7044;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,25
	ctx.r10.s64 = 25;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7048
	goto loc_830B7048;
loc_830B7044:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7048:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-6112
	ctx.r4.s64 = r11.s64 + -6112;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b708c
	if (cr0.eq) goto loc_830B708C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,26
	ctx.r10.s64 = 26;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7090
	goto loc_830B7090;
loc_830B708C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7090:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-29484
	ctx.r4.s64 = r11.s64 + -29484;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b70d4
	if (cr0.eq) goto loc_830B70D4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b70d8
	goto loc_830B70D8;
loc_830B70D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B70D8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-29476
	ctx.r4.s64 = r11.s64 + -29476;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b711c
	if (cr0.eq) goto loc_830B711C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,28
	ctx.r10.s64 = 28;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7120
	goto loc_830B7120;
loc_830B711C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7120:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-29464
	ctx.r4.s64 = r11.s64 + -29464;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b7164
	if (cr0.eq) goto loc_830B7164;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,29
	ctx.r10.s64 = 29;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7168
	goto loc_830B7168;
loc_830B7164:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7168:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-29812
	ctx.r4.s64 = r11.s64 + -29812;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b71ac
	if (cr0.eq) goto loc_830B71AC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,30
	ctx.r10.s64 = 30;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b71b0
	goto loc_830B71B0;
loc_830B71AC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B71B0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-29796
	ctx.r4.s64 = r11.s64 + -29796;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b71f4
	if (cr0.eq) goto loc_830B71F4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,31
	ctx.r10.s64 = 31;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b71f8
	goto loc_830B71F8;
loc_830B71F4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B71F8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-6096
	ctx.r4.s64 = r11.s64 + -6096;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b723c
	if (cr0.eq) goto loc_830B723C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7240
	goto loc_830B7240;
loc_830B723C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7240:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-6048
	ctx.r4.s64 = r11.s64 + -6048;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b7284
	if (cr0.eq) goto loc_830B7284;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,33
	ctx.r10.s64 = 33;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7288
	goto loc_830B7288;
loc_830B7284:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7288:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-6008
	ctx.r4.s64 = r11.s64 + -6008;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b72cc
	if (cr0.eq) goto loc_830B72CC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,34
	ctx.r10.s64 = 34;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b72d0
	goto loc_830B72D0;
loc_830B72CC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B72D0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5976
	ctx.r4.s64 = r11.s64 + -5976;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b7314
	if (cr0.eq) goto loc_830B7314;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,35
	ctx.r10.s64 = 35;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7318
	goto loc_830B7318;
loc_830B7314:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7318:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5964
	ctx.r4.s64 = r11.s64 + -5964;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b735c
	if (cr0.eq) goto loc_830B735C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,36
	ctx.r10.s64 = 36;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7360
	goto loc_830B7360;
loc_830B735C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7360:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5956
	ctx.r4.s64 = r11.s64 + -5956;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b73a4
	if (cr0.eq) goto loc_830B73A4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,37
	ctx.r10.s64 = 37;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b73a8
	goto loc_830B73A8;
loc_830B73A4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B73A8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5944
	ctx.r4.s64 = r11.s64 + -5944;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b73ec
	if (cr0.eq) goto loc_830B73EC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,38
	ctx.r10.s64 = 38;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b73f0
	goto loc_830B73F0;
loc_830B73EC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B73F0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5932
	ctx.r4.s64 = r11.s64 + -5932;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b7434
	if (cr0.eq) goto loc_830B7434;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,39
	ctx.r10.s64 = 39;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7438
	goto loc_830B7438;
loc_830B7434:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7438:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5892
	ctx.r4.s64 = r11.s64 + -5892;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b747c
	if (cr0.eq) goto loc_830B747C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,40
	ctx.r10.s64 = 40;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7480
	goto loc_830B7480;
loc_830B747C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7480:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5864
	ctx.r4.s64 = r11.s64 + -5864;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b74c4
	if (cr0.eq) goto loc_830B74C4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,41
	ctx.r10.s64 = 41;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b74c8
	goto loc_830B74C8;
loc_830B74C4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B74C8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5840
	ctx.r4.s64 = r11.s64 + -5840;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b750c
	if (cr0.eq) goto loc_830B750C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,42
	ctx.r10.s64 = 42;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7510
	goto loc_830B7510;
loc_830B750C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7510:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5812
	ctx.r4.s64 = r11.s64 + -5812;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b7554
	if (cr0.eq) goto loc_830B7554;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r10,43
	ctx.r10.s64 = 43;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stb r29,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, r29.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// b 0x830b7558
	goto loc_830B7558;
loc_830B7554:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_830B7558:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
	// addi r4,r11,-5784
	ctx.r4.s64 = r11.s64 + -5784;
	// bl 0x830b5090
	sub_830B5090(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31989
	r11.s64 = -2096431104;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r4,r11,26592
	ctx.r4.s64 = r11.s64 + 26592;
	// addi r3,r10,-14960
	ctx.r3.s64 = ctx.r10.s64 + -14960;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
loc_830B7580:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// lwz r3,-14988(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14988);
loc_830B758C:
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b75bc
	if (cr0.eq) goto loc_830B75BC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b75bc
	if (cr0.eq) goto loc_830B75BC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x830b75c0
	goto loc_830B75C0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
loc_830B75BC:
	// li r3,44
	ctx.r3.s64 = 44;
loc_830B75C0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830B75D0"))) PPC_WEAK_FUNC(sub_830B75D0);
PPC_FUNC_IMPL(__imp__sub_830B75D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,-31989
	ctx.r3.s64 = -2096431104;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,30132
	ctx.r3.s64 = ctx.r3.s64 + 30132;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830B75E4"))) PPC_WEAK_FUNC(sub_830B75E4);
PPC_FUNC_IMPL(__imp__sub_830B75E4) {
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
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B760C"))) PPC_WEAK_FUNC(sub_830B760C);
PPC_FUNC_IMPL(__imp__sub_830B760C) {
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

__attribute__((alias("__imp__sub_830B7634"))) PPC_WEAK_FUNC(sub_830B7634);
PPC_FUNC_IMPL(__imp__sub_830B7634) {
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
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
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

__attribute__((alias("__imp__sub_830B7660"))) PPC_WEAK_FUNC(sub_830B7660);
PPC_FUNC_IMPL(__imp__sub_830B7660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830b76b4
	if (cr6.eq) goto loc_830B76B4;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b76b4
	if (cr0.eq) goto loc_830B76B4;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,6832
	r11.s64 = r11.s64 + 6832;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x830b76ac
	if (cr6.lt) goto loc_830B76AC;
	// beq cr6,0x830b76a4
	if (cr6.eq) goto loc_830B76A4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x830b76a0
	if (cr6.lt) goto loc_830B76A0;
	// li r11,11
	r11.s64 = 11;
	// b 0x830b76b8
	goto loc_830B76B8;
loc_830B76A0:
	// b 0x830b5c50
	sub_830B5C50(ctx, base);
	return;
loc_830B76A4:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x830b4c08
	sub_830B4C08(ctx, base);
	return;
loc_830B76AC:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x830b6028
	sub_830B6028(ctx, base);
	return;
loc_830B76B4:
	// li r11,2
	r11.s64 = 2;
loc_830B76B8:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B76C8"))) PPC_WEAK_FUNC(sub_830B76C8);
PPC_FUNC_IMPL(__imp__sub_830B76C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B76E0"))) PPC_WEAK_FUNC(sub_830B76E0);
PPC_FUNC_IMPL(__imp__sub_830B76E0) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b7708
	if (cr0.eq) goto loc_830B7708;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830B7708:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b771c
	if (cr0.eq) goto loc_830B771C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830B771C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b773c
	if (cr0.eq) goto loc_830B773C;
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
loc_830B773C:
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

__attribute__((alias("__imp__sub_830B7750"))) PPC_WEAK_FUNC(sub_830B7750);
PPC_FUNC_IMPL(__imp__sub_830B7750) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b77a4
	if (cr0.eq) goto loc_830B77A4;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830b77a4
	if (cr0.eq) goto loc_830B77A4;
loc_830B7780:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x830b77b0
	if (cr6.eq) goto loc_830B77B0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x830b7780
	if (cr6.lt) goto loc_830B7780;
loc_830B77A4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_830B77A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_830B77B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x830b77a8
	goto loc_830B77A8;
}

__attribute__((alias("__imp__sub_830B77C0"))) PPC_WEAK_FUNC(sub_830B77C0);
PPC_FUNC_IMPL(__imp__sub_830B77C0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// stw r4,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r4.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830b7934
	if (cr6.eq) goto loc_830B7934;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r26,8(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b7844
	if (cr0.eq) goto loc_830B7844;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x83070688
	sub_83070688(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830b7848
	goto loc_830B7848;
loc_830B7844:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_830B7848:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b7884
	if (cr0.eq) goto loc_830B7884;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x83070688
	sub_83070688(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x830b7888
	goto loc_830B7888;
loc_830B7884:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_830B7888:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x830b78e0
	if (cr0.eq) goto loc_830B78E0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82fdad88
	sub_82FDAD88(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r10,r11,32376
	ctx.r10.s64 = r11.s64 + 32376;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x830b78e4
	goto loc_830B78E4;
loc_830B78E0:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_830B78E4:
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_830B78EC:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bge cr6,0x830b7934
	if (!cr6.lt) goto loc_830B7934;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x830b78ec
	goto loc_830B78EC;
loc_830B7934:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_830B7948"))) PPC_WEAK_FUNC(sub_830B7948);
PPC_FUNC_IMPL(__imp__sub_830B7948) {
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

__attribute__((alias("__imp__sub_830B7968"))) PPC_WEAK_FUNC(sub_830B7968);
PPC_FUNC_IMPL(__imp__sub_830B7968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b7990
	if (cr0.eq) goto loc_830B7990;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830B7990:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b79a4
	if (cr0.eq) goto loc_830B79A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_830B79A4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b79c4
	if (cr0.eq) goto loc_830B79C4;
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
loc_830B79C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830B79D0"))) PPC_WEAK_FUNC(sub_830B79D0);
PPC_FUNC_IMPL(__imp__sub_830B79D0) {
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
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
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

__attribute__((alias("__imp__sub_830B7A00"))) PPC_WEAK_FUNC(sub_830B7A00);
PPC_FUNC_IMPL(__imp__sub_830B7A00) {
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
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
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

__attribute__((alias("__imp__sub_830B7A30"))) PPC_WEAK_FUNC(sub_830B7A30);
PPC_FUNC_IMPL(__imp__sub_830B7A30) {
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
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
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

__attribute__((alias("__imp__sub_830B7A60"))) PPC_WEAK_FUNC(sub_830B7A60);
PPC_FUNC_IMPL(__imp__sub_830B7A60) {
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
	// bl 0x83001f38
	sub_83001F38(ctx, base);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,28532
	r11.s64 = r11.s64 + 28532;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_830B7AA8"))) PPC_WEAK_FUNC(sub_830B7AA8);
PPC_FUNC_IMPL(__imp__sub_830B7AA8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lbz r11,4(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b7c04
	if (!cr0.eq) goto loc_830B7C04;
	// lbz r11,5(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b7ae0
	if (!cr0.eq) goto loc_830B7AE0;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B7AE0:
	// bl 0x830b8db0
	sub_830B8DB0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r26,0
	r26.s64 = 0;
	// addi r30,r11,10452
	r30.s64 = r11.s64 + 10452;
	// li r25,0
	r25.s64 = 0;
	// lwz r24,16(r27)
	r24.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// addi r28,r30,28
	r28.s64 = r30.s64 + 28;
	// addi r29,r30,17332
	r29.s64 = r30.s64 + 17332;
loc_830B7B04:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b7b70
	if (!cr0.eq) goto loc_830B7B70;
	// addi r4,r30,-24
	ctx.r4.s64 = r30.s64 + -24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b7b70
	if (cr0.eq) goto loc_830B7B70;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,65533
	ctx.r5.u64 = ctx.r5.u64 | 65533;
	// ori r4,r4,65520
	ctx.r4.u64 = ctx.r4.u64 | 65520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r26,1
	r26.s64 = 1;
loc_830B7B70:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x830b7bd0
	if (!cr0.eq) goto loc_830B7BD0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b7bd0
	if (cr0.eq) goto loc_830B7BD0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r5,15
	ctx.r5.s64 = 983040;
	// lis r4,15
	ctx.r4.s64 = 983040;
	// ori r5,r5,65533
	ctx.r5.u64 = ctx.r5.u64 | 65533;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// ori r5,r5,65533
	ctx.r5.u64 = ctx.r5.u64 | 65533;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r25,1
	r25.s64 = 1;
loc_830B7BD0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// addi r11,r30,17332
	r11.s64 = r30.s64 + 17332;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// addi r11,r11,744
	r11.s64 = r11.s64 + 744;
	// addi r28,r28,186
	r28.s64 = r28.s64 + 186;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x830b7b04
	if (cr6.lt) goto loc_830B7B04;
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r23)
	PPC_STORE_U8(r23.u32 + 4, r11.u8);
loc_830B7C04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830B7C10"))) PPC_WEAK_FUNC(sub_830B7C10);
PPC_FUNC_IMPL(__imp__sub_830B7C10) {
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
	// lbz r11,5(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b7c6c
	if (!cr0.eq) goto loc_830B7C6C;
	// bl 0x830b8db0
	sub_830B8DB0(ctx, base);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,10416
	r30.s64 = r11.s64 + 10416;
	// addi r31,r30,64
	r31.s64 = r30.s64 + 64;
loc_830B7C40:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r11,r30,64
	r11.s64 = r30.s64 + 64;
	// addi r31,r31,186
	r31.s64 = r31.s64 + 186;
	// addi r11,r11,17298
	r11.s64 = r11.s64 + 17298;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x830b7c40
	if (cr6.lt) goto loc_830B7C40;
	// li r11,1
	r11.s64 = 1;
	// stb r11,5(r28)
	PPC_STORE_U8(r28.u32 + 5, r11.u8);
loc_830B7C6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B7C78"))) PPC_WEAK_FUNC(sub_830B7C78);
PPC_FUNC_IMPL(__imp__sub_830B7C78) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,28532
	r11.s64 = r11.s64 + 28532;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83001f38
	sub_83001F38(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b7cb4
	if (cr0.eq) goto loc_830B7CB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B7CB4:
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

__attribute__((alias("__imp__sub_830B7CD0"))) PPC_WEAK_FUNC(sub_830B7CD0);
PPC_FUNC_IMPL(__imp__sub_830B7CD0) {
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
	// bl 0x83001f38
	sub_83001F38(ctx, base);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,31416
	r11.s64 = r11.s64 + 31416;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_830B7D18"))) PPC_WEAK_FUNC(sub_830B7D18);
PPC_FUNC_IMPL(__imp__sub_830B7D18) {
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
	// lbz r11,5(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b7dc4
	if (!cr0.eq) goto loc_830B7DC4;
	// bl 0x830b8db0
	sub_830B8DB0(ctx, base);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,28544
	r31.s64 = r11.s64 + 28544;
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
loc_830B7D48:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r29,r29,74
	r29.s64 = r29.s64 + 74;
	// addi r11,r11,2738
	r11.s64 = r11.s64 + 2738;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x830b7d48
	if (cr6.lt) goto loc_830B7D48;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r4,r31,72
	ctx.r4.s64 = r31.s64 + 72;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,5(r28)
	PPC_STORE_U8(r28.u32 + 5, r11.u8);
loc_830B7DC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B7DD0"))) PPC_WEAK_FUNC(sub_830B7DD0);
PPC_FUNC_IMPL(__imp__sub_830B7DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(r11.u32, 29, xer);
	// bgt cr6,0x830b7e3c
	if (cr6.gt) goto loc_830B7E3C;
	// lis r12,-32232
	r12.s64 = -2112356352;
	// addi r12,r12,31384
	r12.s64 = r12.s64 + 31384;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-31989
	r12.s64 = -2096431104;
	// addi r12,r12,32260
	r12.s64 = r12.s64 + 32260;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_830B7E24;
	case 1:
		goto loc_830B7E04;
	case 2:
		goto loc_830B7E04;
	case 3:
		goto loc_830B7E04;
	case 4:
		goto loc_830B7E04;
	case 5:
		goto loc_830B7E04;
	case 6:
		goto loc_830B7E0C;
	case 7:
		goto loc_830B7E0C;
	case 8:
		goto loc_830B7E0C;
	case 9:
		goto loc_830B7E14;
	case 10:
		goto loc_830B7E14;
	case 11:
		goto loc_830B7E14;
	case 12:
		goto loc_830B7E1C;
	case 13:
		goto loc_830B7E1C;
	case 14:
		goto loc_830B7E1C;
	case 15:
		goto loc_830B7E24;
	case 16:
		goto loc_830B7E24;
	case 17:
		goto loc_830B7E24;
	case 18:
		goto loc_830B7E24;
	case 19:
		goto loc_830B7E2C;
	case 20:
		goto loc_830B7E2C;
	case 21:
		goto loc_830B7E2C;
	case 22:
		goto loc_830B7E2C;
	case 23:
		goto loc_830B7E2C;
	case 24:
		goto loc_830B7E34;
	case 25:
		goto loc_830B7E34;
	case 26:
		goto loc_830B7E34;
	case 27:
		goto loc_830B7E34;
	case 28:
		goto loc_830B7E2C;
	case 29:
		goto loc_830B7E2C;
	default:
		__builtin_unreachable();
	}
loc_830B7E04:
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
loc_830B7E0C:
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_830B7E14:
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_830B7E1C:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_830B7E24:
	// li r3,34
	ctx.r3.s64 = 34;
	// blr 
	return;
loc_830B7E2C:
	// li r3,35
	ctx.r3.s64 = 35;
	// blr 
	return;
loc_830B7E34:
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_830B7E3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B7E48"))) PPC_WEAK_FUNC(sub_830B7E48);
PPC_FUNC_IMPL(__imp__sub_830B7E48) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31416
	r11.s64 = r11.s64 + 31416;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83001f38
	sub_83001F38(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b7e84
	if (cr0.eq) goto loc_830B7E84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B7E84:
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

__attribute__((alias("__imp__sub_830B7EA0"))) PPC_WEAK_FUNC(sub_830B7EA0);
PPC_FUNC_IMPL(__imp__sub_830B7EA0) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lbz r11,4(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b8150
	if (!cr0.eq) goto loc_830B8150;
	// lbz r11,5(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b7ed8
	if (!cr0.eq) goto loc_830B7ED8;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B7ED8:
	// bl 0x830b8db0
	sub_830B8DB0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// li r31,37
	r31.s64 = 37;
	// lwz r28,16(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 16);
loc_830B7EEC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x830b7eec
	if (!cr0.eq) goto loc_830B7EEC;
	// li r31,0
	r31.s64 = 0;
loc_830B7F0C:
	// clrlwi r3,r31,16
	ctx.r3.u64 = r31.u32 & 0xFFFF;
	// bl 0x830af400
	sub_830AF400(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FFFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830b7dd0
	sub_830B7DD0(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r3,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FFFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lis r11,1
	r11.s64 = 65536;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x830b7f0c
	if (cr6.lt) goto loc_830B7F0C;
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r25,-32233
	r25.s64 = -2112421888;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r5,3984(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 3984);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,28616
	r29.s64 = r11.s64 + 28616;
	// addi r31,r29,24
	r31.s64 = r29.s64 + 24;
loc_830B7FB0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// addi r11,r29,24
	r11.s64 = r29.s64 + 24;
	// addi r31,r31,74
	r31.s64 = r31.s64 + 74;
	// addi r11,r11,2738
	r11.s64 = r11.s64 + 2738;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x830b7fb0
	if (cr6.lt) goto loc_830B7FB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,3984(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 3984);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-56
	ctx.r4.s64 = r29.s64 + -56;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-48
	ctx.r4.s64 = r29.s64 + -48;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-32
	ctx.r4.s64 = r29.s64 + -32;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,95
	ctx.r5.s64 = 95;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r29,-16
	ctx.r4.s64 = r29.s64 + -16;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,60(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// bl 0x830aedf8
	sub_830AEDF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r24)
	PPC_STORE_U8(r24.u32 + 4, r11.u8);
loc_830B8150:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_830B8158"))) PPC_WEAK_FUNC(sub_830B8158);
PPC_FUNC_IMPL(__imp__sub_830B8158) {
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
	// bl 0x83001f38
	sub_83001F38(ctx, base);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,31584
	r11.s64 = r11.s64 + 31584;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_830B81A0"))) PPC_WEAK_FUNC(sub_830B81A0);
PPC_FUNC_IMPL(__imp__sub_830B81A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b841c
	if (!cr0.eq) goto loc_830B841C;
	// lbz r11,5(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b81d8
	if (!cr0.eq) goto loc_830B81D8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B81D8:
	// bl 0x830b8db0
	sub_830B8DB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,31440
	r28.s64 = r11.s64 + 31440;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r28,84
	ctx.r4.s64 = r28.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,57
	ctx.r5.s64 = 57;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,57
	ctx.r5.s64 = 57;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,90
	ctx.r5.s64 = 90;
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// li r5,95
	ctx.r5.s64 = 95;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,122
	ctx.r5.s64 = 122;
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r28,56
	ctx.r4.s64 = r28.s64 + 56;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,57
	ctx.r5.s64 = 57;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,70
	ctx.r5.s64 = 70;
	// li r4,65
	ctx.r4.s64 = 65;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,97
	ctx.r5.s64 = 97;
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r28,112
	ctx.r4.s64 = r28.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r27)
	PPC_STORE_U8(r27.u32 + 4, r11.u8);
loc_830B841C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830B8428"))) PPC_WEAK_FUNC(sub_830B8428);
PPC_FUNC_IMPL(__imp__sub_830B8428) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b84a8
	if (!cr0.eq) goto loc_830B84A8;
	// bl 0x830b8db0
	sub_830B8DB0(ctx, base);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,31428
	r31.s64 = r11.s64 + 31428;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r4,r31,124
	ctx.r4.s64 = r31.s64 + 124;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
loc_830B84A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B84B0"))) PPC_WEAK_FUNC(sub_830B84B0);
PPC_FUNC_IMPL(__imp__sub_830B84B0) {
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
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31584
	r11.s64 = r11.s64 + 31584;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83001f38
	sub_83001F38(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b84ec
	if (cr0.eq) goto loc_830B84EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B84EC:
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

__attribute__((alias("__imp__sub_830B8508"))) PPC_WEAK_FUNC(sub_830B8508);
PPC_FUNC_IMPL(__imp__sub_830B8508) {
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
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x82ffd6d0
	sub_82FFD6D0(ctx, base);
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

__attribute__((alias("__imp__sub_830B8558"))) PPC_WEAK_FUNC(sub_830B8558);
PPC_FUNC_IMPL(__imp__sub_830B8558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
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
}

__attribute__((alias("__imp__sub_830B8578"))) PPC_WEAK_FUNC(sub_830B8578);
PPC_FUNC_IMPL(__imp__sub_830B8578) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B8580"))) PPC_WEAK_FUNC(sub_830B8580);
PPC_FUNC_IMPL(__imp__sub_830B8580) {
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
	// lwz r31,-14948(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -14948);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x830b85b4
	if (cr6.eq) goto loc_830B85B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffd710
	sub_82FFD710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B85B4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-14948(r30)
	PPC_STORE_U32(r30.u32 + -14948, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B85E0"))) PPC_WEAK_FUNC(sub_830B85E0);
PPC_FUNC_IMPL(__imp__sub_830B85E0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r3,-14948(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14948);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830b866c
	if (!cr6.eq) goto loc_830B866C;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,-16116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -16116);
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lwz r11,-14948(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -14948);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830b8660
	if (!cr6.eq) goto loc_830B8660;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b8644
	if (cr0.eq) goto loc_830B8644;
	// bl 0x82ffd6d0
	sub_82FFD6D0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x830b8648
	goto loc_830B8648;
loc_830B8644:
	// li r9,0
	ctx.r9.s64 = 0;
loc_830B8648:
	// lis r11,-31988
	r11.s64 = -2096365568;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r9,-14948(r30)
	PPC_STORE_U32(r30.u32 + -14948, ctx.r9.u32);
	// addi r4,r11,-31360
	ctx.r4.s64 = r11.s64 + -31360;
	// addi r3,r10,-14928
	ctx.r3.s64 = ctx.r10.s64 + -14928;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
loc_830B8660:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// lwz r3,-14948(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14948);
loc_830B866C:
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

__attribute__((alias("__imp__sub_830B8684"))) PPC_WEAK_FUNC(sub_830B8684);
PPC_FUNC_IMPL(__imp__sub_830B8684) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B86AC"))) PPC_WEAK_FUNC(sub_830B86AC);
PPC_FUNC_IMPL(__imp__sub_830B86AC) {
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

__attribute__((alias("__imp__sub_830B86E0"))) PPC_WEAK_FUNC(sub_830B86E0);
PPC_FUNC_IMPL(__imp__sub_830B86E0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b87f4
	if (cr0.eq) goto loc_830B87F4;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830b87f4
	if (cr6.eq) goto loc_830B87F4;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830b87f4
	if (cr6.eq) goto loc_830B87F4;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b87f4
	if (cr0.eq) goto loc_830B87F4;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// beq 0x830b875c
	if (cr0.eq) goto loc_830B875C;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830B875C:
	// clrlwi. r27,r27,24
	r27.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x830b876c
	if (cr0.eq) goto loc_830B876C;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// b 0x830b8770
	goto loc_830B8770;
loc_830B876C:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_830B8770:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830b8840
	if (!cr6.eq) goto loc_830B8840;
	// addi r4,r28,20
	ctx.r4.s64 = r28.s64 + 20;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830b8794
	if (cr6.eq) goto loc_830B8794;
	// lwz r30,8(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// b 0x830b8798
	goto loc_830B8798;
loc_830B8794:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_830B8798:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830b8838
	if (!cr6.eq) goto loc_830B8838;
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x830b8814
	if (!cr0.eq) goto loc_830B8814;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b87ec
	if (cr0.eq) goto loc_830B87EC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x830b8800
	if (!cr0.eq) goto loc_830B8800;
loc_830B87EC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
loc_830B87F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B87F8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
loc_830B8800:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_830B8814:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x830b8838
	if (cr6.eq) goto loc_830B8838;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x830aedf8
	sub_830AEDF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
loc_830B8838:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
loc_830B8840:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x830b87f8
	goto loc_830B87F8;
}

__attribute__((alias("__imp__sub_830B8848"))) PPC_WEAK_FUNC(sub_830B8848);
PPC_FUNC_IMPL(__imp__sub_830B8848) {
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
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B8870"))) PPC_WEAK_FUNC(sub_830B8870);
PPC_FUNC_IMPL(__imp__sub_830B8870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// b 0x83054ec8
	sub_83054EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830B8880"))) PPC_WEAK_FUNC(sub_830B8880);
PPC_FUNC_IMPL(__imp__sub_830B8880) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B8888"))) PPC_WEAK_FUNC(sub_830B8888);
PPC_FUNC_IMPL(__imp__sub_830B8888) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830b89ac
	if (cr6.eq) goto loc_830B89AC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830b89ac
	if (cr6.eq) goto loc_830B89AC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x830b891c
	if (!cr0.eq) goto loc_830B891C;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,31784
	ctx.r4.s64 = r11.s64 + 31784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r6,288
	ctx.r6.s64 = 288;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r5,251
	ctx.r5.s64 = 251;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8301f788
	sub_8301F788(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_830B891C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b8974
	if (cr0.eq) goto loc_830B8974;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x830b8960
	if (cr0.eq) goto loc_830B8960;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830B8960:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// beq cr6,0x830b89ac
	if (cr6.eq) goto loc_830B89AC;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// b 0x830b89ac
	goto loc_830B89AC;
loc_830B8974:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b899c
	if (cr0.eq) goto loc_830B899C;
	// li r11,0
	r11.s64 = 0;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x830b89a0
	goto loc_830B89A0;
loc_830B899C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_830B89A0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8308d500
	sub_8308D500(ctx, base);
loc_830B89AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B89B8"))) PPC_WEAK_FUNC(sub_830B89B8);
PPC_FUNC_IMPL(__imp__sub_830B89B8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b8a28
	if (cr0.eq) goto loc_830B8A28;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b8a38
	if (cr0.eq) goto loc_830B8A38;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x830b8a1c
	if (cr0.eq) goto loc_830B8A1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_830B8A1C:
	// clrlwi. r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x830b8a30
	if (cr0.eq) goto loc_830B8A30;
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
loc_830B8A28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b78
	return;
loc_830B8A30:
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// b 0x830b8a28
	goto loc_830B8A28;
loc_830B8A38:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,31784
	ctx.r4.s64 = r11.s64 + 31784;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,289
	ctx.r6.s64 = 289;
	// li r5,280
	ctx.r5.s64 = 280;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8301f788
	sub_8301F788(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_830B8A88"))) PPC_WEAK_FUNC(sub_830B8A88);
PPC_FUNC_IMPL(__imp__sub_830B8A88) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b8b8c
	if (!cr0.eq) goto loc_830B8B8C;
	// addi r4,r29,20
	ctx.r4.s64 = r29.s64 + 20;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b8b84
	if (!cr0.eq) goto loc_830B8B84;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r30,-31942
	r30.s64 = -2093350912;
	// beq 0x830b8ae8
	if (cr0.eq) goto loc_830B8AE8;
	// lwz r4,-16120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -16120);
	// bl 0x830ab320
	sub_830AB320(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830b8aec
	goto loc_830B8AEC;
loc_830B8AE8:
	// li r11,0
	r11.s64 = 0;
loc_830B8AEC:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b8b18
	if (cr0.eq) goto loc_830B8B18;
	// li r4,109
	ctx.r4.s64 = 109;
	// lwz r5,-16120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -16120);
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830b8b1c
	goto loc_830B8B1C;
loc_830B8B18:
	// li r11,0
	r11.s64 = 0;
loc_830B8B1C:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b8b48
	if (cr0.eq) goto loc_830B8B48;
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r5,-16120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -16120);
	// bl 0x82ffe210
	sub_82FFE210(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x830b8b4c
	goto loc_830B8B4C;
loc_830B8B48:
	// li r11,0
	r11.s64 = 0;
loc_830B8B4C:
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b8b74
	if (cr0.eq) goto loc_830B8B74;
	// li r4,109
	ctx.r4.s64 = 109;
	// lwz r5,-16120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -16120);
	// bl 0x83005998
	sub_83005998(ctx, base);
	// b 0x830b8b78
	goto loc_830B8B78;
loc_830B8B74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830B8B78:
	// li r11,1
	r11.s64 = 1;
	// stw r3,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
loc_830B8B84:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
loc_830B8B8C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B8B94"))) PPC_WEAK_FUNC(sub_830B8B94);
PPC_FUNC_IMPL(__imp__sub_830B8B94) {
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
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B8BBC"))) PPC_WEAK_FUNC(sub_830B8BBC);
PPC_FUNC_IMPL(__imp__sub_830B8BBC) {
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

__attribute__((alias("__imp__sub_830B8BE4"))) PPC_WEAK_FUNC(sub_830B8BE4);
PPC_FUNC_IMPL(__imp__sub_830B8BE4) {
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

__attribute__((alias("__imp__sub_830B8C0C"))) PPC_WEAK_FUNC(sub_830B8C0C);
PPC_FUNC_IMPL(__imp__sub_830B8C0C) {
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

__attribute__((alias("__imp__sub_830B8C34"))) PPC_WEAK_FUNC(sub_830B8C34);
PPC_FUNC_IMPL(__imp__sub_830B8C34) {
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

__attribute__((alias("__imp__sub_830B8C68"))) PPC_WEAK_FUNC(sub_830B8C68);
PPC_FUNC_IMPL(__imp__sub_830B8C68) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830b8c9c
	if (cr0.eq) goto loc_830B8C9C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83000830
	sub_83000830(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B8C9C:
	// li r28,0
	r28.s64 = 0;
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// beq 0x830b8cc0
	if (cr0.eq) goto loc_830B8CC0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83015ab0
	sub_83015AB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B8CC0:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b8ce4
	if (cr0.eq) goto loc_830B8CE4;
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
loc_830B8CE4:
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x830b8d04
	if (cr0.eq) goto loc_830B8D04;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830aae98
	sub_830AAE98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B8D04:
	// stw r28,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r28.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82ffd710
	sub_82FFD710(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B8D18"))) PPC_WEAK_FUNC(sub_830B8D18);
PPC_FUNC_IMPL(__imp__sub_830B8D18) {
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
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82ffd710
	sub_82FFD710(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B8D48"))) PPC_WEAK_FUNC(sub_830B8D48);
PPC_FUNC_IMPL(__imp__sub_830B8D48) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r30,-14944(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + -14944);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x830b8d7c
	if (cr6.eq) goto loc_830B8D7C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8c68
	sub_830B8C68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B8D7C:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r11,-14944(r31)
	PPC_STORE_U32(r31.u32 + -14944, r11.u32);
	// stb r11,-15016(r10)
	PPC_STORE_U8(ctx.r10.u32 + -15016, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B8DB0"))) PPC_WEAK_FUNC(sub_830B8DB0);
PPC_FUNC_IMPL(__imp__sub_830B8DB0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r3,-14944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14944);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x830b8e3c
	if (!cr6.eq) goto loc_830B8E3C;
	// bl 0x830b85e0
	sub_830B85E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lwz r11,-14944(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -14944);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830b8e30
	if (!cr6.eq) goto loc_830B8E30;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b8e14
	if (cr0.eq) goto loc_830B8E14;
	// bl 0x830b8508
	sub_830B8508(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x830b8e18
	goto loc_830B8E18;
loc_830B8E14:
	// li r9,0
	ctx.r9.s64 = 0;
loc_830B8E18:
	// lis r11,-31988
	r11.s64 = -2096365568;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r9,-14944(r30)
	PPC_STORE_U32(r30.u32 + -14944, ctx.r9.u32);
	// addi r4,r11,-29368
	ctx.r4.s64 = r11.s64 + -29368;
	// addi r3,r10,-14940
	ctx.r3.s64 = ctx.r10.s64 + -14940;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
loc_830B8E30:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// lwz r3,-14944(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14944);
loc_830B8E3C:
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

__attribute__((alias("__imp__sub_830B8E54"))) PPC_WEAK_FUNC(sub_830B8E54);
PPC_FUNC_IMPL(__imp__sub_830B8E54) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B8E7C"))) PPC_WEAK_FUNC(sub_830B8E7C);
PPC_FUNC_IMPL(__imp__sub_830B8E7C) {
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

__attribute__((alias("__imp__sub_830B8EA8"))) PPC_WEAK_FUNC(sub_830B8EA8);
PPC_FUNC_IMPL(__imp__sub_830B8EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b8ed8
	if (cr0.eq) goto loc_830B8ED8;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
loc_830B8EBC:
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x830b8ebc
	if (!cr0.eq) goto loc_830B8EBC;
loc_830B8ED8:
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
loc_830B8EF0:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x830b8ef0
	if (!cr0.eq) goto loc_830B8EF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B8F18"))) PPC_WEAK_FUNC(sub_830B8F18);
PPC_FUNC_IMPL(__imp__sub_830B8F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830b8f50
	if (cr6.eq) goto loc_830B8F50;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x830b8f50
	if (cr0.eq) goto loc_830B8F50;
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
	// b 0x830b8f38
	goto loc_830B8F38;
loc_830B8F34:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_830B8F38:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x830b8f34
	if (!cr0.eq) goto loc_830B8F34;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// b 0x830b8f54
	goto loc_830B8F54;
loc_830B8F50:
	// li r9,0
	ctx.r9.s64 = 0;
loc_830B8F54:
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add. r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b8f94
	if (cr0.eq) goto loc_830B8F94;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x830b8f94
	if (cr0.eq) goto loc_830B8F94;
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// b 0x830b8f7c
	goto loc_830B8F7C;
loc_830B8F78:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_830B8F7C:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x830b8f78
	if (!cr0.eq) goto loc_830B8F78;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x830b8f98
	goto loc_830B8F98;
loc_830B8F94:
	// li r11,0
	r11.s64 = 0;
loc_830B8F98:
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B8FA8"))) PPC_WEAK_FUNC(sub_830B8FA8);
PPC_FUNC_IMPL(__imp__sub_830B8FA8) {
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
	// bl 0x83001f38
	sub_83001F38(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-32060
	r11.s64 = r11.s64 + -32060;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_830B8FF0"))) PPC_WEAK_FUNC(sub_830B8FF0);
PPC_FUNC_IMPL(__imp__sub_830B8FF0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b9070
	if (!cr0.eq) goto loc_830B9070;
	// bl 0x830b8db0
	sub_830B8DB0(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-32104
	r31.s64 = r11.s64 + -32104;
	// addi r5,r31,-112
	ctx.r5.s64 = r31.s64 + -112;
	// addi r4,r31,-104
	ctx.r4.s64 = r31.s64 + -104;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r5,r31,-112
	ctx.r5.s64 = r31.s64 + -112;
	// addi r4,r31,-80
	ctx.r4.s64 = r31.s64 + -80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r5,r31,-112
	ctx.r5.s64 = r31.s64 + -112;
	// addi r4,r31,-56
	ctx.r4.s64 = r31.s64 + -56;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r5,r31,-112
	ctx.r5.s64 = r31.s64 + -112;
	// addi r4,r31,-32
	ctx.r4.s64 = r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// addi r5,r31,-112
	ctx.r5.s64 = r31.s64 + -112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8888
	sub_830B8888(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
loc_830B9070:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B9078"))) PPC_WEAK_FUNC(sub_830B9078);
PPC_FUNC_IMPL(__imp__sub_830B9078) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32060
	r11.s64 = r11.s64 + -32060;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x83001f38
	sub_83001F38(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b90b4
	if (cr0.eq) goto loc_830B90B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B90B4:
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

__attribute__((alias("__imp__sub_830B90D8"))) PPC_WEAK_FUNC(sub_830B90D8);
PPC_FUNC_IMPL(__imp__sub_830B90D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// lbz r11,4(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b94f8
	if (!cr0.eq) goto loc_830B94F8;
	// lbz r11,5(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b9114
	if (!cr0.eq) goto loc_830B9114;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B9114:
	// bl 0x830b8db0
	sub_830B8DB0(ctx, base);
	// lis r11,-32232
	r11.s64 = -2112356352;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r30,r11,32160
	r30.s64 = r11.s64 + 32160;
	// addi r3,r30,708
	ctx.r3.s64 = r30.s64 + 708;
	// lwz r24,16(r27)
	r24.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// bl 0x830b8f18
	sub_830B8F18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// lis r25,-31942
	r25.s64 = -2093350912;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-16120(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -16120);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x830ae480
	sub_830AE480(ctx, base);
	// addi r4,r30,708
	ctx.r4.s64 = r30.s64 + 708;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830b8ea8
	sub_830B8EA8(ctx, base);
	// addi r4,r30,1168
	ctx.r4.s64 = r30.s64 + 1168;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// addi r11,r30,1048
	r11.s64 = r30.s64 + 1048;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x830b8f18
	sub_830B8F18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-16120(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -16120);
	// rlwinm r21,r29,2,0,29
	r21.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x830ae480
	sub_830AE480(ctx, base);
	// addi r4,r30,1048
	ctx.r4.s64 = r30.s64 + 1048;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x830b8ea8
	sub_830B8EA8(ctx, base);
	// addi r4,r30,1192
	ctx.r4.s64 = r30.s64 + 1192;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830b8f18
	sub_830B8F18(ctx, base);
	// addi r11,r30,1112
	r11.s64 = r30.s64 + 1112;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x830b8f18
	sub_830B8F18(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-16120(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -16120);
	// add r23,r11,r20
	r23.u64 = r11.u64 + r20.u64;
	// add r22,r23,r29
	r22.u64 = r23.u64 + r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r19,r22,2,0,29
	r19.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-16120(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -16120);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x830b8ea8
	sub_830B8EA8(ctx, base);
	// addi r4,r30,1112
	ctx.r4.s64 = r30.s64 + 1112;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// bl 0x830b8ea8
	sub_830B8EA8(ctx, base);
	// rlwinm r11,r23,2,0,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// addi r11,r30,720
	r11.s64 = r30.s64 + 720;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x830b8f18
	sub_830B8F18(ctx, base);
	// addi r11,r30,1128
	r11.s64 = r30.s64 + 1128;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x830b8f18
	sub_830B8F18(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-16120(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -16120);
	// add r11,r11,r20
	r11.u64 = r11.u64 + r20.u64;
	// add r21,r11,r22
	r21.u64 = r11.u64 + r22.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r18,r21,8
	r18.s64 = r21.s64 + 8;
	// rlwinm r4,r18,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830ae480
	sub_830AE480(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r4,r30,720
	ctx.r4.s64 = r30.s64 + 720;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830b8ea8
	sub_830B8EA8(ctx, base);
	// addi r4,r30,1128
	ctx.r4.s64 = r30.s64 + 1128;
	// add r5,r20,r22
	ctx.r5.u64 = r20.u64 + r22.u64;
	// bl 0x830b8ea8
	sub_830B8EA8(ctx, base);
	// rlwinm r8,r21,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,45
	ctx.r9.s64 = 45;
	// addi r11,r21,1
	r11.s64 = r21.s64 + 1;
	// li r20,58
	r20.s64 = 58;
	// li r10,46
	ctx.r10.s64 = 46;
	// li r21,95
	r21.s64 = 95;
	// stwx r9,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, ctx.r9.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stwx r9,r8,r29
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, ctx.r9.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r20,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + r29.u32, r20.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r20,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + r29.u32, r20.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r10,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r10.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r10,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r10.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, r21.u32);
	// stwx r21,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, r21.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,1240
	ctx.r4.s64 = r30.s64 + 1240;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// lwz r11,-16120(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + -16120);
	// addi r25,r23,4
	r25.s64 = r23.s64 + 4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// rlwinm r4,r25,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x830ae480
	sub_830AE480(ctx, base);
	// rlwinm r25,r23,2,0,29
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r23,1
	r11.s64 = r23.s64 + 1;
	// stwx r20,r25,r26
	PPC_STORE_U32(r25.u32 + r26.u32, r20.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r20,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + r26.u32, r20.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + r26.u32, r21.u32);
	// stwx r21,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, r21.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,1272
	ctx.r4.s64 = r30.s64 + 1272;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x830ab8d0
	sub_830AB8D0(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x830ae480
	sub_830AE480(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,1216
	ctx.r4.s64 = r30.s64 + 1216;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830b89b8
	sub_830B89B8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r17)
	PPC_STORE_U8(r17.u32 + 4, r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
loc_830B94F8:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_830B9500"))) PPC_WEAK_FUNC(sub_830B9500);
PPC_FUNC_IMPL(__imp__sub_830B9500) {
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

__attribute__((alias("__imp__sub_830B9528"))) PPC_WEAK_FUNC(sub_830B9528);
PPC_FUNC_IMPL(__imp__sub_830B9528) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x830ad918
	sub_830AD918(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r11,r11,-31976
	r11.s64 = r11.s64 + -31976;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B9568"))) PPC_WEAK_FUNC(sub_830B9568);
PPC_FUNC_IMPL(__imp__sub_830B9568) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31976
	r11.s64 = r11.s64 + -31976;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830adab8
	sub_830ADAB8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b95a4
	if (cr0.eq) goto loc_830B95A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B95A4:
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

__attribute__((alias("__imp__sub_830B95C0"))) PPC_WEAK_FUNC(sub_830B95C0);
PPC_FUNC_IMPL(__imp__sub_830B95C0) {
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
	// bl 0x830ad918
	sub_830AD918(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r11,r11,-31904
	r11.s64 = r11.s64 + -31904;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B9620"))) PPC_WEAK_FUNC(sub_830B9620);
PPC_FUNC_IMPL(__imp__sub_830B9620) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31904
	r11.s64 = r11.s64 + -31904;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830adab8
	sub_830ADAB8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b965c
	if (cr0.eq) goto loc_830B965C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B965C:
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

__attribute__((alias("__imp__sub_830B9678"))) PPC_WEAK_FUNC(sub_830B9678);
PPC_FUNC_IMPL(__imp__sub_830B9678) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x830ad918
	sub_830AD918(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r11,r11,-31832
	r11.s64 = r11.s64 + -31832;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_830B96C0"))) PPC_WEAK_FUNC(sub_830B96C0);
PPC_FUNC_IMPL(__imp__sub_830B96C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x830b96d0
	if (!cr6.eq) goto loc_830B96D0;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
loc_830B96D0:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B96D8"))) PPC_WEAK_FUNC(sub_830B96D8);
PPC_FUNC_IMPL(__imp__sub_830B96D8) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31832
	r11.s64 = r11.s64 + -31832;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830adab8
	sub_830ADAB8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b9714
	if (cr0.eq) goto loc_830B9714;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B9714:
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

__attribute__((alias("__imp__sub_830B9730"))) PPC_WEAK_FUNC(sub_830B9730);
PPC_FUNC_IMPL(__imp__sub_830B9730) {
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B9790"))) PPC_WEAK_FUNC(sub_830B9790);
PPC_FUNC_IMPL(__imp__sub_830B9790) {
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
	// bl 0x830ad918
	sub_830AD918(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31752
	r11.s64 = r11.s64 + -31752;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_830B97E0"))) PPC_WEAK_FUNC(sub_830B97E0);
PPC_FUNC_IMPL(__imp__sub_830B97E0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-31752
	r11.s64 = r11.s64 + -31752;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x830b982c
	if (cr0.eq) goto loc_830B982C;
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
loc_830B982C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x830adab8
	sub_830ADAB8(ctx, base);
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

__attribute__((alias("__imp__sub_830B984C"))) PPC_WEAK_FUNC(sub_830B984C);
PPC_FUNC_IMPL(__imp__sub_830B984C) {
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
	// bl 0x830adab8
	sub_830ADAB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B9878"))) PPC_WEAK_FUNC(sub_830B9878);
PPC_FUNC_IMPL(__imp__sub_830B9878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B9890"))) PPC_WEAK_FUNC(sub_830B9890);
PPC_FUNC_IMPL(__imp__sub_830B9890) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x83020000
	sub_83020000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830B9898"))) PPC_WEAK_FUNC(sub_830B9898);
PPC_FUNC_IMPL(__imp__sub_830B9898) {
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
	// bl 0x830b97e0
	sub_830B97E0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b98c8
	if (cr0.eq) goto loc_830B98C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B98C8:
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

__attribute__((alias("__imp__sub_830B98F0"))) PPC_WEAK_FUNC(sub_830B98F0);
PPC_FUNC_IMPL(__imp__sub_830B98F0) {
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
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x830b9be8
	if (cr6.eq) goto loc_830B9BE8;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x830b996c
	if (!cr6.eq) goto loc_830B996C;
	// lwz r4,60(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x830b9964
	if (cr0.eq) goto loc_830B9964;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,60(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x830b9968
	goto loc_830B9968;
loc_830B9964:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830B9968:
	// stw r10,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r10.u32);
loc_830B996C:
	// lhz r11,4(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x830b9988
	if (!cr6.eq) goto loc_830B9988;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_830B9980:
	// bl 0x83043678
	sub_83043678(ctx, base);
	// b 0x830b9be8
	goto loc_830B9BE8;
loc_830B9988:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lhz r23,4(r24)
	r23.u64 = PPC_LOAD_U16(r24.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,1
	cr6.compare<uint32_t>(r23.u32, 1, xer);
	// bne cr6,0x830b99fc
	if (!cr6.eq) goto loc_830B99FC;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x830b9be8
	if (cr6.eq) goto loc_830B9BE8;
loc_830B99B8:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,68(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x830b99b8
	if (cr6.lt) goto loc_830B99B8;
	// b 0x830b9be8
	goto loc_830B9BE8;
loc_830B99FC:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x830b9a14
	if (!cr0.eq) goto loc_830B9A14;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x830b9980
	goto loc_830B9980;
loc_830B9A14:
	// addi r28,r11,-1
	r28.s64 = r11.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lhz r30,4(r29)
	r30.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x830b9a38
	if (cr0.eq) goto loc_830B9A38;
	// cmplwi cr6,r30,10
	cr6.compare<uint32_t>(r30.u32, 10, xer);
	// bne cr6,0x830b9a48
	if (!cr6.eq) goto loc_830B9A48;
loc_830B9A38:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x830b9a54
	if (cr6.eq) goto loc_830B9A54;
	// cmplwi cr6,r23,10
	cr6.compare<uint32_t>(r23.u32, 10, xer);
	// beq cr6,0x830b9a54
	if (cr6.eq) goto loc_830B9A54;
loc_830B9A48:
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x830b9980
	goto loc_830B9980;
loc_830B9A54:
	// li r4,1023
	ctx.r4.s64 = 1023;
	// lwz r5,60(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// lis r25,1
	r25.s64 = 65536;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x830b9b04
	if (!cr6.eq) goto loc_830B9B04;
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
	// cmpw cr6,r3,r25
	cr6.compare<int32_t>(ctx.r3.s32, r25.s32, xer);
	// blt cr6,0x830b9ac4
	if (cr6.lt) goto loc_830B9AC4;
	// lwz r4,60(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// bl 0x830af418
	sub_830AF418(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r3,60(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830b9ad0
	goto loc_830B9AD0;
loc_830B9AC4:
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_830B9AD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x830abb90
	sub_830ABB90(ctx, base);
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830b9b28
	goto loc_830B9B28;
loc_830B9B04:
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_830B9B28:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bne cr6,0x830b9b94
	if (!cr6.eq) goto loc_830B9B94;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r25
	cr6.compare<int32_t>(ctx.r3.s32, r25.s32, xer);
	// blt cr6,0x830b9b84
	if (cr6.lt) goto loc_830B9B84;
	// lwz r4,60(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// bl 0x830af418
	sub_830AF418(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r3,60(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830b9bb0
	goto loc_830B9BB0;
loc_830B9B84:
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// b 0x830b9bb0
	goto loc_830B9BB0;
loc_830B9B94:
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_830B9BB0:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x830b9730
	sub_830B9730(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830B9BE8:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_830B9BF0"))) PPC_WEAK_FUNC(sub_830B9BF0);
PPC_FUNC_IMPL(__imp__sub_830B9BF0) {
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

__attribute__((alias("__imp__sub_830B9C1C"))) PPC_WEAK_FUNC(sub_830B9C1C);
PPC_FUNC_IMPL(__imp__sub_830B9C1C) {
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

__attribute__((alias("__imp__sub_830B9C48"))) PPC_WEAK_FUNC(sub_830B9C48);
PPC_FUNC_IMPL(__imp__sub_830B9C48) {
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
	// bl 0x830ad918
	sub_830AD918(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r11,r11,-31520
	r11.s64 = r11.s64 + -31520;
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

__attribute__((alias("__imp__sub_830B9C98"))) PPC_WEAK_FUNC(sub_830B9C98);
PPC_FUNC_IMPL(__imp__sub_830B9C98) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31520
	r11.s64 = r11.s64 + -31520;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830adab8
	sub_830ADAB8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b9cd4
	if (cr0.eq) goto loc_830B9CD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B9CD4:
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

__attribute__((alias("__imp__sub_830B9CF8"))) PPC_WEAK_FUNC(sub_830B9CF8);
PPC_FUNC_IMPL(__imp__sub_830B9CF8) {
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
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x830ad918
	sub_830AD918(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r27.u32);
	// addi r11,r11,-31448
	r11.s64 = r11.s64 + -31448;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830B9D54"))) PPC_WEAK_FUNC(sub_830B9D54);
PPC_FUNC_IMPL(__imp__sub_830B9D54) {
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
	// bl 0x830adab8
	sub_830ADAB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B9D88"))) PPC_WEAK_FUNC(sub_830B9D88);
PPC_FUNC_IMPL(__imp__sub_830B9D88) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-31448
	r11.s64 = r11.s64 + -31448;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
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
	// bl 0x830adab8
	sub_830ADAB8(ctx, base);
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

__attribute__((alias("__imp__sub_830B9DEC"))) PPC_WEAK_FUNC(sub_830B9DEC);
PPC_FUNC_IMPL(__imp__sub_830B9DEC) {
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
	// bl 0x830adab8
	sub_830ADAB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830B9E18"))) PPC_WEAK_FUNC(sub_830B9E18);
PPC_FUNC_IMPL(__imp__sub_830B9E18) {
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
	// bl 0x830b9d88
	sub_830B9D88(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b9e48
	if (cr0.eq) goto loc_830B9E48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B9E48:
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

__attribute__((alias("__imp__sub_830B9E68"))) PPC_WEAK_FUNC(sub_830B9E68);
PPC_FUNC_IMPL(__imp__sub_830B9E68) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x830ad918
	sub_830AD918(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// addi r11,r11,-31256
	r11.s64 = r11.s64 + -31256;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_830B9EB8"))) PPC_WEAK_FUNC(sub_830B9EB8);
PPC_FUNC_IMPL(__imp__sub_830B9EB8) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31256
	r11.s64 = r11.s64 + -31256;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830adab8
	sub_830ADAB8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830b9ef4
	if (cr0.eq) goto loc_830B9EF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830B9EF4:
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

__attribute__((alias("__imp__sub_830B9F10"))) PPC_WEAK_FUNC(sub_830B9F10);
PPC_FUNC_IMPL(__imp__sub_830B9F10) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x830ad918
	sub_830AD918(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// addi r11,r11,-31184
	r11.s64 = r11.s64 + -31184;
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_830B9F68"))) PPC_WEAK_FUNC(sub_830B9F68);
PPC_FUNC_IMPL(__imp__sub_830B9F68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
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
}

__attribute__((alias("__imp__sub_830B9F80"))) PPC_WEAK_FUNC(sub_830B9F80);
PPC_FUNC_IMPL(__imp__sub_830B9F80) {
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
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bgt cr6,0x830b9fb8
	if (cr6.gt) goto loc_830B9FB8;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x830b9fb0
	if (!cr6.eq) goto loc_830B9FB0;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_830B9FA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_830B9FB0:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x830b9fa0
	goto loc_830B9FA0;
loc_830B9FB8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,295
	ctx.r6.s64 = 295;
	// addi r4,r11,-31112
	ctx.r4.s64 = r11.s64 + -31112;
	// li r5,82
	ctx.r5.s64 = 82;
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
}

__attribute__((alias("__imp__sub_830B9FE8"))) PPC_WEAK_FUNC(sub_830B9FE8);
PPC_FUNC_IMPL(__imp__sub_830B9FE8) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-31184
	r11.s64 = r11.s64 + -31184;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x830adab8
	sub_830ADAB8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x830ba024
	if (cr0.eq) goto loc_830BA024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_830BA024:
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

__attribute__((alias("__imp__sub_830BA040"))) PPC_WEAK_FUNC(sub_830BA040);
PPC_FUNC_IMPL(__imp__sub_830BA040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,-8380
	ctx.r10.s64 = ctx.r10.s64 + -8380;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BA068"))) PPC_WEAK_FUNC(sub_830BA068);
PPC_FUNC_IMPL(__imp__sub_830BA068) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x830ba16c
	if (!cr0.eq) goto loc_830BA16C;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x830ba154
	if (cr6.eq) goto loc_830BA154;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x830ba144
	if (cr6.lt) goto loc_830BA144;
	// beq cr6,0x830ba12c
	if (cr6.eq) goto loc_830BA12C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x830ba154
	if (cr6.lt) goto loc_830BA154;
	// beq cr6,0x830ba110
	if (cr6.eq) goto loc_830BA110;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x830ba0cc
	if (cr6.lt) goto loc_830BA0CC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r11,-31056
	ctx.r3.s64 = r11.s64 + -31056;
	// bl 0x830c1568
	sub_830C1568(ctx, base);
	// b 0x830ba154
	goto loc_830BA154;
loc_830BA0CC:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ba0ec
	if (cr6.eq) goto loc_830BA0EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830BA0EC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ba154
	if (cr6.eq) goto loc_830BA154;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x830ba120
	goto loc_830BA120;
loc_830BA110:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_830BA120:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x830ba154
	goto loc_830BA154;
loc_830BA12C:
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
	// b 0x830ba154
	goto loc_830BA154;
loc_830BA144:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830bd010
	sub_830BD010(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_830BA154:
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
loc_830BA16C:
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

__attribute__((alias("__imp__sub_830BA180"))) PPC_WEAK_FUNC(sub_830BA180);
PPC_FUNC_IMPL(__imp__sub_830BA180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BA190"))) PPC_WEAK_FUNC(sub_830BA190);
PPC_FUNC_IMPL(__imp__sub_830BA190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BA1A8"))) PPC_WEAK_FUNC(sub_830BA1A8);
PPC_FUNC_IMPL(__imp__sub_830BA1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BA1C0"))) PPC_WEAK_FUNC(sub_830BA1C0);
PPC_FUNC_IMPL(__imp__sub_830BA1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31024
	r11.s64 = r11.s64 + -31024;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BA1D8"))) PPC_WEAK_FUNC(sub_830BA1D8);
PPC_FUNC_IMPL(__imp__sub_830BA1D8) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r11,r11,-31024
	r11.s64 = r11.s64 + -31024;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x830ba210
	if (cr6.eq) goto loc_830BA210;
	// bl 0x830ba068
	sub_830BA068(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_830BA210:
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

__attribute__((alias("__imp__sub_830BA228"))) PPC_WEAK_FUNC(sub_830BA228);
PPC_FUNC_IMPL(__imp__sub_830BA228) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ba23c
	if (cr6.eq) goto loc_830BA23C;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
loc_830BA23C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BA248"))) PPC_WEAK_FUNC(sub_830BA248);
PPC_FUNC_IMPL(__imp__sub_830BA248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x830ba26c
	if (cr6.eq) goto loc_830BA26C;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x830ba26c
	if (cr6.eq) goto loc_830BA26C;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x830ba270
	goto loc_830BA270;
loc_830BA26C:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_830BA270:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830BA280"))) PPC_WEAK_FUNC(sub_830BA280);
PPC_FUNC_IMPL(__imp__sub_830BA280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blr 
	return;
}

