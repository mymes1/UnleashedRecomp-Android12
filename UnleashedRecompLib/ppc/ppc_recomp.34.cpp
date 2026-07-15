#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8251A568"))) PPC_WEAK_FUNC(sub_8251A568);
PPC_FUNC_IMPL(__imp__sub_8251A568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// ori r10,r10,34268
	ctx.r10.u64 = ctx.r10.u64 | 34268;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A580"))) PPC_WEAK_FUNC(sub_8251A580);
PPC_FUNC_IMPL(__imp__sub_8251A580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,10
	r11.s64 = ctx.r4.s64 * 10;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// mulli r11,r11,100
	r11.s64 = r11.s64 * 100;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// mulli r11,r11,10
	r11.s64 = r11.s64 * 10;
	// add r3,r11,r7
	ctx.r3.u64 = r11.u64 + ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A5A0"))) PPC_WEAK_FUNC(sub_8251A5A0);
PPC_FUNC_IMPL(__imp__sub_8251A5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r4,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A5B0"))) PPC_WEAK_FUNC(sub_8251A5B0);
PPC_FUNC_IMPL(__imp__sub_8251A5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A5C0"))) PPC_WEAK_FUNC(sub_8251A5C0);
PPC_FUNC_IMPL(__imp__sub_8251A5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r10,10
	ctx.r10.s64 = 10;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A5E8"))) PPC_WEAK_FUNC(sub_8251A5E8);
PPC_FUNC_IMPL(__imp__sub_8251A5E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8251a5f8
	if (!cr6.eq) goto loc_8251A5F8;
loc_8251A5F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8251A5F8:
	// li r11,10
	r11.s64 = 10;
	// divwu r10,r4,r11
	ctx.r10.u32 = ctx.r4.u32 / r11.u32;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// subf. r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8251a5f0
	if (!cr0.eq) goto loc_8251A5F0;
	// divwu r11,r4,r11
	r11.u32 = ctx.r4.u32 / r11.u32;
	// li r10,100
	ctx.r10.s64 = 100;
	// li r9,70
	ctx.r9.s64 = 70;
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfc r11,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A638"))) PPC_WEAK_FUNC(sub_8251A638);
PPC_FUNC_IMPL(__imp__sub_8251A638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r10,10
	ctx.r10.s64 = 10;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x8251a680
	if (!cr6.eq) goto loc_8251A680;
	// li r10,10000
	ctx.r10.s64 = 10000;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r10,10000
	ctx.r10.s64 = ctx.r10.s64 * 10000;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_8251A680:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A688"))) PPC_WEAK_FUNC(sub_8251A688);
PPC_FUNC_IMPL(__imp__sub_8251A688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1000
	r11.s64 = 1000;
	// li r10,10
	ctx.r10.s64 = 10;
	// divwu r11,r4,r11
	r11.u32 = ctx.r4.u32 / r11.u32;
	// mulli r11,r11,1000
	r11.s64 = r11.s64 * 1000;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// divwu r3,r11,r10
	ctx.r3.u32 = r11.u32 / ctx.r10.u32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A6A8"))) PPC_WEAK_FUNC(sub_8251A6A8);
PPC_FUNC_IMPL(__imp__sub_8251A6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r4,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A6B8"))) PPC_WEAK_FUNC(sub_8251A6B8);
PPC_FUNC_IMPL(__imp__sub_8251A6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A6C8"))) PPC_WEAK_FUNC(sub_8251A6C8);
PPC_FUNC_IMPL(__imp__sub_8251A6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8251a6f4
	if (cr6.lt) goto loc_8251A6F4;
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// bge cr6,0x8251a6f4
	if (!cr6.lt) goto loc_8251A6F4;
	// addi r11,r4,8576
	r11.s64 = ctx.r4.s64 + 8576;
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_8251A6F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A700"))) PPC_WEAK_FUNC(sub_8251A700);
PPC_FUNC_IMPL(__imp__sub_8251A700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmpwi cr6,r4,9
	cr6.compare<int32_t>(ctx.r4.s32, 9, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,8576
	r11.s64 = ctx.r4.s64 + 8576;
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A728"))) PPC_WEAK_FUNC(sub_8251A728);
PPC_FUNC_IMPL(__imp__sub_8251A728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lbz r11,32(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8251a754
	if (cr0.eq) goto loc_8251A754;
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// ble cr6,0x8251a74c
	if (!cr6.gt) goto loc_8251A74C;
	// li r11,99
	r11.s64 = 99;
loc_8251A74C:
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// blr 
	return;
loc_8251A754:
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addis r10,r11,1
	ctx.r10.s64 = r11.s64 + 65536;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// ble cr6,0x8251a774
	if (!cr6.gt) goto loc_8251A774;
	// li r11,99
	r11.s64 = 99;
loc_8251A774:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A780"))) PPC_WEAK_FUNC(sub_8251A780);
PPC_FUNC_IMPL(__imp__sub_8251A780) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8251a7bc
	if (cr6.eq) goto loc_8251A7BC;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8251a7bc
	if (cr6.eq) goto loc_8251A7BC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!cr6.eq) return;
loc_8251A7BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A7C8"))) PPC_WEAK_FUNC(sub_8251A7C8);
PPC_FUNC_IMPL(__imp__sub_8251A7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x8251a7fc
	if (cr6.eq) goto loc_8251A7FC;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_8251A7FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A808"))) PPC_WEAK_FUNC(sub_8251A808);
PPC_FUNC_IMPL(__imp__sub_8251A808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8251a874
	if (cr6.eq) goto loc_8251A874;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x8251a874
	if (cr6.eq) goto loc_8251A874;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x8251a874
	if (cr6.eq) goto loc_8251A874;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// beq cr6,0x8251a874
	if (cr6.eq) goto loc_8251A874;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// beq cr6,0x8251a874
	if (cr6.eq) goto loc_8251A874;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x8251a874
	if (cr6.eq) goto loc_8251A874;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// beq cr6,0x8251a874
	if (cr6.eq) goto loc_8251A874;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// beq cr6,0x8251a874
	if (cr6.eq) goto loc_8251A874;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_8251A874:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A880"))) PPC_WEAK_FUNC(sub_8251A880);
PPC_FUNC_IMPL(__imp__sub_8251A880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x8251a5e8
	sub_8251A5E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251A890"))) PPC_WEAK_FUNC(sub_8251A890);
PPC_FUNC_IMPL(__imp__sub_8251A890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r10,1000
	ctx.r10.s64 = ctx.r10.s64 * 1000;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A8C0"))) PPC_WEAK_FUNC(sub_8251A8C0);
PPC_FUNC_IMPL(__imp__sub_8251A8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1000
	r11.s64 = 1000;
	// li r10,10
	ctx.r10.s64 = 10;
	// divwu r11,r4,r11
	r11.u32 = ctx.r4.u32 / r11.u32;
	// mulli r11,r11,1000
	r11.s64 = r11.s64 * 1000;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A8E8"))) PPC_WEAK_FUNC(sub_8251A8E8);
PPC_FUNC_IMPL(__imp__sub_8251A8E8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af8
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,511
	ctx.r7.s64 = 511;
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,-4436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4436);
	f0.f64 = double(temp.f32);
loc_8251A90C:
	// stw r30,-12(r11)
	PPC_STORE_U32(r11.u32 + -12, r30.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r30,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r30,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r30.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8251A944:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8251a944
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8251A944;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// bge 0x8251a90c
	if (!cr0.lt) goto loc_8251A90C;
	// lis r11,0
	r11.s64 = 0;
	// addis r3,r31,1
	ctx.r3.s64 = r31.s64 + 65536;
	// ori r11,r11,34284
	r11.u64 = r11.u64 | 34284;
	// li r29,1
	r29.s64 = 1;
	// li r5,344
	ctx.r5.s64 = 344;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-31196
	ctx.r3.s64 = ctx.r3.s64 + -31196;
	// stwx r29,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r29.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r11,r31,1
	r11.s64 = r31.s64 + 65536;
	// ori r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 32768;
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// addi r11,r11,-32764
	r11.s64 = r11.s64 + -32764;
	// addi r10,r10,-32760
	ctx.r10.s64 = ctx.r10.s64 + -32760;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// lwz r9,-10840(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10840);
	// stwx r9,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// beq cr6,0x8251a9c8
	if (cr6.eq) goto loc_8251A9C8;
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// beq 0x8251a9c8
	if (cr0.eq) goto loc_8251A9C8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8251A9BC:
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8251a9bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8251A9BC;
loc_8251A9C8:
	// addis r11,r31,1
	r11.s64 = r31.s64 + 65536;
	// addi r11,r11,-31960
	r11.s64 = r11.s64 + -31960;
	// b 0x8251a9e0
	goto loc_8251A9E0;
loc_8251A9D4:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// stb r30,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, r30.u8);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_8251A9E0:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x8251a9d4
	if (cr6.lt) goto loc_8251A9D4;
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// addi r10,r10,-31860
	ctx.r10.s64 = ctx.r10.s64 + -31860;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8251aa14
	if (!cr6.lt) goto loc_8251AA14;
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// beq 0x8251aa14
	if (cr0.eq) goto loc_8251AA14;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8251AA08:
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8251aa08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8251AA08;
loc_8251AA14:
	// addis r11,r31,1
	r11.s64 = r31.s64 + 65536;
	// addi r11,r11,-31360
	r11.s64 = r11.s64 + -31360;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8251aa40
	if (!cr6.lt) goto loc_8251AA40;
	// subf. r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// beq 0x8251aa40
	if (cr0.eq) goto loc_8251AA40;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8251AA34:
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8251aa34
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8251AA34;
loc_8251AA40:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8251AA4C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8251aa4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8251AA4C;
	// lis r11,0
	r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,34208
	r11.u64 = r11.u64 | 34208;
	// ori r10,r10,34216
	ctx.r10.u64 = ctx.r10.u64 | 34216;
	// ori r9,r9,34220
	ctx.r9.u64 = ctx.r9.u64 | 34220;
	// ori r8,r8,34224
	ctx.r8.u64 = ctx.r8.u64 | 34224;
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// stwx r30,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r30.u32);
	// lis r6,0
	ctx.r6.s64 = 0;
	// stwx r30,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r30.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stwx r30,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r30.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stwx r30,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r30.u32);
	// lis r28,0
	r28.s64 = 0;
	// ori r7,r7,34272
	ctx.r7.u64 = ctx.r7.u64 | 34272;
	// ori r6,r6,34276
	ctx.r6.u64 = ctx.r6.u64 | 34276;
	// ori r9,r3,34292
	ctx.r9.u64 = ctx.r3.u64 | 34292;
	// ori r11,r5,34280
	r11.u64 = ctx.r5.u64 | 34280;
	// ori r10,r4,34288
	ctx.r10.u64 = ctx.r4.u64 | 34288;
	// ori r8,r28,34296
	ctx.r8.u64 = r28.u64 | 34296;
	// stwx r30,r31,r7
	PPC_STORE_U32(r31.u32 + ctx.r7.u32, r30.u32);
	// lis r27,0
	r27.s64 = 0;
	// stwx r30,r31,r6
	PPC_STORE_U32(r31.u32 + ctx.r6.u32, r30.u32);
	// lis r26,0
	r26.s64 = 0;
	// stwx r30,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r30.u32);
	// lis r25,0
	r25.s64 = 0;
	// stwx r30,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r30.u32);
	// lis r24,0
	r24.s64 = 0;
	// stwx r29,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r29.u32);
	// lis r23,0
	r23.s64 = 0;
	// stwx r29,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r29.u32);
	// lis r22,0
	r22.s64 = 0;
	// ori r7,r27,34300
	ctx.r7.u64 = r27.u64 | 34300;
	// ori r6,r26,34228
	ctx.r6.u64 = r26.u64 | 34228;
	// ori r11,r25,34232
	r11.u64 = r25.u64 | 34232;
	// ori r10,r24,34236
	ctx.r10.u64 = r24.u64 | 34236;
	// ori r9,r23,34240
	ctx.r9.u64 = r23.u64 | 34240;
	// ori r8,r22,34244
	ctx.r8.u64 = r22.u64 | 34244;
	// stwx r30,r31,r7
	PPC_STORE_U32(r31.u32 + ctx.r7.u32, r30.u32);
	// lis r21,0
	r21.s64 = 0;
	// stwx r29,r31,r6
	PPC_STORE_U32(r31.u32 + ctx.r6.u32, r29.u32);
	// lis r20,0
	r20.s64 = 0;
	// stwx r30,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r30.u32);
	// lis r19,0
	r19.s64 = 0;
	// stwx r29,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r29.u32);
	// lis r18,0
	r18.s64 = 0;
	// stwx r30,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r30.u32);
	// lis r17,0
	r17.s64 = 0;
	// stwx r29,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r29.u32);
	// lis r16,0
	r16.s64 = 0;
	// ori r7,r21,34248
	ctx.r7.u64 = r21.u64 | 34248;
	// ori r6,r20,34252
	ctx.r6.u64 = r20.u64 | 34252;
	// ori r11,r19,34256
	r11.u64 = r19.u64 | 34256;
	// ori r10,r18,34260
	ctx.r10.u64 = r18.u64 | 34260;
	// ori r9,r17,34264
	ctx.r9.u64 = r17.u64 | 34264;
	// ori r8,r16,34268
	ctx.r8.u64 = r16.u64 | 34268;
	// stwx r30,r31,r7
	PPC_STORE_U32(r31.u32 + ctx.r7.u32, r30.u32);
	// stwx r29,r31,r6
	PPC_STORE_U32(r31.u32 + ctx.r6.u32, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r30,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r30.u32);
	// stwx r29,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r29.u32);
	// stwx r30,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r30.u32);
	// stwx r30,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r30.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_8251AB70"))) PPC_WEAK_FUNC(sub_8251AB70);
PPC_FUNC_IMPL(__imp__sub_8251AB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,152(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 152);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8251aba0
	if (cr0.eq) goto loc_8251ABA0;
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x8251ac28
	goto loc_8251AC28;
loc_8251ABA0:
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// lwz r11,148(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 148);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r31,1
	r31.s64 = 1;
loc_8251ABC0:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251ac0c
	if (cr6.eq) goto loc_8251AC0C;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8251ABD8:
	// slw r30,r31,r10
	r30.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r10.u8 & 0x3F));
	// and. r30,r30,r5
	r30.u64 = r30.u64 & ctx.r5.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8251abe8
	if (cr0.eq) goto loc_8251ABE8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8251ABE8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x8251abd8
	if (cr6.lt) goto loc_8251ABD8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// cmplwi cr6,r9,512
	cr6.compare<uint32_t>(ctx.r9.u32, 512, xer);
	// blt cr6,0x8251abc0
	if (cr6.lt) goto loc_8251ABC0;
loc_8251AC0C:
	// lwz r11,152(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 152);
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r31,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r31.u8);
	// lwz r11,152(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 152);
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r3.u32);
loc_8251AC28:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251AC38"))) PPC_WEAK_FUNC(sub_8251AC38);
PPC_FUNC_IMPL(__imp__sub_8251AC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_8251AC54:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r9,10000
	ctx.r9.s64 = 10000;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// bne cr6,0x8251aca0
	if (!cr6.eq) goto loc_8251ACA0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8251AC7C:
	// li r4,1
	ctx.r4.s64 = 1;
	// slw r4,r4,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// and. r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8251ac90
	if (cr0.eq) goto loc_8251AC90;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8251AC90:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x8251ac7c
	if (cr6.lt) goto loc_8251AC7C;
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_8251ACA0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// cmplwi cr6,r6,512
	cr6.compare<uint32_t>(ctx.r6.u32, 512, xer);
	// blt cr6,0x8251ac54
	if (cr6.lt) goto loc_8251AC54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251ACB8"))) PPC_WEAK_FUNC(sub_8251ACB8);
PPC_FUNC_IMPL(__imp__sub_8251ACB8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8251ab70
	sub_8251AB70(ctx, base);
	// cmplwi cr6,r3,120
	cr6.compare<uint32_t>(ctx.r3.u32, 120, xer);
	// blt cr6,0x8251acd8
	if (cr6.lt) goto loc_8251ACD8;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x8251ad28
	goto loc_8251AD28;
loc_8251ACD8:
	// cmplwi cr6,r3,80
	cr6.compare<uint32_t>(ctx.r3.u32, 80, xer);
	// blt cr6,0x8251ace8
	if (cr6.lt) goto loc_8251ACE8;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x8251ad28
	goto loc_8251AD28;
loc_8251ACE8:
	// cmplwi cr6,r3,60
	cr6.compare<uint32_t>(ctx.r3.u32, 60, xer);
	// blt cr6,0x8251acf8
	if (cr6.lt) goto loc_8251ACF8;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8251ad28
	goto loc_8251AD28;
loc_8251ACF8:
	// cmplwi cr6,r3,45
	cr6.compare<uint32_t>(ctx.r3.u32, 45, xer);
	// blt cr6,0x8251ad08
	if (cr6.lt) goto loc_8251AD08;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8251ad28
	goto loc_8251AD28;
loc_8251AD08:
	// cmplwi cr6,r3,30
	cr6.compare<uint32_t>(ctx.r3.u32, 30, xer);
	// blt cr6,0x8251ad18
	if (cr6.lt) goto loc_8251AD18;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8251ad28
	goto loc_8251AD28;
loc_8251AD18:
	// li r11,15
	r11.s64 = 15;
	// subfc r11,r11,r3
	xer.ca = ctx.r3.u32 >= r11.u32;
	r11.s64 = ctx.r3.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
loc_8251AD28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251AD38"))) PPC_WEAK_FUNC(sub_8251AD38);
PPC_FUNC_IMPL(__imp__sub_8251AD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addis r10,r11,1
	ctx.r10.s64 = r11.s64 + 65536;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r10,r10,-32760
	ctx.r10.s64 = ctx.r10.s64 + -32760;
	// addi r11,r11,-32764
	r11.s64 = r11.s64 + -32764;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// subf. r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beqlr 
	if (cr0.eq) return;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8251AD64:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8251ad64
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8251AD64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251AD78"))) PPC_WEAK_FUNC(sub_8251AD78);
PPC_FUNC_IMPL(__imp__sub_8251AD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,-31200
	r29.s64 = r11.s64 + -31200;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// addi r4,r11,11724
	ctx.r4.s64 = r11.s64 + 11724;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r28,r28,-32768
	r28.s64 = r28.s64 + -32768;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,10000
	ctx.r7.s64 = 10000;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a80b0
	sub_825A80B0(ctx, base);
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11712
	ctx.r4.s64 = r11.s64 + 11712;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// addi r4,r11,11692
	ctx.r4.s64 = r11.s64 + 11692;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r28,r28,-32764
	r28.s64 = r28.s64 + -32764;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x825a83f0
	sub_825A83F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a8278
	sub_825A8278(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11680
	ctx.r4.s64 = r11.s64 + 11680;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// addi r4,r11,11664
	ctx.r4.s64 = r11.s64 + 11664;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r28,r28,-32763
	r28.s64 = r28.s64 + -32763;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x825a83f0
	sub_825A83F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a8278
	sub_825A8278(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11652
	ctx.r4.s64 = r11.s64 + 11652;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// addi r4,r11,11632
	ctx.r4.s64 = r11.s64 + 11632;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r28,r28,-32762
	r28.s64 = r28.s64 + -32762;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x825a83f0
	sub_825A83F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a8278
	sub_825A8278(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11612
	ctx.r4.s64 = r11.s64 + 11612;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// addi r4,r11,11580
	ctx.r4.s64 = r11.s64 + 11580;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r28,r28,-32761
	r28.s64 = r28.s64 + -32761;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x825a83f0
	sub_825A83F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a8278
	sub_825A8278(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// addi r4,r11,11560
	ctx.r4.s64 = r11.s64 + 11560;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r28,r28,-31316
	r28.s64 = r28.s64 + -31316;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,10000
	ctx.r7.s64 = 10000;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a80b0
	sub_825A80B0(ctx, base);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r29,r31,1
	r29.s64 = r31.s64 + 65536;
	// addi r4,r11,11540
	ctx.r4.s64 = r11.s64 + 11540;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r29,r29,-31312
	r29.s64 = r29.s64 + -31312;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,10000
	ctx.r7.s64 = 10000;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a80b0
	sub_825A80B0(ctx, base);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11532
	ctx.r4.s64 = r11.s64 + 11532;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r29,r31,1
	r29.s64 = r31.s64 + 65536;
	// addi r4,r11,11520
	ctx.r4.s64 = r11.s64 + 11520;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r29,r29,-31268
	r29.s64 = r29.s64 + -31268;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,10000
	ctx.r7.s64 = 10000;
	// li r8,10
	ctx.r8.s64 = 10;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a80b0
	sub_825A80B0(ctx, base);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11504
	ctx.r4.s64 = r11.s64 + 11504;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r29,r31,1
	r29.s64 = r31.s64 + 65536;
	// addi r4,r11,11492
	ctx.r4.s64 = r11.s64 + 11492;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r29,r29,-31308
	r29.s64 = r29.s64 + -31308;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,99
	ctx.r7.s64 = 99;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a80b0
	sub_825A80B0(ctx, base);
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11476
	ctx.r4.s64 = r11.s64 + 11476;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r29,r31,1
	r29.s64 = r31.s64 + 65536;
	// addi r4,r11,11464
	ctx.r4.s64 = r11.s64 + 11464;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r29,r29,-31300
	r29.s64 = r29.s64 + -31300;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,99
	ctx.r7.s64 = 99;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a80b0
	sub_825A80B0(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11448
	ctx.r4.s64 = r11.s64 + 11448;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r29,r31,1
	r29.s64 = r31.s64 + 65536;
	// addi r4,r11,11436
	ctx.r4.s64 = r11.s64 + 11436;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r29,r29,-31292
	r29.s64 = r29.s64 + -31292;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,99
	ctx.r7.s64 = 99;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a80b0
	sub_825A80B0(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11416
	ctx.r4.s64 = r11.s64 + 11416;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r29,r31,1
	r29.s64 = r31.s64 + 65536;
	// addi r4,r11,11400
	ctx.r4.s64 = r11.s64 + 11400;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r29,r29,-31284
	r29.s64 = r29.s64 + -31284;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,99
	ctx.r7.s64 = 99;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825a80b0
	sub_825A80B0(ctx, base);
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11384
	ctx.r4.s64 = r11.s64 + 11384;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addis r31,r31,1
	r31.s64 = r31.s64 + 65536;
	// addi r4,r11,11372
	ctx.r4.s64 = r11.s64 + 11372;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r31,r31,-31276
	r31.s64 = r31.s64 + -31276;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,99
	ctx.r7.s64 = 99;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a80b0
	sub_825A80B0(ctx, base);
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,824
	ctx.r3.s64 = ctx.r1.s64 + 824;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8251B348"))) PPC_WEAK_FUNC(sub_8251B348);
PPC_FUNC_IMPL(__imp__sub_8251B348) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,11936
	ctx.r4.s64 = r11.s64 + 11936;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7688
	ctx.r4.s64 = r11.s64 + -7688;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825ce300
	sub_825CE300(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251b3a4
	if (cr6.eq) goto loc_8251B3A4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251B3A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,30992
	ctx.r4.s64 = r11.s64 + 30992;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,30984
	ctx.r4.s64 = r11.s64 + 30984;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825cfc40
	sub_825CFC40(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,11920
	ctx.r4.s64 = r11.s64 + 11920;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,11908
	ctx.r4.s64 = r11.s64 + 11908;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r31,r11,-10840
	r31.s64 = r11.s64 + -10840;
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x825b2e28
	sub_825B2E28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a6ed8
	sub_825A6ED8(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825cf410
	sub_825CF410(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,11900
	ctx.r4.s64 = r11.s64 + 11900;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,11888
	ctx.r4.s64 = r11.s64 + 11888;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825ce300
	sub_825CE300(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251b4c0
	if (cr6.eq) goto loc_8251B4C0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251B4C0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,11880
	ctx.r4.s64 = r11.s64 + 11880;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,11868
	ctx.r4.s64 = r11.s64 + 11868;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825cfc40
	sub_825CFC40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11852
	ctx.r4.s64 = r11.s64 + 11852;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,11828
	ctx.r4.s64 = r11.s64 + 11828;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r7,15
	ctx.r7.s64 = 983040;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// ori r7,r7,16960
	ctx.r7.u64 = ctx.r7.u64 | 16960;
	// li r8,100
	ctx.r8.s64 = 100;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825b2e28
	sub_825B2E28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x825a6ed8
	sub_825A6ED8(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11812
	ctx.r4.s64 = r11.s64 + 11812;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,11788
	ctx.r4.s64 = r11.s64 + 11788;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r7,15
	ctx.r7.s64 = 983040;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// li r8,100
	ctx.r8.s64 = 100;
	// ori r7,r7,16960
	ctx.r7.u64 = ctx.r7.u64 | 16960;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x825b2e28
	sub_825B2E28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6ed8
	sub_825A6ED8(ctx, base);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,11764
	ctx.r4.s64 = r11.s64 + 11764;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,11732
	ctx.r4.s64 = r11.s64 + 11732;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// li r8,100
	ctx.r8.s64 = 100;
	// li r7,5000
	ctx.r7.s64 = 5000;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x825b2e28
	sub_825B2E28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a6ed8
	sub_825A6ED8(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825cf410
	sub_825CF410(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8251B670"))) PPC_WEAK_FUNC(sub_8251B670);
PPC_FUNC_IMPL(__imp__sub_8251B670) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r29,152(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x829590d8
	sub_829590D8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8251b6d8
	if (cr6.eq) goto loc_8251B6D8;
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// b 0x8251b6dc
	goto loc_8251B6DC;
loc_8251B6D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251B6DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251B6E8"))) PPC_WEAK_FUNC(sub_8251B6E8);
PPC_FUNC_IMPL(__imp__sub_8251B6E8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r31,152(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x829590d8
	sub_829590D8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8251b72c
	if (cr6.eq) goto loc_8251B72C;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x8251b730
	goto loc_8251B730;
loc_8251B72C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251B730:
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

__attribute__((alias("__imp__sub_8251B748"))) PPC_WEAK_FUNC(sub_8251B748);
PPC_FUNC_IMPL(__imp__sub_8251B748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r31,152(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x829590d8
	sub_829590D8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8251b78c
	if (cr6.eq) goto loc_8251B78C;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8251b794
	goto loc_8251B794;
loc_8251B78C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f1,11948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11948);
	ctx.f1.f64 = double(temp.f32);
loc_8251B794:
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

__attribute__((alias("__imp__sub_8251B7A8"))) PPC_WEAK_FUNC(sub_8251B7A8);
PPC_FUNC_IMPL(__imp__sub_8251B7A8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r31,152(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x829590d8
	sub_829590D8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8251b7ec
	if (cr6.eq) goto loc_8251B7EC;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// b 0x8251b7f0
	goto loc_8251B7F0;
loc_8251B7EC:
	// li r3,5
	ctx.r3.s64 = 5;
loc_8251B7F0:
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

__attribute__((alias("__imp__sub_8251B808"))) PPC_WEAK_FUNC(sub_8251B808);
PPC_FUNC_IMPL(__imp__sub_8251B808) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,148(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x8251ad78
	sub_8251AD78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251B810"))) PPC_WEAK_FUNC(sub_8251B810);
PPC_FUNC_IMPL(__imp__sub_8251B810) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,400
	cr6.compare<uint32_t>(ctx.r4.u32, 400, xer);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// bge cr6,0x8251ba44
	if (!cr6.lt) goto loc_8251BA44;
	// addi r10,r4,16388
	ctx.r10.s64 = ctx.r4.s64 + 16388;
	// lwz r11,148(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 148);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bge 0x8251b85c
	if (!cr0.lt) goto loc_8251B85C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8251b86c
	goto loc_8251B86C;
loc_8251B85C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,99
	cr6.compare<int32_t>(ctx.r10.s32, 99, xer);
	// ble cr6,0x8251b870
	if (!cr6.gt) goto loc_8251B870;
	// li r10,99
	ctx.r10.s64 = 99;
loc_8251B86C:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8251B870:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8251ba44
	if (!cr0.eq) goto loc_8251BA44;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// rlwimi r10,r9,0,30,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFFF03) | (ctx.r10.u64 & 0xFC);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee138
	sub_824EE138(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r25,0(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251b8b8
	if (cr6.eq) goto loc_8251B8B8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251B8B8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251b8d4
	if (!cr6.eq) goto loc_8251B8D4;
	// li r27,0
	r27.s64 = 0;
	// b 0x8251b8e0
	goto loc_8251B8E0;
loc_8251B8D4:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r27,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r27.s64 = r11.s32 >> 3;
loc_8251B8E0:
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x8251b990
	if (!cr6.gt) goto loc_8251B990;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// addi r26,r11,12012
	r26.s64 = r11.s64 + 12012;
loc_8251B8FC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r24,r24,1
	r24.u64 = r24.u64 | 1;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251b958
	if (cr0.eq) goto loc_8251B958;
	// cmplwi cr6,r28,400
	cr6.compare<uint32_t>(r28.u32, 400, xer);
	// blt cr6,0x8251b938
	if (cr6.lt) goto loc_8251B938;
	// li r11,0
	r11.s64 = 0;
	// b 0x8251b94c
	goto loc_8251B94C;
loc_8251B938:
	// lwz r11,148(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 148);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32777
	ctx.r10.u64 = ctx.r10.u64 | 32777;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
loc_8251B94C:
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x8251b95c
	if (cr0.eq) goto loc_8251B95C;
loc_8251B958:
	// li r11,0
	r11.s64 = 0;
loc_8251B95C:
	// clrlwi. r10,r24,31
	ctx.r10.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// beq 0x8251b974
	if (cr0.eq) goto loc_8251B974;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r24,r24,0,0,30
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8251B974:
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8251b990
	if (!cr0.eq) goto loc_8251B990;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// blt cr6,0x8251b8fc
	if (cr6.lt) goto loc_8251B8FC;
loc_8251B990:
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// bne cr6,0x8251ba44
	if (!cr6.eq) goto loc_8251BA44;
	// li r11,25
	r11.s64 = 25;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8230bec8
	sub_8230BEC8(ctx, base);
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
	// beq cr6,0x8251b9e4
	if (cr6.eq) goto loc_8251B9E4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251B9C8:
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
	// bne 0x8251b9c8
	if (!cr0.eq) goto loc_8251B9C8;
loc_8251B9E4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4d8
	sub_824EC4D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,11952
	ctx.r4.s64 = ctx.r10.s64 + 11952;
	// li r5,923
	ctx.r5.s64 = 923;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
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
	// beq cr6,0x8251ba34
	if (cr6.eq) goto loc_8251BA34;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251BA34:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251ba44
	if (cr6.eq) goto loc_8251BA44;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251BA44:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8251BA50"))) PPC_WEAK_FUNC(sub_8251BA50);
PPC_FUNC_IMPL(__imp__sub_8251BA50) {
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
	// lis r11,0
	r11.s64 = 0;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// ori r11,r11,34276
	r11.u64 = r11.u64 | 34276;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r11,-10832(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10832);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x8251bb5c
	if (cr6.lt) goto loc_8251BB5C;
	// lis r30,-31946
	r30.s64 = -2093613056;
	// lbz r11,31021(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 31021);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8251bb5c
	if (!cr0.eq) goto loc_8251BB5C;
	// li r11,47
	r11.s64 = 47;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8230bec8
	sub_8230BEC8(ctx, base);
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
	// beq cr6,0x8251baf4
	if (cr6.eq) goto loc_8251BAF4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251BAD8:
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
	// bne 0x8251bad8
	if (!cr0.eq) goto loc_8251BAD8;
loc_8251BAF4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4d8
	sub_824EC4D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,11952
	ctx.r4.s64 = ctx.r10.s64 + 11952;
	// li r5,1181
	ctx.r5.s64 = 1181;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
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
	// beq cr6,0x8251bb44
	if (cr6.eq) goto loc_8251BB44;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251BB44:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251bb54
	if (cr6.eq) goto loc_8251BB54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251BB54:
	// li r11,1
	r11.s64 = 1;
	// stb r11,31021(r30)
	PPC_STORE_U8(r30.u32 + 31021, r11.u8);
loc_8251BB5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251BB68"))) PPC_WEAK_FUNC(sub_8251BB68);
PPC_FUNC_IMPL(__imp__sub_8251BB68) {
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
	// lis r11,0
	r11.s64 = 0;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// ori r11,r11,34280
	r11.u64 = r11.u64 | 34280;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r11,-10828(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10828);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x8251bc74
	if (cr6.lt) goto loc_8251BC74;
	// lis r30,-31946
	r30.s64 = -2093613056;
	// lbz r11,31022(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 31022);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8251bc74
	if (!cr0.eq) goto loc_8251BC74;
	// li r11,48
	r11.s64 = 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8230bec8
	sub_8230BEC8(ctx, base);
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
	// beq cr6,0x8251bc0c
	if (cr6.eq) goto loc_8251BC0C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251BBF0:
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
	// bne 0x8251bbf0
	if (!cr0.eq) goto loc_8251BBF0;
loc_8251BC0C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4d8
	sub_824EC4D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,11952
	ctx.r4.s64 = ctx.r10.s64 + 11952;
	// li r5,1200
	ctx.r5.s64 = 1200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
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
	// beq cr6,0x8251bc5c
	if (cr6.eq) goto loc_8251BC5C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251BC5C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251bc6c
	if (cr6.eq) goto loc_8251BC6C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251BC6C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,31022(r30)
	PPC_STORE_U8(r30.u32 + 31022, r11.u8);
loc_8251BC74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251BC80"))) PPC_WEAK_FUNC(sub_8251BC80);
PPC_FUNC_IMPL(__imp__sub_8251BC80) {
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
	// lis r11,0
	r11.s64 = 0;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// ori r8,r11,34272
	ctx.r8.u64 = r11.u64 | 34272;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r11,-10836(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10836);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x8251bd78
	if (cr6.lt) goto loc_8251BD78;
	// lis r30,-31946
	r30.s64 = -2093613056;
	// lbz r11,31020(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 31020);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8251bd78
	if (!cr0.eq) goto loc_8251BD78;
	// li r11,46
	r11.s64 = 46;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8230bec8
	sub_8230BEC8(ctx, base);
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
	// beq cr6,0x8251bd10
	if (cr6.eq) goto loc_8251BD10;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251BCF4:
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
	// bne 0x8251bcf4
	if (!cr0.eq) goto loc_8251BCF4;
loc_8251BD10:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4d8
	sub_824EC4D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,11952
	ctx.r4.s64 = ctx.r10.s64 + 11952;
	// li r5,1220
	ctx.r5.s64 = 1220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
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
	// beq cr6,0x8251bd60
	if (cr6.eq) goto loc_8251BD60;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251BD60:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251bd70
	if (cr6.eq) goto loc_8251BD70;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251BD70:
	// li r11,1
	r11.s64 = 1;
	// stb r11,31020(r30)
	PPC_STORE_U8(r30.u32 + 31020, r11.u8);
loc_8251BD78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251BD80"))) PPC_WEAK_FUNC(sub_8251BD80);
PPC_FUNC_IMPL(__imp__sub_8251BD80) {
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
	// lis r11,0
	r11.s64 = 0;
	// lis r9,-31959
	ctx.r9.s64 = -2094465024;
	// ori r11,r11,34272
	r11.u64 = r11.u64 | 34272;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r11,-10836(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10836);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x8251be8c
	if (cr6.lt) goto loc_8251BE8C;
	// lis r30,-31946
	r30.s64 = -2093613056;
	// lbz r11,31020(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 31020);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8251be8c
	if (!cr0.eq) goto loc_8251BE8C;
	// li r11,46
	r11.s64 = 46;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8230bec8
	sub_8230BEC8(ctx, base);
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
	// beq cr6,0x8251be24
	if (cr6.eq) goto loc_8251BE24;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251BE08:
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
	// bne 0x8251be08
	if (!cr0.eq) goto loc_8251BE08;
loc_8251BE24:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4d8
	sub_824EC4D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,11952
	ctx.r4.s64 = ctx.r10.s64 + 11952;
	// li r5,1241
	ctx.r5.s64 = 1241;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
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
	// beq cr6,0x8251be74
	if (cr6.eq) goto loc_8251BE74;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251BE74:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251be84
	if (cr6.eq) goto loc_8251BE84;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251BE84:
	// li r11,1
	r11.s64 = 1;
	// stb r11,31020(r30)
	PPC_STORE_U8(r30.u32 + 31020, r11.u8);
loc_8251BE8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251BE98"))) PPC_WEAK_FUNC(sub_8251BE98);
PPC_FUNC_IMPL(__imp__sub_8251BE98) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r31,152(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x829590d8
	sub_829590D8(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8251bedc
	if (cr6.eq) goto loc_8251BEDC;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251bee4
	if (!cr6.eq) goto loc_8251BEE4;
loc_8251BEDC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8251bee8
	goto loc_8251BEE8;
loc_8251BEE4:
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_8251BEE8:
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

__attribute__((alias("__imp__sub_8251BF00"))) PPC_WEAK_FUNC(sub_8251BF00);
PPC_FUNC_IMPL(__imp__sub_8251BF00) {
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
	// bl 0x8251be98
	sub_8251BE98(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
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

__attribute__((alias("__imp__sub_8251BF30"))) PPC_WEAK_FUNC(sub_8251BF30);
PPC_FUNC_IMPL(__imp__sub_8251BF30) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// stb r30,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r30.u8);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// stb r30,21(r11)
	PPC_STORE_U8(r11.u32 + 21, r30.u8);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x825a6820
	sub_825A6820(ctx, base);
loc_8251BF64:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251bfa4
	if (cr6.eq) goto loc_8251BFA4;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82314158
	sub_82314158(ctx, base);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// cmplwi cr6,r30,32768
	cr6.compare<uint32_t>(r30.u32, 32768, xer);
	// blt cr6,0x8251bf64
	if (cr6.lt) goto loc_8251BF64;
loc_8251BFA4:
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

__attribute__((alias("__imp__sub_8251BFC0"))) PPC_WEAK_FUNC(sub_8251BFC0);
PPC_FUNC_IMPL(__imp__sub_8251BFC0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8251c030
	if (cr6.eq) goto loc_8251C030;
	// lwz r30,152(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x829590d8
	sub_829590D8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8251c00c
	if (cr6.eq) goto loc_8251C00C;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x8251c034
	goto loc_8251C034;
loc_8251C00C:
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r11,0
	r11.s64 = 0;
loc_8251C014:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8251c03c
	if (cr6.eq) goto loc_8251C03C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// blt cr6,0x8251c014
	if (cr6.lt) goto loc_8251C014;
loc_8251C030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251C034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8251C03C:
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// rlwinm r30,r11,6,0,25
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stwx r29,r30,r10
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, r29.u32);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82314158
	sub_82314158(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// b 0x8251c034
	goto loc_8251C034;
}

__attribute__((alias("__imp__sub_8251C078"))) PPC_WEAK_FUNC(sub_8251C078);
PPC_FUNC_IMPL(__imp__sub_8251C078) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8251bfc0
	sub_8251BFC0(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8251c0d0
	if (cr0.eq) goto loc_8251C0D0;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	r11.s64 = 0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_8251C0B0:
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8251c0c4
	if (cr0.eq) goto loc_8251C0C4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8251C0C4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// blt cr6,0x8251c0b0
	if (cr6.lt) goto loc_8251C0B0;
loc_8251C0D0:
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

__attribute__((alias("__imp__sub_8251C0E8"))) PPC_WEAK_FUNC(sub_8251C0E8);
PPC_FUNC_IMPL(__imp__sub_8251C0E8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8251bfc0
	sub_8251BFC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8251c53c
	if (cr0.eq) goto loc_8251C53C;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r10,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r29.u8 & 0x3F));
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// and. r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8251c4f8
	if (!cr0.eq) goto loc_8251C4F8;
	// clrlwi. r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8251c4f8
	if (cr0.eq) goto loc_8251C4F8;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251ab70
	sub_8251AB70(ctx, base);
	// addi r10,r31,3
	ctx.r10.s64 = r31.s64 + 3;
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r10.u32);
	// bne cr6,0x8251c194
	if (!cr6.eq) goto loc_8251C194;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// li r29,3
	r29.s64 = 3;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee1f8
	sub_824EE1F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8251f768
	sub_8251F768(ctx, base);
	// b 0x8251c1b8
	goto loc_8251C1B8;
loc_8251C194:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// li r29,12
	r29.s64 = 12;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee1f8
	sub_824EE1F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8251f770
	sub_8251F770(ctx, base);
loc_8251C1B8:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm. r11,r29,0,28,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251c1d8
	if (cr0.eq) goto loc_8251C1D8;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r29,r29,0,29,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251c1d8
	if (cr6.eq) goto loc_8251C1D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251C1D8:
	// rlwinm. r11,r29,0,29,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251c1ec
	if (cr0.eq) goto loc_8251C1EC;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// rlwinm r29,r29,0,30,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8251C1EC:
	// rlwinm. r11,r29,0,30,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251c208
	if (cr0.eq) goto loc_8251C208;
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm r29,r29,0,31,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251c208
	if (cr6.eq) goto loc_8251C208;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251C208:
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251c218
	if (cr0.eq) goto loc_8251C218;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8251C218:
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// blt cr6,0x8251c37c
	if (cr6.lt) goto loc_8251C37C;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// blt cr6,0x8251c2d8
	if (cr6.lt) goto loc_8251C2D8;
	// bne cr6,0x8251c53c
	if (!cr6.eq) goto loc_8251C53C;
	// li r11,8
	r11.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8230bec8
	sub_8230BEC8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// beq cr6,0x8251c280
	if (cr6.eq) goto loc_8251C280;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251C264:
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
	// bne 0x8251c264
	if (!cr0.eq) goto loc_8251C264;
loc_8251C280:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r1,104
	r31.s64 = ctx.r1.s64 + 104;
	// bl 0x824ec4d8
	sub_824EC4D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,11952
	ctx.r4.s64 = ctx.r10.s64 + 11952;
	// li r5,522
	ctx.r5.s64 = 522;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251c2d0
	if (cr6.eq) goto loc_8251C2D0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251C2D0:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// b 0x8251c4e8
	goto loc_8251C4E8;
loc_8251C2D8:
	// li r11,10
	r11.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8230bec8
	sub_8230BEC8(ctx, base);
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
	// beq cr6,0x8251c324
	if (cr6.eq) goto loc_8251C324;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251C308:
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
	// bne 0x8251c308
	if (!cr0.eq) goto loc_8251C308;
loc_8251C324:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x824ec4d8
	sub_824EC4D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,11952
	ctx.r4.s64 = ctx.r10.s64 + 11952;
	// li r5,519
	ctx.r5.s64 = 519;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251c374
	if (cr6.eq) goto loc_8251C374;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251C374:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x8251c4e8
	goto loc_8251C4E8;
loc_8251C37C:
	// clrlwi r9,r27,31
	ctx.r9.u64 = r27.u32 & 0x1;
	// rlwinm r10,r27,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8251c390
	if (!cr6.eq) goto loc_8251C390;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8251C390:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8251c53c
	if (cr6.lt) goto loc_8251C53C;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// blt cr6,0x8251c448
	if (cr6.lt) goto loc_8251C448;
	// bne cr6,0x8251c53c
	if (!cr6.eq) goto loc_8251C53C;
	// li r11,7
	r11.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8230bec8
	sub_8230BEC8(ctx, base);
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
	// beq cr6,0x8251c3f0
	if (cr6.eq) goto loc_8251C3F0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251C3D4:
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
	// bne 0x8251c3d4
	if (!cr0.eq) goto loc_8251C3D4;
loc_8251C3F0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// bl 0x824ec4d8
	sub_824EC4D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,11952
	ctx.r4.s64 = ctx.r10.s64 + 11952;
	// li r5,538
	ctx.r5.s64 = 538;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251c440
	if (cr6.eq) goto loc_8251C440;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251C440:
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// b 0x8251c4e8
	goto loc_8251C4E8;
loc_8251C448:
	// li r11,9
	r11.s64 = 9;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8230bec8
	sub_8230BEC8(ctx, base);
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
	// beq cr6,0x8251c494
	if (cr6.eq) goto loc_8251C494;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251C478:
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
	// bne 0x8251c478
	if (!cr0.eq) goto loc_8251C478;
loc_8251C494:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// bl 0x824ec4d8
	sub_824EC4D8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,11952
	ctx.r4.s64 = ctx.r10.s64 + 11952;
	// li r5,535
	ctx.r5.s64 = 535;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251c4e4
	if (cr6.eq) goto loc_8251C4E4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251C4E4:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
loc_8251C4E8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251c53c
	if (cr6.eq) goto loc_8251C53C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x8251c53c
	goto loc_8251C53C;
loc_8251C4F8:
	// clrlwi. r8,r28,24
	ctx.r8.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8251c53c
	if (!cr0.eq) goto loc_8251C53C;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251ab70
	sub_8251AB70(ctx, base);
	// addi r11,r31,3
	r11.s64 = r31.s64 + 3;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8251c53c
	if (!cr6.gt) goto loc_8251C53C;
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
loc_8251C53C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8251C548"))) PPC_WEAK_FUNC(sub_8251C548);
PPC_FUNC_IMPL(__imp__sub_8251C548) {
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
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r29,24(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8251b6e8
	sub_8251B6E8(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// ble cr6,0x8251c578
	if (!cr6.gt) goto loc_8251C578;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8251C578:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251bfc0
	sub_8251BFC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8251c590
	if (cr0.eq) goto loc_8251C590;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
loc_8251C590:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251C5A0"))) PPC_WEAK_FUNC(sub_8251C5A0);
PPC_FUNC_IMPL(__imp__sub_8251C5A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r30,24(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8251b748
	sub_8251B748(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x8251c5dc
	if (!cr6.lt) goto loc_8251C5DC;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_8251C5DC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251bfc0
	sub_8251BFC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8251c5f4
	if (cr0.eq) goto loc_8251C5F4;
	// stfs f31,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_8251C5F4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
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

__attribute__((alias("__imp__sub_8251C618"))) PPC_WEAK_FUNC(sub_8251C618);
PPC_FUNC_IMPL(__imp__sub_8251C618) {
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
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r29,24(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8251b7a8
	sub_8251B7A8(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bge cr6,0x8251c648
	if (!cr6.lt) goto loc_8251C648;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8251C648:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251bfc0
	sub_8251BFC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8251c660
	if (cr0.eq) goto loc_8251C660;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
loc_8251C660:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251C670"))) PPC_WEAK_FUNC(sub_8251C670);
PPC_FUNC_IMPL(__imp__sub_8251C670) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,10
	r29.s64 = 10;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// divwu r11,r4,r29
	r11.u32 = ctx.r4.u32 / r29.u32;
	// mulli r11,r11,10
	r11.s64 = r11.s64 * 10;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251c774
	if (cr0.eq) goto loc_8251C774;
	// bl 0x8251bfc0
	sub_8251BFC0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8251c774
	if (cr0.eq) goto loc_8251C774;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824eded8
	sub_824EDED8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4244
	ctx.r4.s64 = r11.s64 + -4244;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251c6fc
	if (!cr6.eq) goto loc_8251C6FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251C6FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82505018
	sub_82505018(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// divwu r10,r11,r29
	ctx.r10.u32 = r11.u32 / r29.u32;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// beq cr6,0x8251c764
	if (cr6.eq) goto loc_8251C764;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8251c764
	if (cr6.lt) goto loc_8251C764;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x8251c764
	if (cr6.gt) goto loc_8251C764;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251c754
	if (!cr6.eq) goto loc_8251C754;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251C754:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82503ca8
	sub_82503CA8(ctx, base);
	// stw r3,28(r28)
	PPC_STORE_U32(r28.u32 + 28, ctx.r3.u32);
	// b 0x8251c76c
	goto loc_8251C76C;
loc_8251C764:
	// li r11,1
	r11.s64 = 1;
	// stw r11,28(r28)
	PPC_STORE_U32(r28.u32 + 28, r11.u32);
loc_8251C76C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8251C774:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8251C780"))) PPC_WEAK_FUNC(sub_8251C780);
PPC_FUNC_IMPL(__imp__sub_8251C780) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee1f8
	sub_824EE1F8(ctx, base);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x8251fc08
	sub_8251FC08(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251c7d8
	if (cr6.eq) goto loc_8251C7D8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251C7D8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8251c814
	if (cr6.eq) goto loc_8251C814;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8251c814
	if (cr6.eq) goto loc_8251C814;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x8251bfc0
	sub_8251BFC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8251c814
	if (cr0.eq) goto loc_8251C814;
	// li r11,1
	r11.s64 = 1;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
loc_8251C814:
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

__attribute__((alias("__imp__sub_8251C830"))) PPC_WEAK_FUNC(sub_8251C830);
PPC_FUNC_IMPL(__imp__sub_8251C830) {
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
	// bl 0x82729528
	sub_82729528(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// stb r9,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r9.u8);
	// addi r8,r31,20
	ctx.r8.s64 = r31.s64 + 20;
loc_8251C85C:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x8251c85c
	if (cr6.lt) goto loc_8251C85C;
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_8251C898"))) PPC_WEAK_FUNC(sub_8251C898);
PPC_FUNC_IMPL(__imp__sub_8251C898) {
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
	// bl 0x82e61f28
	sub_82E61F28(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r10,12028
	ctx.r10.s64 = ctx.r10.s64 + 12028;
	// addi r30,r11,11952
	r30.s64 = r11.s64 + 11952;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,364
	ctx.r5.s64 = 364;
	// ori r3,r3,34684
	ctx.r3.u64 = ctx.r3.u64 | 34684;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8251c8f0
	if (cr0.eq) goto loc_8251C8F0;
	// bl 0x8251a8e8
	sub_8251A8E8(ctx, base);
	// b 0x8251c8f4
	goto loc_8251C8F4;
loc_8251C8F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251C8F4:
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,365
	ctx.r5.s64 = 365;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8251c91c
	if (cr0.eq) goto loc_8251C91C;
	// bl 0x8251c830
	sub_8251C830(ctx, base);
	// b 0x8251c920
	goto loc_8251C920;
loc_8251C91C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251C920:
	// stw r3,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8251C940"))) PPC_WEAK_FUNC(sub_8251C940);
PPC_FUNC_IMPL(__imp__sub_8251C940) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,12028
	r11.s64 = r11.s64 + 12028;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lwz r30,152(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8251c988
	if (cr6.eq) goto loc_8251C988;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bb8f70
	sub_82BB8F70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8251C988:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e61da0
	sub_82E61DA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251C9A8"))) PPC_WEAK_FUNC(sub_8251C9A8);
PPC_FUNC_IMPL(__imp__sub_8251C9A8) {
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
	// bl 0x8251c940
	sub_8251C940(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251c9d8
	if (cr0.eq) goto loc_8251C9D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_8251C9D8:
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

__attribute__((alias("__imp__sub_8251C9F8"))) PPC_WEAK_FUNC(sub_8251C9F8);
PPC_FUNC_IMPL(__imp__sub_8251C9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,12056
	r11.s64 = r11.s64 + 12056;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251CA08"))) PPC_WEAK_FUNC(sub_8251CA08);
PPC_FUNC_IMPL(__imp__sub_8251CA08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b1430
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// addi r31,r3,1024
	r31.s64 = ctx.r3.s64 + 1024;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f27,-24904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24904);
	f27.f64 = double(temp.f32);
	// fdivs f30,f0,f13
	f30.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fdivs f29,f0,f12
	f29.f64 = double(float(f0.f64 / ctx.f12.f64));
	// fdivs f28,f0,f11
	f28.f64 = double(float(f0.f64 / ctx.f11.f64));
	// lfs f31,12060(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12060);
	f31.f64 = double(temp.f32);
loc_8251CA5C:
	// extsw r11,r30
	r11.s64 = r30.s32;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f26,f0,f27
	f26.f64 = double(float(f0.f64 * f27.f64));
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r11,-1024(r31)
	PPC_STORE_U16(r31.u32 + -1024, r11.u16);
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r11,-512(r31)
	PPC_STORE_U16(r31.u32 + -512, r11.u16);
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,256
	cr6.compare<int32_t>(r30.s32, 256, xer);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lhz r11,94(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// bne cr6,0x8251ca5c
	if (!cr6.eq) goto loc_8251CA5C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x831b147c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251CB10"))) PPC_WEAK_FUNC(sub_8251CB10);
PPC_FUNC_IMPL(__imp__sub_8251CB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,-10768
	r11.s64 = r11.s64 + -10768;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r10,r10,12056
	ctx.r10.s64 = ctx.r10.s64 + 12056;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,48
	ctx.r7.s64 = 48;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r8,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r8.u8);
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251CB48"))) PPC_WEAK_FUNC(sub_8251CB48);
PPC_FUNC_IMPL(__imp__sub_8251CB48) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,12056
	r11.s64 = r11.s64 + 12056;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8251cb74
	if (cr0.eq) goto loc_8251CB74;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_8251CB74:
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

__attribute__((alias("__imp__sub_8251CB90"))) PPC_WEAK_FUNC(sub_8251CB90);
PPC_FUNC_IMPL(__imp__sub_8251CB90) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f13,12048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8251cbb0
	if (!cr6.gt) goto loc_8251CBB0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x8251cbbc
	goto loc_8251CBBC;
loc_8251CBB0:
	// lfs f13,12044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12044);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8251cbc0
	if (cr6.lt) goto loc_8251CBC0;
loc_8251CBBC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f0.f64;
loc_8251CBC0:
	// stfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,12048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8251cbdc
	if (!cr6.gt) goto loc_8251CBDC;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x8251cbe8
	goto loc_8251CBE8;
loc_8251CBDC:
	// lfs f13,12044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12044);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8251cbec
	if (cr6.lt) goto loc_8251CBEC;
loc_8251CBE8:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f0.f64;
loc_8251CBEC:
	// stfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f13,12048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x8251cc0c
	if (cr6.gt) goto loc_8251CC0C;
	// lfs f13,12044(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12044);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8251cc10
	if (!cr6.lt) goto loc_8251CC10;
loc_8251CC0C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64;
loc_8251CC10:
	// stfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251CC18"))) PPC_WEAK_FUNC(sub_8251CC18);
PPC_FUNC_IMPL(__imp__sub_8251CC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v63{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-1680(r1)
	ea = -1680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// clrlwi r29,r30,24
	r29.u64 = r30.u32 & 0xFF;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x8251cc54
	if (!cr6.eq) goto loc_8251CC54;
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82429418
	sub_82429418(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8251cca8
	if (!cr0.eq) goto loc_8251CCA8;
loc_8251CC54:
	// stb r30,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r30.u8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8251cc68
	if (cr6.eq) goto loc_8251CC68;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// b 0x8251cc70
	goto loc_8251CC70;
loc_8251CC68:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r11,r11,-10768
	r11.s64 = r11.s64 + -10768;
loc_8251CC70:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8251ca08
	sub_8251CA08(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82bdd370
	sub_82BDD370(ctx, base);
	// li r11,32
	r11.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8251CCA8:
	// addi r1,r1,1680
	ctx.r1.s64 = ctx.r1.s64 + 1680;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8251CCB0"))) PPC_WEAK_FUNC(sub_8251CCB0);
PPC_FUNC_IMPL(__imp__sub_8251CCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,12068
	r11.s64 = r11.s64 + 12068;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82dfa218
	sub_82DFA218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251CCC8"))) PPC_WEAK_FUNC(sub_8251CCC8);
PPC_FUNC_IMPL(__imp__sub_8251CCC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,100
	ctx.r3.s64 = 100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251CCD0"))) PPC_WEAK_FUNC(sub_8251CCD0);
PPC_FUNC_IMPL(__imp__sub_8251CCD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251CCD8"))) PPC_WEAK_FUNC(sub_8251CCD8);
PPC_FUNC_IMPL(__imp__sub_8251CCD8) {
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
	// bne cr6,0x8251cd18
	if (!cr6.eq) goto loc_8251CD18;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8251cd48
	if (cr6.eq) goto loc_8251CD48;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x8251cd48
	goto loc_8251CD48;
loc_8251CD18:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8251cd48
	if (cr6.eq) goto loc_8251CD48;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-10600
	ctx.r4.s64 = r11.s64 + -10600;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251cd40
	if (cr0.eq) goto loc_8251CD40;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x8251cd48
	goto loc_8251CD48;
loc_8251CD40:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8251CD48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251CD60"))) PPC_WEAK_FUNC(sub_8251CD60);
PPC_FUNC_IMPL(__imp__sub_8251CD60) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,12068
	r11.s64 = r11.s64 + 12068;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dfa218
	sub_82DFA218(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251cda0
	if (cr0.eq) goto loc_8251CDA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8251CDA0:
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

__attribute__((alias("__imp__sub_8251CDC0"))) PPC_WEAK_FUNC(sub_8251CDC0);
PPC_FUNC_IMPL(__imp__sub_8251CDC0) {
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
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82dfa1a0
	sub_82DFA1A0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,12108
	r11.s64 = r11.s64 + 12108;
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

__attribute__((alias("__imp__sub_8251CE00"))) PPC_WEAK_FUNC(sub_8251CE00);
PPC_FUNC_IMPL(__imp__sub_8251CE00) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,7888(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 7888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bne cr6,0x8251ce2c
	if (!cr6.eq) goto loc_8251CE2C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8251CE2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
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

__attribute__((alias("__imp__sub_8251CE50"))) PPC_WEAK_FUNC(sub_8251CE50);
PPC_FUNC_IMPL(__imp__sub_8251CE50) {
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
	// beq cr6,0x8251ce7c
	if (cr6.eq) goto loc_8251CE7C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8251ccd8
	sub_8251CCD8(ctx, base);
	// b 0x8251ce88
	goto loc_8251CE88;
loc_8251CE7C:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r11,r11,-10600
	r11.s64 = r11.s64 + -10600;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_8251CE88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251CE98"))) PPC_WEAK_FUNC(sub_8251CE98);
PPC_FUNC_IMPL(__imp__sub_8251CE98) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8251cf94
	if (cr6.lt) goto loc_8251CF94;
	// bne cr6,0x8251cfd0
	if (!cr6.eq) goto loc_8251CFD0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251ce00
	sub_8251CE00(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251cedc
	if (!cr6.eq) goto loc_8251CEDC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251CEDC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8251cfd0
	if (cr0.eq) goto loc_8251CFD0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8251ce00
	sub_8251CE00(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251cf24
	if (!cr6.eq) goto loc_8251CF24;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251CF24:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,12164
	ctx.r4.s64 = ctx.r10.s64 + 12164;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x8251cf8c
	if (!cr6.eq) goto loc_8251CF8C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8251ce00
	sub_8251CE00(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251cf6c
	if (!cr6.eq) goto loc_8251CF6C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251CF6C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,12144
	ctx.r4.s64 = ctx.r10.s64 + 12144;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8251CF8C:
	// stw r31,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r31.u32);
	// b 0x8251cfd0
	goto loc_8251CFD0;
loc_8251CF94:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8251ce00
	sub_8251CE00(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251cfb0
	if (!cr6.eq) goto loc_8251CFB0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251CFB0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,12144
	ctx.r4.s64 = ctx.r10.s64 + 12144;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8251CFD0:
	// li r11,1
	r11.s64 = 1;
	// stb r11,60(r30)
	PPC_STORE_U8(r30.u32 + 60, r11.u8);
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

__attribute__((alias("__imp__sub_8251CFF0"))) PPC_WEAK_FUNC(sub_8251CFF0);
PPC_FUNC_IMPL(__imp__sub_8251CFF0) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8251d03c
	if (!cr6.eq) goto loc_8251D03C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251ce00
	sub_8251CE00(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251d024
	if (!cr6.eq) goto loc_8251D024;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251D024:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8251D03C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D050"))) PPC_WEAK_FUNC(sub_8251D050);
PPC_FUNC_IMPL(__imp__sub_8251D050) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8251d09c
	if (!cr6.eq) goto loc_8251D09C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251ce00
	sub_8251CE00(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251d084
	if (!cr6.eq) goto loc_8251D084;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251D084:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8251D09C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D0B0"))) PPC_WEAK_FUNC(sub_8251D0B0);
PPC_FUNC_IMPL(__imp__sub_8251D0B0) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8251d0fc
	if (!cr6.eq) goto loc_8251D0FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251ce00
	sub_8251CE00(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251d0e4
	if (!cr6.eq) goto loc_8251D0E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251D0E4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8251D0FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D110"))) PPC_WEAK_FUNC(sub_8251D110);
PPC_FUNC_IMPL(__imp__sub_8251D110) {
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
	// addi r31,r11,31024
	r31.s64 = r11.s64 + 31024;
	// lwz r11,31032(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31032);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8251d158
	if (!cr0.eq) goto loc_8251D158;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-12416
	ctx.r9.s64 = ctx.r9.s64 + -12416;
	// addi r8,r8,-12720
	ctx.r8.s64 = ctx.r8.s64 + -12720;
	// stw r11,31032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31032, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_8251D158:
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
	// bl 0x82372b68
	sub_82372B68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251d184
	if (cr0.eq) goto loc_8251D184;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x8251d188
	goto loc_8251D188;
loc_8251D184:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_8251D188:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251D190"))) PPC_WEAK_FUNC(sub_8251D190);
PPC_FUNC_IMPL(__imp__sub_8251D190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12184
	ctx.r4.s64 = r11.s64 + 12184;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32174
	r11.s64 = -2108555264;
	// li r31,0
	r31.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r11,r11,-12648
	r11.s64 = r11.s64 + -12648;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8251d110
	sub_8251D110(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfd5e8
	sub_82DFD5E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r31,60(r30)
	PPC_STORE_U8(r30.u32 + 60, r31.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r31.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8308a2f8
	sub_8308A2F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251D230"))) PPC_WEAK_FUNC(sub_8251D230);
PPC_FUNC_IMPL(__imp__sub_8251D230) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D290"))) PPC_WEAK_FUNC(sub_8251D290);
PPC_FUNC_IMPL(__imp__sub_8251D290) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// bne cr6,0x8251d2bc
	if (!cr6.eq) goto loc_8251D2BC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8251D2BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5808);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5784);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5796);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5804);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D380"))) PPC_WEAK_FUNC(sub_8251D380);
PPC_FUNC_IMPL(__imp__sub_8251D380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,2
	r11.s64 = 2;
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D390"))) PPC_WEAK_FUNC(sub_8251D390);
PPC_FUNC_IMPL(__imp__sub_8251D390) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// addi r11,r11,12276
	r11.s64 = r11.s64 + 12276;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8251d230
	sub_8251D230(ctx, base);
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

__attribute__((alias("__imp__sub_8251D3F8"))) PPC_WEAK_FUNC(sub_8251D3F8);
PPC_FUNC_IMPL(__imp__sub_8251D3F8) {
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
	// b 0x8251d434
	goto loc_8251D434;
loc_8251D418:
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
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
loc_8251D434:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8251d418
	if (!cr6.eq) goto loc_8251D418;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D458"))) PPC_WEAK_FUNC(sub_8251D458);
PPC_FUNC_IMPL(__imp__sub_8251D458) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r11,r31,248
	r11.s64 = r31.s64 + 248;
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// beq cr6,0x8251d498
	if (cr6.eq) goto loc_8251D498;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251D498:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ee4a0
	sub_824EE4A0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251d4cc
	if (cr6.eq) goto loc_8251D4CC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251D4CC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823d6a88
	sub_823D6A88(ctx, base);
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
	// beq cr6,0x8251d50c
	if (cr6.eq) goto loc_8251D50C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251D4F0:
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
	// bne 0x8251d4f0
	if (!cr0.eq) goto loc_8251D4F0;
loc_8251D50C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251d52c
	if (!cr6.eq) goto loc_8251D52C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8251D52C:
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// bl 0x8250c060
	sub_8250C060(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,12280
	ctx.r4.s64 = ctx.r10.s64 + 12280;
	// li r5,165
	ctx.r5.s64 = 165;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251d570
	if (cr6.eq) goto loc_8251D570;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251D570:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251d580
	if (cr6.eq) goto loc_8251D580;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251D580:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// bne cr6,0x8251d5a0
	if (!cr6.eq) goto loc_8251D5A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8251D5A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c050
	sub_8250C050(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251D5B8"))) PPC_WEAK_FUNC(sub_8251D5B8);
PPC_FUNC_IMPL(__imp__sub_8251D5B8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x823d6a88
	sub_823D6A88(ctx, base);
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
	// beq cr6,0x8251d60c
	if (cr6.eq) goto loc_8251D60C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251D5F0:
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
	// bne 0x8251d5f0
	if (!cr0.eq) goto loc_8251D5F0;
loc_8251D60C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251d62c
	if (!cr6.eq) goto loc_8251D62C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251D62C:
	// addi r29,r1,88
	r29.s64 = ctx.r1.s64 + 88;
	// bl 0x8250c060
	sub_8250C060(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,12280
	ctx.r4.s64 = ctx.r10.s64 + 12280;
	// li r5,172
	ctx.r5.s64 = 172;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251d670
	if (cr6.eq) goto loc_8251D670;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251D670:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251d680
	if (cr6.eq) goto loc_8251D680;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251D680:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82512b50
	sub_82512B50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ee4a0
	sub_824EE4A0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x8251d6d8
	if (cr6.eq) goto loc_8251D6D8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251D6BC:
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
	// bne 0x8251d6bc
	if (!cr0.eq) goto loc_8251D6BC;
loc_8251D6D8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x8251d6f8
	if (!cr6.eq) goto loc_8251D6F8;
	// li r31,0
	r31.s64 = 0;
loc_8251D6F8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x82510da8
	sub_82510DA8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251d750
	if (!cr6.eq) goto loc_8251D750;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251D750:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8250c050
	sub_8250C050(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251D768"))) PPC_WEAK_FUNC(sub_8251D768);
PPC_FUNC_IMPL(__imp__sub_8251D768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(r27.u32, ctx.r6.u32, xer);
	// beq cr6,0x8251d7d0
	if (cr6.eq) goto loc_8251D7D0;
	// lwz r28,8(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r28
	cr6.compare<uint32_t>(ctx.r6.u32, r28.u32, xer);
	// beq cr6,0x8251d7b8
	if (cr6.eq) goto loc_8251D7B8;
loc_8251D79C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251d230
	sub_8251D230(ctx, base);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bne cr6,0x8251d79c
	if (!cr6.eq) goto loc_8251D79C;
loc_8251D7B8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x8251d3f8
	sub_8251D3F8(ctx, base);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
loc_8251D7D0:
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8251D7E0"))) PPC_WEAK_FUNC(sub_8251D7E0);
PPC_FUNC_IMPL(__imp__sub_8251D7E0) {
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
	// beq cr6,0x8251d820
	if (cr6.eq) goto loc_8251D820;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8251d3f8
	sub_8251D3F8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_8251D820:
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

__attribute__((alias("__imp__sub_8251D848"))) PPC_WEAK_FUNC(sub_8251D848);
PPC_FUNC_IMPL(__imp__sub_8251D848) {
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
	// beq cr6,0x8251d890
	if (cr6.eq) goto loc_8251D890;
loc_8251D870:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8251d884
	if (cr6.eq) goto loc_8251D884;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251d390
	sub_8251D390(ctx, base);
loc_8251D884:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// bne 0x8251d870
	if (!cr0.eq) goto loc_8251D870;
loc_8251D890:
	// mulli r11,r31,40
	r11.s64 = r31.s64 * 40;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8251D8A0"))) PPC_WEAK_FUNC(sub_8251D8A0);
PPC_FUNC_IMPL(__imp__sub_8251D8A0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,12376
	r11.s64 = r11.s64 + 12376;
	// addi r10,r10,12356
	ctx.r10.s64 = ctx.r10.s64 + 12356;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251d8e0
	if (cr6.eq) goto loc_8251D8E0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251D8E0:
	// addi r30,r31,208
	r30.s64 = r31.s64 + 208;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e62610
	sub_82E62610(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8251d7e0
	sub_8251D7E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D928"))) PPC_WEAK_FUNC(sub_8251D928);
PPC_FUNC_IMPL(__imp__sub_8251D928) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x8251dd08
	sub_8251DD08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251D930"))) PPC_WEAK_FUNC(sub_8251D930);
PPC_FUNC_IMPL(__imp__sub_8251D930) {
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
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,256(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 256);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8251da60
	if (cr6.eq) goto loc_8251DA60;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8251da50
	if (cr6.eq) goto loc_8251DA50;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8251da34
	if (cr6.eq) goto loc_8251DA34;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x8251da14
	if (cr6.eq) goto loc_8251DA14;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8251d9c4
	if (cr6.eq) goto loc_8251D9C4;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bne cr6,0x8251dcfc
	if (!cr6.eq) goto loc_8251DCFC;
	// addi r8,r29,236
	ctx.r8.s64 = r29.s64 + 236;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r29,248
	ctx.r5.s64 = r29.s64 + 248;
	// addi r4,r29,232
	ctx.r4.s64 = r29.s64 + 232;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82528b78
	sub_82528B78(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251d9a8
	if (cr6.eq) goto loc_8251D9A8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251d5b8
	sub_8251D5B8(ctx, base);
loc_8251D9A8:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,7
	r11.s64 = 7;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,256(r29)
	PPC_STORE_U32(r29.u32 + 256, r11.u32);
	// beq cr6,0x8251dcfc
	if (cr6.eq) goto loc_8251DCFC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x8251dcfc
	goto loc_8251DCFC;
loc_8251D9C4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251d9e4
	if (!cr6.eq) goto loc_8251D9E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251D9E4:
	// bl 0x8250c4c8
	sub_8250C4C8(ctx, base);
	// bl 0x82e0b0e8
	sub_82E0B0E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x8251dcfc
	if (cr0.eq) goto loc_8251DCFC;
	// li r11,6
	r11.s64 = 6;
	// b 0x8251da88
	goto loc_8251DA88;
loc_8251DA14:
	// lwz r11,260(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 260);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8251da2c
	if (!cr6.gt) goto loc_8251DA2C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,260(r29)
	PPC_STORE_U32(r29.u32 + 260, r11.u32);
	// b 0x8251dcfc
	goto loc_8251DCFC;
loc_8251DA2C:
	// li r11,1
	r11.s64 = 1;
	// b 0x8251da88
	goto loc_8251DA88;
loc_8251DA34:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251d458
	sub_8251D458(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// li r10,30
	ctx.r10.s64 = 30;
	// stw r11,256(r29)
	PPC_STORE_U32(r29.u32 + 256, r11.u32);
	// stw r10,260(r29)
	PPC_STORE_U32(r29.u32 + 260, ctx.r10.u32);
	// b 0x8251dcfc
	goto loc_8251DCFC;
loc_8251DA50:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251d458
	sub_8251D458(ctx, base);
	// li r11,7
	r11.s64 = 7;
	// b 0x8251da88
	goto loc_8251DA88;
loc_8251DA60:
	// lwz r11,196(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 196);
	// addi r30,r29,192
	r30.s64 = r29.s64 + 192;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251da84
	if (cr6.eq) goto loc_8251DA84;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,40
	ctx.r10.s64 = 40;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw. r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8251da90
	if (!cr0.eq) goto loc_8251DA90;
loc_8251DA84:
	// li r11,2
	r11.s64 = 2;
loc_8251DA88:
	// stw r11,256(r29)
	PPC_STORE_U32(r29.u32 + 256, r11.u32);
	// b 0x8251dcfc
	goto loc_8251DCFC;
loc_8251DA90:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251daa8
	if (!cr6.eq) goto loc_8251DAA8;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x8251dab4
	goto loc_8251DAB4;
loc_8251DAA8:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r10,r11,r10
	ctx.r10.s32 = r11.s32 / ctx.r10.s32;
loc_8251DAB4:
	// lwz r11,196(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 196);
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r29,208
	ctx.r3.s64 = r29.s64 + 208;
	// addi r4,r11,-40
	ctx.r4.s64 = r11.s64 + -40;
	// bl 0x8251d230
	sub_8251D230(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8251d768
	sub_8251D768(ctx, base);
	// bl 0x82523a70
	sub_82523A70(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251db08
	if (!cr6.eq) goto loc_8251DB08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8251DB08:
	// bl 0x8250c4c8
	sub_8250C4C8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r29,232
	ctx.r5.s64 = r29.s64 + 232;
	// addi r4,r11,-21464
	ctx.r4.s64 = r11.s64 + -21464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb9c0
	sub_82DFB9C0(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// li r24,-1
	r24.s64 = -1;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// li r28,-1
	r28.s64 = -1;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r24.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// addi r5,r10,5072
	ctx.r5.s64 = ctx.r10.s64 + 5072;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// addi r30,r1,160
	r30.s64 = ctx.r1.s64 + 160;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// stw r28,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r28.u32);
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r25,r11,5080
	r25.s64 = r11.s64 + 5080;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82e0ea28
	sub_82E0EA28(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824d3c48
	sub_824D3C48(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r27,r31
	r27.u64 = r31.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// bl 0x82e11510
	sub_82E11510(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8251dbfc
	if (cr0.eq) goto loc_8251DBFC;
loc_8251DBD8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e11538
	sub_82E11538(ctx, base);
	// add r27,r3,r27
	r27.u64 = ctx.r3.u64 + r27.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x82e11510
	sub_82E11510(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x8251dbd8
	if (cr6.lt) goto loc_8251DBD8;
loc_8251DBFC:
	// addis r11,r27,305
	r11.s64 = r27.s64 + 19988480;
	// addi r11,r11,11520
	r11.s64 = r11.s64 + 11520;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// blt cr6,0x8251dce4
	if (cr6.lt) goto loc_8251DCE4;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e0acd0
	sub_82E0ACD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r30,r29,248
	r30.s64 = r29.s64 + 248;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,248(r29)
	PPC_STORE_U32(r29.u32 + 248, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251dc40
	if (cr6.eq) goto loc_8251DC40;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251DC40:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r24,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r31.u32);
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r31.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r31.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r31.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r31.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r31.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, r31.u32);
	// stw r28,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, r28.u32);
	// beq cr6,0x8251dc9c
	if (cr6.eq) goto loc_8251DC9C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8251DC80:
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
	// bne 0x8251dc80
	if (!cr0.eq) goto loc_8251DC80;
loc_8251DC9C:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r31,r1,320
	r31.s64 = ctx.r1.s64 + 320;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82e0cc38
	sub_82E0CC38(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x824d3c48
	sub_824D3C48(ctx, base);
	// li r11,5
	r11.s64 = 5;
	// stw r11,256(r29)
	PPC_STORE_U32(r29.u32 + 256, r11.u32);
loc_8251DCE4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251dcf4
	if (cr6.eq) goto loc_8251DCF4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251DCF4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_8251DCFC:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8251DD08"))) PPC_WEAK_FUNC(sub_8251DD08);
PPC_FUNC_IMPL(__imp__sub_8251DD08) {
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
	// bl 0x8251d8a0
	sub_8251D8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251dd38
	if (cr0.eq) goto loc_8251DD38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_8251DD38:
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

__attribute__((alias("__imp__sub_8251DD58"))) PPC_WEAK_FUNC(sub_8251DD58);
PPC_FUNC_IMPL(__imp__sub_8251DD58) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// bl 0x8251d390
	sub_8251D390(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r22,40
	r22.s64 = 40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251dd94
	if (!cr6.eq) goto loc_8251DD94;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8251dda0
	goto loc_8251DDA0;
loc_8251DD94:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r8,r11,r22
	ctx.r8.s32 = r11.s32 / r22.s32;
loc_8251DDA0:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8251e0a0
	if (cr6.eq) goto loc_8251E0A0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251ddb8
	if (!cr6.eq) goto loc_8251DDB8;
	// li r11,0
	r11.s64 = 0;
	// b 0x8251ddc4
	goto loc_8251DDC4;
loc_8251DDB8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_8251DDC4:
	// lis r9,1638
	ctx.r9.s64 = 107347968;
	// ori r9,r9,26214
	ctx.r9.u64 = ctx.r9.u64 | 26214;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x8251dde0
	if (!cr6.lt) goto loc_8251DDE0;
	// bl 0x8284e0a0
	sub_8284E0A0(ctx, base);
	// b 0x8251e0a0
	goto loc_8251E0A0;
loc_8251DDE0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251ddf0
	if (!cr6.eq) goto loc_8251DDF0;
	// li r11,0
	r11.s64 = 0;
	// b 0x8251ddfc
	goto loc_8251DDFC;
loc_8251DDF0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_8251DDFC:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x8251df70
	if (!cr6.lt) goto loc_8251DF70;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x8251de20
	if (!cr6.lt) goto loc_8251DE20;
	// li r11,0
	r11.s64 = 0;
	// b 0x8251de24
	goto loc_8251DE24;
loc_8251DE20:
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_8251DE24:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251de34
	if (!cr6.eq) goto loc_8251DE34;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8251de40
	goto loc_8251DE40;
loc_8251DE34:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r9,r22
	ctx.r9.s32 = ctx.r9.s32 / r22.s32;
loc_8251DE40:
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + r23.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8251de6c
	if (!cr6.lt) goto loc_8251DE6C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251de5c
	if (!cr6.eq) goto loc_8251DE5C;
	// li r11,0
	r11.s64 = 0;
	// b 0x8251de68
	goto loc_8251DE68;
loc_8251DE5C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_8251DE68:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
loc_8251DE6C:
	// mulli r24,r11,40
	r24.s64 = r11.s64 * 40;
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
	// b 0x8251deb8
	goto loc_8251DEB8;
loc_8251DE9C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8251deb0
	if (cr6.eq) goto loc_8251DEB0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251d390
	sub_8251D390(ctx, base);
loc_8251DEB0:
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
loc_8251DEB8:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bne cr6,0x8251de9c
	if (!cr6.eq) goto loc_8251DE9C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251d848
	sub_8251D848(ctx, base);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x8251df0c
	if (cr6.eq) goto loc_8251DF0C;
	// subf r28,r30,r26
	r28.s64 = r26.s64 - r30.s64;
loc_8251DEE8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8251defc
	if (cr6.eq) goto loc_8251DEFC;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251d390
	sub_8251D390(ctx, base);
loc_8251DEFC:
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// add r11,r28,r30
	r11.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x8251dee8
	if (!cr6.eq) goto loc_8251DEE8;
loc_8251DF0C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251df20
	if (!cr6.eq) goto loc_8251DF20;
	// li r11,0
	r11.s64 = 0;
	// b 0x8251df2c
	goto loc_8251DF2C;
loc_8251DF20:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
loc_8251DF2C:
	// add r30,r11,r23
	r30.u64 = r11.u64 + r23.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251df54
	if (cr6.eq) goto loc_8251DF54;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8251d3f8
	sub_8251D3F8(ctx, base);
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_8251DF54:
	// mulli r11,r30,40
	r11.s64 = r30.s64 * 40;
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
	// b 0x8251e0a0
	goto loc_8251E0A0;
loc_8251DF70:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r26,r30
	r11.s64 = r30.s64 - r26.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x8251e010
	if (!cr6.lt) goto loc_8251E010;
	// mulli r29,r23,40
	r29.s64 = r23.s64 * 40;
	// add r28,r29,r26
	r28.u64 = r29.u64 + r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x8251dfbc
	if (cr6.eq) goto loc_8251DFBC;
	// subf r27,r29,r28
	r27.s64 = r28.s64 - r29.s64;
loc_8251DF98:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8251dfac
	if (cr6.eq) goto loc_8251DFAC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251d390
	sub_8251D390(ctx, base);
loc_8251DFAC:
	// addi r27,r27,40
	r27.s64 = r27.s64 + 40;
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x8251df98
	if (!cr6.eq) goto loc_8251DF98;
loc_8251DFBC:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r26,r4
	r11.s64 = ctx.r4.s64 - r26.s64;
	// divw r11,r11,r22
	r11.s32 = r11.s32 / r22.s32;
	// subf r5,r11,r23
	ctx.r5.s64 = r23.s64 - r11.s64;
	// bl 0x8251d848
	sub_8251D848(ctx, base);
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
	// beq cr6,0x8251e0a0
	if (cr6.eq) goto loc_8251E0A0;
loc_8251DFF4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251d230
	sub_8251D230(ctx, base);
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x8251dff4
	if (!cr6.eq) goto loc_8251DFF4;
	// b 0x8251e0a0
	goto loc_8251E0A0;
loc_8251E010:
	// mulli r25,r23,40
	r25.s64 = r23.s64 * 40;
	// subf r29,r25,r30
	r29.s64 = r30.s64 - r25.s64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// beq cr6,0x8251e04c
	if (cr6.eq) goto loc_8251E04C;
loc_8251E028:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8251e03c
	if (cr6.eq) goto loc_8251E03C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251d390
	sub_8251D390(ctx, base);
loc_8251E03C:
	// addi r27,r27,40
	r27.s64 = r27.s64 + 40;
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x8251e028
	if (!cr6.eq) goto loc_8251E028;
loc_8251E04C:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x8251e078
	if (cr6.eq) goto loc_8251E078;
	// subf r30,r29,r30
	r30.s64 = r30.s64 - r29.s64;
loc_8251E060:
	// addi r31,r31,-40
	r31.s64 = r31.s64 + -40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// bl 0x8251d230
	sub_8251D230(ctx, base);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x8251e060
	if (!cr6.eq) goto loc_8251E060;
loc_8251E078:
	// add r30,r25,r26
	r30.u64 = r25.u64 + r26.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x8251e0a0
	if (cr6.eq) goto loc_8251E0A0;
loc_8251E088:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251d230
	sub_8251D230(ctx, base);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x8251e088
	if (!cr6.eq) goto loc_8251E088;
loc_8251E0A0:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e62610
	sub_82E62610(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8251E0C0"))) PPC_WEAK_FUNC(sub_8251E0C0);
PPC_FUNC_IMPL(__imp__sub_8251E0C0) {
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
	// beq cr6,0x8251e0f8
	if (cr6.eq) goto loc_8251E0F8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,40
	ctx.r10.s64 = 40;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// divw. r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8251e100
	if (!cr0.eq) goto loc_8251E100;
loc_8251E0F8:
	// li r30,0
	r30.s64 = 0;
	// b 0x8251e108
	goto loc_8251E108;
loc_8251E100:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// divw r30,r11,r10
	r30.s32 = r11.s32 / ctx.r10.s32;
loc_8251E108:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251dd58
	sub_8251DD58(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r30,40
	r11.s64 = r30.s64 * 40;
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

__attribute__((alias("__imp__sub_8251E130"))) PPC_WEAK_FUNC(sub_8251E130);
PPC_FUNC_IMPL(__imp__sub_8251E130) {
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
	// li r9,40
	ctx.r9.s64 = 40;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251e160
	if (!cr6.eq) goto loc_8251E160;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8251e16c
	goto loc_8251E16C;
loc_8251E160:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
loc_8251E16C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251e1a8
	if (cr6.eq) goto loc_8251E1A8;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8251e1a8
	if (!cr6.lt) goto loc_8251E1A8;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8251e19c
	if (cr6.eq) goto loc_8251E19C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251d390
	sub_8251D390(ctx, base);
loc_8251E19C:
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8251e1bc
	goto loc_8251E1BC;
loc_8251E1A8:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251e0c0
	sub_8251E0C0(ctx, base);
loc_8251E1BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251E1D8"))) PPC_WEAK_FUNC(sub_8251E1D8);
PPC_FUNC_IMPL(__imp__sub_8251E1D8) {
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
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,12376
	r11.s64 = r11.s64 + 12376;
	// addi r10,r10,12356
	ctx.r10.s64 = ctx.r10.s64 + 12356;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// addi r4,r11,12264
	ctx.r4.s64 = r11.s64 + 12264;
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82b61628
	sub_82B61628(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251E290"))) PPC_WEAK_FUNC(sub_8251E290);
PPC_FUNC_IMPL(__imp__sub_8251E290) {
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
	// bl 0x82523450
	sub_82523450(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251e30c
	if (cr0.eq) goto loc_8251E30C;
	// addi r4,r30,24
	ctx.r4.s64 = r30.s64 + 24;
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8251e30c
	if (!cr0.eq) goto loc_8251E30C;
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251e2f8
	if (cr6.eq) goto loc_8251E2F8;
	// li r11,3
	r11.s64 = 3;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,200(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// bl 0x8251d768
	sub_8251D768(ctx, base);
	// b 0x8251e300
	goto loc_8251E300;
loc_8251E2F8:
	// li r11,1
	r11.s64 = 1;
	// stw r11,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r11.u32);
loc_8251E300:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8251e130
	sub_8251E130(ctx, base);
loc_8251E30C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251E328"))) PPC_WEAK_FUNC(sub_8251E328);
PPC_FUNC_IMPL(__imp__sub_8251E328) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi. r28,r29,24
	r28.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8251e37c
	if (cr0.eq) goto loc_8251E37C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-10372
	ctx.r3.s64 = r11.s64 + -10372;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251e37c
	if (cr0.eq) goto loc_8251E37C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x8251e290
	sub_8251E290(ctx, base);
loc_8251E374:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8251e3c4
	goto loc_8251E3C4;
loc_8251E37C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8251e3b4
	if (cr6.eq) goto loc_8251E3B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-10268
	ctx.r3.s64 = r11.s64 + -10268;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251e3b4
	if (cr0.eq) goto loc_8251E3B4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x8251d380
	sub_8251D380(ctx, base);
	// b 0x8251e374
	goto loc_8251E374;
loc_8251E3B4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82514ef8
	sub_82514EF8(ctx, base);
loc_8251E3C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8251E3D0"))) PPC_WEAK_FUNC(sub_8251E3D0);
PPC_FUNC_IMPL(__imp__sub_8251E3D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82514ef8
	sub_82514EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251E3D8"))) PPC_WEAK_FUNC(sub_8251E3D8);
PPC_FUNC_IMPL(__imp__sub_8251E3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,212(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 212);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8251e3ec
	if (!cr6.eq) goto loc_8251E3EC;
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// blr 
	return;
loc_8251E3EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251E3F8"))) PPC_WEAK_FUNC(sub_8251E3F8);
PPC_FUNC_IMPL(__imp__sub_8251E3F8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// bl 0x82e86588
	sub_82E86588(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8251e4c4
	if (cr6.eq) goto loc_8251E4C4;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251e4bc
	if (cr6.eq) goto loc_8251E4BC;
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251e4bc
	if (cr0.eq) goto loc_8251E4BC;
	// addi r30,r31,216
	r30.s64 = r31.s64 + 216;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82e2bec8
	sub_82E2BEC8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r3,212(r31)
	PPC_STORE_U8(r31.u32 + 212, ctx.r3.u8);
	// bne 0x8251e4c4
	if (!cr0.eq) goto loc_8251E4C4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lfs f31,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82e866a0
	sub_82E866A0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f31,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lfs f0,-24780(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24780);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82e866e8
	sub_82E866E8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8251e4c4
	goto loc_8251E4C4;
loc_8251E4BC:
	// li r11,0
	r11.s64 = 0;
	// stb r11,212(r31)
	PPC_STORE_U8(r31.u32 + 212, r11.u8);
loc_8251E4C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251E4D0"))) PPC_WEAK_FUNC(sub_8251E4D0);
PPC_FUNC_IMPL(__imp__sub_8251E4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// li r11,240
	r11.s64 = 240;
	// stb r4,236(r3)
	PPC_STORE_U8(ctx.r3.u32 + 236, ctx.r4.u8);
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251E4E8"))) PPC_WEAK_FUNC(sub_8251E4E8);
PPC_FUNC_IMPL(__imp__sub_8251E4E8) {
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
	// beq 0x8251e540
	if (cr0.eq) goto loc_8251E540;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,12420
	ctx.r9.s64 = r11.s64 + 12420;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8251e544
	goto loc_8251E544;
loc_8251E540:
	// li r11,0
	r11.s64 = 0;
loc_8251E544:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251e578
	if (!cr6.eq) goto loc_8251E578;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,-10208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10208);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8251E578:
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

__attribute__((alias("__imp__sub_8251E598"))) PPC_WEAK_FUNC(sub_8251E598);
PPC_FUNC_IMPL(__imp__sub_8251E598) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,12460
	r11.s64 = r11.s64 + 12460;
	// addi r10,r10,12440
	ctx.r10.s64 = ctx.r10.s64 + 12440;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251e5d4
	if (cr6.eq) goto loc_8251E5D4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251E5D4:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251e5e4
	if (cr6.eq) goto loc_8251E5E4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251E5E4:
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251e5f4
	if (cr6.eq) goto loc_8251E5F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251E5F4:
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251e604
	if (cr6.eq) goto loc_8251E604;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251E604:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82dfa218
	sub_82DFA218(ctx, base);
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

__attribute__((alias("__imp__sub_8251E628"))) PPC_WEAK_FUNC(sub_8251E628);
PPC_FUNC_IMPL(__imp__sub_8251E628) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x8251e7c0
	sub_8251E7C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251E630"))) PPC_WEAK_FUNC(sub_8251E630);
PPC_FUNC_IMPL(__imp__sub_8251E630) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v63{};
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4300
	ctx.r4.s64 = r11.s64 + 4300;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
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
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x8251e674
	if (!cr6.eq) goto loc_8251E674;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8251E674:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250f238
	sub_8250F238(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x8251e694
	if (!cr6.eq) goto loc_8251E694;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251E694:
	// bl 0x8252bbe0
	sub_8252BBE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251e3f8
	sub_8251E3F8(ctx, base);
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

__attribute__((alias("__imp__sub_8251E6E0"))) PPC_WEAK_FUNC(sub_8251E6E0);
PPC_FUNC_IMPL(__imp__sub_8251E6E0) {
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
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82dfa1a0
	sub_82DFA1A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,12460
	r11.s64 = r11.s64 + 12460;
	// addi r10,r10,12440
	ctx.r10.s64 = ctx.r10.s64 + 12440;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// addi r4,r11,12500
	ctx.r4.s64 = r11.s64 + 12500;
	// li r5,217
	ctx.r5.s64 = 217;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8251e750
	if (cr0.eq) goto loc_8251E750;
	// bl 0x82e86528
	sub_82E86528(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8251e754
	goto loc_8251E754;
loc_8251E750:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8251E754:
	// stw r29,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r29.u32);
	// addi r11,r31,204
	r11.s64 = r31.s64 + 204;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8251e4e8
	sub_8251E4E8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stb r30,212(r31)
	PPC_STORE_U8(r31.u32 + 212, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r30.u32);
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// stb r30,236(r31)
	PPC_STORE_U8(r31.u32 + 236, r30.u8);
	// stfs f0,240(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f0,244(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// stfs f0,248(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// stfs f0,252(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8251E7C0"))) PPC_WEAK_FUNC(sub_8251E7C0);
PPC_FUNC_IMPL(__imp__sub_8251E7C0) {
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
	// bl 0x8251e598
	sub_8251E598(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251e7f0
	if (cr0.eq) goto loc_8251E7F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_8251E7F0:
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

__attribute__((alias("__imp__sub_8251E810"))) PPC_WEAK_FUNC(sub_8251E810);
PPC_FUNC_IMPL(__imp__sub_8251E810) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251e844
	if (!cr6.eq) goto loc_8251E844;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251E844:
	// bl 0x8250c0b8
	sub_8250C0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12556
	ctx.r4.s64 = r11.s64 + 12556;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82e351d0
	sub_82E351D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r31,r31,196
	r31.s64 = r31.s64 + 196;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251e8b0
	if (cr6.eq) goto loc_8251E8B0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251E8B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
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

__attribute__((alias("__imp__sub_8251E8E0"))) PPC_WEAK_FUNC(sub_8251E8E0);
PPC_FUNC_IMPL(__imp__sub_8251E8E0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,30992
	ctx.r4.s64 = r11.s64 + 30992;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,30984
	ctx.r4.s64 = r11.s64 + 30984;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r11,6936
	r30.s64 = r11.s64 + 6936;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r11,6928
	r29.s64 = r11.s64 + 6928;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825ce300
	sub_825CE300(ctx, base);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x825cfc40
	sub_825CFC40(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251e974
	if (cr6.eq) goto loc_8251E974;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251E974:
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
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825ce300
	sub_825CE300(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251e9d8
	if (cr6.eq) goto loc_8251E9D8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251E9D8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,12596
	ctx.r4.s64 = r11.s64 + 12596;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,12572
	ctx.r4.s64 = r11.s64 + 12572;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r5,r11,31036
	ctx.r5.s64 = r11.s64 + 31036;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a83f0
	sub_825A83F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a7520
	sub_825A7520(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825cf410
	sub_825CF410(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8251EA60"))) PPC_WEAK_FUNC(sub_8251EA60);
PPC_FUNC_IMPL(__imp__sub_8251EA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,12864
	r11.s64 = r11.s64 + 12864;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82dfa218
	sub_82DFA218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251EA78"))) PPC_WEAK_FUNC(sub_8251EA78);
PPC_FUNC_IMPL(__imp__sub_8251EA78) {
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
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82dfa1a0
	sub_82DFA1A0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,12864
	r11.s64 = r11.s64 + 12864;
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

__attribute__((alias("__imp__sub_8251EAB8"))) PPC_WEAK_FUNC(sub_8251EAB8);
PPC_FUNC_IMPL(__imp__sub_8251EAB8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,12864
	r11.s64 = r11.s64 + 12864;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dfa218
	sub_82DFA218(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251eaf8
	if (cr0.eq) goto loc_8251EAF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8251EAF8:
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

__attribute__((alias("__imp__sub_8251EB18"))) PPC_WEAK_FUNC(sub_8251EB18);
PPC_FUNC_IMPL(__imp__sub_8251EB18) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824eded8
	sub_824EDED8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251eb50
	if (!cr6.eq) goto loc_8251EB50;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251EB50:
	// bl 0x825040c0
	sub_825040C0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824efa88
	sub_824EFA88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x825199d0
	sub_825199D0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251EBA8"))) PPC_WEAK_FUNC(sub_8251EBA8);
PPC_FUNC_IMPL(__imp__sub_8251EBA8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824eded8
	sub_824EDED8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251ebec
	if (!cr6.eq) goto loc_8251EBEC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251EBEC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824eded8
	sub_824EDED8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251ec3c
	if (!cr6.eq) goto loc_8251EC3C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251EC3C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82519a80
	sub_82519A80(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251ec98
	if (cr6.eq) goto loc_8251EC98;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251EC98:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82519a90
	sub_82519A90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251ecdc
	if (cr6.eq) goto loc_8251ECDC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251ECDC:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8251bf30
	sub_8251BF30(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251ed18
	if (cr6.eq) goto loc_8251ED18;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251ED18:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82519838
	sub_82519838(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82519738
	sub_82519738(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251ED78"))) PPC_WEAK_FUNC(sub_8251ED78);
PPC_FUNC_IMPL(__imp__sub_8251ED78) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824eded8
	sub_824EDED8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251edbc
	if (!cr6.eq) goto loc_8251EDBC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251EDBC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824eded8
	sub_824EDED8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251ee0c
	if (!cr6.eq) goto loc_8251EE0C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251EE0C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r30,r3,r31
	r30.u64 = ctx.r3.u64 + r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82519a98
	sub_82519A98(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251ee60
	if (cr6.eq) goto loc_8251EE60;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251EE60:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82519a80
	sub_82519A80(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251eea0
	if (cr6.eq) goto loc_8251EEA0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251EEA0:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82519a90
	sub_82519A90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251eee8
	if (cr6.eq) goto loc_8251EEE8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251EEE8:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r4,r31,r30
	ctx.r4.u64 = r31.u64 + r30.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x825196e0
	sub_825196E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82519738
	sub_82519738(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251EF48"))) PPC_WEAK_FUNC(sub_8251EF48);
PPC_FUNC_IMPL(__imp__sub_8251EF48) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824eded8
	sub_824EDED8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251ef84
	if (!cr6.eq) goto loc_8251EF84;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251EF84:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82519a80
	sub_82519A80(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251efe0
	if (cr6.eq) goto loc_8251EFE0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251EFE0:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82519738
	sub_82519738(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_8251F020"))) PPC_WEAK_FUNC(sub_8251F020);
PPC_FUNC_IMPL(__imp__sub_8251F020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,12880
	r11.s64 = r11.s64 + 12880;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82dfa218
	sub_82DFA218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251F038"))) PPC_WEAK_FUNC(sub_8251F038);
PPC_FUNC_IMPL(__imp__sub_8251F038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F048"))) PPC_WEAK_FUNC(sub_8251F048);
PPC_FUNC_IMPL(__imp__sub_8251F048) {
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
	// bne cr6,0x8251f088
	if (!cr6.eq) goto loc_8251F088;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8251f0b8
	if (cr6.eq) goto loc_8251F0B8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x8251f0b8
	goto loc_8251F0B8;
loc_8251F088:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8251f0b8
	if (cr6.eq) goto loc_8251F0B8;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-10080
	ctx.r4.s64 = r11.s64 + -10080;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251f0b0
	if (cr0.eq) goto loc_8251F0B0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x8251f0b8
	goto loc_8251F0B8;
loc_8251F0B0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8251F0B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F0D0"))) PPC_WEAK_FUNC(sub_8251F0D0);
PPC_FUNC_IMPL(__imp__sub_8251F0D0) {
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
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82dfa1a0
	sub_82DFA1A0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,12880
	r11.s64 = r11.s64 + 12880;
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

__attribute__((alias("__imp__sub_8251F110"))) PPC_WEAK_FUNC(sub_8251F110);
PPC_FUNC_IMPL(__imp__sub_8251F110) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,12880
	r11.s64 = r11.s64 + 12880;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dfa218
	sub_82DFA218(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251f150
	if (cr0.eq) goto loc_8251F150;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8251F150:
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

__attribute__((alias("__imp__sub_8251F170"))) PPC_WEAK_FUNC(sub_8251F170);
PPC_FUNC_IMPL(__imp__sub_8251F170) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,7892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 7892);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// bne cr6,0x8251f19c
	if (!cr6.eq) goto loc_8251F19C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8251F19C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82df98c0
	sub_82DF98C0(ctx, base);
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

__attribute__((alias("__imp__sub_8251F1C0"))) PPC_WEAK_FUNC(sub_8251F1C0);
PPC_FUNC_IMPL(__imp__sub_8251F1C0) {
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
	// beq cr6,0x8251f1ec
	if (cr6.eq) goto loc_8251F1EC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8251f048
	sub_8251F048(ctx, base);
	// b 0x8251f1f8
	goto loc_8251F1F8;
loc_8251F1EC:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r11,r11,-10080
	r11.s64 = r11.s64 + -10080;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_8251F1F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F208"))) PPC_WEAK_FUNC(sub_8251F208);
PPC_FUNC_IMPL(__imp__sub_8251F208) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8308a380
	sub_8308A380(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251f23c
	if (cr6.eq) goto loc_8251F23C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251F23C:
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

__attribute__((alias("__imp__sub_8251F250"))) PPC_WEAK_FUNC(sub_8251F250);
PPC_FUNC_IMPL(__imp__sub_8251F250) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251ef48
	sub_8251EF48(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,12912
	ctx.r4.s64 = r11.s64 + 12912;
	// li r5,180
	ctx.r5.s64 = 180;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r28,1
	r28.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8251f4b4
	if (cr6.lt) goto loc_8251F4B4;
	// beq cr6,0x8251f458
	if (cr6.eq) goto loc_8251F458;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8251f420
	if (cr6.lt) goto loc_8251F420;
	// beq cr6,0x8251f3d0
	if (cr6.eq) goto loc_8251F3D0;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x8251f390
	if (cr6.lt) goto loc_8251F390;
	// bne cr6,0x8251f504
	if (!cr6.eq) goto loc_8251F504;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8251f170
	sub_8251F170(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251f2d4
	if (!cr6.eq) goto loc_8251F2D4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251F2D4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8251f33c
	if (cr6.eq) goto loc_8251F33C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8251f170
	sub_8251F170(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251f318
	if (!cr6.eq) goto loc_8251F318;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251F318:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,61(r31)
	PPC_STORE_U8(r31.u32 + 61, ctx.r3.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x8251f494
	goto loc_8251F494;
loc_8251F33C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251eb18
	sub_8251EB18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251ed78
	sub_8251ED78(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8251f170
	sub_8251F170(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251f36c
	if (!cr6.eq) goto loc_8251F36C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251F36C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,61(r31)
	PPC_STORE_U8(r31.u32 + 61, ctx.r3.u8);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// b 0x8251f500
	goto loc_8251F500;
loc_8251F390:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8251f170
	sub_8251F170(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251f3ac
	if (!cr6.eq) goto loc_8251F3AC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251F3AC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,61(r31)
	PPC_STORE_U8(r31.u32 + 61, ctx.r3.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x8251f494
	goto loc_8251F494;
loc_8251F3D0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251ed78
	sub_8251ED78(ctx, base);
	// stb r28,62(r31)
	PPC_STORE_U8(r31.u32 + 62, r28.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8251f170
	sub_8251F170(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251f3fc
	if (!cr6.eq) goto loc_8251F3FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251F3FC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,61(r31)
	PPC_STORE_U8(r31.u32 + 61, ctx.r3.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// b 0x8251f500
	goto loc_8251F500;
loc_8251F420:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8251f170
	sub_8251F170(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251f43c
	if (!cr6.eq) goto loc_8251F43C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251F43C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,61(r31)
	PPC_STORE_U8(r31.u32 + 61, ctx.r3.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x8251f500
	goto loc_8251F500;
loc_8251F458:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8251f170
	sub_8251F170(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251f474
	if (!cr6.eq) goto loc_8251F474;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251F474:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,61(r31)
	PPC_STORE_U8(r31.u32 + 61, ctx.r3.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
loc_8251F494:
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lbz r11,61(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 61);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8251f504
	if (cr0.eq) goto loc_8251F504;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251eba8
	sub_8251EBA8(ctx, base);
	// b 0x8251f504
	goto loc_8251F504;
loc_8251F4B4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251ed78
	sub_8251ED78(ctx, base);
	// stb r28,62(r31)
	PPC_STORE_U8(r31.u32 + 62, r28.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8251f170
	sub_8251F170(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251f4e0
	if (!cr6.eq) goto loc_8251F4E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251F4E0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r3,61(r31)
	PPC_STORE_U8(r31.u32 + 61, ctx.r3.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_8251F500:
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8251F504:
	// stb r28,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r28.u8);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec8d8
	sub_824EC8D8(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8251F538"))) PPC_WEAK_FUNC(sub_8251F538);
PPC_FUNC_IMPL(__imp__sub_8251F538) {
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
	// addi r31,r11,31156
	r31.s64 = r11.s64 + 31156;
	// lwz r11,31164(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31164);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8251f580
	if (!cr0.eq) goto loc_8251F580;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-12416
	ctx.r9.s64 = ctx.r9.s64 + -12416;
	// addi r8,r8,-3648
	ctx.r8.s64 = ctx.r8.s64 + -3648;
	// stw r11,31164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31164, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_8251F580:
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
	// bl 0x82372b68
	sub_82372B68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251f5ac
	if (cr0.eq) goto loc_8251F5AC;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x8251f5b0
	goto loc_8251F5B0;
loc_8251F5AC:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_8251F5B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251F5B8"))) PPC_WEAK_FUNC(sub_8251F5B8);
PPC_FUNC_IMPL(__imp__sub_8251F5B8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12972
	ctx.r4.s64 = r11.s64 + 12972;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32174
	r11.s64 = -2108555264;
	// li r30,0
	r30.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r11,r11,-3504
	r11.s64 = r11.s64 + -3504;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8251f538
	sub_8251F538(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfd5e8
	sub_82DFD5E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// stb r30,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r30.u8);
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// stb r30,61(r31)
	PPC_STORE_U8(r31.u32 + 61, r30.u8);
	// stb r30,62(r31)
	PPC_STORE_U8(r31.u32 + 62, r30.u8);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// beq cr6,0x8251f644
	if (cr6.eq) goto loc_8251F644;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x8251f69c
	if (!cr6.eq) goto loc_8251F69C;
loc_8251F644:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c0ab0
	sub_822C0AB0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251f660
	if (!cr6.eq) goto loc_8251F660;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8251F660:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251f69c
	if (cr0.eq) goto loc_8251F69C;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec880
	sub_824EC880(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8251F69C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8308a2f8
	sub_8308A2F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251F6B0"))) PPC_WEAK_FUNC(sub_8251F6B0);
PPC_FUNC_IMPL(__imp__sub_8251F6B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,12992
	r11.s64 = r11.s64 + 12992;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82dfa218
	sub_82DFA218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251F6C8"))) PPC_WEAK_FUNC(sub_8251F6C8);
PPC_FUNC_IMPL(__imp__sub_8251F6C8) {
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
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82dfa1a0
	sub_82DFA1A0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,12992
	r11.s64 = r11.s64 + 12992;
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

__attribute__((alias("__imp__sub_8251F708"))) PPC_WEAK_FUNC(sub_8251F708);
PPC_FUNC_IMPL(__imp__sub_8251F708) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,12992
	r11.s64 = r11.s64 + 12992;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dfa218
	sub_82DFA218(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251f748
	if (cr0.eq) goto loc_8251F748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8251F748:
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

__attribute__((alias("__imp__sub_8251F768"))) PPC_WEAK_FUNC(sub_8251F768);
PPC_FUNC_IMPL(__imp__sub_8251F768) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,304(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F770"))) PPC_WEAK_FUNC(sub_8251F770);
PPC_FUNC_IMPL(__imp__sub_8251F770) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F778"))) PPC_WEAK_FUNC(sub_8251F778);
PPC_FUNC_IMPL(__imp__sub_8251F778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,78
	r11.s64 = ctx.r4.s64 + 78;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F788"))) PPC_WEAK_FUNC(sub_8251F788);
PPC_FUNC_IMPL(__imp__sub_8251F788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,87
	r11.s64 = ctx.r4.s64 + 87;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F798"))) PPC_WEAK_FUNC(sub_8251F798);
PPC_FUNC_IMPL(__imp__sub_8251F798) {
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
	// bne cr6,0x8251f7e0
	if (!cr6.eq) goto loc_8251F7E0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8251f810
	if (cr6.eq) goto loc_8251F810;
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
	// b 0x8251f810
	goto loc_8251F810;
loc_8251F7E0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x8251f810
	if (cr6.eq) goto loc_8251F810;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-9760
	ctx.r4.s64 = r11.s64 + -9760;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251f808
	if (cr0.eq) goto loc_8251F808;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x8251f810
	goto loc_8251F810;
loc_8251F808:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8251F810:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F828"))) PPC_WEAK_FUNC(sub_8251F828);
PPC_FUNC_IMPL(__imp__sub_8251F828) {
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
	// beq cr6,0x8251f854
	if (cr6.eq) goto loc_8251F854;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8251f798
	sub_8251F798(ctx, base);
	// b 0x8251f860
	goto loc_8251F860;
loc_8251F854:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r11,r11,-9760
	r11.s64 = r11.s64 + -9760;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_8251F860:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F870"))) PPC_WEAK_FUNC(sub_8251F870);
PPC_FUNC_IMPL(__imp__sub_8251F870) {
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251f8d8
	if (cr6.eq) goto loc_8251F8D8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8251be98
	sub_8251BE98(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251f8d0
	if (cr6.eq) goto loc_8251F8D0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251F8D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8251f8ec
	goto loc_8251F8EC;
loc_8251F8D8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251f8e8
	if (cr6.eq) goto loc_8251F8E8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8251F8E8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8251F8EC:
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

__attribute__((alias("__imp__sub_8251F900"))) PPC_WEAK_FUNC(sub_8251F900);
PPC_FUNC_IMPL(__imp__sub_8251F900) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8251f92c
	if (!cr6.eq) goto loc_8251F92C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8251f998
	goto loc_8251F998;
loc_8251F92C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824eded8
	sub_824EDED8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251f960
	if (!cr6.eq) goto loc_8251F960;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251F960:
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x82503d18
	sub_82503D18(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8251f98c
	if (cr6.eq) goto loc_8251F98C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251f870
	sub_8251F870(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8251f98c
	if (!cr6.eq) goto loc_8251F98C;
	// li r31,0
	r31.s64 = 0;
loc_8251F98C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8251F998:
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

__attribute__((alias("__imp__sub_8251F9B0"))) PPC_WEAK_FUNC(sub_8251F9B0);
PPC_FUNC_IMPL(__imp__sub_8251F9B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r30,1
	r30.s64 = 1;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824eded8
	sub_824EDED8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r29,40(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x8251fb18
	goto loc_8251FB18;
loc_8251F9F0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8251fae0
	if (cr6.lt) goto loc_8251FAE0;
	// beq cr6,0x8251fab4
	if (cr6.eq) goto loc_8251FAB4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8251fa98
	if (cr6.lt) goto loc_8251FA98;
	// beq cr6,0x8251fa68
	if (cr6.eq) goto loc_8251FA68;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x8251fa4c
	if (cr6.lt) goto loc_8251FA4C;
	// bne cr6,0x8251fb0c
	if (!cr6.eq) goto loc_8251FB0C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251fa30
	if (!cr6.eq) goto loc_8251FA30;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251FA30:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8251FA34:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x825091b0
	sub_825091B0(ctx, base);
	// b 0x8251fb08
	goto loc_8251FB08;
loc_8251FA4C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251fa60
	if (!cr6.eq) goto loc_8251FA60;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251FA60:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8251fa34
	goto loc_8251FA34;
loc_8251FA68:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251fa7c
	if (!cr6.eq) goto loc_8251FA7C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251FA7C:
	// li r6,1
	ctx.r6.s64 = 1;
loc_8251FA80:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82509010
	sub_82509010(ctx, base);
	// b 0x8251fb08
	goto loc_8251FB08;
loc_8251FA98:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251faac
	if (!cr6.eq) goto loc_8251FAAC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251FAAC:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8251fa80
	goto loc_8251FA80;
loc_8251FAB4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251fac8
	if (!cr6.eq) goto loc_8251FAC8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251FAC8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82508e28
	sub_82508E28(ctx, base);
	// b 0x8251fb08
	goto loc_8251FB08;
loc_8251FAE0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x8251faf4
	if (!cr6.eq) goto loc_8251FAF4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251FAF4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// ld r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82508c40
	sub_82508C40(ctx, base);
loc_8251FB08:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8251FB0C:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251fb20
	if (cr0.eq) goto loc_8251FB20;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8251FB18:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x8251f9f0
	if (!cr6.eq) goto loc_8251F9F0;
loc_8251FB20:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251FB38"))) PPC_WEAK_FUNC(sub_8251FB38);
PPC_FUNC_IMPL(__imp__sub_8251FB38) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8251fbdc
	if (!cr6.gt) goto loc_8251FBDC;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bge cr6,0x8251fbdc
	if (!cr6.lt) goto loc_8251FBDC;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251f870
	sub_8251F870(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8251fb98
	if (cr6.eq) goto loc_8251FB98;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8251fbc4
	if (!cr6.eq) goto loc_8251FBC4;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r31,r10,13092
	r31.s64 = ctx.r10.s64 + 13092;
	// b 0x8251fba0
	goto loc_8251FBA0;
loc_8251FB98:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r31,r10,13088
	r31.s64 = ctx.r10.s64 + 13088;
loc_8251FBA0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,13084
	ctx.r4.s64 = r11.s64 + 13084;
	// bl 0x82dfbce8
	sub_82DFBCE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfbee0
	sub_82DFBEE0(ctx, base);
loc_8251FBC4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// b 0x8251fbe8
	goto loc_8251FBE8;
loc_8251FBDC:
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb920
	sub_82DFB920(ctx, base);
loc_8251FBE8:
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

__attribute__((alias("__imp__sub_8251FC08"))) PPC_WEAK_FUNC(sub_8251FC08);
PPC_FUNC_IMPL(__imp__sub_8251FC08) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r31,292
	ctx.r4.s64 = r31.s64 + 292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829590d8
	sub_829590D8(ctx, base);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8251fc48
	if (cr6.eq) goto loc_8251FC48;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x8251fc4c
	goto loc_8251FC4C;
loc_8251FC48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251FC4C:
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

__attribute__((alias("__imp__sub_8251FC60"))) PPC_WEAK_FUNC(sub_8251FC60);
PPC_FUNC_IMPL(__imp__sub_8251FC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
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

__attribute__((alias("__imp__sub_8251FC78"))) PPC_WEAK_FUNC(sub_8251FC78);
PPC_FUNC_IMPL(__imp__sub_8251FC78) {
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
	// lwz r29,40(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x8251fcb4
	goto loc_8251FCB4;
loc_8251FC94:
	// lwz r28,8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8251fcb0
	if (cr6.eq) goto loc_8251FCB0;
	// addi r3,r28,12
	ctx.r3.s64 = r28.s64 + 12;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8251FCB0:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_8251FCB4:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x8251fc94
	if (!cr6.eq) goto loc_8251FC94;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x82b67888
	sub_82B67888(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8251FCF8"))) PPC_WEAK_FUNC(sub_8251FCF8);
PPC_FUNC_IMPL(__imp__sub_8251FCF8) {
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
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x8255e2b8
	sub_8255E2B8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,-23007
	r28.s64 = r11.s64 + -23007;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82dfb598
	sub_82DFB598(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8251FD78"))) PPC_WEAK_FUNC(sub_8251FD78);
PPC_FUNC_IMPL(__imp__sub_8251FD78) {
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
	// lis r11,16383
	r11.s64 = 1073676288;
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
	// bge cr6,0x8251fdf0
	if (!cr6.lt) goto loc_8251FDF0;
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
loc_8251FDF0:
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

__attribute__((alias("__imp__sub_8251FE18"))) PPC_WEAK_FUNC(sub_8251FE18);
PPC_FUNC_IMPL(__imp__sub_8251FE18) {
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
	// beq 0x8251fe70
	if (cr0.eq) goto loc_8251FE70;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13068
	ctx.r9.s64 = r11.s64 + 13068;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8251fe74
	goto loc_8251FE74;
loc_8251FE70:
	// li r11,0
	r11.s64 = 0;
loc_8251FE74:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251feb8
	if (!cr6.eq) goto loc_8251FEB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8251fe98
	if (cr6.eq) goto loc_8251FE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251fc78
	sub_8251FC78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8251FE98:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-9940(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9940);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_8251FEB8:
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

__attribute__((alias("__imp__sub_8251FED8"))) PPC_WEAK_FUNC(sub_8251FED8);
PPC_FUNC_IMPL(__imp__sub_8251FED8) {
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
	// beq cr6,0x8251ff04
	if (cr6.eq) goto loc_8251FF04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251fc78
	sub_8251FC78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8251FF04:
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

__attribute__((alias("__imp__sub_8251FF18"))) PPC_WEAK_FUNC(sub_8251FF18);
PPC_FUNC_IMPL(__imp__sub_8251FF18) {
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
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,31168
	r31.s64 = r11.s64 + 31168;
	// lwz r11,31176(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31176);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8251ff64
	if (!cr0.eq) goto loc_8251FF64;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,-928
	ctx.r9.s64 = ctx.r9.s64 + -928;
	// addi r8,r8,-2008
	ctx.r8.s64 = ctx.r8.s64 + -2008;
	// stw r11,31176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31176, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_8251FF64:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r30,8
	ctx.r6.s64 = r30.s64 + 8;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x826332c8
	sub_826332C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251ff98
	if (cr0.eq) goto loc_8251FF98;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x8251ff9c
	goto loc_8251FF9C;
loc_8251FF98:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_8251FF9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8251FFA8"))) PPC_WEAK_FUNC(sub_8251FFA8);
PPC_FUNC_IMPL(__imp__sub_8251FFA8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r11,-3228
	r31.s64 = r11.s64 + -3228;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x825deaf8
	sub_825DEAF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520284
	if (cr0.eq) goto loc_82520284;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r11,13172
	r28.s64 = r11.s64 + 13172;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825deaf8
	sub_825DEAF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520284
	if (cr0.eq) goto loc_82520284;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,9232
	r29.s64 = r11.s64 + 9232;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825deaf8
	sub_825DEAF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520284
	if (cr0.eq) goto loc_82520284;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824eded8
	sub_824EDED8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825dea48
	sub_825DEA48(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x82520054
	if (!cr6.eq) goto loc_82520054;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82520054:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82505148
	sub_82505148(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82520274
	if (cr6.eq) goto loc_82520274;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,13108
	ctx.r4.s64 = r11.s64 + 13108;
	// li r5,380
	ctx.r5.s64 = 380;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82520098
	if (cr0.eq) goto loc_82520098;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// b 0x8252009c
	goto loc_8252009C;
loc_82520098:
	// li r31,0
	r31.s64 = 0;
loc_8252009C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x825dea48
	sub_825DEA48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825dea48
	sub_825DEA48(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-8932
	ctx.r4.s64 = r11.s64 + -8932;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8252011c
	if (cr0.eq) goto loc_8252011C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82520230
	goto loc_82520230;
loc_8252011C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,13104
	ctx.r4.s64 = r11.s64 + 13104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520154
	if (cr0.eq) goto loc_82520154;
	// li r11,1
	r11.s64 = 1;
	// b 0x82520230
	goto loc_82520230;
loc_82520154:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-10768
	ctx.r4.s64 = r11.s64 + -10768;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8252018c
	if (cr0.eq) goto loc_8252018C;
	// li r11,2
	r11.s64 = 2;
	// b 0x82520230
	goto loc_82520230;
loc_8252018C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,13100
	ctx.r4.s64 = r11.s64 + 13100;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825201c4
	if (cr0.eq) goto loc_825201C4;
	// li r11,3
	r11.s64 = 3;
	// b 0x82520230
	goto loc_82520230;
loc_825201C4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,9304
	ctx.r4.s64 = r11.s64 + 9304;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825201fc
	if (cr0.eq) goto loc_825201FC;
	// li r11,4
	r11.s64 = 4;
	// b 0x82520230
	goto loc_82520230;
loc_825201FC:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,13096
	ctx.r4.s64 = r11.s64 + 13096;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520234
	if (cr0.eq) goto loc_82520234;
	// li r11,5
	r11.s64 = 5;
loc_82520230:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82520234:
	// lwz r30,40(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// addi r31,r27,36
	r31.s64 = r27.s64 + 36;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8255e308
	sub_8255E308(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251fd78
	sub_8251FD78(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82520274:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82520284:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82520290"))) PPC_WEAK_FUNC(sub_82520290);
PPC_FUNC_IMPL(__imp__sub_82520290) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r31,292
	r29.s64 = r31.s64 + 292;
	// addi r11,r11,13188
	r11.s64 = r11.s64 + 13188;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x825a6820
	sub_825A6820(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r28,9
	r28.s64 = 9;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_825202D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x822c8ab0
	sub_822C8AB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c8ab0
	sub_822C8AB0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// bne 0x825202d0
	if (!cr0.eq) goto loc_825202D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bb8f70
	sub_82BB8F70(ctx, base);
	// addi r31,r31,292
	r31.s64 = r31.s64 + 292;
	// li r30,17
	r30.s64 = 17;
loc_8252030C:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x8252030c
	if (!cr0.lt) goto loc_8252030C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82520328"))) PPC_WEAK_FUNC(sub_82520328);
PPC_FUNC_IMPL(__imp__sub_82520328) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// addi r9,r10,13188
	ctx.r9.s64 = ctx.r10.s64 + 13188;
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r30,0
	r30.s64 = 0;
loc_8252035C:
	// stw r30,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r30.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bge 0x8252035c
	if (!cr0.lt) goto loc_8252035C;
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// bl 0x82729528
	sub_82729528(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r30.u32);
	// addi r3,r31,312
	ctx.r3.s64 = r31.s64 + 312;
	// stw r30,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,348
	ctx.r3.s64 = r31.s64 + 348;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
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

__attribute__((alias("__imp__sub_825203C0"))) PPC_WEAK_FUNC(sub_825203C0);
PPC_FUNC_IMPL(__imp__sub_825203C0) {
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
	// bl 0x82520290
	sub_82520290(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825203f0
	if (cr0.eq) goto loc_825203F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_825203F0:
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

__attribute__((alias("__imp__sub_82520410"))) PPC_WEAK_FUNC(sub_82520410);
PPC_FUNC_IMPL(__imp__sub_82520410) {
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
	// beq 0x82520468
	if (cr0.eq) goto loc_82520468;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13048
	ctx.r9.s64 = r11.s64 + 13048;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8252046c
	goto loc_8252046C;
loc_82520468:
	// li r11,0
	r11.s64 = 0;
loc_8252046C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825204b8
	if (!cr6.eq) goto loc_825204B8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82520498
	if (cr6.eq) goto loc_82520498;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82520498:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-9940(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9940);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_825204B8:
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

__attribute__((alias("__imp__sub_825204D8"))) PPC_WEAK_FUNC(sub_825204D8);
PPC_FUNC_IMPL(__imp__sub_825204D8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r30,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, r31.u32);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82421f88
	sub_82421F88(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r31,208(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8252054c
	if (!cr6.eq) goto loc_8252054C;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82520544
	if (cr6.eq) goto loc_82520544;
loc_82520540:
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82520544:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8252117c
	goto loc_8252117C;
loc_8252054C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r28,212(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r29,r11,13108
	r29.s64 = r11.s64 + 13108;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r29.u32);
	// bne 0x825205c0
	if (!cr0.eq) goto loc_825205C0;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// beq cr6,0x8252059c
	if (cr6.eq) goto loc_8252059C;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
loc_82520580:
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
	// bne 0x82520580
	if (!cr0.eq) goto loc_82520580;
loc_8252059C:
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,137
	ctx.r6.s64 = 137;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x822e07c0
	sub_822E07C0(ctx, base);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_825205C0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825de468
	sub_825DE468(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82e0ebe8
	sub_82E0EBE8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82dfaed0
	sub_82DFAED0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x825de698
	sub_825DE698(ctx, base);
	// lwz r3,532(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82520618
	if (cr6.eq) goto loc_82520618;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82520618:
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8252064c
	if (!cr6.eq) goto loc_8252064C;
loc_82520624:
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82520634
	if (cr6.eq) goto loc_82520634;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82520634:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825de520
	sub_825DE520(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82520544
	if (cr6.eq) goto loc_82520544;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82520540
	goto loc_82520540;
loc_8252064C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825ddd78
	sub_825DDD78(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82520674
	if (!cr6.eq) goto loc_82520674;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82520624
	if (cr6.eq) goto loc_82520624;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
	// b 0x82520624
	goto loc_82520624;
loc_82520674:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824eded8
	sub_824EDED8(ctx, base);
	// addi r3,r1,520
	ctx.r3.s64 = ctx.r1.s64 + 520;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82320350
	sub_82320350(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r31
	r29.u64 = r31.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,460(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82520704
	if (cr6.eq) goto loc_82520704;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82520704:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825210e0
	if (cr6.eq) goto loc_825210E0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// addi r11,r11,4300
	r11.s64 = r11.s64 + 4300;
	// addi r7,r7,13304
	ctx.r7.s64 = ctx.r7.s64 + 13304;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r11.u32);
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stw r7,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r7.u32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// addi r6,r6,13288
	ctx.r6.s64 = ctx.r6.s64 + 13288;
	// addi r11,r5,13276
	r11.s64 = ctx.r5.s64 + 13276;
	// addi r7,r4,13268
	ctx.r7.s64 = ctx.r4.s64 + 13268;
	// stw r6,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r6.u32);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// stw r11,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r11.u32);
	// lis r31,-32253
	r31.s64 = -2113732608;
	// stw r7,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r7.u32);
	// lis r30,-32253
	r30.s64 = -2113732608;
	// addi r6,r3,13256
	ctx.r6.s64 = ctx.r3.s64 + 13256;
	// addi r11,r31,13244
	r11.s64 = r31.s64 + 13244;
	// addi r7,r30,13236
	ctx.r7.s64 = r30.s64 + 13236;
	// stw r6,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r6.u32);
	// lis r29,-32253
	r29.s64 = -2113732608;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r11.u32);
	// lis r28,-32253
	r28.s64 = -2113732608;
	// stw r7,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// lis r27,-32253
	r27.s64 = -2113732608;
	// addi r6,r29,13228
	ctx.r6.s64 = r29.s64 + 13228;
	// addi r11,r28,13220
	r11.s64 = r28.s64 + 13220;
	// addi r7,r27,13216
	ctx.r7.s64 = r27.s64 + 13216;
	// stw r6,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r6.u32);
	// lis r26,-32256
	r26.s64 = -2113929216;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r11.u32);
	// lis r25,-32253
	r25.s64 = -2113732608;
	// stw r7,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r7.u32);
	// lis r24,-32256
	r24.s64 = -2113929216;
	// addi r6,r26,2552
	ctx.r6.s64 = r26.s64 + 2552;
	// addi r11,r25,13208
	r11.s64 = r25.s64 + 13208;
	// addi r7,r24,2568
	ctx.r7.s64 = r24.s64 + 2568;
	// stw r6,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r6.u32);
	// lis r23,-32256
	r23.s64 = -2113929216;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r11.u32);
	// lis r22,-32256
	r22.s64 = -2113929216;
	// stw r7,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// lis r21,-32256
	r21.s64 = -2113929216;
	// addi r6,r23,2576
	ctx.r6.s64 = r23.s64 + 2576;
	// addi r11,r22,2584
	r11.s64 = r22.s64 + 2584;
	// addi r7,r21,2592
	ctx.r7.s64 = r21.s64 + 2592;
	// stw r6,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r6.u32);
	// lis r20,-32256
	r20.s64 = -2113929216;
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r11.u32);
	// lis r19,-32256
	r19.s64 = -2113929216;
	// stw r7,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// lis r18,-32256
	r18.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// addi r6,r20,2600
	ctx.r6.s64 = r20.s64 + 2600;
	// addi r11,r19,2608
	r11.s64 = r19.s64 + 2608;
	// addi r7,r18,2612
	ctx.r7.s64 = r18.s64 + 2612;
	// stw r6,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// addi r16,r10,-23007
	r16.s64 = ctx.r10.s64 + -23007;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r11.u32);
	// addi r15,r9,13204
	r15.s64 = ctx.r9.s64 + 13204;
	// stw r7,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r7.u32);
	// addi r14,r8,13192
	r14.s64 = ctx.r8.s64 + 13192;
loc_82520818:
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r1,148
	r31.s64 = ctx.r1.s64 + 148;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520864
	if (cr0.eq) goto loc_82520864;
	// li r22,0
	r22.s64 = 0;
	// li r19,6
	r19.s64 = 6;
	// b 0x82520ac0
	goto loc_82520AC0;
loc_82520864:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r1,152
	r31.s64 = ctx.r1.s64 + 152;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825208b0
	if (cr0.eq) goto loc_825208B0;
	// li r22,1
	r22.s64 = 1;
	// li r19,5
	r19.s64 = 5;
	// b 0x82520ac0
	goto loc_82520AC0;
loc_825208B0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r1,160
	r31.s64 = ctx.r1.s64 + 160;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825208fc
	if (cr0.eq) goto loc_825208FC;
	// li r22,2
	r22.s64 = 2;
	// li r19,3
	r19.s64 = 3;
	// b 0x82520ac0
	goto loc_82520AC0;
loc_825208FC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r1,176
	r31.s64 = ctx.r1.s64 + 176;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520948
	if (cr0.eq) goto loc_82520948;
	// li r22,3
	r22.s64 = 3;
	// li r19,1
	r19.s64 = 1;
	// b 0x82520ac0
	goto loc_82520AC0;
loc_82520948:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r1,184
	r31.s64 = ctx.r1.s64 + 184;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520994
	if (cr0.eq) goto loc_82520994;
	// li r22,4
	r22.s64 = 4;
	// li r19,9
	r19.s64 = 9;
	// b 0x82520ac0
	goto loc_82520AC0;
loc_82520994:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r1,192
	r31.s64 = ctx.r1.s64 + 192;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825209e0
	if (cr0.eq) goto loc_825209E0;
	// li r22,5
	r22.s64 = 5;
	// li r19,8
	r19.s64 = 8;
	// b 0x82520ac0
	goto loc_82520AC0;
loc_825209E0:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r1,196
	r31.s64 = ctx.r1.s64 + 196;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520a2c
	if (cr0.eq) goto loc_82520A2C;
	// li r22,6
	r22.s64 = 6;
	// li r19,2
	r19.s64 = 2;
	// b 0x82520ac0
	goto loc_82520AC0;
loc_82520A2C:
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r1,180
	r31.s64 = ctx.r1.s64 + 180;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520a78
	if (cr0.eq) goto loc_82520A78;
	// li r22,7
	r22.s64 = 7;
	// li r19,7
	r19.s64 = 7;
	// b 0x82520ac0
	goto loc_82520AC0;
loc_82520A78:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r1,156
	r31.s64 = ctx.r1.s64 + 156;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82521094
	if (cr0.eq) goto loc_82521094;
	// li r22,8
	r22.s64 = 8;
	// li r19,4
	r19.s64 = 4;
loc_82520AC0:
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,516(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// b 0x82521050
	goto loc_82521050;
loc_82520AEC:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// li r20,0
	r20.s64 = 0;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// addi r31,r1,164
	r31.s64 = ctx.r1.s64 + 164;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82520b74
	if (!cr0.eq) goto loc_82520B74;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520b74
	if (cr0.eq) goto loc_82520B74;
	// li r20,1
	r20.s64 = 1;
loc_82520B74:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,476(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// b 0x82521010
	goto loc_82521010;
loc_82520BA0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,231
	ctx.r5.s64 = 231;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82520bd8
	if (cr0.eq) goto loc_82520BD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x82520bdc
	goto loc_82520BDC;
loc_82520BD8:
	// li r31,0
	r31.s64 = 0;
loc_82520BDC:
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82520410
	sub_82520410(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// lwz r31,120(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825df068
	sub_825DF068(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82520c54
	if (cr6.eq) goto loc_82520C54;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82520C54:
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82520fb4
	if (cr6.eq) goto loc_82520FB4;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// stw r17,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r17.u32);
	// addi r10,r22,78
	ctx.r10.s64 = r22.s64 + 78;
	// addi r9,r22,87
	ctx.r9.s64 = r22.s64 + 87;
	// addi r11,r11,-88
	r11.s64 = r11.s64 + -88;
	// rlwinm r25,r10,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r9,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r11.u32);
	// addi r24,r31,4
	r24.s64 = r31.s64 + 4;
	// addi r23,r17,292
	r23.s64 = r17.s64 + 292;
loc_82520C88:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,238
	ctx.r5.s64 = 238;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82520cb0
	if (cr0.eq) goto loc_82520CB0;
	// bl 0x8251fcf8
	sub_8251FCF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82520cb4
	goto loc_82520CB4;
loc_82520CB0:
	// li r31,0
	r31.s64 = 0;
loc_82520CB4:
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8251fe18
	sub_8251FE18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df570
	sub_825DF570(ctx, base);
	// lwz r31,200(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,360(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825df510
	sub_825DF510(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x825df510
	sub_825DF510(ctx, base);
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x825df510
	sub_825DF510(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x825df510
	sub_825DF510(ctx, base);
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825df510
	sub_825DF510(ctx, base);
	// stw r31,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r31.u32);
	// ld r11,384(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r11,420(r1)
	PPC_STORE_U64(ctx.r1.u32 + 420, r11.u64);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// lwz r11,424(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// ld r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r10.u32);
	// bl 0x8251ff18
	sub_8251FF18(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df5a8
	sub_825DF5A8(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df510
	sub_825DF510(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520e18
	if (cr0.eq) goto loc_82520E18;
	// lwz r11,400(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82520e08
	if (!cr6.eq) goto loc_82520E08;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82520E08:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x825050b0
	sub_825050B0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
loc_82520E18:
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x824ee0f8
	sub_824EE0F8(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,392(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82520e64
	if (cr6.eq) goto loc_82520E64;
	// cntlzw r11,r20
	r11.u64 = r20.u32 == 0 ? 32 : __builtin_clz(r20.u32);
	// lwz r6,316(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// bl 0x8251a580
	sub_8251A580(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_82520E64:
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// lwz r4,340(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// addi r28,r1,188
	r28.s64 = ctx.r1.s64 + 188;
	// bl 0x825deb60
	sub_825DEB60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82520eac
	if (cr0.eq) goto loc_82520EAC;
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
loc_82520EAC:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r31,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, r31.u32);
	// addi r5,r1,408
	ctx.r5.s64 = ctx.r1.s64 + 408;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// stw r11,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r11.u32);
	// bl 0x82314158
	sub_82314158(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82553328
	sub_82553328(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82520f08
	if (!cr6.eq) goto loc_82520F08;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x82437cd8
	sub_82437CD8(ctx, base);
loc_82520F08:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r9,304(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 304);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
	// lwz r10,308(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 308);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,304(r17)
	PPC_STORE_U32(r17.u32 + 304, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,308(r17)
	PPC_STORE_U32(r17.u32 + 308, r11.u32);
	// lwzx r11,r26,r17
	r11.u64 = PPC_LOAD_U32(r26.u32 + r17.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r9,r25,r17
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + r17.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r25,r17
	PPC_STORE_U32(r25.u32 + r17.u32, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stwx r11,r26,r17
	PPC_STORE_U32(r26.u32 + r17.u32, r11.u32);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,508(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82520f7c
	if (cr6.eq) goto loc_82520F7C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82520F7C:
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82520f8c
	if (cr6.eq) goto loc_82520F8C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82520F8C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82520fa4
	if (cr6.eq) goto loc_82520FA4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82520FA4:
	// lwz r27,136(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82520c88
	if (!cr6.eq) goto loc_82520C88;
	// lwz r30,104(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82520FB4:
	// cmpwi cr6,r20,2
	cr6.compare<int32_t>(r20.s32, 2, xer);
	// bge cr6,0x82520fd8
	if (!cr6.lt) goto loc_82520FD8;
	// rlwinm r11,r22,1,0,30
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// add r11,r11,r20
	r11.u64 = r11.u64 + r20.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82afaf88
	sub_82AFAF88(ctx, base);
loc_82520FD8:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,444(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252100c
	if (cr6.eq) goto loc_8252100C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8252100C:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82521010:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252101c
	if (cr6.eq) goto loc_8252101C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8252101C:
	// lwz r21,128(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x82520ba0
	if (!cr6.eq) goto loc_82520BA0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
loc_82521050:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252105c
	if (cr6.eq) goto loc_8252105C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8252105C:
	// lwz r30,104(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82520aec
	if (!cr6.eq) goto loc_82520AEC;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// b 0x825210bc
	goto loc_825210BC;
loc_82521094:
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825df180
	sub_825DF180(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,484(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
loc_825210BC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825210c8
	if (cr6.eq) goto loc_825210C8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_825210C8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82520818
	if (!cr6.eq) goto loc_82520818;
	// lwz r29,108(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r31,140(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_825210E0:
	// lwz r11,788(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// lwz r4,780(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e09860
	sub_82E09860(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82521100
	if (cr6.eq) goto loc_82521100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521100:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82521110
	if (cr6.eq) goto loc_82521110;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521110:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82521120
	if (cr6.eq) goto loc_82521120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521120:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82556378
	sub_82556378(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521150
	if (cr6.eq) goto loc_82521150;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521150:
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521160
	if (cr6.eq) goto loc_82521160;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521160:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825de520
	sub_825DE520(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521178
	if (cr6.eq) goto loc_82521178;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521178:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8252117C:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82521188"))) PPC_WEAK_FUNC(sub_82521188);
PPC_FUNC_IMPL(__imp__sub_82521188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,284(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521198"))) PPC_WEAK_FUNC(sub_82521198);
PPC_FUNC_IMPL(__imp__sub_82521198) {
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
	// bl 0x824f6f78
	sub_824F6F78(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x825211b8
	if (!cr0.eq) goto loc_825211B8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825211B8:
	// bl 0x824f6f88
	sub_824F6F88(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825211D0"))) PPC_WEAK_FUNC(sub_825211D0);
PPC_FUNC_IMPL(__imp__sub_825211D0) {
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
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,13372
	r11.s64 = r11.s64 + 13372;
	// addi r10,r10,13352
	ctx.r10.s64 = ctx.r10.s64 + 13352;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82521218"))) PPC_WEAK_FUNC(sub_82521218);
PPC_FUNC_IMPL(__imp__sub_82521218) {
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
	// addi r31,r3,40
	r31.s64 = ctx.r3.s64 + 40;
	// bne cr6,0x82521240
	if (!cr6.eq) goto loc_82521240;
	// li r31,0
	r31.s64 = 0;
loc_82521240:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-10392(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -10392);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c3a8
	sub_8250C3A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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

__attribute__((alias("__imp__sub_82521280"))) PPC_WEAK_FUNC(sub_82521280);
PPC_FUNC_IMPL(__imp__sub_82521280) {
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
	// bne cr6,0x825212c0
	if (!cr6.eq) goto loc_825212C0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825212f0
	if (cr6.eq) goto loc_825212F0;
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r11,8(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// b 0x825212f0
	goto loc_825212F0;
loc_825212C0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x825212f0
	if (cr6.eq) goto loc_825212F0;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-9064
	ctx.r4.s64 = r11.s64 + -9064;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825212e8
	if (cr0.eq) goto loc_825212E8;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x825212f0
	goto loc_825212F0;
loc_825212E8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_825212F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521308"))) PPC_WEAK_FUNC(sub_82521308);
PPC_FUNC_IMPL(__imp__sub_82521308) {
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
	// beq 0x82521360
	if (cr0.eq) goto loc_82521360;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13416
	ctx.r9.s64 = r11.s64 + 13416;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82521364
	goto loc_82521364;
loc_82521360:
	// li r11,0
	r11.s64 = 0;
loc_82521364:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825213b0
	if (!cr6.eq) goto loc_825213B0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82521390
	if (cr6.eq) goto loc_82521390;
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
loc_82521390:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-9484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9484);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_825213B0:
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

__attribute__((alias("__imp__sub_825213D0"))) PPC_WEAK_FUNC(sub_825213D0);
PPC_FUNC_IMPL(__imp__sub_825213D0) {
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
	// beq 0x82521428
	if (cr0.eq) goto loc_82521428;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13436
	ctx.r9.s64 = r11.s64 + 13436;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8252142c
	goto loc_8252142C;
loc_82521428:
	// li r11,0
	r11.s64 = 0;
loc_8252142C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82521478
	if (!cr6.eq) goto loc_82521478;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82521458
	if (cr6.eq) goto loc_82521458;
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
loc_82521458:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-9484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9484);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82521478:
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

__attribute__((alias("__imp__sub_82521498"))) PPC_WEAK_FUNC(sub_82521498);
PPC_FUNC_IMPL(__imp__sub_82521498) {
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
	// beq 0x825214f0
	if (cr0.eq) goto loc_825214F0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13456
	ctx.r9.s64 = r11.s64 + 13456;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x825214f4
	goto loc_825214F4;
loc_825214F0:
	// li r11,0
	r11.s64 = 0;
loc_825214F4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82521540
	if (!cr6.eq) goto loc_82521540;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82521520
	if (cr6.eq) goto loc_82521520;
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
loc_82521520:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-9484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9484);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82521540:
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

__attribute__((alias("__imp__sub_82521560"))) PPC_WEAK_FUNC(sub_82521560);
PPC_FUNC_IMPL(__imp__sub_82521560) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// clrlwi r28,r31,24
	r28.u64 = r31.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r29,r11,1
	r29.u64 = r11.u64 ^ 1;
	// beq cr6,0x825216f4
	if (cr6.eq) goto loc_825216F4;
	// mulli r11,r29,60
	r11.s64 = r29.s64 * 60;
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// bl 0x8251a4f0
	sub_8251A4F0(ctx, base);
	// addi r11,r29,5
	r11.s64 = r29.s64 + 5;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r29,r11,60
	r29.s64 = r11.s64 * 60;
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// bl 0x8251a270
	sub_8251A270(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// bl 0x8251a2c0
	sub_8251A2C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// bl 0x8251a2f0
	sub_8251A2F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// bl 0x8251a340
	sub_8251A340(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// bl 0x8251a370
	sub_8251A370(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// bl 0x8251a3c0
	sub_8251A3C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,324(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// bl 0x8251a3f0
	sub_8251A3F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,328(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// bl 0x8251a440
	sub_8251A440(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,332(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// bl 0x8251a470
	sub_8251A470(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,336(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// bl 0x8251a4c0
	sub_8251A4C0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,340(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// bl 0x8251a1b0
	sub_8251A1B0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,344(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// bl 0x8251a1e0
	sub_8251A1E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// bl 0x8251a210
	sub_8251A210(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,352(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// bl 0x8251a240
	sub_8251A240(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x825216f4
	if (!cr6.eq) goto loc_825216F4;
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// stw r11,356(r30)
	PPC_STORE_U32(r30.u32 + 356, r11.u32);
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// stw r11,360(r30)
	PPC_STORE_U32(r30.u32 + 360, r11.u32);
	// lwz r11,304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// stw r11,364(r30)
	PPC_STORE_U32(r30.u32 + 364, r11.u32);
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// stw r11,368(r30)
	PPC_STORE_U32(r30.u32 + 368, r11.u32);
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// stw r11,372(r30)
	PPC_STORE_U32(r30.u32 + 372, r11.u32);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// stw r11,376(r30)
	PPC_STORE_U32(r30.u32 + 376, r11.u32);
	// lwz r11,320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// stw r11,380(r30)
	PPC_STORE_U32(r30.u32 + 380, r11.u32);
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// stw r11,384(r30)
	PPC_STORE_U32(r30.u32 + 384, r11.u32);
	// lwz r11,328(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// stw r11,388(r30)
	PPC_STORE_U32(r30.u32 + 388, r11.u32);
	// lwz r11,332(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 332);
	// stw r11,392(r30)
	PPC_STORE_U32(r30.u32 + 392, r11.u32);
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// stw r11,396(r30)
	PPC_STORE_U32(r30.u32 + 396, r11.u32);
	// lwz r11,340(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// stw r11,400(r30)
	PPC_STORE_U32(r30.u32 + 400, r11.u32);
	// lwz r11,344(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// stw r11,404(r30)
	PPC_STORE_U32(r30.u32 + 404, r11.u32);
	// lwz r11,348(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// stw r11,408(r30)
	PPC_STORE_U32(r30.u32 + 408, r11.u32);
	// lwz r11,352(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// stw r11,412(r30)
	PPC_STORE_U32(r30.u32 + 412, r11.u32);
loc_825216F4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521704
	if (cr6.eq) goto loc_82521704;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521704:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82521710"))) PPC_WEAK_FUNC(sub_82521710);
PPC_FUNC_IMPL(__imp__sub_82521710) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82521560
	sub_82521560(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// stw r11,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r11.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r11.u32);
	// bl 0x82e860b8
	sub_82E860B8(ctx, base);
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

__attribute__((alias("__imp__sub_82521758"))) PPC_WEAK_FUNC(sub_82521758);
PPC_FUNC_IMPL(__imp__sub_82521758) {
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521870
	if (cr6.eq) goto loc_82521870;
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825217c0
	if (cr0.eq) goto loc_825217C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82521560
	sub_82521560(ctx, base);
	// b 0x82521870
	goto loc_82521870;
loc_825217C0:
	// bl 0x8251a568
	sub_8251A568(ctx, base);
	// stw r3,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a2a8
	sub_8251A2A8(ctx, base);
	// stw r3,360(r31)
	PPC_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a2d8
	sub_8251A2D8(ctx, base);
	// stw r3,364(r31)
	PPC_STORE_U32(r31.u32 + 364, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a328
	sub_8251A328(ctx, base);
	// stw r3,368(r31)
	PPC_STORE_U32(r31.u32 + 368, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a358
	sub_8251A358(ctx, base);
	// stw r3,372(r31)
	PPC_STORE_U32(r31.u32 + 372, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a3a8
	sub_8251A3A8(ctx, base);
	// stw r3,376(r31)
	PPC_STORE_U32(r31.u32 + 376, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a3d8
	sub_8251A3D8(ctx, base);
	// stw r3,380(r31)
	PPC_STORE_U32(r31.u32 + 380, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a428
	sub_8251A428(ctx, base);
	// stw r3,384(r31)
	PPC_STORE_U32(r31.u32 + 384, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a458
	sub_8251A458(ctx, base);
	// stw r3,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a4a8
	sub_8251A4A8(ctx, base);
	// stw r3,392(r31)
	PPC_STORE_U32(r31.u32 + 392, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a4d8
	sub_8251A4D8(ctx, base);
	// stw r3,396(r31)
	PPC_STORE_U32(r31.u32 + 396, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a1c8
	sub_8251A1C8(ctx, base);
	// stw r3,400(r31)
	PPC_STORE_U32(r31.u32 + 400, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a1f8
	sub_8251A1F8(ctx, base);
	// stw r3,404(r31)
	PPC_STORE_U32(r31.u32 + 404, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a228
	sub_8251A228(ctx, base);
	// stw r3,408(r31)
	PPC_STORE_U32(r31.u32 + 408, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a258
	sub_8251A258(ctx, base);
	// stw r3,412(r31)
	PPC_STORE_U32(r31.u32 + 412, ctx.r3.u32);
loc_82521870:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521880
	if (cr6.eq) goto loc_82521880;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521880:
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

__attribute__((alias("__imp__sub_82521898"))) PPC_WEAK_FUNC(sub_82521898);
PPC_FUNC_IMPL(__imp__sub_82521898) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,40
	ctx.r6.s64 = 40;
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825218cc
	if (cr0.eq) goto loc_825218CC;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_825218CC:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825218d8
	if (cr0.eq) goto loc_825218D8;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_825218D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825218E8"))) PPC_WEAK_FUNC(sub_825218E8);
PPC_FUNC_IMPL(__imp__sub_825218E8) {
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
	// beq cr6,0x82521914
	if (cr6.eq) goto loc_82521914;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82521280
	sub_82521280(ctx, base);
	// b 0x82521920
	goto loc_82521920;
loc_82521914:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r11,r11,-9064
	r11.s64 = r11.s64 + -9064;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_82521920:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82521930"))) PPC_WEAK_FUNC(sub_82521930);
PPC_FUNC_IMPL(__imp__sub_82521930) {
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
	// beq 0x82521984
	if (cr0.eq) goto loc_82521984;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24736
	ctx.r3.s64 = r11.s64 + 24736;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82521984
	if (cr0.eq) goto loc_82521984;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82521710
	sub_82521710(ctx, base);
loc_8252197C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82521a3c
	goto loc_82521A3C;
loc_82521984:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82521a2c
	if (cr6.eq) goto loc_82521A2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8912
	ctx.r3.s64 = r11.s64 + -8912;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825219bc
	if (cr0.eq) goto loc_825219BC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82521188
	sub_82521188(ctx, base);
	// b 0x8252197c
	goto loc_8252197C;
loc_825219BC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82521a2c
	if (cr6.eq) goto loc_82521A2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8624
	ctx.r3.s64 = r11.s64 + -8624;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825219f4
	if (cr0.eq) goto loc_825219F4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82521198
	sub_82521198(ctx, base);
	// b 0x8252197c
	goto loc_8252197C;
loc_825219F4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82521a2c
	if (cr6.eq) goto loc_82521A2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8672
	ctx.r3.s64 = r11.s64 + -8672;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82521a2c
	if (cr0.eq) goto loc_82521A2C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82521758
	sub_82521758(ctx, base);
	// b 0x8252197c
	goto loc_8252197C;
loc_82521A2C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82514ef8
	sub_82514EF8(ctx, base);
loc_82521A3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82521A48"))) PPC_WEAK_FUNC(sub_82521A48);
PPC_FUNC_IMPL(__imp__sub_82521A48) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,13484
	ctx.r4.s64 = r11.s64 + 13484;
	// li r5,460
	ctx.r5.s64 = 460;
	// li r3,192
	ctx.r3.s64 = 192;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82521a84
	if (cr0.eq) goto loc_82521A84;
	// bl 0x825211d0
	sub_825211D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82521a88
	goto loc_82521A88;
loc_82521A84:
	// li r31,0
	r31.s64 = 0;
loc_82521A88:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82521308
	sub_82521308(ctx, base);
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

__attribute__((alias("__imp__sub_82521AB8"))) PPC_WEAK_FUNC(sub_82521AB8);
PPC_FUNC_IMPL(__imp__sub_82521AB8) {
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
	// beq 0x82521afc
	if (cr0.eq) goto loc_82521AFC;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// bl 0x82b5abd8
	sub_82B5ABD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82521b00
	goto loc_82521B00;
loc_82521AFC:
	// li r31,0
	r31.s64 = 0;
loc_82521B00:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82521498
	sub_82521498(ctx, base);
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

__attribute__((alias("__imp__sub_82521B30"))) PPC_WEAK_FUNC(sub_82521B30);
PPC_FUNC_IMPL(__imp__sub_82521B30) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d3d98
	sub_822D3D98(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,13320
	r30.s64 = r11.s64 + 13320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d3f20
	sub_822D3F20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521c24
	if (cr6.eq) goto loc_82521C24;
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82521bfc
	if (!cr0.eq) goto loc_82521BFC;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82521bd4
	if (cr6.eq) goto loc_82521BD4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82521BB8:
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
	// bne 0x82521bb8
	if (!cr0.eq) goto loc_82521BB8;
loc_82521BD4:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r6,201
	ctx.r6.s64 = 201;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r11,13484
	ctx.r5.s64 = r11.s64 + 13484;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822e07c0
	sub_822E07C0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82521BFC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822d15d0
	sub_822D15D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// b 0x82521c30
	goto loc_82521C30;
loc_82521C24:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82521C30:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521c40
	if (cr6.eq) goto loc_82521C40;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521C40:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d3db0
	sub_822D3DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82521C68"))) PPC_WEAK_FUNC(sub_82521C68);
PPC_FUNC_IMPL(__imp__sub_82521C68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82521ca0
	if (!cr6.eq) goto loc_82521CA0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82521CA0:
	// bl 0x8250c610
	sub_8250C610(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82521cec
	if (cr6.eq) goto loc_82521CEC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82521cd8
	if (!cr6.eq) goto loc_82521CD8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82521CD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8250c5d0
	sub_8250C5D0(ctx, base);
	// stw r3,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r3.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82521CEC:
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82521d88
	if (cr6.eq) goto loc_82521D88;
	// addi r11,r31,208
	r11.s64 = r31.s64 + 208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823205d8
	sub_823205D8(ctx, base);
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
	// beq cr6,0x82521d44
	if (cr6.eq) goto loc_82521D44;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82521D28:
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
	// bne 0x82521d28
	if (!cr0.eq) goto loc_82521D28;
loc_82521D44:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,13484
	ctx.r4.s64 = r11.s64 + 13484;
	// li r5,265
	ctx.r5.s64 = 265;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521d70
	if (cr6.eq) goto loc_82521D70;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521D70:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521d80
	if (cr6.eq) goto loc_82521D80;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521D80:
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82e0eb08
	sub_82E0EB08(ctx, base);
loc_82521D88:
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

__attribute__((alias("__imp__sub_82521DA0"))) PPC_WEAK_FUNC(sub_82521DA0);
PPC_FUNC_IMPL(__imp__sub_82521DA0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
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
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82521dd8
	if (!cr6.eq) goto loc_82521DD8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82521DD8:
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8250c210
	sub_8250C210(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r30,r11,13484
	r30.s64 = r11.s64 + 13484;
	// lfs f31,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f31.f64 = double(temp.f32);
	// beq cr6,0x82521e84
	if (cr6.eq) goto loc_82521E84;
	// addi r4,r28,24
	ctx.r4.s64 = r28.s64 + 24;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82521ab8
	sub_82521AB8(ctx, base);
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
	// beq cr6,0x82521e48
	if (cr6.eq) goto loc_82521E48;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82521E2C:
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
	// bne 0x82521e2c
	if (!cr0.eq) goto loc_82521E2C;
loc_82521E48:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,485
	ctx.r5.s64 = 485;
	// addi r3,r29,40
	ctx.r3.s64 = r29.s64 + 40;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521e74
	if (cr6.eq) goto loc_82521E74;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521E74:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521e84
	if (cr6.eq) goto loc_82521E84;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521E84:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// bne cr6,0x82521ea4
	if (!cr6.eq) goto loc_82521EA4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82521EA4:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8250c210
	sub_8250C210(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82521f40
	if (cr6.eq) goto loc_82521F40;
	// addi r4,r28,24
	ctx.r4.s64 = r28.s64 + 24;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82521ab8
	sub_82521AB8(ctx, base);
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
	// beq cr6,0x82521f04
	if (cr6.eq) goto loc_82521F04;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82521EE8:
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
	// bne 0x82521ee8
	if (!cr0.eq) goto loc_82521EE8;
loc_82521F04:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,489
	ctx.r5.s64 = 489;
	// addi r3,r29,40
	ctx.r3.s64 = r29.s64 + 40;
	// bl 0x82e61a78
	sub_82E61A78(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521f30
	if (cr6.eq) goto loc_82521F30;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521F30:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82521f40
	if (cr6.eq) goto loc_82521F40;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82521F40:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82521F50"))) PPC_WEAK_FUNC(sub_82521F50);
PPC_FUNC_IMPL(__imp__sub_82521F50) {
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
	// beq 0x82521fa4
	if (cr0.eq) goto loc_82521FA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8568
	ctx.r3.s64 = r11.s64 + -8568;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82521fa4
	if (cr0.eq) goto loc_82521FA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,-40
	ctx.r3.s64 = r29.s64 + -40;
	// bl 0x82521da0
	sub_82521DA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82521fb4
	goto loc_82521FB4;
loc_82521FA4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82514ef8
	sub_82514EF8(ctx, base);
loc_82521FB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82521FC0"))) PPC_WEAK_FUNC(sub_82521FC0);
PPC_FUNC_IMPL(__imp__sub_82521FC0) {
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
	// addi r31,r11,31180
	r31.s64 = r11.s64 + 31180;
	// lwz r11,31188(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31188);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82522008
	if (!cr0.eq) goto loc_82522008;
	// lis r9,-32160
	ctx.r9.s64 = -2107637760;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r9,r9,6712
	ctx.r9.s64 = ctx.r9.s64 + 6712;
	// addi r8,r8,6376
	ctx.r8.s64 = ctx.r8.s64 + 6376;
	// stw r11,31188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31188, r11.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_82522008:
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
	// beq 0x82522034
	if (cr0.eq) goto loc_82522034;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x82522038
	goto loc_82522038;
loc_82522034:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_82522038:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82522040"))) PPC_WEAK_FUNC(sub_82522040);
PPC_FUNC_IMPL(__imp__sub_82522040) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,276(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 276);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82522074
	goto loc_82522074;
loc_82522060:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8230cfb0
	sub_8230CFB0(ctx, base);
	// lwz r11,276(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 276);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82522074:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82522060
	if (!cr6.eq) goto loc_82522060;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82522088"))) PPC_WEAK_FUNC(sub_82522088);
PPC_FUNC_IMPL(__imp__sub_82522088) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,196(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825220cc
	if (cr6.eq) goto loc_825220CC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r31,208
	ctx.r4.s64 = r31.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d24c8
	sub_822D24C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d1f30
	sub_822D1F30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d1f10
	sub_822D1F10(ctx, base);
	// stfs f1,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 288, temp.u32);
loc_825220CC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8252214c
	if (!cr6.gt) goto loc_8252214C;
	// lis r10,-32212
	ctx.r10.s64 = -2111045632;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82521fc0
	sub_82521FC0(ctx, base);
	// lwz r30,276(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// addi r31,r31,272
	r31.s64 = r31.s64 + 272;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x829a2270
	sub_829A2270(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ff658
	sub_827FF658(ctx, base);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
loc_8252214C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82522158"))) PPC_WEAK_FUNC(sub_82522158);
PPC_FUNC_IMPL(__imp__sub_82522158) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,13568
	r11.s64 = r11.s64 + 13568;
	// addi r10,r10,13548
	ctx.r10.s64 = ctx.r10.s64 + 13548;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// bl 0x827ff570
	sub_827FF570(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,276(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r30,r31,240
	r30.s64 = r31.s64 + 240;
	// stw r11,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r11.u32);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82b971e8
	sub_82B971E8(ctx, base);
	// lwz r3,200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825221cc
	if (cr6.eq) goto loc_825221CC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_825221CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82514af8
	sub_82514AF8(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82dfa218
	sub_82DFA218(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825221F8"))) PPC_WEAK_FUNC(sub_825221F8);
PPC_FUNC_IMPL(__imp__sub_825221F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-40
	ctx.r3.s64 = ctx.r3.s64 + -40;
	// b 0x82522410
	sub_82522410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82522200"))) PPC_WEAK_FUNC(sub_82522200);
PPC_FUNC_IMPL(__imp__sub_82522200) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82dfa1a0
	sub_82DFA1A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82514a50
	sub_82514A50(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r10,13548
	ctx.r10.s64 = ctx.r10.s64 + 13548;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r11,r11,13568
	r11.s64 = r11.s64 + 13568;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r29,r9,29232
	r29.s64 = ctx.r9.s64 + 29232;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r10,208
	ctx.r10.s64 = 208;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// li r9,224
	ctx.r9.s64 = 224;
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// addi r3,r31,272
	ctx.r3.s64 = r31.s64 + 272;
	// addi r11,r31,240
	r11.s64 = r31.s64 + 240;
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// bl 0x82521898
	sub_82521898(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,276(r31)
	PPC_STORE_U32(r31.u32 + 276, ctx.r3.u32);
	// li r9,432
	ctx.r9.s64 = 432;
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
	// stb r30,292(r31)
	PPC_STORE_U8(r31.u32 + 292, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r30,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f0,13336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 13336);
	f0.f64 = double(temp.f32);
	// lfs f13,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,284(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 284, temp.u32);
	// stfs f13,288(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 288, temp.u32);
	// lvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r29,r31,300
	r29.s64 = r31.s64 + 300;
	// li r28,2
	r28.s64 = 2;
loc_825222EC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825223ac
	if (cr6.eq) goto loc_825223AC;
	// bl 0x8251a568
	sub_8251A568(ctx, base);
	// stw r3,-4(r29)
	PPC_STORE_U32(r29.u32 + -4, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a2a8
	sub_8251A2A8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a2d8
	sub_8251A2D8(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a328
	sub_8251A328(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a358
	sub_8251A358(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a3a8
	sub_8251A3A8(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a3d8
	sub_8251A3D8(ctx, base);
	// stw r3,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a428
	sub_8251A428(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a458
	sub_8251A458(ctx, base);
	// stw r3,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a4a8
	sub_8251A4A8(ctx, base);
	// stw r3,32(r29)
	PPC_STORE_U32(r29.u32 + 32, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a4d8
	sub_8251A4D8(ctx, base);
	// stw r3,36(r29)
	PPC_STORE_U32(r29.u32 + 36, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a1c8
	sub_8251A1C8(ctx, base);
	// stw r3,40(r29)
	PPC_STORE_U32(r29.u32 + 40, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a1f8
	sub_8251A1F8(ctx, base);
	// stw r3,44(r29)
	PPC_STORE_U32(r29.u32 + 44, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a228
	sub_8251A228(ctx, base);
	// stw r3,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8251a258
	sub_8251A258(ctx, base);
	// stw r3,52(r29)
	PPC_STORE_U32(r29.u32 + 52, ctx.r3.u32);
	// b 0x825223e8
	goto loc_825223E8;
loc_825223AC:
	// stw r30,-4(r29)
	PPC_STORE_U32(r29.u32 + -4, r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r30,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r30.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r30.u32);
	// stw r30,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r30.u32);
	// stw r30,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r30.u32);
	// stw r30,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r30.u32);
	// stw r30,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r30.u32);
	// stw r30,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r30.u32);
	// stw r30,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r30.u32);
	// stw r30,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r30.u32);
	// stw r30,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r30.u32);
	// stw r30,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r30.u32);
loc_825223E8:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
	// bne 0x825222ec
	if (!cr0.eq) goto loc_825222EC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82522404
	if (cr6.eq) goto loc_82522404;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82522404:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82522410"))) PPC_WEAK_FUNC(sub_82522410);
PPC_FUNC_IMPL(__imp__sub_82522410) {
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
	// bl 0x82522158
	sub_82522158(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82522440
	if (cr0.eq) goto loc_82522440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82522440:
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

__attribute__((alias("__imp__sub_82522460"))) PPC_WEAK_FUNC(sub_82522460);
PPC_FUNC_IMPL(__imp__sub_82522460) {
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
	// beq 0x825224dc
	if (cr0.eq) goto loc_825224DC;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,13476
	ctx.r10.s64 = ctx.r10.s64 + 13476;
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
	// b 0x825224e0
	goto loc_825224E0;
loc_825224DC:
	// li r31,0
	r31.s64 = 0;
loc_825224E0:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825213d0
	sub_825213D0(ctx, base);
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
	// beq cr6,0x8252251c
	if (cr6.eq) goto loc_8252251C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8252251C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82522538"))) PPC_WEAK_FUNC(sub_82522538);
PPC_FUNC_IMPL(__imp__sub_82522538) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82521b30
	sub_82521B30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r31,196
	ctx.r10.s64 = r31.s64 + 196;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r29,r11,1
	r29.u64 = r11.u64 ^ 1;
	// beq cr6,0x8252259c
	if (cr6.eq) goto loc_8252259C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8252259C:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825225cc
	if (cr0.eq) goto loc_825225CC;
	// lis r11,-32174
	r11.s64 = -2108555264;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r11,8328
	r11.s64 = r11.s64 + 8328;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82522460
	sub_82522460(ctx, base);
loc_825225CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82521a48
	sub_82521A48(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x82522628
	if (cr6.eq) goto loc_82522628;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x82522614
	if (cr6.eq) goto loc_82522614;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
loc_825225F8:
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
	// bne 0x825225f8
	if (!cr0.eq) goto loc_825225F8;
loc_82522614:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82510d20
	sub_82510D20(ctx, base);
loc_82522628:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82522638
	if (cr6.eq) goto loc_82522638;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82522638:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5784);
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
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5804);
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
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// bne cr6,0x825226c0
	if (!cr6.eq) goto loc_825226C0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_825226C0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_825226D0"))) PPC_WEAK_FUNC(sub_825226D0);
PPC_FUNC_IMPL(__imp__sub_825226D0) {
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
	// beq 0x82522728
	if (cr0.eq) goto loc_82522728;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13636
	ctx.r9.s64 = r11.s64 + 13636;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8252272c
	goto loc_8252272C;
loc_82522728:
	// li r11,0
	r11.s64 = 0;
loc_8252272C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82522778
	if (!cr6.eq) goto loc_82522778;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82522758
	if (cr6.eq) goto loc_82522758;
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
loc_82522758:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-8488(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8488);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82522778:
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

__attribute__((alias("__imp__sub_82522798"))) PPC_WEAK_FUNC(sub_82522798);
PPC_FUNC_IMPL(__imp__sub_82522798) {
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
	// beq 0x825227f0
	if (cr0.eq) goto loc_825227F0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13656
	ctx.r9.s64 = r11.s64 + 13656;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x825227f4
	goto loc_825227F4;
loc_825227F0:
	// li r11,0
	r11.s64 = 0;
loc_825227F4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82522840
	if (!cr6.eq) goto loc_82522840;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82522820
	if (cr6.eq) goto loc_82522820;
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
loc_82522820:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-8488(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8488);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82522840:
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

__attribute__((alias("__imp__sub_82522860"))) PPC_WEAK_FUNC(sub_82522860);
PPC_FUNC_IMPL(__imp__sub_82522860) {
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
	// beq 0x825228b8
	if (cr0.eq) goto loc_825228B8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13676
	ctx.r9.s64 = r11.s64 + 13676;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x825228bc
	goto loc_825228BC;
loc_825228B8:
	// li r11,0
	r11.s64 = 0;
loc_825228BC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82522908
	if (!cr6.eq) goto loc_82522908;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825228e8
	if (cr6.eq) goto loc_825228E8;
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
loc_825228E8:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-8488(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8488);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82522908:
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

__attribute__((alias("__imp__sub_82522928"))) PPC_WEAK_FUNC(sub_82522928);
PPC_FUNC_IMPL(__imp__sub_82522928) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
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
	// bne cr6,0x82522958
	if (!cr6.eq) goto loc_82522958;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82522958:
	// bl 0x8250c0b8
	sub_8250C0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e5e6c8
	sub_82E5E6C8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,13692
	ctx.r4.s64 = r11.s64 + 13692;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e372a8
	sub_82E372A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82522acc
	if (cr6.eq) goto loc_82522ACC;
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82522acc
	if (cr0.eq) goto loc_82522ACC;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825229d0
	if (!cr6.eq) goto loc_825229D0;
	// li r29,0
	r29.s64 = 0;
	// b 0x825229dc
	goto loc_825229DC;
loc_825229D0:
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r29,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r29.s64 = r11.s32 >> 3;
loc_825229DC:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lwz r28,-8492(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + -8492);
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// bge cr6,0x825229f0
	if (!cr6.lt) goto loc_825229F0;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_825229F0:
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwz r11,31196(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31196);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,31196(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31196, ctx.r10.u32);
	// beq cr6,0x82522acc
	if (cr6.eq) goto loc_82522ACC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82522acc
	if (!cr6.gt) goto loc_82522ACC;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r27,r10,-22488
	r27.s64 = ctx.r10.s64 + -22488;
	// addi r26,r9,-15648
	r26.s64 = ctx.r9.s64 + -15648;
loc_82522A20:
	// divw r7,r11,r29
	ctx.r7.s32 = r11.s32 / r29.s32;
	// lwz r9,16(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 1);
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r29.s32);
	// subf r30,r7,r11
	r30.s64 = r11.s64 - ctx.r7.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r10,r29,r10
	ctx.r10.u64 = r29.u64 & ~ctx.r10.u64;
	// twllei r29,0
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// twlgei r10,-1
	// lwzx r31,r9,r11
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82522ac0
	if (!cr6.eq) goto loc_82522AC0;
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
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x82522a7c
	if (!cr6.eq) goto loc_82522A7C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82522A7C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8250c568
	sub_8250C568(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-204
	ctx.r3.s64 = r11.s64 + -204;
	// bne cr6,0x82522a98
	if (!cr6.eq) goto loc_82522A98;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82522A98:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x822c9460
	sub_822C9460(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82522AC0:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bgt cr6,0x82522a20
	if (cr6.gt) goto loc_82522A20;
loc_82522ACC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82522adc
	if (cr6.eq) goto loc_82522ADC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82522ADC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e5e6e0
	sub_82E5E6E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82522AF0"))) PPC_WEAK_FUNC(sub_82522AF0);
PPC_FUNC_IMPL(__imp__sub_82522AF0) {
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
	// beq 0x82522b38
	if (cr0.eq) goto loc_82522B38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,13612
	r11.s64 = r11.s64 + 13612;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82522b3c
	goto loc_82522B3C;
loc_82522B38:
	// li r31,0
	r31.s64 = 0;
loc_82522B3C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825226d0
	sub_825226D0(ctx, base);
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

__attribute__((alias("__imp__sub_82522B70"))) PPC_WEAK_FUNC(sub_82522B70);
PPC_FUNC_IMPL(__imp__sub_82522B70) {
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
	// beq 0x82522bb8
	if (cr0.eq) goto loc_82522BB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,13620
	r11.s64 = r11.s64 + 13620;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82522bbc
	goto loc_82522BBC;
loc_82522BB8:
	// li r31,0
	r31.s64 = 0;
loc_82522BBC:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82522798
	sub_82522798(ctx, base);
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

__attribute__((alias("__imp__sub_82522BF0"))) PPC_WEAK_FUNC(sub_82522BF0);
PPC_FUNC_IMPL(__imp__sub_82522BF0) {
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
	// beq 0x82522c38
	if (cr0.eq) goto loc_82522C38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e626b8
	sub_82E626B8(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r11,r11,13628
	r11.s64 = r11.s64 + 13628;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82522c3c
	goto loc_82522C3C;
loc_82522C38:
	// li r31,0
	r31.s64 = 0;
loc_82522C3C:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82522860
	sub_82522860(ctx, base);
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

__attribute__((alias("__imp__sub_82522C70"))) PPC_WEAK_FUNC(sub_82522C70);
PPC_FUNC_IMPL(__imp__sub_82522C70) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// bne cr6,0x82522c94
	if (!cr6.eq) goto loc_82522C94;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82522C94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250c358
	sub_8250C358(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5808(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5808);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5796);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5784);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5804(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -5804);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,13740
	ctx.r4.s64 = r11.s64 + 13740;
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
	// bl 0x8250e0c8
	sub_8250E0C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r31,r30,208
	r31.s64 = r30.s64 + 208;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,208(r30)
	PPC_STORE_U32(r30.u32 + 208, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82522d8c
	if (cr6.eq) goto loc_82522D8C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82522D8C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82522e78
	if (cr6.eq) goto loc_82522E78;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r29,r11,13724
	r29.s64 = r11.s64 + 13724;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r5,r11,31194
	ctx.r5.s64 = r11.s64 + 31194;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a83f0
	sub_825A83F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a8278
	sub_825A8278(ctx, base);
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,13704
	ctx.r4.s64 = r11.s64 + 13704;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r11,-8492
	ctx.r5.s64 = r11.s64 + -8492;
	// li r7,1000
	ctx.r7.s64 = 1000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a81e0
	sub_825A81E0(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
loc_82522E78:
	// li r11,0
	r11.s64 = 0;
	// stb r11,232(r30)
	PPC_STORE_U8(r30.u32 + 232, r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82522E88"))) PPC_WEAK_FUNC(sub_82522E88);
PPC_FUNC_IMPL(__imp__sub_82522E88) {
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
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829590d8
	sub_829590D8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82522f44
	if (cr6.eq) goto loc_82522F44;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82522af0
	sub_82522AF0(ctx, base);
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
	// beq cr6,0x82522f00
	if (cr6.eq) goto loc_82522F00;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82522EE4:
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
	// bne 0x82522ee4
	if (!cr0.eq) goto loc_82522EE4;
loc_82522F00:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,13756
	ctx.r4.s64 = ctx.r10.s64 + 13756;
	// li r5,131
	ctx.r5.s64 = 131;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
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
	// beq cr6,0x82522f34
	if (cr6.eq) goto loc_82522F34;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82522F34:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82522f44
	if (cr6.eq) goto loc_82522F44;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82522F44:
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

__attribute__((alias("__imp__sub_82522F60"))) PPC_WEAK_FUNC(sub_82522F60);
PPC_FUNC_IMPL(__imp__sub_82522F60) {
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
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829590d8
	sub_829590D8(ctx, base);
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x8252301c
	if (cr6.eq) goto loc_8252301C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82522b70
	sub_82522B70(ctx, base);
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
	// beq cr6,0x82522fd8
	if (cr6.eq) goto loc_82522FD8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82522FBC:
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
	// bne 0x82522fbc
	if (!cr0.eq) goto loc_82522FBC;
loc_82522FD8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,13756
	ctx.r4.s64 = ctx.r10.s64 + 13756;
	// li r5,149
	ctx.r5.s64 = 149;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
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
	// beq cr6,0x8252300c
	if (cr6.eq) goto loc_8252300C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8252300C:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252301c
	if (cr6.eq) goto loc_8252301C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8252301C:
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

__attribute__((alias("__imp__sub_82523038"))) PPC_WEAK_FUNC(sub_82523038);
PPC_FUNC_IMPL(__imp__sub_82523038) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r29,196(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 196);
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq cr6,0x825230f4
	if (cr6.eq) goto loc_825230F4;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r28,r27,40
	r28.s64 = r27.s64 + 40;
	// addi r30,r11,13756
	r30.s64 = r11.s64 + 13756;
loc_82523068:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82522bf0
	sub_82522BF0(ctx, base);
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
	// beq cr6,0x825230a8
	if (cr6.eq) goto loc_825230A8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8252308C:
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
	// bne 0x8252308c
	if (!cr0.eq) goto loc_8252308C;
loc_825230A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r5,183
	ctx.r5.s64 = 183;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e5fcd0
	sub_82E5FCD0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825230d0
	if (cr6.eq) goto loc_825230D0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_825230D0:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825230e0
	if (cr6.eq) goto loc_825230E0;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_825230E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8245d028
	sub_8245D028(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82523068
	if (!cr6.eq) goto loc_82523068;
loc_825230F4:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lbz r11,31194(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 31194);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8252310c
	if (cr0.eq) goto loc_8252310C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82522928
	sub_82522928(ctx, base);
loc_8252310C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82523118"))) PPC_WEAK_FUNC(sub_82523118);
PPC_FUNC_IMPL(__imp__sub_82523118) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r4,r3,192
	ctx.r4.s64 = ctx.r3.s64 + 192;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82314158
	sub_82314158(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523158"))) PPC_WEAK_FUNC(sub_82523158);
PPC_FUNC_IMPL(__imp__sub_82523158) {
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
	// beq 0x825231ac
	if (cr0.eq) goto loc_825231AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8036
	ctx.r3.s64 = r11.s64 + -8036;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825231ac
	if (cr0.eq) goto loc_825231AC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82523118
	sub_82523118(ctx, base);
loc_825231A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8252329c
	goto loc_8252329C;
loc_825231AC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8252328c
	if (cr6.eq) goto loc_8252328C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8088
	ctx.r3.s64 = r11.s64 + -8088;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825231e4
	if (cr0.eq) goto loc_825231E4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82522e88
	sub_82522E88(ctx, base);
	// b 0x825231a4
	goto loc_825231A4;
loc_825231E4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8252328c
	if (cr6.eq) goto loc_8252328C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8144
	ctx.r3.s64 = r11.s64 + -8144;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8252321c
	if (cr0.eq) goto loc_8252321C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x82522f60
	sub_82522F60(ctx, base);
	// b 0x825231a4
	goto loc_825231A4;
loc_8252321C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8252328c
	if (cr6.eq) goto loc_8252328C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8188
	ctx.r3.s64 = r11.s64 + -8188;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82523254
	if (cr0.eq) goto loc_82523254;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// b 0x825231a4
	goto loc_825231A4;
loc_82523254:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8252328c
	if (cr6.eq) goto loc_8252328C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b2438
	sub_831B2438(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8232
	ctx.r3.s64 = r11.s64 + -8232;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8252328c
	if (cr0.eq) goto loc_8252328C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-40
	ctx.r3.s64 = r30.s64 + -40;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// b 0x825231a4
	goto loc_825231A4;
loc_8252328C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82514ef8
	sub_82514EF8(ctx, base);
loc_8252329C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_825232A8"))) PPC_WEAK_FUNC(sub_825232A8);
PPC_FUNC_IMPL(__imp__sub_825232A8) {
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
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523300"))) PPC_WEAK_FUNC(sub_82523300);
PPC_FUNC_IMPL(__imp__sub_82523300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,-7996(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -7996, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523310"))) PPC_WEAK_FUNC(sub_82523310);
PPC_FUNC_IMPL(__imp__sub_82523310) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-17868
	ctx.r4.s64 = r11.s64 + -17868;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df4f8
	sub_825DF4F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523378"))) PPC_WEAK_FUNC(sub_82523378);
PPC_FUNC_IMPL(__imp__sub_82523378) {
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
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x825df458
	sub_825DF458(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,13832
	ctx.r4.s64 = r11.s64 + 13832;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df528
	sub_825DF528(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,13824
	ctx.r4.s64 = r11.s64 + 13824;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4d8
	sub_825DF4D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df4d0
	sub_825DF4D0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825233f8
	if (cr6.lt) goto loc_825233F8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_825233F8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82523434
	if (cr0.eq) goto loc_82523434;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
loc_82523434:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825df490
	sub_825DF490(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82523450"))) PPC_WEAK_FUNC(sub_82523450);
PPC_FUNC_IMPL(__imp__sub_82523450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lbz r3,-7991(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + -7991);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523460"))) PPC_WEAK_FUNC(sub_82523460);
PPC_FUNC_IMPL(__imp__sub_82523460) {
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
	// bne cr6,0x825234a0
	if (!cr6.eq) goto loc_825234A0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825234d0
	if (cr6.eq) goto loc_825234D0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x825234d0
	goto loc_825234D0;
loc_825234A0:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x825234d0
	if (cr6.eq) goto loc_825234D0;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-7320
	ctx.r4.s64 = r11.s64 + -7320;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825234c8
	if (cr0.eq) goto loc_825234C8;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x825234d0
	goto loc_825234D0;
loc_825234C8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_825234D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825234E8"))) PPC_WEAK_FUNC(sub_825234E8);
PPC_FUNC_IMPL(__imp__sub_825234E8) {
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
	// bne cr6,0x82523530
	if (!cr6.eq) goto loc_82523530;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82523560
	if (cr6.eq) goto loc_82523560;
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
	// b 0x82523560
	goto loc_82523560;
loc_82523530:
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// beq cr6,0x82523560
	if (cr6.eq) goto loc_82523560;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-7144
	ctx.r4.s64 = r11.s64 + -7144;
	// bl 0x831b0ab8
	sub_831B0AB8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82523558
	if (cr0.eq) goto loc_82523558;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82523560
	goto loc_82523560;
loc_82523558:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82523560:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523578"))) PPC_WEAK_FUNC(sub_82523578);
PPC_FUNC_IMPL(__imp__sub_82523578) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// addi r11,r11,14004
	r11.s64 = r11.s64 + 14004;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825232a8
	sub_825232A8(ctx, base);
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

__attribute__((alias("__imp__sub_825235E0"))) PPC_WEAK_FUNC(sub_825235E0);
PPC_FUNC_IMPL(__imp__sub_825235E0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// addi r11,r11,14012
	r11.s64 = r11.s64 + 14012;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825232a8
	sub_825232A8(ctx, base);
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

__attribute__((alias("__imp__sub_82523648"))) PPC_WEAK_FUNC(sub_82523648);
PPC_FUNC_IMPL(__imp__sub_82523648) {
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
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e62610
	sub_82E62610(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8252368c
	if (cr0.eq) goto loc_8252368C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_8252368C:
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

__attribute__((alias("__imp__sub_825236A8"))) PPC_WEAK_FUNC(sub_825236A8);
PPC_FUNC_IMPL(__imp__sub_825236A8) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,14020
	r11.s64 = r11.s64 + 14020;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523700"))) PPC_WEAK_FUNC(sub_82523700);
PPC_FUNC_IMPL(__imp__sub_82523700) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,736(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x824fe0c8
	sub_824FE0C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523710"))) PPC_WEAK_FUNC(sub_82523710);
PPC_FUNC_IMPL(__imp__sub_82523710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523718"))) PPC_WEAK_FUNC(sub_82523718);
PPC_FUNC_IMPL(__imp__sub_82523718) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lbz r11,31237(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 31237);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82523888
	if (cr0.eq) goto loc_82523888;
	// lwz r25,720(r22)
	r25.u64 = PPC_LOAD_U32(r22.u32 + 720);
	// lwz r3,36(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82523888
	if (cr6.eq) goto loc_82523888;
	// bl 0x82e06c40
	sub_82E06C40(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82523888
	if (cr0.eq) goto loc_82523888;
	// lwz r10,36(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 36);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8252376c
	if (!cr6.eq) goto loc_8252376C;
	// li r29,0
	r29.s64 = 0;
	// b 0x82523778
	goto loc_82523778;
loc_8252376C:
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r29,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r29.s64 = r11.s32 >> 3;
loc_82523778:
	// li r27,50
	r27.s64 = 50;
	// cmpwi cr6,r29,50
	cr6.compare<int32_t>(r29.s32, 50, xer);
	// bge cr6,0x82523788
	if (!cr6.lt) goto loc_82523788;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_82523788:
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwz r11,31248(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31248);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,31248(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31248, ctx.r10.u32);
	// beq cr6,0x82523888
	if (cr6.eq) goto loc_82523888;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82523888
	if (!cr6.gt) goto loc_82523888;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r24,-31949
	r24.s64 = -2093809664;
	// lis r23,-31949
	r23.s64 = -2093809664;
	// addi r26,r10,-15648
	r26.s64 = ctx.r10.s64 + -15648;
loc_825237B8:
	// divw r9,r11,r29
	ctx.r9.s32 = r11.s32 / r29.s32;
	// lwz r8,36(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 36);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 1);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// lwz r31,16(r8)
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// subf r28,r9,r11
	r28.s64 = r11.s64 - ctx.r9.s64;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r30,r28,3,0,28
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r11,r29,r11
	r11.u64 = r29.u64 & ~r11.u64;
	// twllei r29,0
	// twlgei r11,-1
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8252387c
	if (!cr6.eq) goto loc_8252387C;
	// bl 0x82e6e3e0
	sub_82E6E3E0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82523810
	if (!cr6.eq) goto loc_82523810;
	// lwz r11,-22488(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + -22488);
	// b 0x82523814
	goto loc_82523814;
loc_82523810:
	// lwz r11,-22496(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + -22496);
loc_82523814:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r31,r31,r30
	r31.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x8252383c
	if (!cr6.eq) goto loc_8252383C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8252383C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8250c568
	sub_8250C568(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-204
	ctx.r3.s64 = r11.s64 + -204;
	// bne cr6,0x82523858
	if (!cr6.eq) goto loc_82523858;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82523858:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x822c9460
	sub_822C9460(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_8252387C:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bgt cr6,0x825237b8
	if (cr6.gt) goto loc_825237B8;
loc_82523888:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82523890"))) PPC_WEAK_FUNC(sub_82523890);
PPC_FUNC_IMPL(__imp__sub_82523890) {
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
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x824f97f8
	sub_824F97F8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// lfs f0,31240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 31240);
	f0.f64 = double(temp.f32);
	// stfs f0,712(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 712, temp.u32);
	// lfs f0,-7996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7996);
	f0.f64 = double(temp.f32);
	// stfs f0,716(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 716, temp.u32);
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

__attribute__((alias("__imp__sub_825238E0"))) PPC_WEAK_FUNC(sub_825238E0);
PPC_FUNC_IMPL(__imp__sub_825238E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,728(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r5,28(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// b 0x824ffbe0
	sub_824FFBE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825238F8"))) PPC_WEAK_FUNC(sub_825238F8);
PPC_FUNC_IMPL(__imp__sub_825238F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523900"))) PPC_WEAK_FUNC(sub_82523900);
PPC_FUNC_IMPL(__imp__sub_82523900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v63{};
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r9,224
	ctx.r9.s64 = 224;
	// lbz r11,31236(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 31236);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lvx128 v63,r3,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523928"))) PPC_WEAK_FUNC(sub_82523928);
PPC_FUNC_IMPL(__imp__sub_82523928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8252396c
	if (cr6.eq) goto loc_8252396C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82523958
	if (cr6.eq) goto loc_82523958;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,736(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// b 0x824f9dd0
	sub_824F9DD0(ctx, base);
	return;
loc_82523958:
	// lwz r3,728(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// b 0x824ff548
	sub_824FF548(ctx, base);
	return;
loc_8252396C:
	// lwz r3,736(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// b 0x824f9dc0
	sub_824F9DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523980"))) PPC_WEAK_FUNC(sub_82523980);
PPC_FUNC_IMPL(__imp__sub_82523980) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523988"))) PPC_WEAK_FUNC(sub_82523988);
PPC_FUNC_IMPL(__imp__sub_82523988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825239e4
	if (cr6.eq) goto loc_825239E4;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825239d4
	if (cr6.eq) goto loc_825239D4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825239c0
	if (cr6.eq) goto loc_825239C0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,736(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f1,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// b 0x824f9de0
	sub_824F9DE0(ctx, base);
	return;
loc_825239C0:
	// lwz r3,728(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lfs f1,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// b 0x824ff558
	sub_824FF558(ctx, base);
	return;
loc_825239D4:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,-7996(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -7996, temp.u32);
	// blr 
	return;
loc_825239E4:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,31240(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 31240, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825239F8"))) PPC_WEAK_FUNC(sub_825239F8);
PPC_FUNC_IMPL(__imp__sub_825239F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82523a20
	if (cr6.eq) goto loc_82523A20;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,744(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r4,28(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// b 0x824f7c28
	sub_824F7C28(ctx, base);
	return;
loc_82523A20:
	// lbz r11,28(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 28);
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stb r11,-7992(r10)
	PPC_STORE_U8(ctx.r10.u32 + -7992, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523A30"))) PPC_WEAK_FUNC(sub_82523A30);
PPC_FUNC_IMPL(__imp__sub_82523A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,744(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r6,r11,96
	ctx.r6.s64 = r11.s64 + 96;
	// addi r5,r11,32
	ctx.r5.s64 = r11.s64 + 32;
	// b 0x824f8948
	sub_824F8948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523A50"))) PPC_WEAK_FUNC(sub_82523A50);
PPC_FUNC_IMPL(__imp__sub_82523A50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523A58"))) PPC_WEAK_FUNC(sub_82523A58);
PPC_FUNC_IMPL(__imp__sub_82523A58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,744(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// b 0x822c0000
	sub_822C0000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82523A6C"))) PPC_WEAK_FUNC(sub_82523A6C);
PPC_FUNC_IMPL(__imp__sub_82523A6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523A70"))) PPC_WEAK_FUNC(sub_82523A70);
PPC_FUNC_IMPL(__imp__sub_82523A70) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// addi r31,r10,31204
	r31.s64 = ctx.r10.s64 + 31204;
	// lbz r10,31244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 31244);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82523aa8
	if (cr6.eq) goto loc_82523AA8;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,31244(r11)
	PPC_STORE_U8(r11.u32 + 31244, ctx.r10.u8);
	// bl 0x82bd4bc0
	sub_82BD4BC0(ctx, base);
loc_82523AA8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82523ac0
	if (!cr6.gt) goto loc_82523AC0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82523AC0:
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

__attribute__((alias("__imp__sub_82523AD8"))) PPC_WEAK_FUNC(sub_82523AD8);
PPC_FUNC_IMPL(__imp__sub_82523AD8) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lbz r10,31244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 31244);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82523b08
	if (cr6.eq) goto loc_82523B08;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31946
	ctx.r9.s64 = -2093613056;
	// stb r10,31244(r11)
	PPC_STORE_U8(r11.u32 + 31244, ctx.r10.u8);
	// addi r3,r9,31204
	ctx.r3.s64 = ctx.r9.s64 + 31204;
	// bl 0x82bd4bc0
	sub_82BD4BC0(ctx, base);
loc_82523B08:
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

__attribute__((alias("__imp__sub_82523B20"))) PPC_WEAK_FUNC(sub_82523B20);
PPC_FUNC_IMPL(__imp__sub_82523B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,720(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82523b40
	if (cr6.eq) goto loc_82523B40;
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82523b40
	if (cr6.eq) goto loc_82523B40;
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// b 0x82dfb028
	sub_82DFB028(ctx, base);
	return;
loc_82523B40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523B48"))) PPC_WEAK_FUNC(sub_82523B48);
PPC_FUNC_IMPL(__imp__sub_82523B48) {
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
	// lwz r30,720(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// bl 0x82523a70
	sub_82523A70(ctx, base);
	// stw r3,152(r30)
	PPC_STORE_U32(r30.u32 + 152, ctx.r3.u32);
	// lwz r30,720(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// bl 0x82523ad8
	sub_82523AD8(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// stw r3,156(r30)
	PPC_STORE_U32(r30.u32 + 156, ctx.r3.u32);
	// lwz r10,720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// lwz r11,-7984(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7984);
	// stw r11,160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 160, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82523BA0"))) PPC_WEAK_FUNC(sub_82523BA0);
PPC_FUNC_IMPL(__imp__sub_82523BA0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,31239(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 31239);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82523bcc
	if (cr0.eq) goto loc_82523BCC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82523bfc
	goto loc_82523BFC;
loc_82523BCC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ee5e0
	sub_824EE5E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82523BFC:
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

__attribute__((alias("__imp__sub_82523C10"))) PPC_WEAK_FUNC(sub_82523C10);
PPC_FUNC_IMPL(__imp__sub_82523C10) {
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
	// beq 0x82523c68
	if (cr0.eq) goto loc_82523C68;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13844
	ctx.r9.s64 = r11.s64 + 13844;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82523c6c
	goto loc_82523C6C;
loc_82523C68:
	// li r11,0
	r11.s64 = 0;
loc_82523C6C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82523cb8
	if (!cr6.eq) goto loc_82523CB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82523c98
	if (cr6.eq) goto loc_82523C98;
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
loc_82523C98:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-7968(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7968);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82523CB8:
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

__attribute__((alias("__imp__sub_82523CD8"))) PPC_WEAK_FUNC(sub_82523CD8);
PPC_FUNC_IMPL(__imp__sub_82523CD8) {
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
	// beq 0x82523d30
	if (cr0.eq) goto loc_82523D30;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13864
	ctx.r9.s64 = r11.s64 + 13864;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82523d34
	goto loc_82523D34;
loc_82523D30:
	// li r11,0
	r11.s64 = 0;
loc_82523D34:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82523d68
	if (!cr6.eq) goto loc_82523D68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,-7968(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7968);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82523D68:
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

__attribute__((alias("__imp__sub_82523D88"))) PPC_WEAK_FUNC(sub_82523D88);
PPC_FUNC_IMPL(__imp__sub_82523D88) {
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
	// beq 0x82523de0
	if (cr0.eq) goto loc_82523DE0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13924
	ctx.r9.s64 = r11.s64 + 13924;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82523de4
	goto loc_82523DE4;
loc_82523DE0:
	// li r11,0
	r11.s64 = 0;
loc_82523DE4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82523e30
	if (!cr6.eq) goto loc_82523E30;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82523e10
	if (cr6.eq) goto loc_82523E10;
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
loc_82523E10:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-7968(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7968);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82523E30:
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

__attribute__((alias("__imp__sub_82523E50"))) PPC_WEAK_FUNC(sub_82523E50);
PPC_FUNC_IMPL(__imp__sub_82523E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r31,240
	ctx.r9.s64 = r31.s64 + 240;
	// stvx128 v63,r31,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,5
	ctx.r6.s64 = 5;
	// lvlx128 v63,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f2,100(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f3,104(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
loc_82523EC4:
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stfs f0,4(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f0,12(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bge 0x82523ec4
	if (!cr0.lt) goto loc_82523EC4;
	// li r11,352
	r11.s64 = 352;
	// stfs f0,340(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 340, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,336(r31)
	PPC_STORE_U8(r31.u32 + 336, ctx.r10.u8);
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824f9bd0
	sub_824F9BD0(ctx, base);
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

__attribute__((alias("__imp__sub_82523F20"))) PPC_WEAK_FUNC(sub_82523F20);
PPC_FUNC_IMPL(__imp__sub_82523F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82524018
	if (cr6.eq) goto loc_82524018;
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lbz r11,-7992(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -7992);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82524018
	if (cr0.eq) goto loc_82524018;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,29232
	r11.s64 = r11.s64 + 29232;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822d20e8
	sub_822D20E8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v62.f32), simde_mm_load_ps(v63.f32)));
	// lfs f0,-4628(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4628);
	f0.f64 = double(temp.f32);
	// vmsum3fp128 v63,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82523fd0
	if (!cr6.gt) goto loc_82523FD0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f1,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d24c8
	sub_822D24C8(ctx, base);
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x822d1f30
	sub_822D1F30(ctx, base);
	// b 0x82523ff0
	goto loc_82523FF0;
loc_82523FD0:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f1,-6772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -6772);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d2cc0
	sub_822D2CC0(ctx, base);
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// bl 0x822d1f20
	sub_822D1F20(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_82523FF0:
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x822d1f00
	sub_822D1F00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// bl 0x822d20e8
	sub_822D20E8(ctx, base);
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 696);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822d1f30
	sub_822D1F30(ctx, base);
	// b 0x82524020
	goto loc_82524020;
loc_82524018:
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82524020:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82524030"))) PPC_WEAK_FUNC(sub_82524030);
PPC_FUNC_IMPL(__imp__sub_82524030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r30,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r30,112
	ctx.r6.s64 = r30.s64 + 112;
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v63,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r7,r11
	temp.u32 = ctx.r7.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r31,112
	r11.s64 = r31.s64 + 112;
	// stvx128 v63,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,8
	ctx.r9.s64 = 8;
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lfs f0,100(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 100);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lfs f0,104(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 104);
	f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
loc_825240B4:
	// lvx128 v63,r0,r6
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x825240b4
	if (!cr0.eq) goto loc_825240B4;
	// addi r4,r30,240
	ctx.r4.s64 = r30.s64 + 240;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lbz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 336);
	// li r11,352
	r11.s64 = 352;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r10,336(r31)
	PPC_STORE_U8(r31.u32 + 336, ctx.r10.u8);
	// lfs f0,340(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 340);
	f0.f64 = double(temp.f32);
	// stfs f0,340(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 340, temp.u32);
	// lvx128 v63,r30,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,368(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 368);
	// stb r11,368(r31)
	PPC_STORE_U8(r31.u32 + 368, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524120"))) PPC_WEAK_FUNC(sub_82524120);
PPC_FUNC_IMPL(__imp__sub_82524120) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// addi r11,r31,608
	r11.s64 = r31.s64 + 608;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,-7988(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7988);
	f0.f64 = double(temp.f32);
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(v63.f32, simde_mm_sub_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v62.f32)));
	// vmsum3fp128 v63,v63,v63
	simde_mm_store_ps(v63.f32, simde_mm_dp_ps(simde_mm_load_ps(v63.f32), simde_mm_load_ps(v63.f32), 0xEF));
	// stvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8252417c
	if (!cr6.lt) goto loc_8252417C;
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,165(r11)
	PPC_STORE_U8(r11.u32 + 165, ctx.r10.u8);
	// b 0x825241b0
	goto loc_825241B0;
loc_8252417C:
	// lwz r10,720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r30,r4,352
	r30.s64 = ctx.r4.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r9,165(r10)
	PPC_STORE_U8(ctx.r10.u32 + 165, ctx.r9.u8);
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f1,340(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82523f20
	sub_82523F20(ctx, base);
	// li r11,624
	r11.s64 = 624;
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_825241B0:
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

__attribute__((alias("__imp__sub_825241C8"))) PPC_WEAK_FUNC(sub_825241C8);
PPC_FUNC_IMPL(__imp__sub_825241C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x824f9760
	sub_824F9760(ctx, base);
	// addi r28,r31,672
	r28.s64 = r31.s64 + 672;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_825241F0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82524330
	if (cr6.eq) goto loc_82524330;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82524330
	if (!cr6.lt) goto loc_82524330;
	// lwz r11,676(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 676);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x825242e4
	if (cr6.lt) goto loc_825242E4;
	// beq cr6,0x825242ac
	if (cr6.eq) goto loc_825242AC;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// blt cr6,0x82524270
	if (cr6.lt) goto loc_82524270;
	// bne cr6,0x82524324
	if (!cr6.eq) goto loc_82524324;
	// lwz r10,720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// bl 0x824f96b8
	sub_824F96B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82524268
	if (cr6.eq) goto loc_82524268;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_82524268:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82524318
	goto loc_82524318;
loc_82524270:
	// lwz r10,720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// bl 0x824f96b8
	sub_824F96B8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825242a4
	if (cr6.eq) goto loc_825242A4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
loc_825242A4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82524318
	goto loc_82524318;
loc_825242AC:
	// lwz r10,720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// bl 0x827acf00
	sub_827ACF00(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825242dc
	if (cr6.eq) goto loc_825242DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x824f90f8
	sub_824F90F8(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x824f9100
	sub_824F9100(ctx, base);
loc_825242DC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82524318
	goto loc_82524318;
loc_825242E4:
	// lwz r10,720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r10,44
	ctx.r4.s64 = ctx.r10.s64 + 44;
	// bl 0x827acf00
	sub_827ACF00(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82524314
	if (cr6.eq) goto loc_82524314;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x824f90f8
	sub_824F90F8(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x824f9100
	sub_824F9100(ctx, base);
loc_82524314:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82524318:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82524324
	if (cr6.eq) goto loc_82524324;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82524324:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// b 0x825241f0
	goto loc_825241F0;
loc_82524330:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82524338"))) PPC_WEAK_FUNC(sub_82524338);
PPC_FUNC_IMPL(__imp__sub_82524338) {
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
	// lwz r11,720(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r4,r11,44
	ctx.r4.s64 = r11.s64 + 44;
	// bl 0x824f96b8
	sub_824F96B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252436c
	if (cr6.eq) goto loc_8252436C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_8252436C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252437c
	if (cr6.eq) goto loc_8252437C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8252437C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524390"))) PPC_WEAK_FUNC(sub_82524390);
PPC_FUNC_IMPL(__imp__sub_82524390) {
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
	// lwz r11,720(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,24(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// addi r4,r11,44
	ctx.r4.s64 = r11.s64 + 44;
	// bl 0x824f96b8
	sub_824F96B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825243c4
	if (cr6.eq) goto loc_825243C4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_825243C4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825243d4
	if (cr6.eq) goto loc_825243D4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_825243D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825243E8"))) PPC_WEAK_FUNC(sub_825243E8);
PPC_FUNC_IMPL(__imp__sub_825243E8) {
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
	// lwz r11,720(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,44
	ctx.r4.s64 = r11.s64 + 44;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x824f96b8
	sub_824F96B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82524424
	if (cr6.eq) goto loc_82524424;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_82524424:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82524434
	if (cr6.eq) goto loc_82524434;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82524434:
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

__attribute__((alias("__imp__sub_82524448"))) PPC_WEAK_FUNC(sub_82524448);
PPC_FUNC_IMPL(__imp__sub_82524448) {
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
	PPCVRegister v60{};
	PPCVRegister v61{};
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x82524480
	if (!cr6.eq) goto loc_82524480;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524480:
	// bl 0x8252bc80
	sub_8252BC80(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,-7996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7996);
	f31.f64 = double(temp.f32);
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x825244b8
	if (!cr6.eq) goto loc_825244B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_825244B8:
	// bl 0x8252bb90
	sub_8252BB90(ctx, base);
	// li r28,16
	r28.s64 = 16;
	// li r29,32
	r29.s64 = 32;
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r30,48
	r30.s64 = 48;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lvlx128 v62,r28,r3
	temp.u32 = r28.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lvlx128 v61,r29,r3
	temp.u32 = r29.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r30,r3
	temp.u32 = r30.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x82524520
	if (!cr6.eq) goto loc_82524520;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524520:
	// bl 0x8252bd20
	sub_8252BD20(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvlx128 v62,r28,r11
	temp.u32 = r28.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r29,r11
	temp.u32 = r29.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r30,r11
	temp.u32 = r30.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// fsubs f13,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 - f30.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f12,f31,f30
	ctx.f12.f64 = double(float(f31.f64 * f30.f64));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r3,744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 744);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,168(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x824f8948
	sub_824F8948(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_825245B0"))) PPC_WEAK_FUNC(sub_825245B0);
PPC_FUNC_IMPL(__imp__sub_825245B0) {
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
	// lwz r11,744(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 744);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825245dc
	if (cr6.eq) goto loc_825245DC;
	// bl 0x82524448
	sub_82524448(ctx, base);
	// lwz r3,744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 744);
	// bl 0x824f8900
	sub_824F8900(ctx, base);
loc_825245DC:
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

__attribute__((alias("__imp__sub_825245F0"))) PPC_WEAK_FUNC(sub_825245F0);
PPC_FUNC_IMPL(__imp__sub_825245F0) {
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
	// b 0x8252462c
	goto loc_8252462C;
loc_82524610:
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
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
loc_8252462C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82524610
	if (!cr6.eq) goto loc_82524610;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524650"))) PPC_WEAK_FUNC(sub_82524650);
PPC_FUNC_IMPL(__imp__sub_82524650) {
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
	// b 0x8252468c
	goto loc_8252468C;
loc_82524670:
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
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
loc_8252468C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82524670
	if (!cr6.eq) goto loc_82524670;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825246B0"))) PPC_WEAK_FUNC(sub_825246B0);
PPC_FUNC_IMPL(__imp__sub_825246B0) {
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
	// beq 0x82524708
	if (cr0.eq) goto loc_82524708;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13944
	ctx.r9.s64 = r11.s64 + 13944;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8252470c
	goto loc_8252470C;
loc_82524708:
	// li r11,0
	r11.s64 = 0;
loc_8252470C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82524750
	if (!cr6.eq) goto loc_82524750;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82524730
	if (cr6.eq) goto loc_82524730;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82501c70
	sub_82501C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82524730:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-7968(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7968);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82524750:
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

__attribute__((alias("__imp__sub_82524770"))) PPC_WEAK_FUNC(sub_82524770);
PPC_FUNC_IMPL(__imp__sub_82524770) {
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
	// beq 0x825247c8
	if (cr0.eq) goto loc_825247C8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13964
	ctx.r9.s64 = r11.s64 + 13964;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x825247cc
	goto loc_825247CC;
loc_825247C8:
	// li r11,0
	r11.s64 = 0;
loc_825247CC:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82524810
	if (!cr6.eq) goto loc_82524810;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825247f0
	if (cr6.eq) goto loc_825247F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe368
	sub_824FE368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_825247F0:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-7968(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7968);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_82524810:
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

__attribute__((alias("__imp__sub_82524830"))) PPC_WEAK_FUNC(sub_82524830);
PPC_FUNC_IMPL(__imp__sub_82524830) {
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
	// beq 0x82524888
	if (cr0.eq) goto loc_82524888;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,13984
	ctx.r9.s64 = r11.s64 + 13984;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8252488c
	goto loc_8252488C;
loc_82524888:
	// li r11,0
	r11.s64 = 0;
loc_8252488C:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825248d0
	if (!cr6.eq) goto loc_825248D0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825248b0
	if (cr6.eq) goto loc_825248B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7c90
	sub_824F7C90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_825248B0:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,2108
	ctx.r10.s64 = ctx.r10.s64 + 2108;
	// lwz r11,-7968(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -7968);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x822c0000
	sub_822C0000(ctx, base);
loc_825248D0:
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

__attribute__((alias("__imp__sub_825248F0"))) PPC_WEAK_FUNC(sub_825248F0);
PPC_FUNC_IMPL(__imp__sub_825248F0) {
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
	// beq cr6,0x8252491c
	if (cr6.eq) goto loc_8252491C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82501c70
	sub_82501C70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8252491C:
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

__attribute__((alias("__imp__sub_82524930"))) PPC_WEAK_FUNC(sub_82524930);
PPC_FUNC_IMPL(__imp__sub_82524930) {
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
	// beq cr6,0x8252495c
	if (cr6.eq) goto loc_8252495C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824fe368
	sub_824FE368(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8252495C:
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

__attribute__((alias("__imp__sub_82524970"))) PPC_WEAK_FUNC(sub_82524970);
PPC_FUNC_IMPL(__imp__sub_82524970) {
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
	// beq cr6,0x8252499c
	if (cr6.eq) goto loc_8252499C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7c90
	sub_824F7C90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8252499C:
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

__attribute__((alias("__imp__sub_825249B0"))) PPC_WEAK_FUNC(sub_825249B0);
PPC_FUNC_IMPL(__imp__sub_825249B0) {
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
	// beq cr6,0x825249dc
	if (cr6.eq) goto loc_825249DC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82523460
	sub_82523460(ctx, base);
	// b 0x825249e8
	goto loc_825249E8;
loc_825249DC:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r11,r11,-7320
	r11.s64 = r11.s64 + -7320;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_825249E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825249F8"))) PPC_WEAK_FUNC(sub_825249F8);
PPC_FUNC_IMPL(__imp__sub_825249F8) {
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
	// beq cr6,0x82524a24
	if (cr6.eq) goto loc_82524A24;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x825234e8
	sub_825234E8(ctx, base);
	// b 0x82524a30
	goto loc_82524A30;
loc_82524A24:
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r11,r11,-7144
	r11.s64 = r11.s64 + -7144;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_82524A30:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82524A40"))) PPC_WEAK_FUNC(sub_82524A40);
PPC_FUNC_IMPL(__imp__sub_82524A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(r11.u32 + 168, ctx.r10.u32);
	// lwz r11,688(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 688);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82524ab8
	if (cr6.eq) goto loc_82524AB8;
	// lwz r10,720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lvx128 v63,r0,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
loc_82524AB8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,688(r31)
	PPC_STORE_U32(r31.u32 + 688, r11.u32);
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 692);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,692(r31)
	PPC_STORE_U32(r31.u32 + 692, r11.u32);
	// beq cr6,0x82524ad4
	if (cr6.eq) goto loc_82524AD4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82524AD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82523b48
	sub_82523B48(ctx, base);
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

__attribute__((alias("__imp__sub_82524AF0"))) PPC_WEAK_FUNC(sub_82524AF0);
PPC_FUNC_IMPL(__imp__sub_82524AF0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82524b20
	if (!cr6.eq) goto loc_82524B20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524B20:
	// bl 0x8250c0b8
	sub_8250C0B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x822e8f48
	sub_822E8F48(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r31,r30,196
	r31.s64 = r30.s64 + 196;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfafc0
	sub_82DFAFC0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82524bb8
	if (cr0.eq) goto loc_82524BB8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822e90d0
	sub_822E90D0(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82524ba8
	if (cr6.eq) goto loc_82524BA8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r5,r30,40
	ctx.r5.s64 = r30.s64 + 40;
	// bne cr6,0x82524ba0
	if (!cr6.eq) goto loc_82524BA0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82524BA0:
	// addi r4,r30,200
	ctx.r4.s64 = r30.s64 + 200;
	// bl 0x822f1118
	sub_822F1118(ctx, base);
loc_82524BA8:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82524bb8
	if (cr6.eq) goto loc_82524BB8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82524BB8:
	// lwz r28,208(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// lwz r29,204(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// b 0x82524cb8
	goto loc_82524CB8;
loc_82524BC4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82b16998
	sub_82B16998(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82524c8c
	if (cr6.eq) goto loc_82524C8C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// bne cr6,0x82524bfc
	if (!cr6.eq) goto loc_82524BFC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524BFC:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82524c38
	if (cr6.eq) goto loc_82524C38;
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
loc_82524C18:
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
	// bne 0x82524c18
	if (!cr0.eq) goto loc_82524C18;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82524C38:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x82524c48
	if (!cr6.eq) goto loc_82524C48;
	// li r31,0
	r31.s64 = 0;
loc_82524C48:
	// bl 0x8250c0b8
	sub_8250C0B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r26,r1,80
	r26.s64 = ctx.r1.s64 + 80;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82510828
	sub_82510828(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// b 0x82524ca4
	goto loc_82524CA4;
loc_82524C8C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x822ef9a8
	sub_822EF9A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825146a8
	sub_825146A8(ctx, base);
loc_82524CA4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82524cb4
	if (cr6.eq) goto loc_82524CB4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82524CB4:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
loc_82524CB8:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x82524bc4
	if (!cr6.eq) goto loc_82524BC4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e8f60
	sub_822E8F60(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82524CD0"))) PPC_WEAK_FUNC(sub_82524CD0);
PPC_FUNC_IMPL(__imp__sub_82524CD0) {
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
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r11,31238
	r29.s64 = r11.s64 + 31238;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,-2(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + -2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82524d20
	if (!cr6.eq) goto loc_82524D20;
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82524030
	sub_82524030(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,-7996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824f9bd0
	sub_824F9BD0(ctx, base);
	// b 0x82524ec8
	goto loc_82524EC8;
loc_82524D20:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x82524d40
	if (!cr6.eq) goto loc_82524D40;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524D40:
	// bl 0x8252bbe0
	sub_8252BBE0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x82524d7c
	if (!cr6.eq) goto loc_82524D7C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524D7C:
	// bl 0x8252bc30
	sub_8252BC30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x82524db8
	if (!cr6.eq) goto loc_82524DB8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524DB8:
	// bl 0x8252bb90
	sub_8252BB90(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r10,r11
	temp.u32 = ctx.r10.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lvlx128 v61,r9,r11
	temp.u32 = ctx.r9.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvlx128 v60,r8,r11
	temp.u32 = ctx.r8.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v63,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82512d38
	sub_82512D38(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-148
	ctx.r3.s64 = r11.s64 + -148;
	// bne cr6,0x82524e24
	if (!cr6.eq) goto loc_82524E24;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524E24:
	// bl 0x8252b980
	sub_8252B980(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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
	// bne cr6,0x82524e54
	if (!cr6.eq) goto loc_82524E54;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524E54:
	// bl 0x8252bcd0
	sub_8252BCD0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r5,r31,624
	ctx.r5.s64 = r31.s64 + 624;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lfs f3,-7996(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7996);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82523e50
	sub_82523E50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82524030
	sub_82524030(ctx, base);
	// lwz r11,2(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,340(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 340, temp.u32);
	// bl 0x82524120
	sub_82524120(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82524030
	sub_82524030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82524448
	sub_82524448(ctx, base);
loc_82524EC8:
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lbz r11,-2(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + -2);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lbz r9,31252(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 31252);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82524f3c
	if (cr6.eq) goto loc_82524F3C;
	// stb r11,31252(r10)
	PPC_STORE_U8(ctx.r10.u32 + 31252, r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82512ce8
	sub_82512CE8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bne cr6,0x82524f04
	if (!cr6.eq) goto loc_82524F04;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82524F04:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8250e4e8
	sub_8250E4E8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-192
	ctx.r3.s64 = r11.s64 + -192;
	// bne cr6,0x82524f20
	if (!cr6.eq) goto loc_82524F20;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82524F20:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lbz r4,-2(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + -2);
	// bl 0x8251e4d0
	sub_8251E4D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
loc_82524F3C:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// stb r11,336(r30)
	PPC_STORE_U8(r30.u32 + 336, r11.u8);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82524F58"))) PPC_WEAK_FUNC(sub_82524F58);
PPC_FUNC_IMPL(__imp__sub_82524F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r15,0
	r15.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// lis r18,-32238
	r18.s64 = -2112749568;
	// lwz r11,720(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 720);
	// addi r14,r11,8
	r14.s64 = r11.s64 + 8;
loc_82524F7C:
	// lwz r21,4(r14)
	r21.u64 = PPC_LOAD_U32(r14.u32 + 4);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82525198
	if (cr6.eq) goto loc_82525198;
	// lwz r11,8(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 8);
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r15,r11
	cr6.compare<uint32_t>(r15.u32, r11.u32, xer);
	// bge cr6,0x82525198
	if (!cr6.lt) goto loc_82525198;
	// lwzx r11,r19,r21
	r11.u64 = PPC_LOAD_U32(r19.u32 + r21.u32);
	// li r17,0
	r17.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// addi r16,r11,12
	r16.s64 = r11.s64 + 12;
loc_82524FAC:
	// lwz r26,4(r16)
	r26.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8252518c
	if (cr6.eq) goto loc_8252518C;
	// lwz r11,8(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 8);
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// cmplw cr6,r17,r11
	cr6.compare<uint32_t>(r17.u32, r11.u32, xer);
	// bge cr6,0x8252518c
	if (!cr6.lt) goto loc_8252518C;
	// lwzx r11,r24,r26
	r11.u64 = PPC_LOAD_U32(r24.u32 + r26.u32);
	// li r20,0
	r20.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// addi r25,r11,44
	r25.s64 = r11.s64 + 44;
loc_82524FE0:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82525180
	if (cr6.eq) goto loc_82525180;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// bge cr6,0x82525180
	if (!cr6.lt) goto loc_82525180;
	// addi r27,r29,640
	r27.s64 = r29.s64 + 640;
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_8252500C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825250dc
	if (cr6.eq) goto loc_825250DC;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// li r9,36
	ctx.r9.s64 = 36;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x825250dc
	if (!cr6.lt) goto loc_825250DC;
	// lwz r11,644(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 644);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// add r3,r23,r10
	ctx.r3.u64 = r23.u64 + ctx.r10.u64;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// bl 0x82dfbd68
	sub_82DFBD68(ctx, base);
	// lwz r11,-15664(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + -15664);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82525060
	if (!cr6.eq) goto loc_82525060;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// b 0x8252500c
	goto loc_8252500C;
loc_82525060:
	// lwz r11,720(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 720);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r4,r11,44
	ctx.r4.s64 = r11.s64 + 44;
	// bl 0x824f9a58
	sub_824F9A58(ctx, base);
	// lwzx r11,r24,r26
	r11.u64 = PPC_LOAD_U32(r24.u32 + r26.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwzx r11,r24,r26
	r11.u64 = PPC_LOAD_U32(r24.u32 + r26.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,100
	r11.s64 = r11.s64 + 100;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwzx r11,r19,r21
	r11.u64 = PPC_LOAD_U32(r19.u32 + r21.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,68
	r11.s64 = r11.s64 + 68;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825250dc
	if (cr6.eq) goto loc_825250DC;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_825250DC:
	// addi r27,r29,656
	r27.s64 = r29.s64 + 656;
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_825250E8:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82525170
	if (cr6.eq) goto loc_82525170;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// li r9,36
	ctx.r9.s64 = 36;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82525170
	if (!cr6.lt) goto loc_82525170;
	// lwz r10,660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 660);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// add r31,r10,r30
	r31.u64 = ctx.r10.u64 + r30.u64;
	// add r3,r23,r11
	ctx.r3.u64 = r23.u64 + r11.u64;
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// bl 0x82dfbd68
	sub_82DFBD68(ctx, base);
	// lwz r11,-15664(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + -15664);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x8252513c
	if (!cr6.eq) goto loc_8252513C;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// b 0x825250e8
	goto loc_825250E8;
loc_8252513C:
	// lwz r11,720(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 720);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r4,r11,44
	ctx.r4.s64 = r11.s64 + 44;
	// bl 0x824f9988
	sub_824F9988(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// lwz r3,728(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 728);
	// bl 0x824ffc40
	sub_824FFC40(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82525170
	if (cr6.eq) goto loc_82525170;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82525170:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r22,r22,8
	r22.s64 = r22.s64 + 8;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// b 0x82524fe0
	goto loc_82524FE0;
loc_82525180:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r24,r24,8
	r24.s64 = r24.s64 + 8;
	// b 0x82524fac
	goto loc_82524FAC;
loc_8252518C:
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r19,r19,8
	r19.s64 = r19.s64 + 8;
	// b 0x82524f7c
	goto loc_82524F7C;
loc_82525198:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825241c8
	sub_825241C8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_825251A8"))) PPC_WEAK_FUNC(sub_825251A8);
PPC_FUNC_IMPL(__imp__sub_825251A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14036
	ctx.r4.s64 = r11.s64 + 14036;
	// li r5,1257
	ctx.r5.s64 = 1257;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825251e8
	if (cr0.eq) goto loc_825251E8;
	// bl 0x824f9110
	sub_824F9110(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825251ec
	goto loc_825251EC;
loc_825251E8:
	// li r30,0
	r30.s64 = 0;
loc_825251EC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82523cd8
	sub_82523CD8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// addi r10,r29,688
	ctx.r10.s64 = r29.s64 + 688;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r10,25(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stw r11,688(r29)
	PPC_STORE_U32(r29.u32 + 688, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82525264
	if (cr6.eq) goto loc_82525264;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82525264:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82525270"))) PPC_WEAK_FUNC(sub_82525270);
PPC_FUNC_IMPL(__imp__sub_82525270) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,14036
	ctx.r4.s64 = r11.s64 + 14036;
	// li r5,1268
	ctx.r5.s64 = 1268;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822c0390
	sub_822C0390(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825252b0
	if (cr0.eq) goto loc_825252B0;
	// bl 0x824f9110
	sub_824F9110(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825252b4
	goto loc_825252B4;
loc_825252B0:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_825252B4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82523cd8
	sub_82523CD8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r30,688
	ctx.r10.s64 = r30.s64 + 688;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// stb r29,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r29.u8);
	// stw r11,688(r30)
	PPC_STORE_U32(r30.u32 + 688, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82525304
	if (cr6.eq) goto loc_82525304;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82525304:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82525310"))) PPC_WEAK_FUNC(sub_82525310);
PPC_FUNC_IMPL(__imp__sub_82525310) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r11,31239(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 31239);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82525388
	if (cr0.eq) goto loc_82525388;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,14144
	ctx.r4.s64 = r11.s64 + 14144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r10,14128
	r30.s64 = ctx.r10.s64 + 14128;
	// bl 0x82dfb9c0
	sub_82DFB9C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_82525368:
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e0f628
	sub_82E0F628(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// b 0x82525454
	goto loc_82525454;
loc_82525388:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ee5e0
	sub_824EE5E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x82525448
	if (cr6.lt) goto loc_82525448;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,14116
	ctx.r4.s64 = r11.s64 + 14116;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r10,14100
	r30.s64 = ctx.r10.s64 + 14100;
	// bl 0x82dfb9c0
	sub_82DFB9C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82dfba18
	sub_82DFBA18(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r4,r11,16072
	ctx.r4.s64 = r11.s64 + 16072;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,7616
	r11.s64 = r11.s64 + 7616;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82dfb9c0
	sub_82DFB9C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82dfb960
	sub_82DFB960(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb8f0
	sub_82DFB8F0(ctx, base);
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
	// b 0x82525368
	goto loc_82525368;
loc_82525448:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82525454:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82525460"))) PPC_WEAK_FUNC(sub_82525460);
PPC_FUNC_IMPL(__imp__sub_82525460) {
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
	// bl 0x82517f38
	sub_82517F38(ctx, base);
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
	// beq cr6,0x825254b8
	if (cr6.eq) goto loc_825254B8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_825254B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825254D0"))) PPC_WEAK_FUNC(sub_825254D0);
PPC_FUNC_IMPL(__imp__sub_825254D0) {
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
	// bl 0x82523d88
	sub_82523D88(ctx, base);
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
	// beq cr6,0x82525528
	if (cr6.eq) goto loc_82525528;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82525528:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82525540"))) PPC_WEAK_FUNC(sub_82525540);
PPC_FUNC_IMPL(__imp__sub_82525540) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8252556c
	if (cr6.eq) goto loc_8252556C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8252556C:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8252557c
	if (cr0.eq) goto loc_8252557C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_8252557C:
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

__attribute__((alias("__imp__sub_82525598"))) PPC_WEAK_FUNC(sub_82525598);
PPC_FUNC_IMPL(__imp__sub_82525598) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,30992
	ctx.r4.s64 = r11.s64 + 30992;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r4,r11,30984
	ctx.r4.s64 = r11.s64 + 30984;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// addi r30,r11,-8484
	r30.s64 = r11.s64 + -8484;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r28,r11,-8492
	r28.s64 = r11.s64 + -8492;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825ce300
	sub_825CE300(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x825cfc40
	sub_825CFC40(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8252562c
	if (cr6.eq) goto loc_8252562C;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_8252562C:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825ce300
	sub_825CE300(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r26,0(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82525690
	if (cr6.eq) goto loc_82525690;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82525690:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14764
	ctx.r4.s64 = r11.s64 + 14764;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14748
	ctx.r4.s64 = r11.s64 + 14748;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-31959
	r11.s64 = -2094465024;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r30,r11,-7996
	r30.s64 = r11.s64 + -7996;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f3,26548(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26548);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f2,14744(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14744);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,3392(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3392);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b2d50
	sub_825B2D50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a69e8
	sub_825A69E8(ctx, base);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x8241f1a0
	sub_8241F1A0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14732
	ctx.r4.s64 = r11.s64 + 14732;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14712
	ctx.r4.s64 = r11.s64 + 14712;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r28,r11,31239
	r28.s64 = r11.s64 + 31239;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r5,r28,-3
	ctx.r5.s64 = r28.s64 + -3;
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
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14696
	ctx.r4.s64 = r11.s64 + 14696;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14676
	ctx.r4.s64 = r11.s64 + 14676;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r28,-2
	ctx.r5.s64 = r28.s64 + -2;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14648
	ctx.r4.s64 = r11.s64 + 14648;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14632
	ctx.r4.s64 = r11.s64 + 14632;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14604
	ctx.r4.s64 = r11.s64 + 14604;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14584
	ctx.r4.s64 = r11.s64 + 14584;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r5,r28,1
	ctx.r5.s64 = r28.s64 + 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// lfs f3,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-21696(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21696);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,14580(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14580);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b2d50
	sub_825B2D50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a69e8
	sub_825A69E8(ctx, base);
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14560
	ctx.r4.s64 = r11.s64 + 14560;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14536
	ctx.r4.s64 = r11.s64 + 14536;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r5,r30,8
	ctx.r5.s64 = r30.s64 + 8;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lfs f3,-24412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24412);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f2,27976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27976);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b2d50
	sub_825B2D50(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a69e8
	sub_825A69E8(ctx, base);
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,632
	ctx.r3.s64 = ctx.r1.s64 + 632;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14516
	ctx.r4.s64 = r11.s64 + 14516;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14500
	ctx.r4.s64 = r11.s64 + 14500;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
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
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14476
	ctx.r4.s64 = r11.s64 + 14476;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14456
	ctx.r4.s64 = r11.s64 + 14456;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,15
	r11.s64 = 983040;
	// lis r7,7812
	ctx.r7.s64 = 511967232;
	// ori r27,r11,16960
	r27.u64 = r11.u64 | 16960;
	// lis r6,-7813
	ctx.r6.s64 = -512032768;
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6d80
	sub_825A6D80(ctx, base);
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,504
	ctx.r3.s64 = ctx.r1.s64 + 504;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14432
	ctx.r4.s64 = r11.s64 + 14432;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14408
	ctx.r4.s64 = r11.s64 + 14408;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,5
	ctx.r5.s64 = r30.s64 + 5;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
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
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14372
	ctx.r4.s64 = r11.s64 + 14372;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14336
	ctx.r4.s64 = r11.s64 + 14336;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r7,7629
	ctx.r7.s64 = 499974144;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// ori r7,r7,25856
	ctx.r7.u64 = ctx.r7.u64 | 25856;
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6d80
	sub_825A6D80(ctx, base);
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14304
	ctx.r4.s64 = r11.s64 + 14304;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14272
	ctx.r4.s64 = r11.s64 + 14272;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r7,7629
	ctx.r7.s64 = 499974144;
	// addi r5,r30,20
	ctx.r5.s64 = r30.s64 + 20;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// ori r7,r7,25856
	ctx.r7.u64 = ctx.r7.u64 | 25856;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6d80
	sub_825A6D80(ctx, base);
	// addi r3,r1,728
	ctx.r3.s64 = ctx.r1.s64 + 728;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14228
	ctx.r4.s64 = r11.s64 + 14228;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14200
	ctx.r4.s64 = r11.s64 + 14200;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
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
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,14172
	ctx.r4.s64 = r11.s64 + 14172;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,14156
	ctx.r4.s64 = r11.s64 + 14156;
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r5,r30,24
	ctx.r5.s64 = r30.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x825a87b8
	sub_825A87B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a6d80
	sub_825A6D80(ctx, base);
	// addi r3,r1,856
	ctx.r3.s64 = ctx.r1.s64 + 856;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// addi r3,r1,824
	ctx.r3.s64 = ctx.r1.s64 + 824;
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
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825cf410
	sub_825CF410(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82501250
	sub_82501250(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824fac38
	sub_824FAC38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f8450
	sub_824F8450(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251e8e0
	sub_8251E8E0(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82525C50"))) PPC_WEAK_FUNC(sub_82525C50);
PPC_FUNC_IMPL(__imp__sub_82525C50) {
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
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31946
	r28.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,31244(r28)
	PPC_STORE_U8(r28.u32 + 31244, r11.u8);
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82525e18
	if (cr6.eq) goto loc_82525E18;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82525e18
	if (cr6.eq) goto loc_82525E18;
	// bl 0x82524a40
	sub_82524A40(ctx, base);
	// lis r29,-31959
	r29.s64 = -2094465024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5796(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -5796);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// bne 0x82525ccc
	if (!cr0.eq) goto loc_82525CCC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82525CCC:
	// stb r10,164(r11)
	PPC_STORE_U8(r11.u32 + 164, ctx.r10.u8);
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82525d34
	if (cr6.eq) goto loc_82525D34;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec7e0
	sub_824EC7E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// lwz r3,728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 728);
	// addi r4,r11,144
	ctx.r4.s64 = r11.s64 + 144;
	// bl 0x82502a50
	sub_82502A50(ctx, base);
	// lwz r11,720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 720);
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 736);
	// addi r4,r11,144
	ctx.r4.s64 = r11.s64 + 144;
	// bl 0x824fdb40
	sub_824FDB40(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec828
	sub_824EC828(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// b 0x82525e18
	goto loc_82525E18;
loc_82525D34:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r1,376
	r11.s64 = ctx.r1.s64 + 376;
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
loc_82525D44:
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bge 0x82525d44
	if (!cr0.lt) goto loc_82525D44;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82524cd0
	sub_82524CD0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-5796(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -5796);
	// bl 0x82dfb728
	sub_82DFB728(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82dfb028
	sub_82DFB028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, r11.u8);
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec7e0
	sub_824EC7E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 728);
	// bl 0x82502c38
	sub_82502C38(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 736);
	// bl 0x824ff3a0
	sub_824FF3A0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x824ed808
	sub_824ED808(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824ec828
	sub_824EC828(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82df9958
	sub_82DF9958(ctx, base);
	// lwz r3,744(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 744);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82525e08
	if (cr6.eq) goto loc_82525E08;
	// lbz r11,496(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 496);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82525e08
	if (!cr0.eq) goto loc_82525E08;
	// bl 0x824f8900
	sub_824F8900(ctx, base);
loc_82525E08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82523718
	sub_82523718(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,31244(r28)
	PPC_STORE_U8(r28.u32 + 31244, r11.u8);
loc_82525E18:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831b0b74
	return;
}

